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
#include "__native_api_endpoints.h"
#include "__native_internal_api_endpoints.h"
static PyMethodDef faster_web3___beacon___api_endpointsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___beacon___api_endpoints(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___beacon___api_endpoints__internal, "__name__");
    CPyStatic_faster_web3___beacon___api_endpoints___globals = PyModule_GetDict(CPyModule_faster_web3___beacon___api_endpoints__internal);
    if (unlikely(CPyStatic_faster_web3___beacon___api_endpoints___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___beacon___api_endpoints_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___beacon___api_endpoints__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef faster_web3___beacon___api_endpointsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.beacon.api_endpoints",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___beacon___api_endpointsmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___beacon___api_endpoints(void)
{
    if (CPyModule_faster_web3___beacon___api_endpoints__internal) {
        Py_INCREF(CPyModule_faster_web3___beacon___api_endpoints__internal);
        return CPyModule_faster_web3___beacon___api_endpoints__internal;
    }
    CPyModule_faster_web3___beacon___api_endpoints__internal = PyModule_Create(&faster_web3___beacon___api_endpointsmodule);
    if (unlikely(CPyModule_faster_web3___beacon___api_endpoints__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___beacon___api_endpoints(CPyModule_faster_web3___beacon___api_endpoints__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___beacon___api_endpoints__internal;
    fail:
    return NULL;
}

char CPyDef_faster_web3___beacon___api_endpoints_____top_level__(void) {
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
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    int32_t cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    int32_t cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    int32_t cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    int32_t cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    char cpy_r_r224;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", -1, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[92]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[5]; /* 'typing' */
    cpy_r_r7 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 2, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[6]; /* '/eth/v1/beacon/genesis' */
    cpy_r_r10 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r11 = CPyStatics[7]; /* 'GET_GENESIS' */
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r10, cpy_r_r11, cpy_r_r9);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 6, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r14 = CPyStatics[8]; /* '/eth/v1/beacon/states/{0}/root' */
    cpy_r_r15 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r16 = CPyStatics[9]; /* 'GET_HASH_ROOT' */
    cpy_r_r17 = CPyDict_SetItem(cpy_r_r15, cpy_r_r16, cpy_r_r14);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 9, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r19 = CPyStatics[10]; /* '/eth/v1/beacon/states/{0}/fork' */
    cpy_r_r20 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r21 = CPyStatics[11]; /* 'GET_FORK_DATA' */
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_r21, cpy_r_r19);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 10, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r24 = CPyStatics[12]; /* '/eth/v1/beacon/states/{0}/finality_checkpoints' */
    cpy_r_r25 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r26 = CPyStatics[13]; /* 'GET_FINALITY_CHECKPOINT' */
    cpy_r_r27 = CPyDict_SetItem(cpy_r_r25, cpy_r_r26, cpy_r_r24);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 11, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r29 = CPyStatics[14]; /* '/eth/v1/beacon/states/{0}/validators' */
    cpy_r_r30 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r31 = CPyStatics[15]; /* 'GET_VALIDATORS' */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 12, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r34 = CPyStatics[16]; /* '/eth/v1/beacon/states/{0}/validators/{1}' */
    cpy_r_r35 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r36 = CPyStatics[17]; /* 'GET_VALIDATOR' */
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r35, cpy_r_r36, cpy_r_r34);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 13, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r39 = CPyStatics[18]; /* '/eth/v1/beacon/states/{0}/validator_balances' */
    cpy_r_r40 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r41 = CPyStatics[19]; /* 'GET_VALIDATOR_BALANCES' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r40, cpy_r_r41, cpy_r_r39);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 14, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r44 = CPyStatics[20]; /* '/eth/v1/beacon/states/{0}/committees' */
    cpy_r_r45 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r46 = CPyStatics[21]; /* 'GET_EPOCH_COMMITTEES' */
    cpy_r_r47 = CPyDict_SetItem(cpy_r_r45, cpy_r_r46, cpy_r_r44);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 15, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r49 = CPyStatics[22]; /* '/eth/v1/beacon/states/{0}/sync_committees' */
    cpy_r_r50 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r51 = CPyStatics[23]; /* 'GET_EPOCH_SYNC_COMMITTEES' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r49);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 16, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r54 = CPyStatics[24]; /* '/eth/v1/beacon/states/{0}/randao' */
    cpy_r_r55 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r56 = CPyStatics[25]; /* 'GET_EPOCH_RANDAO' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r54);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 17, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r59 = CPyStatics[26]; /* '/eth/v1/beacon/headers' */
    cpy_r_r60 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r61 = CPyStatics[27]; /* 'GET_BLOCK_HEADERS' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r59);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 20, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r64 = CPyStatics[28]; /* '/eth/v1/beacon/headers/{0}' */
    cpy_r_r65 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r66 = CPyStatics[29]; /* 'GET_BLOCK_HEADER' */
    cpy_r_r67 = CPyDict_SetItem(cpy_r_r65, cpy_r_r66, cpy_r_r64);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 21, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r69 = CPyStatics[30]; /* '/eth/v2/beacon/blocks/{0}' */
    cpy_r_r70 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r71 = CPyStatics[31]; /* 'GET_BLOCK' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 24, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r74 = CPyStatics[32]; /* '/eth/v1/beacon/blocks/{0}/root' */
    cpy_r_r75 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r76 = CPyStatics[33]; /* 'GET_BLOCK_ROOT' */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r75, cpy_r_r76, cpy_r_r74);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 25, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r79 = CPyStatics[34]; /* '/eth/v1/beacon/blocks/{0}/attestations' */
    cpy_r_r80 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r81 = CPyStatics[35]; /* 'GET_BLOCK_ATTESTATIONS' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r79);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 26, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r84 = CPyStatics[36]; /* '/eth/v1/beacon/blinded_blocks/{0}' */
    cpy_r_r85 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r86 = CPyStatics[37]; /* 'GET_BLINDED_BLOCKS' */
    cpy_r_r87 = CPyDict_SetItem(cpy_r_r85, cpy_r_r86, cpy_r_r84);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 27, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r89 = CPyStatics[38]; /* '/eth/v1/beacon/rewards/blocks/{0}' */
    cpy_r_r90 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r91 = CPyStatics[39]; /* 'GET_REWARDS' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r90, cpy_r_r91, cpy_r_r89);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 30, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r94 = CPyStatics[40]; /* '/eth/v1/beacon/blob_sidecars/{0}' */
    cpy_r_r95 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r96 = CPyStatics[41]; /* 'GET_BLOB_SIDECARS' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r94);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 33, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r99 = CPyStatics[42]; /* '/eth/v1/beacon/light_client/bootstrap/{0}' */
    cpy_r_r100 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r101 = CPyStatics[43]; /* 'GET_LIGHT_CLIENT_BOOTSTRAP_STRUCTURE' */
    cpy_r_r102 = CPyDict_SetItem(cpy_r_r100, cpy_r_r101, cpy_r_r99);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 36, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r104 = CPyStatics[44]; /* '/eth/v1/beacon/light_client/updates' */
    cpy_r_r105 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r106 = CPyStatics[45]; /* 'GET_LIGHT_CLIENT_UPDATES' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r105, cpy_r_r106, cpy_r_r104);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 37, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r109 = CPyStatics[46]; /* '/eth/v1/beacon/light_client/finality_update' */
    cpy_r_r110 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r111 = CPyStatics[47]; /* 'GET_LIGHT_CLIENT_FINALITY_UPDATE' */
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r110, cpy_r_r111, cpy_r_r109);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 38, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r114 = CPyStatics[48]; /* '/eth/v1/beacon/light_client/optimistic_update' */
    cpy_r_r115 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r116 = CPyStatics[49]; /* 'GET_LIGHT_CLIENT_OPTIMISTIC_UPDATE' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r115, cpy_r_r116, cpy_r_r114);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 39, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r119 = CPyStatics[50]; /* '/eth/v1/beacon/pool/attestations' */
    cpy_r_r120 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r121 = CPyStatics[51]; /* 'GET_ATTESTATIONS' */
    cpy_r_r122 = CPyDict_SetItem(cpy_r_r120, cpy_r_r121, cpy_r_r119);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 42, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r124 = CPyStatics[52]; /* '/eth/v1/beacon/pool/attester_slashings' */
    cpy_r_r125 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r126 = CPyStatics[53]; /* 'GET_ATTESTER_SLASHINGS' */
    cpy_r_r127 = CPyDict_SetItem(cpy_r_r125, cpy_r_r126, cpy_r_r124);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 43, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r129 = CPyStatics[54]; /* '/eth/v1/beacon/pool/proposer_slashings' */
    cpy_r_r130 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r131 = CPyStatics[55]; /* 'GET_PROPOSER_SLASHINGS' */
    cpy_r_r132 = CPyDict_SetItem(cpy_r_r130, cpy_r_r131, cpy_r_r129);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 44, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r134 = CPyStatics[56]; /* '/eth/v1/beacon/pool/voluntary_exits' */
    cpy_r_r135 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r136 = CPyStatics[57]; /* 'GET_VOLUNTARY_EXITS' */
    cpy_r_r137 = CPyDict_SetItem(cpy_r_r135, cpy_r_r136, cpy_r_r134);
    cpy_r_r138 = cpy_r_r137 >= 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 45, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r139 = CPyStatics[58]; /* '/eth/v1/beacon/pool/bls_to_execution_changes' */
    cpy_r_r140 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r141 = CPyStatics[59]; /* 'GET_BLS_TO_EXECUTION_CHANGES' */
    cpy_r_r142 = CPyDict_SetItem(cpy_r_r140, cpy_r_r141, cpy_r_r139);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 46, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r144 = CPyStatics[60]; /* '/eth/v1/config/fork_schedule' */
    cpy_r_r145 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r146 = CPyStatics[61]; /* 'GET_FORK_SCHEDULE' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r145, cpy_r_r146, cpy_r_r144);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 51, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r149 = CPyStatics[62]; /* '/eth/v1/config/spec' */
    cpy_r_r150 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r151 = CPyStatics[63]; /* 'GET_SPEC' */
    cpy_r_r152 = CPyDict_SetItem(cpy_r_r150, cpy_r_r151, cpy_r_r149);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 52, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r154 = CPyStatics[64]; /* '/eth/v1/config/deposit_contract' */
    cpy_r_r155 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r156 = CPyStatics[65]; /* 'GET_DEPOSIT_CONTRACT' */
    cpy_r_r157 = CPyDict_SetItem(cpy_r_r155, cpy_r_r156, cpy_r_r154);
    cpy_r_r158 = cpy_r_r157 >= 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 53, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r159 = CPyStatics[66]; /* '/eth/v1/debug/beacon/states/{0}' */
    cpy_r_r160 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r161 = CPyStatics[67]; /* 'GET_BEACON_STATE' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r160, cpy_r_r161, cpy_r_r159);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 57, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r164 = CPyStatics[68]; /* '/eth/v1/debug/beacon/heads' */
    cpy_r_r165 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r166 = CPyStatics[69]; /* 'GET_BEACON_HEADS' */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r165, cpy_r_r166, cpy_r_r164);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 58, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r169 = CPyStatics[70]; /* '/eth/v1/node/identity' */
    cpy_r_r170 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r171 = CPyStatics[71]; /* 'GET_NODE_IDENTITY' */
    cpy_r_r172 = CPyDict_SetItem(cpy_r_r170, cpy_r_r171, cpy_r_r169);
    cpy_r_r173 = cpy_r_r172 >= 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 62, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r174 = CPyStatics[72]; /* '/eth/v1/node/peers' */
    cpy_r_r175 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r176 = CPyStatics[73]; /* 'GET_PEERS' */
    cpy_r_r177 = CPyDict_SetItem(cpy_r_r175, cpy_r_r176, cpy_r_r174);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 63, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r179 = CPyStatics[74]; /* '/eth/v1/node/peers/{0}' */
    cpy_r_r180 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r181 = CPyStatics[75]; /* 'GET_PEER' */
    cpy_r_r182 = CPyDict_SetItem(cpy_r_r180, cpy_r_r181, cpy_r_r179);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 64, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r184 = CPyStatics[76]; /* '/eth/v1/node/peer_count' */
    cpy_r_r185 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r186 = CPyStatics[77]; /* 'GET_PEER_COUNT' */
    cpy_r_r187 = CPyDict_SetItem(cpy_r_r185, cpy_r_r186, cpy_r_r184);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 65, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r189 = CPyStatics[78]; /* '/eth/v1/node/health' */
    cpy_r_r190 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r191 = CPyStatics[79]; /* 'GET_HEALTH' */
    cpy_r_r192 = CPyDict_SetItem(cpy_r_r190, cpy_r_r191, cpy_r_r189);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 66, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r194 = CPyStatics[80]; /* '/eth/v1/node/version' */
    cpy_r_r195 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r196 = CPyStatics[81]; /* 'GET_VERSION' */
    cpy_r_r197 = CPyDict_SetItem(cpy_r_r195, cpy_r_r196, cpy_r_r194);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 67, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r199 = CPyStatics[82]; /* '/eth/v1/node/syncing' */
    cpy_r_r200 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r201 = CPyStatics[83]; /* 'GET_SYNCING' */
    cpy_r_r202 = CPyDict_SetItem(cpy_r_r200, cpy_r_r201, cpy_r_r199);
    cpy_r_r203 = cpy_r_r202 >= 0;
    if (unlikely(!cpy_r_r203)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 68, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r204 = CPyStatics[84]; /* '/eth/v1/validator/duties/attester/{0}' */
    cpy_r_r205 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r206 = CPyStatics[85]; /* 'GET_ATTESTER_DUTIES' */
    cpy_r_r207 = CPyDict_SetItem(cpy_r_r205, cpy_r_r206, cpy_r_r204);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 72, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r209 = CPyStatics[86]; /* '/eth/v1/validator/duties/proposer/{0}' */
    cpy_r_r210 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r211 = CPyStatics[87]; /* 'GET_BLOCK_PROPOSERS_DUTIES' */
    cpy_r_r212 = CPyDict_SetItem(cpy_r_r210, cpy_r_r211, cpy_r_r209);
    cpy_r_r213 = cpy_r_r212 >= 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 73, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r214 = CPyStatics[88]; /* '/eth/v1/validator/duties/sync/{0}' */
    cpy_r_r215 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r216 = CPyStatics[89]; /* 'GET_SYNC_COMMITTEE_DUTIES' */
    cpy_r_r217 = CPyDict_SetItem(cpy_r_r215, cpy_r_r216, cpy_r_r214);
    cpy_r_r218 = cpy_r_r217 >= 0;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 74, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    cpy_r_r219 = CPyStatics[90]; /* '/eth/v1/beacon/rewards/attestations/{0}' */
    cpy_r_r220 = CPyStatic_faster_web3___beacon___api_endpoints___globals;
    cpy_r_r221 = CPyStatics[91]; /* 'GET_ATTESTATIONS_REWARDS' */
    cpy_r_r222 = CPyDict_SetItem(cpy_r_r220, cpy_r_r221, cpy_r_r219);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("faster_web3/beacon/api_endpoints.py", "<module>", 77, CPyStatic_faster_web3___beacon___api_endpoints___globals);
        goto CPyL48;
    }
    return 1;
