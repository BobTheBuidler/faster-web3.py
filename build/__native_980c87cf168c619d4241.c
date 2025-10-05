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
#include "__native_980c87cf168c619d4241.h"
#include "__native_internal_980c87cf168c619d4241.h"
static PyMethodDef httpmodule_methods[] = {
    {"construct_user_agent", (PyCFunction)CPyPy_http___construct_user_agent, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("construct_user_agent(module, class_name)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3____utils___http(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3____utils___http__internal, "__name__");
    CPyStatic_http___globals = PyModule_GetDict(CPyModule_faster_web3____utils___http__internal);
    if (unlikely(CPyStatic_http___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_http_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3____utils___http__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef httpmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3._utils.http",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    httpmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3____utils___http(void)
{
    if (CPyModule_faster_web3____utils___http__internal) {
        Py_INCREF(CPyModule_faster_web3____utils___http__internal);
        return CPyModule_faster_web3____utils___http__internal;
    }
    CPyModule_faster_web3____utils___http__internal = PyModule_Create(&httpmodule);
    if (unlikely(CPyModule_faster_web3____utils___http__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3____utils___http(CPyModule_faster_web3____utils___http__internal) != 0)
        goto fail;
    return CPyModule_faster_web3____utils___http__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_http___construct_user_agent(PyObject *cpy_r_module, PyObject *cpy_r_class_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    cpy_r_r0 = CPyStatics[36]; /* ('__version__',) */
    cpy_r_r1 = CPyStatics[37]; /* ('web3_version',) */
    cpy_r_r2 = CPyStatics[5]; /* 'faster_web3' */
    cpy_r_r3 = CPyStatic_http___globals;
    cpy_r_r4 = CPyImport_ImportFromMany(cpy_r_r2, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/http.py", "construct_user_agent", 11, CPyStatic_http___globals);
        goto CPyL5;
    }
    CPyModule_faster_web3 = cpy_r_r4;
    CPy_INCREF(CPyModule_faster_web3);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r5 = CPyStatics[6]; /* 'faster_web3.py/' */
    cpy_r_r6 = CPyStatic_http___globals;
    cpy_r_r7 = CPyStatics[4]; /* 'web3_version' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/http.py", "construct_user_agent", 15, CPyStatic_http___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/http.py", "construct_user_agent", 15, CPyStatic_http___globals, "str", cpy_r_r8);
        goto CPyL5;
    }
    cpy_r_r10 = CPyStatics[7]; /* '/' */
    cpy_r_r11 = CPyStatics[8]; /* '.' */
    cpy_r_r12 = CPyStr_Build(6, cpy_r_r5, cpy_r_r9, cpy_r_r10, cpy_r_module, cpy_r_r11, cpy_r_class_name);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/http.py", "construct_user_agent", 15, CPyStatic_http___globals);
        goto CPyL5;
    }
    return cpy_r_r12;
CPyL5: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
}

PyObject *CPyPy_http___construct_user_agent(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", "class_name", 0};
    static CPyArg_Parser parser = {"OO:construct_user_agent", kwlist, 0};
    PyObject *obj_module;
    PyObject *obj_class_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module, &obj_class_name)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_class_name;
    if (likely(PyUnicode_Check(obj_class_name)))
        arg_class_name = obj_class_name;
    else {
        CPy_TypeError("str", obj_class_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_http___construct_user_agent(arg_module, arg_class_name);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/http.py", "construct_user_agent", 7, CPyStatic_http___globals);
    return NULL;
}

char CPyDef_http_____top_level__(void) {
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
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[9]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/http.py", "<module>", -1, CPyStatic_http___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[38]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[11]; /* 'typing' */
    cpy_r_r7 = CPyStatic_http___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/http.py", "<module>", 1, CPyStatic_http___globals);
        goto CPyL6;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatic_http___globals;
    cpy_r_r10 = CPyStatics[12]; /* 'DEFAULT_HTTP_TIMEOUT' */
    cpy_r_r11 = PyFloat_FromDouble(30.0);
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/_utils/http.py", "<module>", 4, CPyStatic_http___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}
static PyMethodDef mathmodule_methods[] = {
    {"percentile", (PyCFunction)CPyPy_math___percentile, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("percentile(values=None, percentile=None)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3____utils___math(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3____utils___math__internal, "__name__");
    CPyStatic_math___globals = PyModule_GetDict(CPyModule_faster_web3____utils___math__internal);
    if (unlikely(CPyStatic_math___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_math_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3____utils___math__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef mathmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3._utils.math",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    mathmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3____utils___math(void)
{
    if (CPyModule_faster_web3____utils___math__internal) {
        Py_INCREF(CPyModule_faster_web3____utils___math__internal);
        return CPyModule_faster_web3____utils___math__internal;
    }
    CPyModule_faster_web3____utils___math__internal = PyModule_Create(&mathmodule);
    if (unlikely(CPyModule_faster_web3____utils___math__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3____utils___math(CPyModule_faster_web3____utils___math__internal) != 0)
        goto fail;
    return CPyModule_faster_web3____utils___math__internal;
    fail:
    return NULL;
}

double CPyDef_math___percentile(PyObject *cpy_r_values, PyObject *cpy_r_percentile) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    double cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    double cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    double cpy_r_r77;
    char cpy_r_r78;
    double cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    double cpy_r_r82;
    double cpy_r_r83;
    double cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    double cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    double cpy_r_r92;
    double cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    double cpy_r_r98;
    double cpy_r_r99;
    double cpy_r_fractional;
    char cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyTagged cpy_r_r103;
    double cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    double cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    CPyTagged cpy_r_r113;
    CPyTagged cpy_r_r114;
    double cpy_r_r115;
    char cpy_r_r116;
    double cpy_r_r117;
    double cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    double cpy_r_r121;
    PyObject *cpy_r_r122;
    double cpy_r_r123;
    if (cpy_r_values != NULL) goto CPyL84;
    cpy_r_r0 = Py_None;
    cpy_r_values = cpy_r_r0;
CPyL2: ;
    if (cpy_r_percentile != NULL) goto CPyL85;
    cpy_r_r1 = Py_None;
    cpy_r_percentile = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = (PyObject *)&PyTuple_Type;
    cpy_r_r3 = PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL86;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals, "tuple", cpy_r_r3);
        goto CPyL86;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL87;
    }
    cpy_r_r6 = Py_None;
    cpy_r_r7 = PyObject_RichCompare(cpy_r_values, cpy_r_r6, 2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL88;
    }
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL88;
    }
    cpy_r_r10 = cpy_r_r8;
    if (cpy_r_r10) goto CPyL89;
    cpy_r_r11 = PyObject_RichCompare(cpy_r_values, cpy_r_r4, 2);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL90;
    }
    cpy_r_r12 = PyObject_IsTrue(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL90;
    }
    cpy_r_r14 = cpy_r_r12;
    if (cpy_r_r14) goto CPyL91;
    cpy_r_r15 = PyObject_RichCompare(cpy_r_values, cpy_r_r5, 2);
    CPy_DECREF_NO_IMM(cpy_r_r5);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL86;
    }
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL86;
    }
    cpy_r_r18 = cpy_r_r16;
    if (cpy_r_r18) goto CPyL17;
    if (0) {
        goto CPyL92;
    } else
        goto CPyL18;
CPyL17: ;
    if (1) goto CPyL92;
CPyL18: ;
    cpy_r_r19 = CPyObject_Size(cpy_r_values);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 16, CPyStatic_math___globals);
        goto CPyL86;
    }
    cpy_r_r20 = cpy_r_r19 & 1;
    cpy_r_r21 = cpy_r_r20 != 0;
    if (cpy_r_r21) goto CPyL21;
    cpy_r_r22 = 2 & 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (!cpy_r_r23) goto CPyL22;
CPyL21: ;
    cpy_r_r24 = CPyTagged_IsLt_(cpy_r_r19, 2);
    cpy_r_r25 = cpy_r_r24;
    goto CPyL23;
CPyL22: ;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)2;
    cpy_r_r25 = cpy_r_r26;
CPyL23: ;
    CPyTagged_DECREF(cpy_r_r19);
    if (cpy_r_r25) {
        goto CPyL92;
    } else
        goto CPyL32;
CPyL24: ;
    cpy_r_r27 = CPyStatics[13]; /* '' */
    cpy_r_r28 = CPyStatics[14]; /* 'Expected a sequence of at least 1 integers, got ' */
    cpy_r_r29 = CPyStatics[15]; /* '{!r:{}}' */
    cpy_r_r30 = CPyStatics[13]; /* '' */
    cpy_r_r31 = CPyStatics[16]; /* 'format' */
    PyObject *cpy_r_r32[3] = {cpy_r_r29, cpy_r_values, cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 18, CPyStatic_math___globals);
        goto CPyL93;
    }
    CPy_DECREF(cpy_r_values);
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/math.py", "percentile", 18, CPyStatic_math___globals, "str", cpy_r_r34);
        goto CPyL83;
    }
    cpy_r_r36 = PyList_New(2);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 18, CPyStatic_math___globals);
        goto CPyL94;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    CPy_INCREF(cpy_r_r28);
    *(PyObject * *)cpy_r_r38 = cpy_r_r28;
    cpy_r_r39 = cpy_r_r38 + 8;
    *(PyObject * *)cpy_r_r39 = cpy_r_r35;
    cpy_r_r40 = PyUnicode_Join(cpy_r_r27, cpy_r_r36);
    CPy_DECREF_NO_IMM(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 18, CPyStatic_math___globals);
        goto CPyL83;
    }
    cpy_r_r41 = CPyStatic_math___globals;
    cpy_r_r42 = CPyStatics[17]; /* 'InsufficientData' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 17, CPyStatic_math___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r44[1] = {cpy_r_r40};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 1, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 17, CPyStatic_math___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_r40);
    CPy_Raise(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 17, CPyStatic_math___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_percentile == cpy_r_r47;
    if (cpy_r_r48) {
        goto CPyL96;
    } else
        goto CPyL40;
CPyL33: ;
    cpy_r_r49 = CPyStatics[18]; /* 'Expected a percentile choice, got ' */
    if (unlikely(cpy_r_percentile != Py_None)) {
        CPy_TypeError("None", cpy_r_percentile); cpy_r_r50 = 2;
    } else
        cpy_r_r50 = 1;
    CPy_DECREF(cpy_r_percentile);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 21, CPyStatic_math___globals);
        goto CPyL83;
    }
    cpy_r_r51 = Py_None;
    cpy_r_r52 = PyObject_Str(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 21, CPyStatic_math___globals);
        goto CPyL83;
    }
    cpy_r_r53 = CPyStr_Build(2, cpy_r_r49, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 21, CPyStatic_math___globals);
        goto CPyL83;
    }
    cpy_r_r54 = CPyStatic_math___globals;
    cpy_r_r55 = CPyStatics[19]; /* 'Web3ValueError' */
    cpy_r_r56 = CPyDict_GetItem(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 21, CPyStatic_math___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r57[1] = {cpy_r_r53};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = PyObject_Vectorcall(cpy_r_r56, cpy_r_r58, 1, 0);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 21, CPyStatic_math___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r53);
    CPy_Raise(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 21, CPyStatic_math___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r60 = PyFloat_AsDouble(cpy_r_percentile);
    if (cpy_r_r60 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_percentile); cpy_r_r60 = -113.0;
    }
    cpy_r_r61 = cpy_r_r60 == -113.0;
    if (unlikely(cpy_r_r61)) goto CPyL42;
