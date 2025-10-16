#ifndef MYPYC_NATIVE_INTERNAL_faster_web3___gas_strategies___rpc_H
#define MYPYC_NATIVE_INTERNAL_faster_web3___gas_strategies___rpc_H
#include <Python.h>
#include <CPy.h>
#include "__native_rpc.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[16];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_faster_web3___gas_strategies___rpc__internal;
extern CPyModule *CPyModule_faster_web3___gas_strategies___rpc;
extern PyObject *CPyStatic_faster_web3___gas_strategies___rpc___globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_typing;
extern CPyModule *CPyModule_faster_web3;
extern CPyModule *CPyModule_faster_web3___types;
extern CPyTagged CPyDef_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy(PyObject *cpy_r_w3, PyObject *cpy_r_transaction_params);
extern PyObject *CPyPy_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_faster_web3___gas_strategies___rpc_____top_level__(void);
#endif
