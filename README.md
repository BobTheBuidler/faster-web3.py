### I forked web3.py and compiled it to C. It does the same stuff, now faster

[![PyPI](https://img.shields.io/pypi/v/faster-web3.svg?logo=Python&logoColor=white)](https://pypi.org/project/faster-web3)
[![Monthly Downloads](https://img.shields.io/pypi/dm/faster-web3)](https://pypistats.org/packages/faster-web3)
[![Codspeed.io Status](https://img.shields.io/endpoint?url=https://codspeed.io/badge.json)](https://codspeed.io/BobTheBuidler/faster-web3.py)

##### This fork will be kept up-to-date with [web3.py](https://github.com/ethereum/web3.py). I will pull updates as they are released and push new [faster-web3.py](https://github.com/BobTheBuidler/faster-web3.py) releases to [PyPI](https://pypi.org/project/faster-web3.py/).

##### We (kinda) benchmark `faster-web3.py` against the original `web3.py` for your convenience. [See results](https://github.com/BobTheBuidler/faster-web3.py/tree/master/benchmarks/results). More benchmarks will be LLM'd into existence soon enough.

##### You can find the compiled C code and header files in the [build](https://github.com/BobTheBuidler/web3.py/tree/master/build) directory.

###### You may also be interested in: [faster-hexbytes](https://github.com/BobTheBuidler/faster-hexbytes/), [faster-eth-abi](https://github.com/BobTheBuidler/faster-eth-abi/), and [faster-eth-utils](https://github.com/BobTheBuidler/faster-eth-utils/)

##### The original web3.py readme is below:

# web3.py

[![Join the conversation on Discord](https://img.shields.io/discord/809793915578089484?color=blue&label=chat&logo=discord&logoColor=white)](https://discord.gg/GHryRvPB84)
[![Build Status](https://circleci.com/gh/ethereum/web3.py.svg?style=shield)](https://circleci.com/gh/ethereum/web3.py)
[![PyPI version](https://badge.fury.io/py/web3.svg)](https://badge.fury.io/py/web3)
[![Python versions](https://img.shields.io/pypi/pyversions/web3.svg)](https://pypi.python.org/pypi/web3)
[![Docs build](https://readthedocs.org/projects/web3py/badge/?version=latest)](https://web3py.readthedocs.io/en/latest/?badge=latest)

## A Python Library for Interacting with Ethereum

web3.py allows you to interact with the Ethereum blockchain using Python, enabling you to build decentralized applications, interact with smart contracts, and much more.

- Python 3.9+ support

## Installation

```sh
python -m pip install web3
```

## Documentation

[Get started in 5 minutes](https://web3py.readthedocs.io/en/latest/quickstart.html) or
[take a tour](https://web3py.readthedocs.io/en/latest/overview.html) of the library.

View the [change log](https://web3py.readthedocs.io/en/latest/release_notes.html).

For additional guides, examples, and APIs, see the [documentation](https://web3py.readthedocs.io/en/latest/).

## Want to Help?

Want to file a bug, contribute some code, or improve documentation? Excellent! Read up on our
guidelines for [contributing](https://web3py.readthedocs.io/en/latest/contributing.html),
then check out issues that are labeled
[Good First Issue](https://github.com/ethereum/web3.py/issues?q=is%3Aissue+is%3Aopen+label%3A%22Good+First+Issue%22).

______________________________________________________________________

## Questions on Implementation or Usage?

Join the conversation in the Ethereum Python Community [Discord](https://discord.gg/GHryRvPB84).