CPyL41: ;
    cpy_r_r62 = cpy_r_r60 < 0.0;
    if (cpy_r_r62) {
        goto CPyL98;
    } else
        goto CPyL43;
CPyL42: ;
    cpy_r_r63 = PyErr_Occurred();
    if (unlikely(cpy_r_r63 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 22, CPyStatic_math___globals);
        goto CPyL86;
    } else
        goto CPyL41;
CPyL43: ;
    cpy_r_r64 = PyFloat_AsDouble(cpy_r_percentile);
    if (cpy_r_r64 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_percentile); cpy_r_r64 = -113.0;
    }
    cpy_r_r65 = cpy_r_r64 == -113.0;
    if (unlikely(cpy_r_r65)) goto CPyL45;
CPyL44: ;
    cpy_r_r66 = cpy_r_r64 > 100.0;
    if (cpy_r_r66) {
        goto CPyL98;
    } else
        goto CPyL50;
CPyL45: ;
    cpy_r_r67 = PyErr_Occurred();
    if (unlikely(cpy_r_r67 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 22, CPyStatic_math___globals);
        goto CPyL86;
    } else
        goto CPyL44;
CPyL46: ;
    cpy_r_r68 = CPyStatics[20]; /* 'percentile must be in the range [0, 100]' */
    cpy_r_r69 = CPyStatic_math___globals;
    cpy_r_r70 = CPyStatics[19]; /* 'Web3ValueError' */
    cpy_r_r71 = CPyDict_GetItem(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 23, CPyStatic_math___globals);
        goto CPyL83;
    }
    PyObject *cpy_r_r72[1] = {cpy_r_r68};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = PyObject_Vectorcall(cpy_r_r71, cpy_r_r73, 1, 0);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 23, CPyStatic_math___globals);
        goto CPyL83;
    }
    CPy_Raise(cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 23, CPyStatic_math___globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r75 = CPySequence_Sort(cpy_r_values);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 25, CPyStatic_math___globals);
        goto CPyL86;
    }
    cpy_r_r76 = CPyObject_Size(cpy_r_values);
    CPy_DECREF(cpy_r_values);
    if (unlikely(cpy_r_r76 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 27, CPyStatic_math___globals);
        goto CPyL99;
    }
    cpy_r_r77 = PyFloat_AsDouble(cpy_r_percentile);
    if (cpy_r_r77 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_percentile); cpy_r_r77 = -113.0;
    }
    CPy_DECREF(cpy_r_percentile);
    cpy_r_r78 = cpy_r_r77 == -113.0;
    if (unlikely(cpy_r_r78)) goto CPyL54;
