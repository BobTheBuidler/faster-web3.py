import asyncio
import signal
import socket as builtinssocket
import time as builtinstime
from typing import (
    Any,
    Final,
)

import aiohttp
import requests


aiosleep: Final = asyncio.sleep

socket: Final = builtinssocket.socket
AF_UNIX: Final = builtinssocket.AF_UNIX
SOCK_STREAM: Final = builtinssocket.SOCK_STREAM

time: Final = builtinstime.time
sleep: Final = builtinstime.sleep


def wait_for_socket(ipc_path: str, timeout: int = 30) -> None:
    start = time()
    while time() < start + timeout:
        try:
            sock = socket(AF_UNIX, SOCK_STREAM)  # type: ignore [attr-defined]
            sock.connect(ipc_path)
            sock.settimeout(timeout)
        except OSError:
            sleep(0.01)
        else:
            break


def wait_for_http(endpoint_uri: str, timeout: int = 60) -> None:
    start = time()
    while time() < start + timeout:
        try:
            requests.get(endpoint_uri)
        except requests.ConnectionError:
            sleep(0.01)
        else:
            break


async def wait_for_aiohttp(endpoint_uri: str, timeout: int = 60) -> None:
    timeout_at = time() + timeout
    while time() < timeout_at:
        try:
            async with aiohttp.ClientSession() as session:
                await session.get(endpoint_uri)
        except aiohttp.client_exceptions.ClientConnectorError:
            await aiosleep(0.01)
        else:
            break


def wait_for_popen(proc: Any, timeout: int) -> None:
    poll = proc.poll
    timeout_at = time() + timeout
    while time() < timeout_at:
        if poll() is None:
            sleep(0.01)
        else:
            break


def kill_proc_gracefully(proc: Any) -> None:
    poll = proc.poll

    if poll() is None:
        proc.send_signal(signal.SIGINT)
        wait_for_popen(proc, 13)

    if poll() is None:
        proc.terminate()
        wait_for_popen(proc, 5)

    if poll() is None:
        proc.kill()
        wait_for_popen(proc, 2)
