#ifndef MYPYC_NATIVE_faster_web3___providers___eth_tester___main_H
#define MYPYC_NATIVE_faster_web3___providers___eth_tester___main_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    tuple_T2OO __middleware;
    PyObject *_ethereum_tester;
    PyObject *_api_endpoints;
    CPyTagged __current_request_id;
} faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    tuple_T2OO __middleware;
    PyObject *_ethereum_tester;
    PyObject *_api_endpoints;
    CPyTagged __current_request_id;
} faster_web3___providers___eth_tester___main___EthereumTesterProviderObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__middleware_onion;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__middleware;
    PyObject *___mypyc_generator_attribute__cache_key;
    PyObject *___mypyc_generator_attribute__func;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
} faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__method;
    PyObject *___mypyc_generator_attribute__params;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__response;
} faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    char ___mypyc_generator_attribute__show_traceback;
    int32_t ___mypyc_next_label__;
} faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_ethereum_tester;
    char _None;
    PyObject *_make_tester;
    PyObject *_import_endpoints;
    PyObject *_self;
    PyObject *_api_endpoints;
} faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject;


struct export_table_faster_web3___providers___eth_tester___main {
    tuple_T2OO *CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware;
    tuple_T2OO *CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider)(void);
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider)(PyObject *cpy_r_ethereum_tester, PyObject *cpy_r_api_endpoints);
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject **faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject **faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject **faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject **faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject **faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject **faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance;
    char (*CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func)(PyObject *cpy_r_self, PyObject *cpy_r_async_w3, PyObject *cpy_r_middleware_onion);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request)(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected)(PyObject *cpy_r_self, char cpy_r_show_traceback);
    char (*CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_ethereum_tester, PyObject *cpy_r_api_endpoints);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func)(PyObject *cpy_r_self, PyObject *cpy_r_w3, PyObject *cpy_r_middleware_onion);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request)(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
    char (*CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected)(PyObject *cpy_r_self, char cpy_r_show_traceback);
    char (*CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main____make_response)(PyObject *cpy_r_result, PyObject *cpy_r_response_id, PyObject *cpy_r_message);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___main____make_request)(PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_api_endpoints, PyObject *cpy_r_ethereum_tester_instance, PyObject *cpy_r_request_id);
    char (*CPyDef_faster_web3___providers___eth_tester___main_____top_level__)(void);
};
#endif