CPyL53: ;
    cpy_r_r79 = CPyFloat_FromTagged(cpy_r_r76);
    CPyTagged_DECREF(cpy_r_r76);
    cpy_r_r80 = cpy_r_r79 == -113.0;
    if (unlikely(cpy_r_r80)) {
        goto CPyL56;
    } else
        goto CPyL55;
CPyL54: ;
    cpy_r_r81 = PyErr_Occurred();
    if (unlikely(cpy_r_r81 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 27, CPyStatic_math___globals);
        goto CPyL100;
    } else
        goto CPyL53;
CPyL55: ;
    cpy_r_r82 = cpy_r_r79 * cpy_r_r77;
    cpy_r_r83 = cpy_r_r82 / 100.0;
    cpy_r_r84 = cpy_r_r83 - 1.0;
    cpy_r_r85 = cpy_r_r84 < 0.0;
    if (cpy_r_r85) {
        goto CPyL57;
    } else
        goto CPyL62;
CPyL56: ;
    cpy_r_r86 = PyErr_Occurred();
    if (unlikely(cpy_r_r86 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 27, CPyStatic_math___globals);
        goto CPyL101;
    } else
        goto CPyL55;
CPyL57: ;
    cpy_r_r87 = CPyList_GetItemShort(cpy_r_r75, 0);
    CPy_DECREF_NO_IMM(cpy_r_r75);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 29, CPyStatic_math___globals);
        goto CPyL83;
    }
    if (likely(PyLong_Check(cpy_r_r87)))
        cpy_r_r88 = CPyTagged_FromObject(cpy_r_r87);
    else {
        CPy_TypeError("int", cpy_r_r87); cpy_r_r88 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 29, CPyStatic_math___globals);
        goto CPyL83;
    }
    cpy_r_r89 = CPyFloat_FromTagged(cpy_r_r88);
    CPyTagged_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 == -113.0;
    if (unlikely(cpy_r_r90)) goto CPyL61;
