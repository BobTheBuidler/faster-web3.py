#ifndef MYPYC_NATIVE_faster_web3____utils___caching___caching_utils_H
#define MYPYC_NATIVE_faster_web3____utils___caching___caching_utils_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_method;
    PyObject *_params;
    tuple_T3OOO _response_formatters;
    PyObject *_subscription_id;
    PyObject *_middleware_response_processors;
} faster_web3____utils___caching___caching_utils___RequestInformationObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_func;
    PyObject *_wrapper;
} faster_web3____utils___caching___caching_utils___handle_request_caching_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__provider;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__current_threshold;
    char ___mypyc_generator_attribute__cache_allowed_requests;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__chain_id_result;
    CPyTagged ___mypyc_generator_attribute__chain_id;
    tuple_T3OOO ___mypyc_temp__2;
} faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute__method;
    PyObject *___mypyc_generator_attribute__params;
    PyObject *___mypyc_generator_attribute__response;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__result;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_generator_attribute__cache_validator;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
} faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_func;
    PyObject *_wrapper;
} faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute__method;
    PyObject *___mypyc_generator_attribute__params;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    PyObject **_stop_iter_ptr;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__request_cache;
    PyObject *___mypyc_generator_attribute__cache_key;
    PyObject *___mypyc_generator_attribute__cache_result;
    PyObject *___mypyc_temp__7;
    tuple_T3OOO ___mypyc_temp__8;
    PyObject *___mypyc_generator_attribute__response;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
    PyObject *___mypyc_temp__11;
    PyObject *___mypyc_temp__12;
    char ___mypyc_temp__13;
    PyObject *___mypyc_temp__14;
    tuple_T3OOO ___mypyc_temp__15;
    tuple_T3OOO ___mypyc_temp__16;
    PyObject *___mypyc_temp__17;
    tuple_T3OOO ___mypyc_temp__18;
    PyObject *___mypyc_temp__19;
    tuple_T3OOO ___mypyc_temp__20;
    PyObject *___mypyc_temp__21;
    tuple_T3OOO ___mypyc_temp__22;
} faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_func;
    PyObject *_wrapper;
} faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute__method;
    PyObject *___mypyc_generator_attribute__params;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    PyObject **_stop_iter_ptr;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__request_cache;
    PyObject *___mypyc_generator_attribute__cache_key;
    PyObject *___mypyc_generator_attribute__cached_response;
    PyObject *___mypyc_temp__23;
    tuple_T3OOO ___mypyc_temp__24;
} faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_func;
    PyObject *_wrapper;
} faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute__rpc_request;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    PyObject **_stop_iter_ptr;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__method;
    PyObject *___mypyc_generator_attribute__params;
    PyObject *___mypyc_generator_attribute__request_cache;
    PyObject *___mypyc_generator_attribute__cache_key;
    PyObject *___mypyc_generator_attribute__cache_result;
    PyObject *___mypyc_temp__25;
    tuple_T3OOO ___mypyc_temp__26;
    PyObject *___mypyc_generator_attribute__response;
    PyObject *___mypyc_temp__27;
    tuple_T3OOO ___mypyc_temp__28;
    PyObject *___mypyc_temp__29;
    PyObject *___mypyc_temp__30;
    char ___mypyc_temp__31;
    PyObject *___mypyc_temp__32;
    tuple_T3OOO ___mypyc_temp__33;
    tuple_T3OOO ___mypyc_temp__34;
    PyObject *___mypyc_temp__35;
    tuple_T3OOO ___mypyc_temp__36;
    PyObject *___mypyc_temp__37;
    tuple_T3OOO ___mypyc_temp__38;
    PyObject *___mypyc_temp__39;
    tuple_T3OOO ___mypyc_temp__40;
} faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object;


struct export_table_faster_web3____utils___caching___caching_utils {
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___md5;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___get_ident;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___is_dict;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___is_null;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___is_number;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___is_text;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___CACHEABLE_REQUESTS;
    PyObject **CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___RequestInformation;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation)(PyObject *cpy_r_method, PyObject *cpy_r_params, tuple_T3OOO cpy_r_response_formatters, PyObject *cpy_r_subscription_id);
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching_env)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___handle_request_caching_envObject **faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject **faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject **faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject **faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject **faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject **faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject **faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object **faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject **faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject **faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject **faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object **faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject **faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject **faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject **faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422)(void);
    CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object **faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance;
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key)(PyObject *cpy_r_value);
    char (*CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params, tuple_T3OOO cpy_r_response_formatters, PyObject *cpy_r_subscription_id);
    char (*CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request)(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
    char (*CPyDef_faster_web3____utils___caching___caching_utils___set_threshold_if_empty)(PyObject *cpy_r_provider);
    char (*CPyDef_faster_web3____utils___caching___caching_utils____should_cache_response)(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_response);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching)(PyObject *cpy_r_func);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty)(PyObject *cpy_r_provider);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response)(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_response);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching)(PyObject *cpy_r_func);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching)(PyObject *cpy_r_func);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_rpc_request);
    PyObject *(*CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching)(PyObject *cpy_r_func);
    char (*CPyDef_faster_web3____utils___caching___caching_utils_____top_level__)(void);
};
#endif
