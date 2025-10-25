import pytest
from pytest_codspeed import BenchmarkFixture

import web3._utils.validation
import faster_web3._utils.validation
import web3.exceptions
import faster_web3.exceptions
from eth_utils.abi import function_abi_to_4byte_selector
from eth_utils.hexadecimal import encode_hex

# --- Helpers ---
def run_100(func, *args, **kwargs):
    for _ in range(100):
        func(*args, **kwargs)

def run_100_exc(exc, func, *args, **kwargs):
    for _ in range(100):
        try:
            func(*args, **kwargs)
        except exc:
            pass

# --- Real-World ABIs for Microbenchmarks ---

# ERC20 ABI (USDT, DAI, etc.)
erc20_abi = [
    {"constant": True, "inputs": [], "name": "name", "outputs": [{"name": "", "type": "string"}], "type": "function"},
    {"constant": False, "inputs": [{"name": "_spender", "type": "address"}, {"name": "_value", "type": "uint256"}], "name": "approve", "outputs": [{"name": "", "type": "bool"}], "type": "function"},
    {"constant": True, "inputs": [], "name": "totalSupply", "outputs": [{"name": "", "type": "uint256"}], "type": "function"},
    {"constant": False, "inputs": [{"name": "_from", "type": "address"}, {"name": "_to", "type": "address"}, {"name": "_value", "type": "uint256"}], "name": "transferFrom", "outputs": [{"name": "", "type": "bool"}], "type": "function"},
    {"constant": True, "inputs": [], "name": "decimals", "outputs": [{"name": "", "type": "uint8"}], "type": "function"},
    {"constant": True, "inputs": [], "name": "symbol", "outputs": [{"name": "", "type": "string"}], "type": "function"},
    {"constant": False, "inputs": [{"name": "_to", "type": "address"}, {"name": "_value", "type": "uint256"}], "name": "transfer", "outputs": [{"name": "", "type": "bool"}], "type": "function"},
    {"constant": True, "inputs": [{"name": "_owner", "type": "address"}], "name": "balanceOf", "outputs": [{"name": "balance", "type": "uint256"}], "type": "function"},
    {"constant": True, "inputs": [{"name": "_owner", "type": "address"}, {"name": "_spender", "type": "address"}], "name": "allowance", "outputs": [{"name": "", "type": "uint256"}], "type": "function"},
    {"anonymous": False, "inputs": [{"indexed": True, "name": "owner", "type": "address"}, {"indexed": True, "name": "spender", "type": "address"}, {"indexed": False, "name": "value", "type": "uint256"}], "name": "Approval", "type": "event"},
    {"anonymous": False, "inputs": [{"indexed": True, "name": "from", "type": "address"}, {"indexed": True, "name": "to", "type": "address"}, {"indexed": False, "name": "value", "type": "uint256"}], "name": "Transfer", "type": "event"},
]