CPyL60: ;
    return cpy_r_r89;
CPyL61: ;
    cpy_r_r91 = PyErr_Occurred();
    if (unlikely(cpy_r_r91 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 29, CPyStatic_math___globals);
        goto CPyL83;
    } else
        goto CPyL60;
CPyL62: ;
    cpy_r_r92 = fmod(cpy_r_r84, 1.0);
    cpy_r_r93 = cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 == 0.0;
    if (cpy_r_r94) goto CPyL65;
    cpy_r_r95 = cpy_r_r84 < 0.0;
    cpy_r_r96 = 1.0 < 0.0;
    cpy_r_r97 = cpy_r_r95 == cpy_r_r96;
    if (cpy_r_r97) goto CPyL66;
    cpy_r_r98 = cpy_r_r93 + 1.0;
    cpy_r_r93 = cpy_r_r98;
    goto CPyL66;
CPyL65: ;
    cpy_r_r99 = copysign(0.0, 1.0);
    cpy_r_r93 = cpy_r_r99;
CPyL66: ;
    cpy_r_fractional = cpy_r_r93;
    cpy_r_r100 = cpy_r_fractional == 0.0;
    if (!cpy_r_r100) goto CPyL73;
    cpy_r_r101 = CPyTagged_FromFloat(cpy_r_r84);
    if (unlikely(cpy_r_r101 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 33, CPyStatic_math___globals);
        goto CPyL101;
    }
    cpy_r_r102 = CPyList_GetItem(cpy_r_r75, cpy_r_r101);
    CPy_DECREF_NO_IMM(cpy_r_r75);
    CPyTagged_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 33, CPyStatic_math___globals);
        goto CPyL83;
    }
    if (likely(PyLong_Check(cpy_r_r102)))
        cpy_r_r103 = CPyTagged_FromObject(cpy_r_r102);
    else {
        CPy_TypeError("int", cpy_r_r102); cpy_r_r103 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 33, CPyStatic_math___globals);
        goto CPyL83;
    }
    cpy_r_r104 = CPyFloat_FromTagged(cpy_r_r103);
    CPyTagged_DECREF(cpy_r_r103);
    cpy_r_r105 = cpy_r_r104 == -113.0;
    if (unlikely(cpy_r_r105)) goto CPyL72;
CPyL71: ;
    return cpy_r_r104;
CPyL72: ;
    cpy_r_r106 = PyErr_Occurred();
    if (unlikely(cpy_r_r106 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 33, CPyStatic_math___globals);
        goto CPyL83;
    } else
        goto CPyL71;
CPyL73: ;
    cpy_r_r107 = cpy_r_r84 - cpy_r_fractional;
    cpy_r_r108 = CPyTagged_FromFloat(cpy_r_r107);
    if (unlikely(cpy_r_r108 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 35, CPyStatic_math___globals);
        goto CPyL101;
    }
    cpy_r_r109 = CPyList_GetItem(cpy_r_r75, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 36, CPyStatic_math___globals);
        goto CPyL102;
    }
    if (likely(PyLong_Check(cpy_r_r109)))
        cpy_r_r110 = CPyTagged_FromObject(cpy_r_r109);
    else {
        CPy_TypeError("int", cpy_r_r109); cpy_r_r110 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 36, CPyStatic_math___globals);
        goto CPyL102;
    }
    cpy_r_r111 = CPyTagged_Add(cpy_r_r108, 2);
    CPyTagged_DECREF(cpy_r_r108);
    cpy_r_r112 = CPyList_GetItem(cpy_r_r75, cpy_r_r111);
    CPy_DECREF_NO_IMM(cpy_r_r75);
    CPyTagged_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 37, CPyStatic_math___globals);
        goto CPyL103;
    }
    if (likely(PyLong_Check(cpy_r_r112)))
        cpy_r_r113 = CPyTagged_FromObject(cpy_r_r112);
    else {
        CPy_TypeError("int", cpy_r_r112); cpy_r_r113 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 37, CPyStatic_math___globals);
        goto CPyL103;
    }
    cpy_r_r114 = CPyTagged_Subtract(cpy_r_r113, cpy_r_r110);
    CPyTagged_DECREF(cpy_r_r113);
    cpy_r_r115 = CPyFloat_FromTagged(cpy_r_r114);
    CPyTagged_DECREF(cpy_r_r114);
    cpy_r_r116 = cpy_r_r115 == -113.0;
    if (unlikely(cpy_r_r116)) goto CPyL80;
