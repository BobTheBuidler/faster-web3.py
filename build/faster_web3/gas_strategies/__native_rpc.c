#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_rpc.h"
#include "__native_internal_rpc.h"
static PyMethodDef faster_web3___gas_strategies___rpcmodule_methods[] = {
    {"rpc_gas_price_strategy", (PyCFunction)CPyPy_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("rpc_gas_price_strategy(w3, transaction_params=None)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___gas_strategies___rpc(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___gas_strategies___rpc__internal, "__name__");
    CPyStatic_faster_web3___gas_strategies___rpc___globals = PyModule_GetDict(CPyModule_faster_web3___gas_strategies___rpc__internal);
    if (unlikely(CPyStatic_faster_web3___gas_strategies___rpc___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___gas_strategies___rpc_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___gas_strategies___rpc__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef faster_web3___gas_strategies___rpcmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.gas_strategies.rpc",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___gas_strategies___rpcmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___gas_strategies___rpc(void)
{
    if (CPyModule_faster_web3___gas_strategies___rpc__internal) {
        Py_INCREF(CPyModule_faster_web3___gas_strategies___rpc__internal);
        return CPyModule_faster_web3___gas_strategies___rpc__internal;
    }
    CPyModule_faster_web3___gas_strategies___rpc__internal = PyModule_Create(&faster_web3___gas_strategies___rpcmodule);
    if (unlikely(CPyModule_faster_web3___gas_strategies___rpc__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___gas_strategies___rpc(CPyModule_faster_web3___gas_strategies___rpc__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___gas_strategies___rpc__internal;
    fail:
    return NULL;
}

CPyTagged CPyDef_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy(PyObject *cpy_r_w3, PyObject *cpy_r_transaction_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    if (cpy_r_transaction_params != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    cpy_r_transaction_params = cpy_r_r0;
    CPy_DECREF(cpy_r_transaction_params);
CPyL2: ;
    cpy_r_r1 = CPyStatics[3]; /* 'eth' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "rpc_gas_price_strategy", 20, CPyStatic_faster_web3___gas_strategies___rpc___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStatics[4]; /* 'gas_price' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "rpc_gas_price_strategy", 20, CPyStatic_faster_web3___gas_strategies___rpc___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "rpc_gas_price_strategy", 20, CPyStatic_faster_web3___gas_strategies___rpc___globals);
        goto CPyL6;
    }
    return cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = CPY_INT_TAG;
    return cpy_r_r6;
}

PyObject *CPyPy_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"w3", "transaction_params", 0};
    static CPyArg_Parser parser = {"O|O:rpc_gas_price_strategy", kwlist, 0};
    PyObject *obj_w3;
    PyObject *obj_transaction_params = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_w3, &obj_transaction_params)) {
        return NULL;
    }
    PyObject *arg_w3 = obj_w3;
    PyObject *arg_transaction_params;
    if (obj_transaction_params == NULL) {
        arg_transaction_params = NULL;
        goto __LL1;
    }
    if (PyDict_Check(obj_transaction_params))
        arg_transaction_params = obj_transaction_params;
    else {
        arg_transaction_params = NULL;
    }
    if (arg_transaction_params != NULL) goto __LL1;
    if (obj_transaction_params == Py_None)
        arg_transaction_params = obj_transaction_params;
    else {
        arg_transaction_params = NULL;
    }
    if (arg_transaction_params != NULL) goto __LL1;
    CPy_TypeError("dict or None", obj_transaction_params); 
    goto fail;
__LL1: ;
    CPyTagged retval = CPyDef_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy(arg_w3, arg_transaction_params);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "rpc_gas_price_strategy", 14, CPyStatic_faster_web3___gas_strategies___rpc___globals);
    return NULL;
}

char CPyDef_faster_web3___gas_strategies___rpc_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[5]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "<module>", -1, CPyStatic_faster_web3___gas_strategies___rpc___globals);
        goto CPyL7;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[13]; /* ('Optional',) */
    cpy_r_r6 = CPyStatics[7]; /* 'typing' */
    cpy_r_r7 = CPyStatic_faster_web3___gas_strategies___rpc___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "<module>", 1, CPyStatic_faster_web3___gas_strategies___rpc___globals);
        goto CPyL7;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[14]; /* ('Web3',) */
    cpy_r_r10 = CPyStatics[9]; /* 'faster_web3' */
    cpy_r_r11 = CPyStatic_faster_web3___gas_strategies___rpc___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "<module>", 5, CPyStatic_faster_web3___gas_strategies___rpc___globals);
        goto CPyL7;
    }
    CPyModule_faster_web3 = cpy_r_r12;
    CPy_INCREF(CPyModule_faster_web3);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[15]; /* ('TxParams', 'Wei') */
    cpy_r_r14 = CPyStatics[12]; /* 'faster_web3.types' */
    cpy_r_r15 = CPyStatic_faster_web3___gas_strategies___rpc___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/rpc.py", "<module>", 8, CPyStatic_faster_web3___gas_strategies___rpc___globals);
        goto CPyL7;
    }
    CPyModule_faster_web3___types = cpy_r_r16;
    CPy_INCREF(CPyModule_faster_web3___types);
    CPy_DECREF(cpy_r_r16);
    return 1;
CPyL7: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___gas_strategies___rpc = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_web3 = Py_None;
    CPyModule_faster_web3___types = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[16];
const char * const CPyLit_Str[] = {
    "\t\003eth\tgas_price\bbuiltins\bOptional\006typing\004Web3\vfaster_web3\bTxParams\003Wei",
    "\001\021faster_web3.types",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {3, 1, 6, 1, 8, 2, 10, 11};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___gas_strategies___rpc__internal = NULL;
CPyModule *CPyModule_faster_web3___gas_strategies___rpc;
PyObject *CPyStatic_faster_web3___gas_strategies___rpc___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_web3;
CPyModule *CPyModule_faster_web3___types;
CPyTagged CPyDef_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy(PyObject *cpy_r_w3, PyObject *cpy_r_transaction_params);
PyObject *CPyPy_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___gas_strategies___rpc_____top_level__(void);

static struct export_table_faster_web3___gas_strategies___rpc exports = {
    &CPyDef_faster_web3___gas_strategies___rpc___rpc_gas_price_strategy,
    &CPyDef_faster_web3___gas_strategies___rpc_____top_level__,
};

static int exec_rpc__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.gas_strategies.rpc__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___gas_strategies___rpc(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___gas_strategies___rpc, "faster_web3.gas_strategies.rpc__mypyc.init_faster_web3___gas_strategies___rpc", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___gas_strategies___rpc", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_rpc__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.gas_strategies.rpc__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_rpc__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_rpc__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_rpc__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
