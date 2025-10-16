#ifndef MYPYC_NATIVE_faster_web3___providers___eth_tester___middleware_H
#define MYPYC_NATIVE_faster_web3___providers___eth_tester___middleware_H
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
} faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddlewareObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute___;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__accounts;
} faster_web3___providers___eth_tester___middleware___async_guess_from_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__field;
    PyObject *___mypyc_generator_attribute__guess_func;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__transaction;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute__guess_val;
} faster_web3___providers___eth_tester___middleware___async_fill_default_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__method;
    PyObject *___mypyc_generator_attribute__params;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__filled_transaction;
} faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject;


struct export_table_faster_web3___providers___eth_tester___middleware {
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware;
    PyObject **CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___middleware___async_guess_from_genObject **faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___middleware___async_fill_default_genObject **faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen;
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen)(void);
    CPyThreadLocal faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject **faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance;
    char (*CPyDef_faster_web3___providers___eth_tester___middleware___is_named_block)(PyObject *cpy_r_value);
    char (*CPyDef_faster_web3___providers___eth_tester___middleware___is_hexstr)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___guess_from)(PyObject *cpy_r_w3, PyObject *cpy_r__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___fill_default)(PyObject *cpy_r_field, PyObject *cpy_r_guess_func, PyObject *cpy_r_w3, PyObject *cpy_r_transaction);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from)(PyObject *cpy_r_async_w3, PyObject *cpy_r__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default)(PyObject *cpy_r_field, PyObject *cpy_r_guess_func, PyObject *cpy_r_async_w3, PyObject *cpy_r_transaction);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor)(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor)(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
    char (*CPyDef_faster_web3___providers___eth_tester___middleware_____top_level__)(void);
};
#endif