CPyL79: ;
    cpy_r_r117 = cpy_r_fractional * cpy_r_r115;
    cpy_r_r118 = CPyFloat_FromTagged(cpy_r_r110);
    CPyTagged_DECREF(cpy_r_r110);
    cpy_r_r119 = cpy_r_r118 == -113.0;
    if (unlikely(cpy_r_r119)) {
        goto CPyL82;
    } else
        goto CPyL81;
CPyL80: ;
    cpy_r_r120 = PyErr_Occurred();
    if (unlikely(cpy_r_r120 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 38, CPyStatic_math___globals);
        goto CPyL103;
    } else
        goto CPyL79;
CPyL81: ;
    cpy_r_r121 = cpy_r_r118 + cpy_r_r117;
    return cpy_r_r121;
CPyL82: ;
    cpy_r_r122 = PyErr_Occurred();
    if (unlikely(cpy_r_r122 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 38, CPyStatic_math___globals);
    } else
        goto CPyL81;
CPyL83: ;
    cpy_r_r123 = -113.0;
    return cpy_r_r123;
CPyL84: ;
    CPy_INCREF(cpy_r_values);
    goto CPyL2;
CPyL85: ;
    CPy_INCREF(cpy_r_percentile);
    goto CPyL4;
CPyL86: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_percentile);
    goto CPyL83;
CPyL87: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_percentile);
    CPy_DecRef(cpy_r_r4);
    goto CPyL83;
CPyL88: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_percentile);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL83;
CPyL89: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF_NO_IMM(cpy_r_r5);
    goto CPyL17;
CPyL90: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_percentile);
    CPy_DecRef(cpy_r_r5);
    goto CPyL83;
CPyL91: ;
    CPy_DECREF_NO_IMM(cpy_r_r5);
    goto CPyL17;
CPyL92: ;
    CPy_DECREF(cpy_r_percentile);
    goto CPyL24;
CPyL93: ;
    CPy_DecRef(cpy_r_values);
    goto CPyL83;
CPyL94: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL83;
CPyL95: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL83;
CPyL96: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL33;
CPyL97: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL83;
CPyL98: ;
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_percentile);
    goto CPyL46;
CPyL99: ;
    CPy_DecRef(cpy_r_percentile);
    CPy_DecRef(cpy_r_r75);
    goto CPyL83;
CPyL100: ;
    CPy_DecRef(cpy_r_r75);
    CPyTagged_DecRef(cpy_r_r76);
    goto CPyL83;
CPyL101: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL83;
CPyL102: ;
    CPy_DecRef(cpy_r_r75);
    CPyTagged_DecRef(cpy_r_r108);
    goto CPyL83;
CPyL103: ;
    CPyTagged_DecRef(cpy_r_r110);
    goto CPyL83;
}

PyObject *CPyPy_math___percentile(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"values", "percentile", 0};
    static CPyArg_Parser parser = {"|OO:percentile", kwlist, 0};
    PyObject *obj_values = NULL;
    PyObject *obj_percentile = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_values, &obj_percentile)) {
        return NULL;
    }
    PyObject *arg_values;
    if (obj_values == NULL) {
        arg_values = NULL;
        goto __LL1;
    }
    arg_values = obj_values;
    if (arg_values != NULL) goto __LL1;
    if (obj_values == Py_None)
        arg_values = obj_values;
    else {
        arg_values = NULL;
    }
    if (arg_values != NULL) goto __LL1;
    CPy_TypeError("object or None", obj_values); 
    goto fail;
__LL1: ;
    PyObject *arg_percentile;
    if (obj_percentile == NULL) {
        arg_percentile = NULL;
        goto __LL2;
    }
    if (CPyFloat_Check(obj_percentile))
        arg_percentile = obj_percentile;
    else {
        arg_percentile = NULL;
    }
    if (arg_percentile != NULL) goto __LL2;
    if (obj_percentile == Py_None)
        arg_percentile = obj_percentile;
    else {
        arg_percentile = NULL;
    }
    if (arg_percentile != NULL) goto __LL2;
    CPy_TypeError("float or None", obj_percentile); 
    goto fail;
__LL2: ;
    double retval = CPyDef_math___percentile(arg_values, arg_percentile);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/math.py", "percentile", 12, CPyStatic_math___globals);
    return NULL;
}

