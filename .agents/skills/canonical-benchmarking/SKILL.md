______________________________________________________________________

## name: canonical-benchmarking description: Use when adding, reviewing, rebasing, or realigning microbenchmark-grade benchmark PRs in this repo, especially benchmark suites comparing reference libraries against faster implementations.

# Canonical Benchmarking

Use this skill for benchmark work in `faster-web3.py`. Benchmarks in this repo
must be microbenchmark-grade. That means the measured callable stays as small as
the real user/library path allows, and the benchmark preserves the established
input surface of the API being measured. Runtime pressure is handled by choosing
appropriate fixed-count helpers or redesigning benchmark structure, not by
reducing canonical inputs.

## Benchmark Shape

- Benchmark PRs that add coverage use `feat(benchmark): ...`.
- Broken benchmark fixtures use `fix(benchmark): ...`.
- Benchmark workflow changes use `fix(cicd): ...`.
- PR descriptions must include `Summary`, `Rationale`, and `Details`.
- Keep benchmark pairs symmetric: one reference `test_...` and one optimized
  `test_faster_...` in the same `@pytest.mark.benchmark(group=...)`, with the
  same operation and inputs.
- Treat shared parametrizers and fixtures as part of the benchmark contract. New
  variants of an existing public API benchmark preserve the suite's meaningful
  input matrix unless the API surface differs.
- Import benchmark reference dependencies directly. Do not hide missing benchmark dependencies with `try/except ImportError`.
- Use shared benchmark structure: shared parametrizers/fixtures for established
  input matrices, and shared helpers from `benchmarks.batching`: fixed literal
  `run_N`, async, and exception variants.
- Do not add local batching helpers or local ad hoc parameter lists that replace
  established shared fixtures.

## Timed Path Purity

- The callable passed to `benchmark(...)` must do only the operation being
  measured.
- Setup belongs before `benchmark(...)`: Web3/ENS/provider/contract/subscription
  construction, patch context creation, cache seeding, response queue setup,
  block maps, ABI-encoded values, JSON bytes, expected exceptions, and ids.
- Do not put fixture work in hot-path helpers: no cache clearing, object
  construction, listener/task startup, state seeding, response construction,
  JSON parsing/serialization, ABI encoding/decoding, selector derivation,
  assertions, `time()`, or fake server computation.
- Fake edge responders must return precomputed response objects/bytes by
  constant lookup, simple queue pop, or direct static return.
- If different RPC results are needed, precompute the response map/queue outside
  timing.
- Exception benchmarks must use `run_N_exc`; do not catch-and-ignore exceptions
  inside custom benchmark helpers.
- If purity cannot be achieved for a path, drop or redesign the benchmark
  instead of measuring polluted work. If established input coverage is
  expensive, use a smaller fixed helper or redesign the benchmark; do not
  replace it with a single happy-path input for runtime convenience.

## Mock Boundary

- Do not mock `web3`, `ens`, `faster_web3`, or `faster_ens` objects being benchmarked.
- Do not replace user-facing objects with `FakeWeb3`, `FakeEth`, fake providers, fake contracts, fake contract functions, fake events, fake managers, fake request processors, or fake subscriptions.
- Use real `Web3`, `AsyncWeb3`, providers, ENS objects, contract
  factories/functions/events, request processors, subscription managers, and
  subscription objects whenever those are part of the measured path.
- Mock only external edges:
  - sync HTTP: `requests.Session.post`;
  - async HTTP: `aiohttp.ClientSession.post`;
  - websocket/persistent connections: socket send/recv adapter;
  - eth-tester: external backend/service behavior only.
- Do not patch internal transport helpers such as
  `HTTPSessionManager.async_make_post_request`.
- External-edge fixtures should return realistic raw protocol values, not already-formatted Python objects.

## Fixture Data

- Raw JSON-RPC provider results use hex quantity strings for quantity fields and hex strings for call/code/data results.
- Pythonic formatter inputs may use raw JSON-RPC values only when the benchmark
  target is a result formatter.
- Post-formatter Python fixtures keep Python values: `int` quantities, `HexBytes` where appropriate, and normal Python containers.
- Keep raw and Pythonic fixtures explicitly named so a benchmark cannot accidentally use the wrong layer.

## Stack And Hygiene

- Active benchmark PRs are review stacks only when explicitly requested; do not
  infer semantic dependency without checking.

- Each branch must contain exactly one scoped benchmark payload relative to the
  previous branch.

- Do not commit `build/`, benchmark JSON output, or accidental `benchmarks/results/*` churn.

- If branch work starts from a remote branch, fetch and update from the remote before editing.

- After local `pip install .`, remove generated `build/` before closing the worktree.

## Audit Checklist

Before calling a benchmark branch clean, inspect its diff for:

- forbidden internal patches: `HTTPSessionManager`, direct library object
  replacement, fake Web3/provider/manager/subscription classes;
- hot-path pollution: `json.loads`, `json.dumps`, `encode(`, `decode(`,
  selector construction, `time()`, assertions, object construction, patch
  setup, cache clearing, or state mutation inside timed callables;
- benchmark symmetry: same group, same operation, same inputs, reference/faster
  pair, preserved meaningful input matrix for API variants, and no local ad hoc
  parameter lists replacing shared parametrizers/fixtures;
- realistic fixture layer: raw JSON-RPC at provider edges, Pythonic values only
  for post-formatter targets;
- branch hygiene: one payload only, no inherited unrelated diff.

## Validation

- Run relevant benchmark validation:

```sh
python3 -m compileall -q benchmarks
python3 -m pytest --collect-only <changed benchmark path>
python3 -m pytest --benchmark-disable <changed benchmark path>
python3 -m pytest --benchmark-only <changed benchmark path>
```

- For fixture/helper changes, also run collection and benchmark-disabled smoke over all `benchmarks/`.
- For compiled-wheel confidence, install the built wheel with `requirements-benchmark.txt`, remove source packages from the import path, and confirm `faster_web3` and `faster_ens` import from installed artifacts.
