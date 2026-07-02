#!/usr/bin/env python
import argparse
import importlib
import importlib.machinery
import pathlib
import sys


DEFAULT_PACKAGES = ("faster_web3", "faster_ens")
DEFAULT_COMPILED_MODULES = ("faster_web3._utils.method_formatters",)


def _resolve_path_entry(path_entry: str) -> pathlib.Path:
    if path_entry:
        return pathlib.Path(path_entry).resolve(strict=False)
    return pathlib.Path.cwd().resolve(strict=False)


def _remove_repo_root_from_sys_path(repo_root: pathlib.Path) -> None:
    sys.path[:] = [
        path_entry
        for path_entry in sys.path
        if _resolve_path_entry(path_entry) != repo_root
    ]


def _module_path(module_name: str) -> pathlib.Path:
    module = importlib.import_module(module_name)
    module_file = getattr(module, "__file__", None)
    if module_file is None:
        raise RuntimeError(f"{module_name} has no __file__; cannot verify import path")
    return pathlib.Path(module_file).resolve(strict=False)


def _is_relative_to(path: pathlib.Path, parent: pathlib.Path) -> bool:
    try:
        path.relative_to(parent)
    except ValueError:
        return False
    return True


def _source_root(module_name: str, repo_root: pathlib.Path) -> pathlib.Path:
    return repo_root / module_name.split(".", 1)[0]


def _assert_installed(module_name: str, repo_root: pathlib.Path) -> pathlib.Path:
    module_path = _module_path(module_name)
    if _is_relative_to(module_path, _source_root(module_name, repo_root)):
        raise RuntimeError(
            f"{module_name} imported from source checkout at {module_path}; "
            "expected the installed wheel"
        )
    return module_path


def _assert_compiled(module_name: str, repo_root: pathlib.Path) -> None:
    module_path = _assert_installed(module_name, repo_root)
    if not any(
        str(module_path).endswith(suffix)
        for suffix in importlib.machinery.EXTENSION_SUFFIXES
    ):
        raise RuntimeError(
            f"{module_name} imported from {module_path}; expected a compiled extension"
        )


def _parse_args(argv: list[str]) -> argparse.Namespace:
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo-root", required=True)
    parser.add_argument("--package", action="append", dest="packages")
    parser.add_argument(
        "--compiled-module",
        action="append",
        dest="compiled_modules",
    )
    parser.add_argument("pytest_args", nargs=argparse.REMAINDER)
    args = parser.parse_args(argv)
    if args.pytest_args[:1] == ["--"]:
        args.pytest_args = args.pytest_args[1:]
    if not args.pytest_args:
        parser.error("pytest arguments are required after --")
    return args


def main(argv: list[str] | None = None) -> int:
    args = _parse_args(sys.argv[1:] if argv is None else argv)
    repo_root = pathlib.Path(args.repo_root).resolve(strict=False)

    _remove_repo_root_from_sys_path(repo_root)

    for package in args.packages or DEFAULT_PACKAGES:
        _assert_installed(package, repo_root)

    for module_name in args.compiled_modules or DEFAULT_COMPILED_MODULES:
        _assert_compiled(module_name, repo_root)

    sys.path.append(str(repo_root))

    import pytest

    return pytest.main(["--import-mode=importlib", *args.pytest_args])


if __name__ == "__main__":
    raise SystemExit(main())
