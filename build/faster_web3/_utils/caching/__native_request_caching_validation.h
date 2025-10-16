#ifndef MYPYC_NATIVE_faster_web3____utils___caching___request_caching_validation_H
#define MYPYC_NATIVE_faster_web3____utils___caching___request_caching_validation_H
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
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute__blocknum;
    PyObject *___mypyc_generator_attribute__block_timestamp;
    int32_t ___mypyc_next_label__;
    char ___mypyc_generator_attribute__cache_allowed_requests;
    PyObject *___mypyc_generator_attribute__threshold;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__threshold_block;
    PyObject *___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_generator_attribute__block;
    tuple_T3OOO ___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__e;
} faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute__params;
    PyObject *___mypyc_generator_attribute___result;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__block_id;
    CPyTagged ___mypyc_generator_attribute__blocknum;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
} faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute___params;
    PyObject *___mypyc_generator_attribute__result;
    int32_t ___mypyc_next_label__;
    char ___mypyc_generator_attribute__cache_allowed_requests;
    PyObject *___mypyc_generator_attribute__blocknum;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_generator_attribute__block;
    PyObject *___mypyc_temp__10;
    tuple_T3OOO ___mypyc_temp__11;
    PyObject *___mypyc_temp__12;
    PyObject *___mypyc_temp__13;
    tuple_T3OOO ___mypyc_temp__14;
    tuple_T3OOO ___mypyc_temp__15;
    PyObject *___mypyc_generator_attribute__e;
} faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__provider;
    PyObject *___mypyc_generator_attribute__params;
    PyObject *___mypyc_generator_attribute___result;
    int32_t ___mypyc_next_label__;
    char ___mypyc_generator_attribute__cache_allowed_requests;
    PyObject *___mypyc_temp__16;
    tuple_T3OOO ___mypyc_temp__17;
    PyObject *___mypyc_generator_attribute__response;
    PyObject *___mypyc_temp__18;
    tuple_T3OOO ___mypyc_temp__19;
    PyObject *___mypyc_temp__20;
    tuple_T3OOO ___mypyc_temp__21;
    PyObject *___mypyc_generator_attribute__e;
} faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject;


struct export_table_faster_web3____utils___caching___request_caching_validation {
    PyObject **CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS;
    PyTypeObject **CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen;
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen)(void);
    CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject **faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen;
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen)(void);
    CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject **faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen;
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen)(void);
    CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject **faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen;
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen)(void);
    CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject **faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance;
    char (*CPyDef_faster_web3____utils___caching___request_caching_validation____error_log)(PyObject *cpy_r_provider, PyObject *cpy_r_e);
    char (*CPyDef_faster_web3____utils___caching___request_caching_validation___always_cache_request)(PyObject *cpy_r__args, PyObject *cpy_r__kwargs);
    char (*CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold)(PyObject *cpy_r_provider, PyObject *cpy_r_blocknum, PyObject *cpy_r_block_timestamp);
    char (*CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params)(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
    char (*CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result)(PyObject *cpy_r_provider, PyObject *cpy_r__params, PyObject *cpy_r_result);
    char (*CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params)(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold)(PyObject *cpy_r_provider, PyObject *cpy_r_blocknum, PyObject *cpy_r_block_timestamp);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params)(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result)(PyObject *cpy_r_provider, PyObject *cpy_r__params, PyObject *cpy_r_result);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params)(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
    char (*CPyDef_faster_web3____utils___caching___request_caching_validation_____top_level__)(void);
};
#endif
