#!/bin/bash

set -euo pipefail

python --version

repo_dir="$(pwd)"

find_wheel() {
    if [ ! -d "$repo_dir/dist" ]; then
        return 0
    fi

    find "$repo_dir/dist" -name 'faster_web3-*.whl' -print -quit
}

wheel_path="$(find_wheel)"

# GitHub Actions downloads the mypycified wheel into dist before tox runs, while
# CircleCI starts from a checkout with no wheel artifact, so only build locally
# when the artifact branch is not available.
if [ -z "$wheel_path" ]; then
    python -m build --wheel
    wheel_path="$(find_wheel)"
fi

if [ -z "$wheel_path" ]; then
    echo "No faster_web3 wheel found in $repo_dir/dist" >&2
    exit 1
fi

temp_dir="$(mktemp -d)"
python -m venv "$temp_dir/venv-test"
source "$temp_dir/venv-test/Scripts/activate"
python -m pip install --upgrade pip
python -m pip install --upgrade "$wheel_path" --progress-bar off
cd "$temp_dir"
python - <<'PY'
from pathlib import Path

from faster_web3 import Web3
import faster_web3._utils.contract_sources as contract_sources
import faster_web3._utils.contract_sources.contract_data as contract_data
import faster_web3._utils.contract_sources.contract_data.emitter_contract as emitter_contract
import faster_web3._utils.method_formatters as method_formatters

for compiled_module in (
    method_formatters,
    contract_sources,
    contract_data,
    emitter_contract,
):
    compiled_path = compiled_module.__file__
    assert compiled_path.endswith(".pyd"), compiled_path
    if hasattr(compiled_module, "__path__"):
        assert list(compiled_module.__path__) == [str(Path(compiled_path).parent)]
    print(compiled_path)

print(Web3)
PY