# Uniswap V2 Pair ABI (full, real ABI)
uniswap_v2_pair_abi = [{"inputs":[],"payable":False,"stateMutability":"nonpayable","type":"constructor"},{"anonymous":False,"inputs":[{"indexed":True,"internalType":"address","name":"owner","type":"address"},{"indexed":True,"internalType":"address","name":"spender","type":"address"},{"indexed":False,"internalType":"uint256","name":"value","type":"uint256"}],"name":"Approval","type":"event"},{"anonymous":False,"inputs":[{"indexed":True,"internalType":"address","name":"sender","type":"address"},{"indexed":False,"internalType":"uint256","name":"amount0","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"amount1","type":"uint256"},{"indexed":True,"internalType":"address","name":"to","type":"address"}],"name":"Burn","type":"event"},{"anonymous":False,"inputs":[{"indexed":True,"internalType":"address","name":"sender","type":"address"},{"indexed":False,"internalType":"uint256","name":"amount0","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"amount1","type":"uint256"}],"name":"Mint","type":"event"},{"anonymous":False,"inputs":[{"indexed":True,"internalType":"address","name":"sender","type":"address"},{"indexed":False,"internalType":"uint256","name":"amount0In","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"amount1In","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"amount0Out","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"amount1Out","type":"uint256"},{"indexed":True,"internalType":"address","name":"to","type":"address"}],"name":"Swap","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"uint112","name":"reserve0","type":"uint112"},{"indexed":False,"internalType":"uint112","name":"reserve1","type":"uint112"}],"name":"Sync","type":"event"},{"anonymous":False,"inputs":[{"indexed":True,"internalType":"address","name":"from","type":"address"},{"indexed":True,"internalType":"address","name":"to","type":"address"},{"indexed":False,"internalType":"uint256","name":"value","type":"uint256"}],"name":"Transfer","type":"event"},{"constant":True,"inputs":[],"name":"DOMAIN_SEPARATOR","outputs":[{"internalType":"bytes32","name":"","type":"bytes32"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[],"name":"MINIMUM_LIQUIDITY","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[],"name":"PERMIT_TYPEHASH","outputs":[{"internalType":"bytes32","name":"","type":"bytes32"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[{"internalType":"address","name":"","type":"address"},{"internalType":"address","name":"","type":"address"}],"name":"allowance","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"spender","type":"address"},{"internalType":"uint256","name":"value","type":"uint256"}],"name":"approve","outputs":[{"internalType":"bool","name":"","type":"bool"}],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":True,"inputs":[{"internalType":"address","name":"","type":"address"}],"name":"balanceOf","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"to","type":"address"}],"name":"burn","outputs":[{"internalType":"uint256","name":"amount0","type":"uint256"},{"internalType":"uint256","name":"amount1","type":"uint256"}],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":True,"inputs":[],"name":"decimals","outputs":[{"internalType":"uint8","name":"","type":"uint8"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[],"name":"factory","outputs":[{"internalType":"address","name":"","type":"address"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[],"name":"getReserves","outputs":[{"internalType":"uint112","name":"_reserve0","type":"uint112"},{"internalType":"uint112","name":"_reserve1","type":"uint112"},{"internalType":"uint32","name":"_blockTimestampLast","type":"uint32"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"_token0","type":"address"},{"internalType":"address","name":"_token1","type":"address"}],"name":"initialize","outputs":[],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":True,"inputs":[],"name":"kLast","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"to","type":"address"}],"name":"mint","outputs":[{"internalType":"uint256","name":"liquidity","type":"uint256"}],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":True,"inputs":[],"name":"name","outputs":[{"internalType":"string","name":"","type":"string"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[{"internalType":"address","name":"","type":"address"}],"name":"nonces","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"owner","type":"address"},{"internalType":"address","name":"spender","type":"address"},{"internalType":"uint256","name":"value","type":"uint256"},{"internalType":"uint256","name":"deadline","type":"uint256"},{"internalType":"uint8","name":"v","type":"uint8"},{"internalType":"bytes32","name":"r","type":"bytes32"},{"internalType":"bytes32","name":"s","type":"bytes32"}],"name":"permit","outputs":[],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":True,"inputs":[],"name":"price0CumulativeLast","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[],"name":"price1CumulativeLast","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"to","type":"address"}],"name":"skim","outputs":[],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":False,"inputs":[{"internalType":"uint256","name":"amount0Out","type":"uint256"},{"internalType":"uint256","name":"amount1Out","type":"uint256"},{"internalType":"address","name":"to","type":"address"},{"internalType":"bytes","name":"data","type":"bytes"}],"name":"swap","outputs":[],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":True,"inputs":[],"name":"symbol","outputs":[{"internalType":"string","name":"","type":"string"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[],"name":"sync","outputs":[],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":True,"inputs":[],"name":"token0","outputs":[{"internalType":"address","name":"","type":"address"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[],"name":"token1","outputs":[{"internalType":"address","name":"","type":"address"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":True,"inputs":[],"name":"totalSupply","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"payable":False,"stateMutability":"view","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"to","type":"address"},{"internalType":"uint256","name":"value","type":"uint256"}],"name":"transfer","outputs":[{"internalType":"bool","name":"","type":"bool"}],"payable":False,"stateMutability":"nonpayable","type":"function"},{"constant":False,"inputs":[{"internalType":"address","name":"from","type":"address"},{"internalType":"address","name":"to","type":"address"},{"internalType":"uint256","name":"value","type":"uint256"}],"name":"transferFrom","outputs":[{"internalType":"bool","name":"","type":"bool"}],"payable":False,"stateMutability":"nonpayable","type":"function"}]