char CPyDef_math_____top_level__(void) {
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
    char cpy_r_r13;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[9]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "<module>", -1, CPyStatic_math___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[39]; /* ('Optional', 'Sequence') */
    cpy_r_r6 = CPyStatics[11]; /* 'typing' */
    cpy_r_r7 = CPyStatic_math___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "<module>", 1, CPyStatic_math___globals);
        goto CPyL6;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[40]; /* ('InsufficientData', 'Web3ValueError') */
    cpy_r_r10 = CPyStatics[23]; /* 'faster_web3.exceptions' */
    cpy_r_r11 = CPyStatic_math___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/math.py", "<module>", 6, CPyStatic_math___globals);
        goto CPyL6;
    }
    CPyModule_faster_web3___exceptions = cpy_r_r12;
    CPy_INCREF(CPyModule_faster_web3___exceptions);
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL6: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}
static PyMethodDef type_conversionmodule_methods[] = {
    {"to_hex_if_bytes", (PyCFunction)CPyPy_type_conversion___to_hex_if_bytes, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("to_hex_if_bytes(val)\n--\n\n") /* docstring */},
    {"to_bytes_if_hex", (PyCFunction)CPyPy_type_conversion___to_bytes_if_hex, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("to_bytes_if_hex(val)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3____utils___type_conversion(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3____utils___type_conversion__internal, "__name__");
    CPyStatic_type_conversion___globals = PyModule_GetDict(CPyModule_faster_web3____utils___type_conversion__internal);
    if (unlikely(CPyStatic_type_conversion___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_type_conversion_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3____utils___type_conversion__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_type_conversion___to_bytes);
    CPyStatic_type_conversion___to_bytes = NULL;
    CPy_XDECREF(CPyStatic_type_conversion___to_hex);
    CPyStatic_type_conversion___to_hex = NULL;
    return -1;
}
static struct PyModuleDef type_conversionmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3._utils.type_conversion",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    type_conversionmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3____utils___type_conversion(void)
{
    if (CPyModule_faster_web3____utils___type_conversion__internal) {
        Py_INCREF(CPyModule_faster_web3____utils___type_conversion__internal);
        return CPyModule_faster_web3____utils___type_conversion__internal;
    }
    CPyModule_faster_web3____utils___type_conversion__internal = PyModule_Create(&type_conversionmodule);
    if (unlikely(CPyModule_faster_web3____utils___type_conversion__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3____utils___type_conversion(CPyModule_faster_web3____utils___type_conversion__internal) != 0)
        goto fail;
    return CPyModule_faster_web3____utils___type_conversion__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_type_conversion___to_hex_if_bytes(PyObject *cpy_r_val) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T2OO cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = PyUnicode_Check(cpy_r_val);
    if (!cpy_r_r0) goto CPyL19;
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r1 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 26, CPyStatic_type_conversion___globals, "str", cpy_r_val);
        goto CPyL34;
    }
    cpy_r_r2 = CPyStatics[24]; /* '0x' */
    cpy_r_r3 = CPyStr_Startswith(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3;
    if (cpy_r_r4) goto CPyL12;
    cpy_r_r5 = CPyStatics[13]; /* '' */
    cpy_r_r6 = CPyStatics[25]; /* 'Expected a hex string. Got: ' */
    cpy_r_r7 = CPyStatics[15]; /* '{!r:{}}' */
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r8 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals, "str", cpy_r_val);
        goto CPyL34;
    }
    cpy_r_r9 = CPyStatics[13]; /* '' */
    cpy_r_r10 = CPyStatics[16]; /* 'format' */
    PyObject *cpy_r_r11[3] = {cpy_r_r7, cpy_r_r8, cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r8);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals, "str", cpy_r_r13);
        goto CPyL34;
    }
    cpy_r_r15 = PyList_New(2);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals);
        goto CPyL36;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r17 = cpy_r_r6;
    cpy_r_r18 = cpy_r_r17 + 8;
    *(PyObject * *)cpy_r_r18 = cpy_r_r14;
    cpy_r_r19 = PyUnicode_Join(cpy_r_r5, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r15);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    cpy_r_r20 = CPyStatic_type_conversion___globals;
    cpy_r_r21 = CPyStatics[19]; /* 'Web3ValueError' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r23[1] = {cpy_r_r19};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r19);
    CPy_Raise(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 27, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL12: ;
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r26 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 28, CPyStatic_type_conversion___globals, "str", cpy_r_val);
        goto CPyL34;
    }
    cpy_r_r27 = CPyStatic_type_conversion___to_hex;
    if (unlikely(cpy_r_r27 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_hex\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 28, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL16: ;
    PyObject *cpy_r_r29[1] = {cpy_r_r26};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = CPyStatics[41]; /* ('hexstr',) */
    cpy_r_r32 = PyObject_Vectorcall(cpy_r_r27, cpy_r_r30, 0, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 28, CPyStatic_type_conversion___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r26);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 28, CPyStatic_type_conversion___globals, "str", cpy_r_r32);
        goto CPyL34;
    }
    return cpy_r_r33;
