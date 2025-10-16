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
#include "__native_gethdev.h"
#include "__native_internal_gethdev.h"
static PyMethodDef faster_web3___auto___gethdevmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___auto___gethdev(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___auto___gethdev__internal, "__name__");
    CPyStatic_faster_web3___auto___gethdev___globals = PyModule_GetDict(CPyModule_faster_web3___auto___gethdev__internal);
    if (unlikely(CPyStatic_faster_web3___auto___gethdev___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___auto___gethdev_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___auto___gethdev__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_web3___auto___gethdev___w3);
    CPyStatic_faster_web3___auto___gethdev___w3 = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___auto___gethdev___async_w3);
    CPyStatic_faster_web3___auto___gethdev___async_w3 = NULL;
    return -1;
}
static struct PyModuleDef faster_web3___auto___gethdevmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.auto.gethdev",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___auto___gethdevmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___auto___gethdev(void)
{
    if (CPyModule_faster_web3___auto___gethdev__internal) {
        Py_INCREF(CPyModule_faster_web3___auto___gethdev__internal);
        return CPyModule_faster_web3___auto___gethdev__internal;
    }
    CPyModule_faster_web3___auto___gethdev__internal = PyModule_Create(&faster_web3___auto___gethdevmodule);
    if (unlikely(CPyModule_faster_web3___auto___gethdev__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___auto___gethdev(CPyModule_faster_web3___auto___gethdev__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___auto___gethdev__internal;
    fail:
    return NULL;
}

char CPyDef_faster_web3___auto___gethdev_____top_level__(void) {
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
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", -1, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[21]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[5]; /* 'typing' */
    cpy_r_r7 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 1, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[22]; /* ('AsyncIPCProvider', 'AsyncWeb3', 'IPCProvider', 'Web3') */
    cpy_r_r10 = CPyStatics[10]; /* 'faster_web3' */
    cpy_r_r11 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 5, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    CPyModule_faster_web3 = cpy_r_r12;
    CPy_INCREF(CPyModule_faster_web3);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[23]; /* ('ExtraDataToPOAMiddleware',) */
    cpy_r_r14 = CPyStatics[12]; /* 'faster_web3.middleware' */
    cpy_r_r15 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 11, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    CPyModule_faster_web3___middleware = cpy_r_r16;
    CPy_INCREF(CPyModule_faster_web3___middleware);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[24]; /* ('get_dev_ipc_path',) */
    cpy_r_r18 = CPyStatics[14]; /* 'faster_web3.providers.ipc' */
    cpy_r_r19 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 14, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    CPyModule_faster_web3___providers___ipc = cpy_r_r20;
    CPy_INCREF(CPyModule_faster_web3___providers___ipc);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r22 = CPyStatics[13]; /* 'get_dev_ipc_path' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    cpy_r_r24 = PyObject_Vectorcall(cpy_r_r23, 0, 0, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals, "str", cpy_r_r24);
        goto CPyL36;
    }
    cpy_r_r26 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r27 = CPyStatics[8]; /* 'IPCProvider' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r25);
    cpy_r_r32 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r33 = CPyStatics[9]; /* 'Web3' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r31};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r31);
    CPyStatic_faster_web3___auto___gethdev___w3 = cpy_r_r37;
    CPy_INCREF(CPyStatic_faster_web3___auto___gethdev___w3);
    cpy_r_r38 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r39 = CPyStatics[15]; /* 'w3' */
    cpy_r_r40 = CPyDict_SetItem(cpy_r_r38, cpy_r_r39, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 18, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    cpy_r_r42 = CPyStatic_faster_web3___auto___gethdev___w3;
    if (likely(cpy_r_r42 != NULL)) goto CPyL18;
    PyErr_SetString(PyExc_NameError, "value for final name \"w3\" was not set");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 19, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r44 = CPyStatics[16]; /* 'middleware_onion' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 19, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    cpy_r_r46 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r47 = CPyStatics[11]; /* 'ExtraDataToPOAMiddleware' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 19, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL39;
    }
    cpy_r_r49 = CPyStatics[17]; /* 'inject' */
    cpy_r_r50 = CPyStatics[20]; /* 0 */
    PyObject *cpy_r_r51[3] = {cpy_r_r45, cpy_r_r48, cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = CPyStatics[25]; /* ('layer',) */
    cpy_r_r54 = PyObject_VectorcallMethod(cpy_r_r49, cpy_r_r52, 9223372036854775810ULL, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 19, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL40;
    } else
        goto CPyL41;
CPyL21: ;
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r55 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r56 = CPyStatics[13]; /* 'get_dev_ipc_path' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    cpy_r_r58 = PyObject_Vectorcall(cpy_r_r57, 0, 0, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals, "str", cpy_r_r58);
        goto CPyL36;
    }
    cpy_r_r60 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r61 = CPyStatics[6]; /* 'AsyncIPCProvider' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL42;
    }
    PyObject *cpy_r_r63[1] = {cpy_r_r59};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_Vectorcall(cpy_r_r62, cpy_r_r64, 1, 0);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r59);
    cpy_r_r66 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r67 = CPyStatics[7]; /* 'AsyncWeb3' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL43;
    }
    PyObject *cpy_r_r69[1] = {cpy_r_r65};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = PyObject_Vectorcall(cpy_r_r68, cpy_r_r70, 1, 0);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL43;
    }
    CPy_DECREF(cpy_r_r65);
    CPyStatic_faster_web3___auto___gethdev___async_w3 = cpy_r_r71;
    CPy_INCREF(CPyStatic_faster_web3___auto___gethdev___async_w3);
    cpy_r_r72 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r73 = CPyStatics[19]; /* 'async_w3' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 21, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    cpy_r_r76 = CPyStatic_faster_web3___auto___gethdev___async_w3;
    if (likely(cpy_r_r76 != NULL)) goto CPyL32;
    PyErr_SetString(PyExc_NameError, "value for final name \"async_w3\" was not set");
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 22, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r78 = CPyStatics[16]; /* 'middleware_onion' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 22, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL36;
    }
    cpy_r_r80 = CPyStatic_faster_web3___auto___gethdev___globals;
    cpy_r_r81 = CPyStatics[11]; /* 'ExtraDataToPOAMiddleware' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 22, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL44;
    }
    cpy_r_r83 = CPyStatics[17]; /* 'inject' */
    cpy_r_r84 = CPyStatics[20]; /* 0 */
    PyObject *cpy_r_r85[3] = {cpy_r_r79, cpy_r_r82, cpy_r_r84};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = CPyStatics[25]; /* ('layer',) */
    cpy_r_r88 = PyObject_VectorcallMethod(cpy_r_r83, cpy_r_r86, 9223372036854775810ULL, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("faster_web3/auto/gethdev.py", "<module>", 22, CPyStatic_faster_web3___auto___gethdev___globals);
        goto CPyL45;
    } else
        goto CPyL46;
CPyL35: ;
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r82);
    return 1;
CPyL36: ;
    cpy_r_r89 = 2;
    return cpy_r_r89;
CPyL37: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r48);
    goto CPyL36;
CPyL41: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL21;
CPyL42: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL36;
CPyL43: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r82);
    goto CPyL36;
CPyL46: ;
    CPy_DECREF(cpy_r_r88);
    goto CPyL35;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___auto___gethdev = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_web3 = Py_None;
    CPyModule_faster_web3___middleware = Py_None;
    CPyModule_faster_web3___providers___ipc = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[26];
const char * const CPyLit_Str[] = {
    "\a\bbuiltins\005Final\006typing\020AsyncIPCProvider\tAsyncWeb3\vIPCProvider\004Web3",
    "\003\vfaster_web3\030ExtraDataToPOAMiddleware\026faster_web3.middleware",
    "\005\020get_dev_ipc_path\031faster_web3.providers.ipc\002w3\020middleware_onion\006inject",
    "\002\005layer\basync_w3",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0010",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {5, 1, 4, 4, 6, 7, 8, 9, 1, 11, 1, 13, 1, 18};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___auto___gethdev__internal = NULL;
CPyModule *CPyModule_faster_web3___auto___gethdev;
PyObject *CPyStatic_faster_web3___auto___gethdev___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_web3;
CPyModule *CPyModule_faster_web3___middleware;
CPyModule *CPyModule_faster_web3___providers___ipc;
PyObject *CPyStatic_faster_web3___auto___gethdev___w3 = NULL;
PyObject *CPyStatic_faster_web3___auto___gethdev___async_w3 = NULL;
char CPyDef_faster_web3___auto___gethdev_____top_level__(void);

static struct export_table_faster_web3___auto___gethdev exports = {
    &CPyStatic_faster_web3___auto___gethdev___w3,
    &CPyStatic_faster_web3___auto___gethdev___async_w3,
    &CPyDef_faster_web3___auto___gethdev_____top_level__,
};

static int exec_gethdev__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.auto.gethdev__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___auto___gethdev(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___auto___gethdev, "faster_web3.auto.gethdev__mypyc.init_faster_web3___auto___gethdev", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___auto___gethdev", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_gethdev__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.auto.gethdev__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_gethdev__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_gethdev__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_gethdev__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
