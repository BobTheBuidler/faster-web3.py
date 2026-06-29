#!/bin/bash

set -euo pipefail

repo_dir="$(pwd)"
wheel_path="$(find "$repo_dir/dist" -name 'faster_web3-*.whl' -print -quit)"

if [ -z "$wheel_path" ]; then
    echo "No faster_web3 wheel found in $repo_dir/dist" >&2
    exit 1
fi

temp_dir="$(mktemp -d)"
python -m venv "$temp_dir/venv-test"
source "$temp_dir/venv-test/bin/activate"
python -m pip install --upgrade pip
python -m pip install --upgrade "$wheel_path"
python - <<'PY'
from faster_web3 import Web3
import faster_web3._utils.method_formatters as method_formatters

compiled_path = method_formatters.__file__
assert compiled_path.endswith((".so", ".pyd")), compiled_path
print(Web3)
print(compiled_path)
PY