CPyL19: ;
    cpy_r_r34 = (PyObject *)&PyBytes_Type;
    cpy_r_r35 = CPyModule_builtins;
    cpy_r_r36 = CPyStatics[27]; /* 'bytearray' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 30, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r34);
    cpy_r_r38.f0 = cpy_r_r34;
    cpy_r_r38.f1 = cpy_r_r37;
    cpy_r_r39 = PyTuple_New(2);
    if (unlikely(cpy_r_r39 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r38.f0;
    PyTuple_SET_ITEM(cpy_r_r39, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r38.f1;
    PyTuple_SET_ITEM(cpy_r_r39, 1, __tmp4);
    cpy_r_r40 = PyObject_IsInstance(cpy_r_val, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 30, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    cpy_r_r42 = cpy_r_r40;
    if (!cpy_r_r42) goto CPyL27;
    cpy_r_r43 = CPyStatic_type_conversion___to_hex;
    if (likely(cpy_r_r43 != NULL)) goto CPyL25;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_hex\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 30, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL25: ;
    PyObject *cpy_r_r45[1] = {cpy_r_val};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = PyObject_Vectorcall(cpy_r_r43, cpy_r_r46, 1, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 30, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    cpy_r_r48 = cpy_r_r47;
    goto CPyL32;
CPyL27: ;
    cpy_r_r49 = CPyStatic_type_conversion___to_hex;
    if (likely(cpy_r_r49 != NULL)) goto CPyL30;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_hex\" was not set");
    cpy_r_r50 = 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 30, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL30: ;
    PyObject *cpy_r_r51[1] = {cpy_r_val};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = CPyStatics[41]; /* ('hexstr',) */
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r52, 0, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 30, CPyStatic_type_conversion___globals);
        goto CPyL34;
    }
    cpy_r_r48 = cpy_r_r54;
CPyL32: ;
    if (likely(PyUnicode_Check(cpy_r_r48)))
        cpy_r_r55 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 30, CPyStatic_type_conversion___globals, "str", cpy_r_r48);
        goto CPyL34;
    }
    return cpy_r_r55;
CPyL34: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL35: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL14;
CPyL39: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL34;
}

PyObject *CPyPy_type_conversion___to_hex_if_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"val", 0};
    static CPyArg_Parser parser = {"O:to_hex_if_bytes", kwlist, 0};
    PyObject *obj_val;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_val)) {
        return NULL;
    }
    PyObject *arg_val;
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL5;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL5;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL5;
    CPy_TypeError("union[str, bytes, object]", obj_val); 
    goto fail;
__LL5: ;
    PyObject *retval = CPyDef_type_conversion___to_hex_if_bytes(arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_hex_if_bytes", 20, CPyStatic_type_conversion___globals);
    return NULL;
}

PyObject *CPyDef_type_conversion___to_bytes_if_hex(PyObject *cpy_r_val) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = PyUnicode_Check(cpy_r_val);
    if (!cpy_r_r0) goto CPyL7;
    CPy_INCREF(cpy_r_val);
    if (likely(PyUnicode_Check(cpy_r_val)))
        cpy_r_r1 = cpy_r_val;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_bytes_if_hex", 38, CPyStatic_type_conversion___globals, "str", cpy_r_val);
        goto CPyL10;
    }
    cpy_r_r2 = CPyStatic_type_conversion___to_bytes;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL11;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_bytes\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_bytes_if_hex", 38, CPyStatic_type_conversion___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL5: ;
    PyObject *cpy_r_r4[1] = {cpy_r_r1};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = CPyStatics[41]; /* ('hexstr',) */
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 0, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_bytes_if_hex", 38, CPyStatic_type_conversion___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r8 = cpy_r_r7;
    goto CPyL8;
CPyL7: ;
    CPy_INCREF(cpy_r_val);
    cpy_r_r8 = cpy_r_val;
CPyL8: ;
    if (likely(PyBytes_Check(cpy_r_r8) || PyByteArray_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/type_conversion.py", "to_bytes_if_hex", 38, CPyStatic_type_conversion___globals, "bytes", cpy_r_r8);
        goto CPyL10;
    }
    return cpy_r_r9;
CPyL10: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
}

PyObject *CPyPy_type_conversion___to_bytes_if_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"val", 0};
    static CPyArg_Parser parser = {"O:to_bytes_if_hex", kwlist, 0};
    PyObject *obj_val;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_val)) {
        return NULL;
    }
    PyObject *arg_val;
    if (PyUnicode_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL6;
    if (PyBytes_Check(obj_val) || PyByteArray_Check(obj_val))
        arg_val = obj_val;
    else {
        arg_val = NULL;
    }
    if (arg_val != NULL) goto __LL6;
    arg_val = obj_val;
    if (arg_val != NULL) goto __LL6;
    CPy_TypeError("union[str, bytes, object]", obj_val); 
    goto fail;
__LL6: ;
    PyObject *retval = CPyDef_type_conversion___to_bytes_if_hex(arg_val);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "to_bytes_if_hex", 33, CPyStatic_type_conversion___globals);
    return NULL;
}