# Compound cDAI ABI (full, real ABI for large contract)
compound_cDAI_abi = [{"inputs":[],"stateMutability":"nonpayable","type":"constructor"},{"inputs":[],"name":"AcceptAdminPendingAdminCheck","type":"error"},{"inputs":[{"internalType":"uint256","name":"actualAddAmount","type":"uint256"}],"name":"AddReservesFactorFreshCheck","type":"error"},{"inputs":[],"name":"BorrowCashNotAvailable","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"BorrowComptrollerRejection","type":"error"},{"inputs":[],"name":"BorrowFreshnessCheck","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"LiquidateAccrueBorrowInterestFailed","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"LiquidateAccrueCollateralInterestFailed","type":"error"},{"inputs":[],"name":"LiquidateCloseAmountIsUintMax","type":"error"},{"inputs":[],"name":"LiquidateCloseAmountIsZero","type":"error"},{"inputs":[],"name":"LiquidateCollateralFreshnessCheck","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"LiquidateComptrollerRejection","type":"error"},{"inputs":[],"name":"LiquidateFreshnessCheck","type":"error"},{"inputs":[],"name":"LiquidateLiquidatorIsBorrower","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"LiquidateRepayBorrowFreshFailed","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"LiquidateSeizeComptrollerRejection","type":"error"},{"inputs":[],"name":"LiquidateSeizeLiquidatorIsBorrower","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"MintComptrollerRejection","type":"error"},{"inputs":[],"name":"MintFreshnessCheck","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"RedeemComptrollerRejection","type":"error"},{"inputs":[],"name":"RedeemFreshnessCheck","type":"error"},{"inputs":[],"name":"RedeemTransferOutNotPossible","type":"error"},{"inputs":[],"name":"ReduceReservesAdminCheck","type":"error"},{"inputs":[],"name":"ReduceReservesCashNotAvailable","type":"error"},{"inputs":[],"name":"ReduceReservesCashValidation","type":"error"},{"inputs":[],"name":"ReduceReservesFreshCheck","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"RepayBorrowComptrollerRejection","type":"error"},{"inputs":[],"name":"RepayBorrowFreshnessCheck","type":"error"},{"inputs":[],"name":"SetComptrollerOwnerCheck","type":"error"},{"inputs":[],"name":"SetInterestRateModelFreshCheck","type":"error"},{"inputs":[],"name":"SetInterestRateModelOwnerCheck","type":"error"},{"inputs":[],"name":"SetPendingAdminOwnerCheck","type":"error"},{"inputs":[],"name":"SetReserveFactorAdminCheck","type":"error"},{"inputs":[],"name":"SetReserveFactorBoundsCheck","type":"error"},{"inputs":[],"name":"SetReserveFactorFreshCheck","type":"error"},{"inputs":[{"internalType":"uint256","name":"errorCode","type":"uint256"}],"name":"TransferComptrollerRejection","type":"error"},{"inputs":[],"name":"TransferNotAllowed","type":"error"},{"inputs":[],"name":"TransferNotEnough","type":"error"},{"inputs":[],"name":"TransferTooMuch","type":"error"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"uint256","name":"cashPrior","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"interestAccumulated","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"borrowIndex","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"totalBorrows","type":"uint256"}],"name":"AccrueInterest","type":"event"},{"anonymous":False,"inputs":[{"indexed":True,"internalType":"address","name":"owner","type":"address"},{"indexed":True,"internalType":"address","name":"spender","type":"address"},{"indexed":False,"internalType":"uint256","name":"amount","type":"uint256"}],"name":"Approval","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"borrower","type":"address"},{"indexed":False,"internalType":"uint256","name":"borrowAmount","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"accountBorrows","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"totalBorrows","type":"uint256"}],"name":"Borrow","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"liquidator","type":"address"},{"indexed":False,"internalType":"address","name":"borrower","type":"address"},{"indexed":False,"internalType":"uint256","name":"repayAmount","type":"uint256"},{"indexed":False,"internalType":"address","name":"cTokenCollateral","type":"address"},{"indexed":False,"internalType":"uint256","name":"seizeTokens","type":"uint256"}],"name":"LiquidateBorrow","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"minter","type":"address"},{"indexed":False,"internalType":"uint256","name":"mintAmount","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"mintTokens","type":"uint256"}],"name":"Mint","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"oldAdmin","type":"address"},{"indexed":False,"internalType":"address","name":"newAdmin","type":"address"}],"name":"NewAdmin","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"contract ComptrollerInterface","name":"oldComptroller","type":"address"},{"indexed":False,"internalType":"contract ComptrollerInterface","name":"newComptroller","type":"address"}],"name":"NewComptroller","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"contract InterestRateModel","name":"oldInterestRateModel","type":"address"},{"indexed":False,"internalType":"contract InterestRateModel","name":"newInterestRateModel","type":"address"}],"name":"NewMarketInterestRateModel","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"oldPendingAdmin","type":"address"},{"indexed":False,"internalType":"address","name":"newPendingAdmin","type":"address"}],"name":"NewPendingAdmin","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"uint256","name":"oldReserveFactorMantissa","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"newReserveFactorMantissa","type":"uint256"}],"name":"NewReserveFactor","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"redeemer","type":"address"},{"indexed":False,"internalType":"uint256","name":"redeemAmount","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"redeemTokens","type":"uint256"}],"name":"Redeem","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"payer","type":"address"},{"indexed":False,"internalType":"address","name":"borrower","type":"address"},{"indexed":False,"internalType":"uint256","name":"repayAmount","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"accountBorrows","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"totalBorrows","type":"uint256"}],"name":"RepayBorrow","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"benefactor","type":"address"},{"indexed":False,"internalType":"uint256","name":"addAmount","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"newTotalReserves","type":"uint256"}],"name":"ReservesAdded","type":"event"},{"anonymous":False,"inputs":[{"indexed":False,"internalType":"address","name":"admin","type":"address"},{"indexed":False,"internalType":"uint256","name":"reduceAmount","type":"uint256"},{"indexed":False,"internalType":"uint256","name":"newTotalReserves","type":"uint256"}],"name":"ReservesReduced","type":"event"},{"anonymous":False,"inputs":[{"indexed":True,"internalType":"address","name":"from","type":"address"},{"indexed":True,"internalType":"address","name":"to","type":"address"},{"indexed":False,"internalType":"uint256","name":"amount","type":"uint256"}],"name":"Transfer","type":"event"},{"inputs":[],"name":"NO_ERROR","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"_acceptAdmin","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"uint256","name":"addAmount","type":"uint256"}],"name":"_addReserves","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"bytes","name":"data","type":"bytes"}],"name":"_becomeImplementation","outputs":[],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"address","name":"compLikeDelegatee","type":"address"}],"name":"_delegateCompLikeTo","outputs":[],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"uint256","name":"reduceAmount","type":"uint256"}],"name":"_reduceReserves","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[],"name":"_resignImplementation","outputs":[],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"contract ComptrollerInterface","name":"newComptroller","type":"address"}],"name":"_setComptroller","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"contract InterestRateModel","name":"newInterestRateModel","type":"address"}],"name":"_setInterestRateModel","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"address payable","name":"newPendingAdmin","type":"address"}],"name":"_setPendingAdmin","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"uint256","name":"newReserveFactorMantissa","type":"uint256"}],"name":"_setReserveFactor","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[],"name":"accrualBlockNumber","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"accrueInterest","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[],"name":"admin","outputs":[{"internalType":"address payable","name":"","type":"address"}],"stateMutability":"view","type":"function"},{"inputs":[{"internalType":"address","name":"owner","type":"address"},{"internalType":"address","name":"spender","type":"address"}],"name":"allowance","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[{"internalType":"address","name":"spender","type":"address"},{"internalType":"uint256","name":"amount","type":"uint256"}],"name":"approve","outputs":[{"internalType":"bool","name":"","type":"bool"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"address","name":"owner","type":"address"}],"name":"balanceOf","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[{"internalType":"address","name":"owner","type":"address"}],"name":"balanceOfUnderlying","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"uint256","name":"borrowAmount","type":"uint256"}],"name":"borrow","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"address","name":"account","type":"address"}],"name":"borrowBalanceCurrent","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"address","name":"account","type":"address"}],"name":"borrowBalanceStored","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"borrowIndex","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"borrowRatePerBlock","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"comptroller","outputs":[{"internalType":"contract ComptrollerInterface","name":"","type":"address"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"decimals","outputs":[{"internalType":"uint8","name":"","type":"uint8"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"exchangeRateCurrent","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[],"name":"exchangeRateStored","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[{"internalType":"address","name":"account","type":"address"}],"name":"getAccountSnapshot","outputs":[{"internalType":"uint256","name":"","type":"uint256"},{"internalType":"uint256","name":"","type":"uint256"},{"internalType":"uint256","name":"","type":"uint256"},{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"getCash","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"implementation","outputs":[{"internalType":"address","name":"","type":"address"}],"stateMutability":"view","type":"function"},{"inputs":[{"internalType":"address","name":"underlying_","type":"address"},{"internalType":"contract ComptrollerInterface","name":"comptroller_","type":"address"},{"internalType":"contract InterestRateModel","name":"interestRateModel_","type":"address"},{"internalType":"uint256","name":"initialExchangeRateMantissa_","type":"uint256"},{"internalType":"string","name":"name_","type":"string"},{"internalType":"string","name":"symbol_","type":"string"},{"internalType":"uint8","name":"decimals_","type":"uint8"}],"name":"initialize","outputs":[],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"contract ComptrollerInterface","name":"comptroller_","type":"address"},{"internalType":"contract InterestRateModel","name":"interestRateModel_","type":"address"},{"internalType":"uint256","name":"initialExchangeRateMantissa_","type":"uint256"},{"internalType":"string","name":"name_","type":"string"},{"internalType":"string","name":"symbol_","type":"string"},{"internalType":"uint8","name":"decimals_","type":"uint8"}],"name":"initialize","outputs":[],"stateMutability":"nonpayable","type":"function"},{"inputs":[],"name":"interestRateModel","outputs":[{"internalType":"contract InterestRateModel","name":"","type":"address"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"isCToken","outputs":[{"internalType":"bool","name":"","type":"bool"}],"stateMutability":"view","type":"function"},{"inputs":[{"internalType":"address","name":"borrower","type":"address"},{"internalType":"uint256","name":"repayAmount","type":"uint256"},{"internalType":"contract CTokenInterface","name":"cTokenCollateral","type":"address"}],"name":"liquidateBorrow","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"uint256","name":"mintAmount","type":"uint256"}],"name":"mint","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[],"name":"name","outputs":[{"internalType":"string","name":"","type":"string"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"pendingAdmin","outputs":[{"internalType":"address payable","name":"","type":"address"}],"stateMutability":"view","type":"function"},{"inputs":[],"name":"protocolSeizeShareMantissa","outputs":[{"internalType":"uint256","name":"","type":"uint256"}],"stateMutability":"view","type":"function"},{"inputs":[{"internalType":"address","name":"dst","type":"address"},{"internalType":"uint256","name":"amount","type":"uint256"}],"name":"transfer","outputs":[{"internalType":"bool","name":"","type":"bool"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[{"internalType":"address","name":"src","type":"address"},{"internalType":"address","name":"dst","type":"address"},{"internalType":"uint256","name":"amount","type":"uint256"}],"name":"transferFrom","outputs":[{"internalType":"bool","name":"","type":"bool"}],"stateMutability":"nonpayable","type":"function"},{"inputs":[],"name":"underlying","outputs":[{"internalType":"address","name":"","type":"address"}],"stateMutability":"view","type":"function"}]

# Real selector collision example: two functions with the same signature
collision_abi = [
    {"type": "function", "name": "foo", "inputs": [{"type": "uint256"}]},
    {"type": "function", "name": "bar", "inputs": [{"type": "uint256"}]},
]
selector = encode_hex(function_abi_to_4byte_selector(collision_abi[0]))
fake_duplicates = {
    selector: [collision_abi[0], collision_abi[1]]
}

valid_types = ["uint256", "address", "bool", "bytes", "string"]
valid_values = [123, "0x1234567890123456789012345678901234567890", True, b"bytes", "hello"]
valid_address = "0x1234567890123456789012345678901234567890"
valid_ens = "alice.eth"
one_val_args = (1, None, None)
one_val_kwargs = {"a": None, "b": 2, "c": None}
valid_subscription_response = {
    "jsonrpc": "2.0",
    "method": "eth_subscription",
    "params": {
        "subscription": "0x1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef",
        "result": {"foo": "bar"}
    }
}
bad_response = {"jsonrpc": "2.0", "id": 1, "result": None}
valid_rpc_response = {"jsonrpc": "2.0", "id": 1, "result": 42}
error_rpc_response = {
    "jsonrpc": "2.0",
    "id": 1,
    "error": {"code": -32601, "message": "Method not found"}
}

# --- Microbenchmarks ---

@pytest.mark.benchmark(group="validation-validate_abi")
@pytest.mark.parametrize("abi", [erc20_abi, uniswap_v2_pair_abi, compound_cDAI_abi])
def test_validate_abi(benchmark: BenchmarkFixture, abi):
    benchmark(run_100, web3._utils.validation.validate_abi, abi)

@pytest.mark.benchmark(group="validation-validate_abi")
@pytest.mark.parametrize("abi", [erc20_abi, uniswap_v2_pair_abi, compound_cDAI_abi])
def test_faster_validate_abi(benchmark: BenchmarkFixture, abi):
    benchmark(run_100, faster_web3._utils.validation.validate_abi, abi)

@pytest.mark.benchmark(group="validation-_prepare_selector_collision_msg")
def test_prepare_selector_collision_msg(benchmark: BenchmarkFixture):
    benchmark(run_100, web3._utils.validation._prepare_selector_collision_msg, fake_duplicates)

@pytest.mark.benchmark(group="validation-_prepare_selector_collision_msg")
def test_faster_prepare_selector_collision_msg(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_web3._utils.validation._prepare_selector_collision_msg, fake_duplicates)

@pytest.mark.benchmark(group="validation-validate_abi_type")
@pytest.mark.parametrize("abi_type", valid_types)
def test_validate_abi_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, web3._utils.validation.validate_abi_type, abi_type)

@pytest.mark.benchmark(group="validation-validate_abi_type")
@pytest.mark.parametrize("abi_type", valid_types)
def test_faster_validate_abi_type(benchmark: BenchmarkFixture, abi_type):
    benchmark(run_100, faster_web3._utils.validation.validate_abi_type, abi_type)

@pytest.mark.benchmark(group="validation-validate_abi_value")
@pytest.mark.parametrize("abi_type,value", zip(valid_types, valid_values))
def test_validate_abi_value(benchmark: BenchmarkFixture, abi_type, value):
    benchmark(run_100, web3._utils.validation.validate_abi_value, abi_type, value)

@pytest.mark.benchmark(group="validation-validate_abi_value")
@pytest.mark.parametrize("abi_type,value", zip(valid_types, valid_values))
def test_faster_validate_abi_value(benchmark: BenchmarkFixture, abi_type, value):
    benchmark(run_100, faster_web3._utils.validation.validate_abi_value, abi_type, value)

@pytest.mark.benchmark(group="validation-is_not_address_string")
@pytest.mark.parametrize("val", [valid_ens, "notanaddress", "0x123", b"bytes", valid_address])
def test_is_not_address_string(benchmark: BenchmarkFixture, val):
    benchmark(run_100, web3._utils.validation.is_not_address_string, val)

@pytest.mark.benchmark(group="validation-is_not_address_string")
@pytest.mark.parametrize("val", [valid_ens, "notanaddress", "0x123", b"bytes", valid_address])
def test_faster_is_not_address_string(benchmark: BenchmarkFixture, val):
    benchmark(run_100, faster_web3._utils.validation.is_not_address_string, val)

@pytest.mark.benchmark(group="validation-validate_address")
@pytest.mark.parametrize("val", [valid_address, valid_ens])
def test_validate_address(benchmark: BenchmarkFixture, val):
    benchmark(run_100, web3._utils.validation.validate_address, val)

@pytest.mark.benchmark(group="validation-validate_address")
@pytest.mark.parametrize("val", [valid_address, valid_ens])
def test_faster_validate_address(benchmark: BenchmarkFixture, val):
    benchmark(run_100, faster_web3._utils.validation.validate_address, val)

@pytest.mark.benchmark(group="validation-has_one_val")
def test_has_one_val(benchmark: BenchmarkFixture):
    benchmark(run_100, web3._utils.validation.has_one_val, *one_val_args)

@pytest.mark.benchmark(group="validation-has_one_val")
def test_faster_has_one_val(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_web3._utils.validation.has_one_val, *one_val_args)

@pytest.mark.benchmark(group="validation-assert_one_val")
def test_assert_one_val(benchmark: BenchmarkFixture):
    benchmark(run_100, web3._utils.validation.assert_one_val, *one_val_args)

@pytest.mark.benchmark(group="validation-assert_one_val")
def test_faster_assert_one_val(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_web3._utils.validation.assert_one_val, *one_val_args)

@pytest.mark.benchmark(group="validation-_validate_subscription_fields")
def test_validate_subscription_fields(benchmark: BenchmarkFixture):
    benchmark(run_100, web3._utils.validation._validate_subscription_fields, valid_subscription_response)

@pytest.mark.benchmark(group="validation-_validate_subscription_fields")
def test_faster_validate_subscription_fields(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_web3._utils.validation._validate_subscription_fields, valid_subscription_response)

@pytest.mark.benchmark(group="validation-_raise_bad_response_format")
def test_raise_bad_response_format(benchmark: BenchmarkFixture):
    benchmark(run_100_exc, web3.exceptions.BadResponseFormat, web3._utils.validation._raise_bad_response_format, bad_response)

@pytest.mark.benchmark(group="validation-_raise_bad_response_format")
def test_faster_raise_bad_response_format(benchmark: BenchmarkFixture):
    benchmark(run_100_exc, faster_web3.exceptions.BadResponseFormat, faster_web3._utils.validation._raise_bad_response_format, bad_response)

@pytest.mark.benchmark(group="validation-raise_error_for_batch_response")
def test_raise_error_for_batch_response(benchmark: BenchmarkFixture):
    benchmark(run_100_exc, web3.exceptions.Web3RPCError, web3._utils.validation.raise_error_for_batch_response, error_rpc_response)

@pytest.mark.benchmark(group="validation-raise_error_for_batch_response")
def test_faster_raise_error_for_batch_response(benchmark: BenchmarkFixture):
    benchmark(run_100_exc, faster_web3.exceptions.Web3RPCError, faster_web3._utils.validation.raise_error_for_batch_response, error_rpc_response)

@pytest.mark.benchmark(group="validation-validate_rpc_response_and_raise_if_error")
def test_validate_rpc_response_and_raise_if_error(benchmark: BenchmarkFixture):
    benchmark(run_100, web3._utils.validation.validate_rpc_response_and_raise_if_error, valid_rpc_response, None)

@pytest.mark.benchmark(group="validation-validate_rpc_response_and_raise_if_error")
def test_faster_validate_rpc_response_and_raise_if_error(benchmark: BenchmarkFixture):
    benchmark(run_100, faster_web3._utils.validation.validate_rpc_response_and_raise_if_error, valid_rpc_response, None)