CPyL48: ;
    cpy_r_r224 = 2;
    return cpy_r_r224;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___beacon___api_endpoints = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[93];
const char * const CPyLit_Str[] = {
    "\005\bbuiltins\005Final\006typing\026/eth/v1/beacon/genesis\vGET_GENESIS",
    "\002\036/eth/v1/beacon/states/{0}/root\rGET_HASH_ROOT",
    "\002\036/eth/v1/beacon/states/{0}/fork\rGET_FORK_DATA",
    "\001./eth/v1/beacon/states/{0}/finality_checkpoints",
    "\002\027GET_FINALITY_CHECKPOINT$/eth/v1/beacon/states/{0}/validators",
    "\003\016GET_VALIDATORS(/eth/v1/beacon/states/{0}/validators/{1}\rGET_VALIDATOR",
    "\002,/eth/v1/beacon/states/{0}/validator_balances\026GET_VALIDATOR_BALANCES",
    "\002$/eth/v1/beacon/states/{0}/committees\024GET_EPOCH_COMMITTEES",
    "\002)/eth/v1/beacon/states/{0}/sync_committees\031GET_EPOCH_SYNC_COMMITTEES",
    "\002 /eth/v1/beacon/states/{0}/randao\020GET_EPOCH_RANDAO",
    "\003\026/eth/v1/beacon/headers\021GET_BLOCK_HEADERS\032/eth/v1/beacon/headers/{0}",
    "\003\020GET_BLOCK_HEADER\031/eth/v2/beacon/blocks/{0}\tGET_BLOCK",
    "\002\036/eth/v1/beacon/blocks/{0}/root\016GET_BLOCK_ROOT",
    "\002&/eth/v1/beacon/blocks/{0}/attestations\026GET_BLOCK_ATTESTATIONS",
    "\002!/eth/v1/beacon/blinded_blocks/{0}\022GET_BLINDED_BLOCKS",
    "\002!/eth/v1/beacon/rewards/blocks/{0}\vGET_REWARDS",
    "\002 /eth/v1/beacon/blob_sidecars/{0}\021GET_BLOB_SIDECARS",
    "\001)/eth/v1/beacon/light_client/bootstrap/{0}",
    "\001$GET_LIGHT_CLIENT_BOOTSTRAP_STRUCTURE",
    "\002#/eth/v1/beacon/light_client/updates\030GET_LIGHT_CLIENT_UPDATES",
    "\001+/eth/v1/beacon/light_client/finality_update",
    "\001 GET_LIGHT_CLIENT_FINALITY_UPDATE",
    "\001-/eth/v1/beacon/light_client/optimistic_update",
    "\002\"GET_LIGHT_CLIENT_OPTIMISTIC_UPDATE /eth/v1/beacon/pool/attestations",
    "\002\020GET_ATTESTATIONS&/eth/v1/beacon/pool/attester_slashings",
    "\002\026GET_ATTESTER_SLASHINGS&/eth/v1/beacon/pool/proposer_slashings",
    "\002\026GET_PROPOSER_SLASHINGS#/eth/v1/beacon/pool/voluntary_exits",
    "\002\023GET_VOLUNTARY_EXITS,/eth/v1/beacon/pool/bls_to_execution_changes",
    "\002\034GET_BLS_TO_EXECUTION_CHANGES\034/eth/v1/config/fork_schedule",
    "\003\021GET_FORK_SCHEDULE\023/eth/v1/config/spec\bGET_SPEC",
    "\002\037/eth/v1/config/deposit_contract\024GET_DEPOSIT_CONTRACT",
    "\002\037/eth/v1/debug/beacon/states/{0}\020GET_BEACON_STATE",
    "\003\032/eth/v1/debug/beacon/heads\020GET_BEACON_HEADS\025/eth/v1/node/identity",
    "\004\021GET_NODE_IDENTITY\022/eth/v1/node/peers\tGET_PEERS\026/eth/v1/node/peers/{0}",
    "\004\bGET_PEER\027/eth/v1/node/peer_count\016GET_PEER_COUNT\023/eth/v1/node/health",
    "\004\nGET_HEALTH\024/eth/v1/node/version\vGET_VERSION\024/eth/v1/node/syncing",
    "\003\vGET_SYNCING%/eth/v1/validator/duties/attester/{0}\023GET_ATTESTER_DUTIES",
    "\002%/eth/v1/validator/duties/proposer/{0}\032GET_BLOCK_PROPOSERS_DUTIES",
    "\002!/eth/v1/validator/duties/sync/{0}\031GET_SYNC_COMMITTEE_DUTIES",
    "\002\'/eth/v1/beacon/rewards/attestations/{0}\030GET_ATTESTATIONS_REWARDS",
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
const int CPyLit_Tuple[] = {1, 1, 4};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___beacon___api_endpoints__internal = NULL;
CPyModule *CPyModule_faster_web3___beacon___api_endpoints;
PyObject *CPyStatic_faster_web3___beacon___api_endpoints___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
char CPyDef_faster_web3___beacon___api_endpoints_____top_level__(void);

static struct export_table_faster_web3___beacon___api_endpoints exports = {
    &CPyDef_faster_web3___beacon___api_endpoints_____top_level__,
};

static int exec_api_endpoints__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.beacon.api_endpoints__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___beacon___api_endpoints(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___beacon___api_endpoints, "faster_web3.beacon.api_endpoints__mypyc.init_faster_web3___beacon___api_endpoints", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___beacon___api_endpoints", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_api_endpoints__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.beacon.api_endpoints__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_api_endpoints__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_api_endpoints__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_api_endpoints__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