char CPyDef_type_conversion_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[9]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", -1, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[42]; /* ('Final', 'Union') */
    cpy_r_r6 = CPyStatics[11]; /* 'typing' */
    cpy_r_r7 = CPyStatic_type_conversion___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 1, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_eth_utils;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {6};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[44]; /* (('eth_utils', 'eth_utils', 'eth_utils'),) */
    cpy_r_r15 = CPyStatic_type_conversion___globals;
    cpy_r_r16 = CPyStatics[30]; /* 'faster_web3/_utils/type_conversion.py' */
    cpy_r_r17 = CPyStatics[31]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL14;
    cpy_r_r19 = CPyStatics[45]; /* ('HexStr',) */
    cpy_r_r20 = CPyStatics[33]; /* 'eth_typing' */
    cpy_r_r21 = CPyStatic_type_conversion___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 7, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    CPyModule_eth_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[46]; /* ('Web3ValueError',) */
    cpy_r_r24 = CPyStatics[23]; /* 'faster_web3.exceptions' */
    cpy_r_r25 = CPyStatic_type_conversion___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 11, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    CPyModule_faster_web3___exceptions = cpy_r_r26;
    CPy_INCREF(CPyModule_faster_web3___exceptions);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatic_type_conversion___globals;
    cpy_r_r28 = CPyStatics[29]; /* 'eth_utils' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 16, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    cpy_r_r30 = CPyStatics[34]; /* 'to_bytes' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 16, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    CPyStatic_type_conversion___to_bytes = cpy_r_r31;
    CPy_INCREF(CPyStatic_type_conversion___to_bytes);
    cpy_r_r32 = CPyStatic_type_conversion___globals;
    cpy_r_r33 = CPyStatics[34]; /* 'to_bytes' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 16, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    cpy_r_r36 = CPyStatic_type_conversion___globals;
    cpy_r_r37 = CPyStatics[29]; /* 'eth_utils' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 17, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    cpy_r_r39 = CPyStatics[35]; /* 'to_hex' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 17, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    CPyStatic_type_conversion___to_hex = cpy_r_r40;
    CPy_INCREF(CPyStatic_type_conversion___to_hex);
    cpy_r_r41 = CPyStatic_type_conversion___globals;
    cpy_r_r42 = CPyStatics[35]; /* 'to_hex' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r41, cpy_r_r42, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("faster_web3/_utils/type_conversion.py", "<module>", 17, CPyStatic_type_conversion___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3____utils___http = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_web3 = Py_None;
    CPyModule_faster_web3____utils___math = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_web3___exceptions = Py_None;
    CPyModule_faster_web3____utils___type_conversion = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_utils = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_web3___exceptions = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[47];
const char * const CPyLit_Str[] = {
    "\a\v__version__\fweb3_version\vfaster_web3\017faster_web3.py/\001/\001.\bbuiltins",
    "\004\005Final\006typing\024DEFAULT_HTTP_TIMEOUT\000",
    "\0030Expected a sequence of at least 1 integers, got \a{!r:{}}\006format",
    "\003\020InsufficientData\"Expected a percentile choice, got \016Web3ValueError",
    "\003(percentile must be in the range [0, 100]\bOptional\bSequence",
    "\004\026faster_web3.exceptions\0020x\034Expected a hex string. Got: \006hexstr",
    "\004\tbytearray\005Union\teth_utils%faster_web3/_utils/type_conversion.py",
    "\005\b<module>\006HexStr\neth_typing\bto_bytes\006to_hex",
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
const int CPyLit_Tuple[] = {
    11, 1, 3, 1, 4, 1, 10, 2, 21, 22, 2, 17, 19, 1, 26, 2, 10, 28, 3,
    29, 29, 29, 1, 43, 1, 32, 1, 19
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3____utils___http__internal = NULL;
CPyModule *CPyModule_faster_web3____utils___http;
PyObject *CPyStatic_http___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_web3;
CPyModule *CPyModule_faster_web3____utils___math__internal = NULL;
CPyModule *CPyModule_faster_web3____utils___math;
PyObject *CPyStatic_math___globals;
CPyModule *CPyModule_faster_web3___exceptions;
CPyModule *CPyModule_faster_web3____utils___type_conversion__internal = NULL;
CPyModule *CPyModule_faster_web3____utils___type_conversion;
PyObject *CPyStatic_type_conversion___globals;
CPyModule *CPyModule_eth_utils;
CPyModule *CPyModule_eth_typing;
PyObject *CPyDef_http___construct_user_agent(PyObject *cpy_r_module, PyObject *cpy_r_class_name);
PyObject *CPyPy_http___construct_user_agent(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_http_____top_level__(void);
double CPyDef_math___percentile(PyObject *cpy_r_values, PyObject *cpy_r_percentile);
PyObject *CPyPy_math___percentile(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_math_____top_level__(void);
PyObject *CPyStatic_type_conversion___to_bytes = NULL;
PyObject *CPyStatic_type_conversion___to_hex = NULL;
PyObject *CPyDef_type_conversion___to_hex_if_bytes(PyObject *cpy_r_val);
PyObject *CPyPy_type_conversion___to_hex_if_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_type_conversion___to_bytes_if_hex(PyObject *cpy_r_val);
PyObject *CPyPy_type_conversion___to_bytes_if_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_type_conversion_____top_level__(void);

static int exec_980c87cf168c619d4241__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    extern PyObject *CPyInit_faster_web3____utils___http(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3____utils___http, "980c87cf168c619d4241__mypyc.init_faster_web3____utils___http", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3____utils___http", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3____utils___math(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3____utils___math, "980c87cf168c619d4241__mypyc.init_faster_web3____utils___math", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3____utils___math", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3____utils___type_conversion(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3____utils___type_conversion, "980c87cf168c619d4241__mypyc.init_faster_web3____utils___type_conversion", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3____utils___type_conversion", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_980c87cf168c619d4241__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "980c87cf168c619d4241__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_980c87cf168c619d4241__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_980c87cf168c619d4241__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_980c87cf168c619d4241__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
