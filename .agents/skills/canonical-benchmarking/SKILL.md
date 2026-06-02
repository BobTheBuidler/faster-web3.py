---
name: canonical-benchmarking
description: Use when adding, reviewing, rebasing, or realigning benchmark PRs in this repo, especially benchmark suites comparing web3/ens against faster_web3/faster_ens.
---

# Canonical Benchmarking

Use this skill for benchmark work in `faster-web3.py`.

## Benchmark Shape

- Benchmark PRs that add coverage use `feat(benchmark): ...`.
- Broken benchmark fixtures use `fix(benchmark): ...`.
- Benchmark workflow changes use `fix(cicd): ...`.
- PR descriptions must include `Summary`, `Rationale`, and `Details`.
- Keep benchmark pairs symmetric: one reference `test_...` and one optimized `test_faster_...` in the same `@pytest.mark.benchmark(group=...)`.
- Import benchmark reference dependencies directly. Do not hide missing benchmark dependencies with `try/except ImportError`.
- Use shared helpers from `benchmarks.batching`: `run_10`, `run_100`, `run_500`, `run_1000`, `run_5000`, `run_10000`, async variants, and exception variants.
- Do not add local `run_N` helpers. The named helpers intentionally preserve fixed wrapper shapes for CodSpeed/pytest-benchmark.

## Mock Boundary

- Do not mock `web3`, `ens`, `faster_web3`, or `faster_ens` objects being benchmarked.
- Do not replace user-facing objects with `FakeWeb3`, `FakeEth`, fake providers, fake contracts, fake contract functions, fake events, fake managers, fake request processors, or fake subscriptions.
- Use real `Web3`, `AsyncWeb3`, providers, ENS objects, contract factories, contract functions/events, request processors, subscription managers, and subscription objects whenever those are part of the measured path.
- Mock only external edges: HTTP transport, aiohttp transport, websocket/socket send/recv, JSON-RPC server responses, or an external eth-tester backend/service boundary.
- External-edge fixtures should return realistic raw protocol values, not already-formatted Python objects.

## Fixture Data

- Raw JSON-RPC provider results use hex quantity strings for quantity fields and hex strings for call/code/data results.
- Pythonic formatter inputs may use raw JSON-RPC values when the benchmark target is a result formatter.
- Post-formatter Python fixtures keep Python values: `int` quantities, `HexBytes` where appropriate, and normal Python containers.
- Keep raw and Pythonic fixtures explicitly named so a benchmark cannot accidentally use the wrong layer.

## Hygiene And Validation

- Do not commit `build/`, benchmark JSON output, or accidental `benchmarks/results/*` churn.
- If branch work starts from a remote branch, fetch and update from the remote before editing.
- After local `pip install .`, remove generated `build/` before closing the worktree.
- Run relevant benchmark validation:

```sh
python3 -m compileall -q benchmarks
python3 -m pytest --collect-only <changed benchmark path>
python3 -m pytest --benchmark-disable <changed benchmark path>
python3 -m pytest --benchmark-only <changed benchmark path>
```

- For fixture/helper changes, also run collection and benchmark-disabled smoke over all `benchmarks/`.
- For compiled-wheel confidence, install the built wheel with `requirements-benchmark.txt`, remove source packages from the import path, and confirm `faster_web3` and `faster_ens` import from installed artifacts.
