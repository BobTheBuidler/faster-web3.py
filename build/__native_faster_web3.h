#ifndef MYPYC_NATIVE_faster_web3_H
#define MYPYC_NATIVE_faster_web3_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T4CIOO
#define MYPYC_DECLARED_tuple_T4CIOO
typedef struct tuple_T4CIOO {
    char f0;
    CPyTagged f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4CIOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3CIO
#define MYPYC_DECLARED_tuple_T3CIO
typedef struct tuple_T3CIO {
    char f0;
    CPyTagged f1;
    PyObject *f2;
} tuple_T3CIO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T1O
#define MYPYC_DECLARED_tuple_T1O
typedef struct tuple_T1O {
    PyObject *f0;
} tuple_T1O;
#endif

#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

#ifndef MYPYC_DECLARED_tuple_T2T2OOO
#define MYPYC_DECLARED_tuple_T2T2OOO
typedef struct tuple_T2T2OOO {
    tuple_T2OO f0;
    PyObject *f1;
} tuple_T2T2OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T5OOOOO
#define MYPYC_DECLARED_tuple_T5OOOOO
typedef struct tuple_T5OOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
} tuple_T5OOOOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3IOO
#define MYPYC_DECLARED_tuple_T3IOO
typedef struct tuple_T3IOO {
    CPyTagged f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3IOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OI
#define MYPYC_DECLARED_tuple_T2OI
typedef struct tuple_T2OI {
    PyObject *f0;
    CPyTagged f1;
} tuple_T2OI;
#endif

#ifndef MYPYC_DECLARED_tuple_T2T2OOT2OO
#define MYPYC_DECLARED_tuple_T2T2OOT2OO
typedef struct tuple_T2T2OOT2OO {
    tuple_T2OO f0;
    tuple_T2OO f1;
} tuple_T2T2OOT2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T3T2OOT2OOT2OO
#define MYPYC_DECLARED_tuple_T3T2OOT2OOT2OO
typedef struct tuple_T3T2OOT2OOT2OO {
    tuple_T2OO f0;
    tuple_T2OO f1;
    tuple_T2OO f2;
} tuple_T3T2OOT2OOT2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OT3OOO
#define MYPYC_DECLARED_tuple_T2OT3OOO
typedef struct tuple_T2OT3OOO {
    PyObject *f0;
    tuple_T3OOO f1;
} tuple_T2OT3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4OOOO
#define MYPYC_DECLARED_tuple_T4OOOO
typedef struct tuple_T4OOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4OOOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T15OOOOOOOOOOOOOOO
#define MYPYC_DECLARED_tuple_T15OOOOOOOOOOOOOOO
typedef struct tuple_T15OOOOOOOOOOOOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
    PyObject *f5;
    PyObject *f6;
    PyObject *f7;
    PyObject *f8;
    PyObject *f9;
    PyObject *f10;
    PyObject *f11;
    PyObject *f12;
    PyObject *f13;
    PyObject *f14;
} tuple_T15OOOOOOOOOOOOOOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T6OOOOOO
#define MYPYC_DECLARED_tuple_T6OOOOOO
typedef struct tuple_T6OOOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
    PyObject *f5;
} tuple_T6OOOOOO;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *__original_text;
    PyObject *__original_codepoints;
    PyObject *__normalized_codepoints;
    char _restricted;
} faster_ens____normalization___TokenObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *__original_text;
    PyObject *__original_codepoints;
    PyObject *__normalized_codepoints;
    char _restricted;
} faster_ens____normalization___EmojiTokenObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *__original_text;
    PyObject *__original_codepoints;
    PyObject *__normalized_codepoints;
    char _restricted;
} faster_ens____normalization___TextTokenObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_type;
    PyObject *_tokens;
} faster_ens____normalization___LabelObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_labels;
} faster_ens____normalization___ENSNormalizedNameObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_w3;
    PyObject *_ens;
    PyObject *__resolver_contract;
    PyObject *__reverse_resolver_contract;
} faster_ens___base_ens___BaseENSObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___ENSValueErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___AddressMismatchObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___UnauthorizedErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___UnownedNameObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___ResolverNotFoundObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___UnsupportedFunctionObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___BidTooLowObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___InvalidBidHashObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___InvalidLabelObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___OversizeTransactionObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___UnderfundedBidObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_ens___exceptions___ENSValidationErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__tx;
    PyObject *___mypyc_generator_attribute___defaults;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
} faster_web3____utils___async_transactions____estimate_gas_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__tx;
    PyObject *___mypyc_generator_attribute__defaults;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute__block;
    PyObject *___mypyc_generator_attribute__max_priority_fee;
} faster_web3____utils___async_transactions____max_fee_per_gas_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute___tx;
    PyObject *___mypyc_generator_attribute___defaults;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
} faster_web3____utils___async_transactions____max_priority_fee_gas_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute___tx;
    PyObject *___mypyc_generator_attribute___defaults;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
} faster_web3____utils___async_transactions____chain_id_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___async_transactions_____mypyc_lambda__0_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__web3_eth;
    PyObject *___mypyc_generator_attribute__block_identifier;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_generator_attribute__block;
} faster_web3____utils___async_transactions___get_block_gas_limit_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__transaction;
    CPyTagged ___mypyc_generator_attribute__gas_buffer;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__gas_estimate_transaction;
    PyObject *___mypyc_temp__10;
    tuple_T3OOO ___mypyc_temp__11;
    CPyTagged ___mypyc_generator_attribute__gas_estimate;
    PyObject *___mypyc_temp__12;
    tuple_T3OOO ___mypyc_temp__13;
    CPyTagged ___mypyc_generator_attribute__gas_limit;
} faster_web3____utils___async_transactions___get_buffered_gas_estimate_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__transaction;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__14;
    tuple_T3OOO ___mypyc_temp__15;
    CPyTagged ___mypyc_generator_attribute__tx_count;
} faster_web3____utils___async_transactions___async_fill_nonce_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__transaction;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__strategy_based_gas_price;
    char ___mypyc_generator_attribute__is_dynamic_fee_transaction;
    PyObject *___mypyc_generator_attribute__defaults;
    PyObject *___mypyc_temp__16;
    CPyTagged ___mypyc_temp__17;
    int64_t ___mypyc_temp__18;
    PyObject *___mypyc_temp__19;
    PyObject *___mypyc_generator_attribute__key;
    PyObject *___mypyc_generator_attribute__default_getter;
    PyObject *___mypyc_generator_attribute__default_val;
    PyObject *___mypyc_temp__20;
    tuple_T3OOO ___mypyc_temp__21;
} faster_web3____utils___async_transactions___async_fill_transaction_defaults_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__transaction_hash;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__22;
    tuple_T3OOO ___mypyc_temp__23;
    PyObject *___mypyc_generator_attribute__current_transaction;
} faster_web3____utils___async_transactions___async_get_required_transaction_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__current_transaction;
    PyObject *___mypyc_generator_attribute__new_transaction;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__24;
    tuple_T3OOO ___mypyc_temp__25;
} faster_web3____utils___async_transactions___async_replace_transaction_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_web3;
    PyObject *__requests_info;
    PyObject *__async_requests_info;
} faster_web3____utils___batching___RequestBatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__responses;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} faster_web3____utils___batching___async_execute_RequestBatcher_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
} faster_web3____utils___batching_____aenter___3_RequestBatcher_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__exc_type;
    PyObject *___mypyc_generator_attribute__exc_val;
    PyObject *___mypyc_generator_attribute__exc_tb;
    int32_t ___mypyc_next_label__;
} faster_web3____utils___batching_____aexit___3_RequestBatcher_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_responses;
    PyObject *_response;
} faster_web3____utils___batching___sort_batch_response_by_response_ids_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___batching_____mypyc_lambda__0_sort_batch_response_by_response_ids_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__block_identifier;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute__requested_block;
} faster_web3____utils___contracts___async_parse_block_identifier_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    CPyTagged ___mypyc_generator_attribute__block_identifier_int;
    int32_t ___mypyc_next_label__;
    CPyTagged ___mypyc_generator_attribute__block_num;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__last_block;
    PyObject *___mypyc_generator_attribute__last_block_num;
} faster_web3____utils___contracts___async_parse_block_identifier_int_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___datatypes_____init___3_PropertyCheckingFactory_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___datatypes_____new___3_PropertyCheckingFactory_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_to_wrap;
    PyObject *_already_called;
    PyObject *_wrapped;
} faster_web3____utils___decorators___reject_recursive_repeats_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___decorators___wrapped_reject_recursive_repeats_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_replace_message;
    PyObject *_decorator;
} faster_web3____utils___decorators___deprecated_for_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *_to_wrap;
    PyObject *_wrapper;
    PyObject *_replace_message;
    PyObject *_decorator;
} faster_web3____utils___decorators___decorator_deprecated_for_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___decorators___decorator_deprecated_for_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___decorators___wrapper_deprecated_for_decorator_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_web3____utils___encoding___FriendlyJsonSerdeObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    char _is_dynamic;
} faster_web3____utils___encoding___DynamicArrayPackedEncoderObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_web3____utils___encoding___Web3JsonEncoderObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__mapping;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    CPyTagged ___mypyc_temp__1;
    int64_t ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute__key;
    PyObject *___mypyc_generator_attribute__val;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_generator_attribute__exc;
} faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__iterable;
    int32_t ___mypyc_next_label__;
    CPyTagged ___mypyc_temp__5;
    CPyTagged ___mypyc_generator_attribute__index;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    PyObject *___mypyc_generator_attribute__element;
    tuple_T3OOO ___mypyc_temp__8;
    PyObject *___mypyc_generator_attribute__exc;
} faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_eth;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__fee_history;
} faster_web3____utils___fee_utils___async_fee_history_priority_fee_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_func;
    PyObject *_recurse;
    PyObject *_data;
} faster_web3____utils___formatters___recursive_map_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___formatters___recurse_recursive_map_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_value;
    PyObject *_inner;
} faster_web3____utils___formatters___static_return_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___formatters___inner_static_return_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_result;
    PyObject *_inner;
    PyObject *_value;
} faster_web3____utils___formatters___static_result_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___formatters___inner_static_result_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_key_mappings;
    PyObject *_get_key;
    PyObject *_apply_key_map_curried;
} faster_web3____utils___formatters___apply_key_map_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___formatters___get_key_apply_key_map_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___formatters___apply_key_map_curried_apply_key_map_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_logger;
    PyObject *__lock;
    PyObject *_session_cache;
    PyObject *_session_pool;
} faster_web3____utils___http_session_manager___HTTPSessionManagerObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__session;
    PyObject *___mypyc_generator_attribute__request_timeout;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__cache_key;
    PyObject *___mypyc_generator_attribute__evicted_items;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    char ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_generator_attribute__cached_session;
    PyObject *___mypyc_generator_attribute__session_is_closed;
    PyObject *___mypyc_generator_attribute__session_loop_is_closed;
    PyObject *___mypyc_generator_attribute__warning;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
    PyObject *___mypyc_generator_attribute___session;
    tuple_T3OOO ___mypyc_temp__7;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_temp__10;
    tuple_T3OOO ___mypyc_temp__11;
    PyObject *___mypyc_generator_attribute__evicted_sessions;
    PyObject *___mypyc_temp__12;
    int64_t ___mypyc_temp__13;
    PyObject *___mypyc_generator_attribute__evicted_session;
} faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__14;
    tuple_T3OOO ___mypyc_temp__15;
    PyObject *___mypyc_generator_attribute__session;
    PyObject *___mypyc_temp__16;
    tuple_T3OOO ___mypyc_temp__17;
} faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__18;
    tuple_T3OOO ___mypyc_temp__19;
    PyObject *___mypyc_generator_attribute__response;
    PyObject *___mypyc_temp__20;
    tuple_T3OOO ___mypyc_temp__21;
} faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__22;
    tuple_T3OOO ___mypyc_temp__23;
    PyObject *___mypyc_generator_attribute__session;
    PyObject *___mypyc_temp__24;
    tuple_T3OOO ___mypyc_temp__25;
} faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__26;
    tuple_T3OOO ___mypyc_temp__27;
    PyObject *___mypyc_generator_attribute__response;
    PyObject *___mypyc_temp__28;
    tuple_T3OOO ___mypyc_temp__29;
} faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__data;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__30;
    tuple_T3OOO ___mypyc_temp__31;
    PyObject *___mypyc_generator_attribute__response;
    PyObject *___mypyc_temp__32;
    tuple_T3OOO ___mypyc_temp__33;
} faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    uint32_t bitmap;
    PyObject *___mypyc_generator_attribute__self;
    double ___mypyc_generator_attribute__timeout;
    PyObject *___mypyc_generator_attribute__evicted_sessions;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__34;
    tuple_T3OOO ___mypyc_temp__35;
    PyObject *___mypyc_temp__36;
    int64_t ___mypyc_temp__37;
    PyObject *___mypyc_generator_attribute__evicted_session;
    PyObject *___mypyc_temp__38;
    tuple_T3OOO ___mypyc_temp__39;
    PyObject *___mypyc_temp__40;
    int64_t ___mypyc_temp__41;
} faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___method_formatters_____mypyc_lambda__0_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___method_formatters_____mypyc_lambda__1_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___method_formatters_____mypyc_lambda__2_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___method_formatters_____mypyc_lambda__3_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___method_formatters_____mypyc_lambda__4_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___method_formatters_____mypyc_lambda__5_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
} faster_web3____utils___method_formatters_____mypyc_lambda__6_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__formatter_maps;
    PyObject *___mypyc_generator_attribute__method_name;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__formatter_map;
} faster_web3____utils___method_formatters___combine_formatters_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__formatters;
    PyObject *___mypyc_generator_attribute__module;
    PyObject *___mypyc_generator_attribute__method_name;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute__f;
} faster_web3____utils___method_formatters___apply_module_to_formatters_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_duplicates;
    PyObject *_dup_sel;
} faster_web3____utils___validation____prepare_selector_collision_msg_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___validation_____mypyc_lambda__0__prepare_selector_collision_msg_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_abi;
    PyObject *_e;
    PyObject *_functions;
    PyObject *_selectors;
} faster_web3____utils___validation___validate_abi_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___validation_____mypyc_lambda__1_validate_abi_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_args;
    PyObject *_kwargs;
    PyObject *_vals;
} faster_web3____utils___validation___has_one_val_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3____utils___validation_____mypyc_lambda__2_has_one_val_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__address;
    PyObject *___mypyc_generator_attribute__normalizers;
    PyObject *___mypyc_generator_attribute__abi_element_identifier;
    PyObject *___mypyc_generator_attribute__transaction;
    PyObject *___mypyc_generator_attribute__block_id;
    PyObject *___mypyc_generator_attribute__contract_abi;
    PyObject *___mypyc_generator_attribute__fn_abi;
    PyObject *___mypyc_generator_attribute__state_override;
    PyObject *___mypyc_generator_attribute__ccip_read_enabled;
    PyObject *___mypyc_generator_attribute__decode_tuples;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__call_transaction;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__return_data;
    PyObject *___mypyc_generator_attribute__output_types;
    PyObject *___mypyc_generator_attribute__contract_call_return_data_formatter;
    PyObject *___mypyc_generator_attribute__request_information;
    PyObject *___mypyc_generator_attribute__method_and_params;
    PyObject *___mypyc_generator_attribute__current_response_formatters;
    PyObject *___mypyc_generator_attribute__current_result_formatters;
    PyObject *___mypyc_generator_attribute__updated_result_formatters;
    tuple_T3OOO ___mypyc_generator_attribute__response_formatters;
    PyObject *___mypyc_generator_attribute__output_data;
    tuple_T3OOO ___mypyc_temp__2;
    PyObject *___mypyc_generator_attribute__e;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    char ___mypyc_generator_attribute__is_missing_code_error;
    PyObject *___mypyc_generator_attribute__msg;
    PyObject *___mypyc_generator_attribute___normalizers;
    PyObject *___mypyc_generator_attribute__normalized_data;
    PyObject *___mypyc_generator_attribute__decoded;
} faster_web3___contract___utils___async_call_contract_function_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__address;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__abi_element_identifier;
    PyObject *___mypyc_generator_attribute__transaction;
    PyObject *___mypyc_generator_attribute__contract_abi;
    PyObject *___mypyc_generator_attribute__fn_abi;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__transact_transaction;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
    PyObject *___mypyc_generator_attribute__txn_hash;
} faster_web3___contract___utils___async_transact_with_contract_function_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__address;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__abi_element_identifier;
    PyObject *___mypyc_generator_attribute__transaction;
    PyObject *___mypyc_generator_attribute__contract_abi;
    PyObject *___mypyc_generator_attribute__fn_abi;
    PyObject *___mypyc_generator_attribute__block_identifier;
    PyObject *___mypyc_generator_attribute__state_override;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__estimate_transaction;
    PyObject *___mypyc_temp__7;
    tuple_T3OOO ___mypyc_temp__8;
} faster_web3___contract___utils___async_estimate_gas_for_function_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__address;
    PyObject *___mypyc_generator_attribute__async_w3;
    PyObject *___mypyc_generator_attribute__abi_element_identifier;
    PyObject *___mypyc_generator_attribute__transaction;
    PyObject *___mypyc_generator_attribute__contract_abi;
    PyObject *___mypyc_generator_attribute__fn_abi;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute__kwargs;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__prepared_transaction;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
} faster_web3___contract___utils___async_build_transaction_for_function_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_rpc_port;
    PyObject *_endpoint_uri;
    PyObject *_geth_binary;
    PyObject *_datadir;
} faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    char ___mypyc_temp__2;
    PyObject *___mypyc_generator_attribute__base_dir;
    PyObject *___mypyc_generator_attribute__zipfile_path;
    PyObject *___mypyc_generator_attribute__tmp_datadir;
    PyObject *___mypyc_temp__3;
    PyObject *___mypyc_temp__4;
    char ___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__zip_ref;
    tuple_T3OOO ___mypyc_temp__6;
    PyObject *___mypyc_generator_attribute__genesis_file;
    tuple_T3OOO ___mypyc_temp__7;
} faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__datadir;
    PyObject *___mypyc_generator_attribute__genesis_file;
    PyObject *___mypyc_generator_attribute__rpc_port;
    int32_t ___mypyc_next_label__;
    tuple_T5OOOOO ___mypyc_generator_attribute__init_datadir_command;
    PyObject *___mypyc_generator_attribute__proc;
} faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    uint32_t bitmap;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    CPyTagged ___mypyc_generator_attribute__timeout;
    int32_t ___mypyc_next_label__;
    double ___mypyc_generator_attribute__start;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    char ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_generator_attribute__session;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_temp__10;
    tuple_T3OOO ___mypyc_temp__11;
    tuple_T3OOO ___mypyc_temp__12;
    PyObject *___mypyc_temp__13;
    tuple_T3OOO ___mypyc_temp__14;
} faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged __size;
    PyObject *__data;
} faster_web3___utils___caching___SimpleCacheObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    uint32_t bitmap;
    PyObject *___mypyc_generator_attribute__self;
    char ___mypyc_generator_attribute__last;
    double ___mypyc_generator_attribute__timeout;
    int32_t ___mypyc_next_label__;
    double ___mypyc_generator_attribute__start;
    double ___mypyc_generator_attribute__end_time;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    tuple_T3OOO ___mypyc_temp__2;
    double ___mypyc_generator_attribute__now;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
} faster_web3___utils___caching___async_await_and_popitem_SimpleCache_genObject;


struct export_table_faster_web3 {
    PyObject **CPyStatic_faster_ens____normalization___NFC;
    PyObject **CPyStatic_faster_ens____normalization___NFD;
    PyObject **CPyStatic_faster_ens____normalization___NORMALIZATION_SPEC;
    PyObject **CPyStatic_faster_ens____normalization___EMOJI_NORMALIZATION_SPEC;
    PyObject **CPyStatic_faster_ens____normalization___TokenType___EMOJI;
    PyObject **CPyStatic_faster_ens____normalization___TokenType___TEXT;
    PyObject **CPyStatic_faster_ens____normalization___GROUP_COMBINED_VALID_CPS;
    PyObject **CPyStatic_faster_ens____normalization___VALID_BY_GROUPS;
    PyObject **CPyStatic_faster_ens____normalization___WHOLE_CONFUSABLE_MAP;
    PyObject **CPyStatic_faster_ens____normalization___VALID_CODEPOINTS;
    CPyTagged *CPyStatic_faster_ens____normalization___MAX_LEN_EMOJI_PATTERN;
    CPyTagged *CPyStatic_faster_ens____normalization___NSM_MAX;
    PyTypeObject **CPyType_faster_ens____normalization___TokenType;
    PyTypeObject **CPyType_faster_ens____normalization___Token;
    PyObject *(*CPyDef_faster_ens____normalization___Token)(PyObject *cpy_r_codepoints);
    PyTypeObject **CPyType_faster_ens____normalization___EmojiToken;
    PyObject *(*CPyDef_faster_ens____normalization___EmojiToken)(PyObject *cpy_r_codepoints);
    PyTypeObject **CPyType_faster_ens____normalization___TextToken;
    PyObject *(*CPyDef_faster_ens____normalization___TextToken)(PyObject *cpy_r_codepoints);
    PyTypeObject **CPyType_faster_ens____normalization___Label;
    PyObject *(*CPyDef_faster_ens____normalization___Label)(PyObject *cpy_r_type, PyObject *cpy_r_tokens);
    PyTypeObject **CPyType_faster_ens____normalization___ENSNormalizedName;
    PyObject *(*CPyDef_faster_ens____normalization___ENSNormalizedName)(PyObject *cpy_r_normalized_labels);
    PyObject *(*CPyDef_faster_ens____normalization____json_list_mapping_to_dict)(PyObject *cpy_r_f, PyObject *cpy_r_list_mapped_key);
    char (*CPyDef_faster_ens____normalization___Token_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_codepoints);
    PyObject *(*CPyDef_faster_ens____normalization___Token___codepoints)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_ens____normalization___Token___text)(PyObject *cpy_r_self);
    char (*CPyDef_faster_ens____normalization___Token_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_ens____normalization___EmojiToken_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_ens____normalization___TextToken_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_ens____normalization___Label_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_type, PyObject *cpy_r_tokens);
    PyObject *(*CPyDef_faster_ens____normalization___Label___text)(PyObject *cpy_r_self);
    char (*CPyDef_faster_ens____normalization___ENSNormalizedName_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_normalized_labels);
    PyObject *(*CPyDef_faster_ens____normalization___ENSNormalizedName___as_text)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_ens____normalization____extract_valid_codepoints)(void);
    PyObject *(*CPyDef_faster_ens____normalization____construct_whole_confusable_map)(void);
    char (*CPyDef_faster_ens____normalization____is_fenced)(CPyTagged cpy_r_cp);
    PyObject *(*CPyDef_faster_ens____normalization____codepoints_to_text)(PyObject *cpy_r_cps);
    PyObject *(*CPyDef_faster_ens____normalization____validate_tokens_and_get_label_type)(PyObject *cpy_r_tokens);
    PyObject *(*CPyDef_faster_ens____normalization____build_and_validate_label_from_tokens)(PyObject *cpy_r_tokens);
    PyObject *(*CPyDef_faster_ens____normalization____buffer_codepoints_to_chars)(PyObject *cpy_r_buffer);
    PyObject *(*CPyDef_faster_ens____normalization___normalize_name_ensip15)(PyObject *cpy_r_name);
    char (*CPyDef_faster_ens____normalization_____top_level__)(void);
    PyObject **CPyStatic_faster_ens___auto___ns;
    char (*CPyDef_faster_ens___auto_____top_level__)(void);
    PyTypeObject **CPyType_faster_ens___base_ens___BaseENS;
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS)(void);
    char (*CPyDef_faster_ens___base_ens___BaseENS___strict_bytes_type_checking)(PyObject *cpy_r_self);
    char (*CPyDef_faster_ens___base_ens___BaseENS___strict_bytes_type_checking__BaseENS_glue)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_ens___base_ens___BaseENS_____mypyc_setter__strict_bytes_type_checking)(PyObject *cpy_r_self, char cpy_r_strict_bytes_type_check);
    char (*CPyDef_faster_ens___base_ens___BaseENS_____mypyc_setter__strict_bytes_type_checking__BaseENS_glue)(PyObject *cpy_r_self, char cpy_r_strict_bytes_type_check);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___labelhash)(PyObject *cpy_r_label);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___labelhash__BaseENS_glue)(PyObject *cpy_r_label);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___namehash)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___namehash__BaseENS_glue)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___nameprep)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___nameprep__BaseENS_glue)(PyObject *cpy_r_name);
    char (*CPyDef_faster_ens___base_ens___BaseENS___is_valid_name)(PyObject *cpy_r_name);
    char (*CPyDef_faster_ens___base_ens___BaseENS___is_valid_name__BaseENS_glue)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___reverse_domain)(PyObject *cpy_r_address);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___reverse_domain__BaseENS_glue)(PyObject *cpy_r_address);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___parent)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS___parent__BaseENS_glue)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS____decode_ensip10_resolve_data)(PyObject *cpy_r_self, PyObject *cpy_r_contract_call_result, PyObject *cpy_r_extended_resolver, PyObject *cpy_r_fn_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS____decode_ensip10_resolve_data__BaseENS_glue)(PyObject *cpy_r_self, PyObject *cpy_r_contract_call_result, PyObject *cpy_r_extended_resolver, PyObject *cpy_r_fn_name);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS____type_aware_resolver)(PyObject *cpy_r_self, PyObject *cpy_r_address, PyObject *cpy_r_func);
    PyObject *(*CPyDef_faster_ens___base_ens___BaseENS____type_aware_resolver__BaseENS_glue)(PyObject *cpy_r_self, PyObject *cpy_r_address, PyObject *cpy_r_func);
    char (*CPyDef_faster_ens___base_ens___BaseENS_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_ens___base_ens_____top_level__)(void);
    PyObject **CPyStatic_faster_ens___constants___EMPTY_SHA3_BYTES;
    PyObject **CPyStatic_faster_ens___constants___EMPTY_ADDR_HEX;
    PyObject **CPyStatic_faster_ens___constants___ENS_MAINNET_ADDR;
    PyObject **CPyStatic_faster_ens___constants___ENS_ADDR_INTERFACE_ID;
    PyObject **CPyStatic_faster_ens___constants___ENS_NAME_INTERFACE_ID;
    PyObject **CPyStatic_faster_ens___constants___ENS_ABI_INTERFACE_ID;
    PyObject **CPyStatic_faster_ens___constants___ENS_PUBLIC_KEY_INTERFACE_ID;
    PyObject **CPyStatic_faster_ens___constants___ENS_TEXT_INTERFACE_ID;
    PyObject **CPyStatic_faster_ens___constants___ENS_CONTENT_HASH_INTERFACE_ID;
    PyObject **CPyStatic_faster_ens___constants___ENS_MULTICHAIN_ADDRESS_INTERFACE_ID;
    PyObject **CPyStatic_faster_ens___constants___ENS_EXTENDED_RESOLVER_INTERFACE_ID;
    char (*CPyDef_faster_ens___constants_____top_level__)(void);
    PyTypeObject **CPyType_faster_ens___exceptions___ENSException;
    PyTypeObject **CPyType_faster_ens___exceptions___ENSValueError;
    PyTypeObject **CPyType_faster_ens___exceptions___ENSTypeError;
    PyTypeObject **CPyType_faster_ens___exceptions___AddressMismatch;
    PyTypeObject **CPyType_faster_ens___exceptions___InvalidName;
    PyTypeObject **CPyType_faster_ens___exceptions___UnauthorizedError;
    PyTypeObject **CPyType_faster_ens___exceptions___UnownedName;
    PyTypeObject **CPyType_faster_ens___exceptions___ResolverNotFound;
    PyTypeObject **CPyType_faster_ens___exceptions___UnsupportedFunction;
    PyTypeObject **CPyType_faster_ens___exceptions___BidTooLow;
    PyTypeObject **CPyType_faster_ens___exceptions___InvalidBidHash;
    PyTypeObject **CPyType_faster_ens___exceptions___InvalidLabel;
    PyTypeObject **CPyType_faster_ens___exceptions___OversizeTransaction;
    PyTypeObject **CPyType_faster_ens___exceptions___UnderfundedBid;
    PyTypeObject **CPyType_faster_ens___exceptions___ENSValidationError;
    char (*CPyDef_faster_ens___exceptions_____top_level__)(void);
    PyObject **CPyStatic_faster_ens___utils___default;
    PyObject *(*CPyDef_faster_ens___utils___Web3)(void);
    PyObject *(*CPyDef_faster_ens___utils___init_web3)(PyObject *cpy_r_provider, PyObject *cpy_r_middleware);
    PyObject *(*CPyDef_faster_ens___utils___customize_web3)(PyObject *cpy_r_w3);
    PyObject *(*CPyDef_faster_ens___utils___normalize_name)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___utils___dns_encode_name)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___utils___ens_encode_name)(PyObject *cpy_r_name);
    char (*CPyDef_faster_ens___utils___is_valid_name)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___utils___to_utc_datetime)(double cpy_r_timestamp);
    PyObject *(*CPyDef_faster_ens___utils___sha3_text)(PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_ens___utils___label_to_hash)(PyObject *cpy_r_label);
    PyObject *(*CPyDef_faster_ens___utils___normal_name_to_hash)(PyObject *cpy_r_name);
    PyObject *(*CPyDef_faster_ens___utils___raw_name_to_hash)(PyObject *cpy_r_name);
    char (*CPyDef_faster_ens___utils___address_in)(PyObject *cpy_r_address, PyObject *cpy_r_addresses);
    PyObject *(*CPyDef_faster_ens___utils___address_to_reverse_domain)(PyObject *cpy_r_address);
    CPyTagged (*CPyDef_faster_ens___utils___estimate_auction_start_gas)(PyObject *cpy_r_labels);
    PyObject *(*CPyDef_faster_ens___utils___assert_signer_in_modifier_kwargs)(PyObject *cpy_r_modifier_kwargs);
    char (*CPyDef_faster_ens___utils___is_none_or_zero_address)(PyObject *cpy_r_addr);
    char (*CPyDef_faster_ens___utils___is_empty_name)(PyObject *cpy_r_name);
    char (*CPyDef_faster_ens___utils___is_valid_ens_name)(PyObject *cpy_r_ens_name);
    PyObject *(*CPyDef_faster_ens___utils___init_async_web3)(PyObject *cpy_r_provider, PyObject *cpy_r_middleware);
    char (*CPyDef_faster_ens___utils_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___async_transactions___TRANSACTION_DEFAULTS;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions____estimate_gas_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions____estimate_gas_genObject **faster_web3____utils___async_transactions____estimate_gas_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions____max_fee_per_gas_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions____max_fee_per_gas_genObject **faster_web3____utils___async_transactions____max_fee_per_gas_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions____max_priority_fee_gas_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions____max_priority_fee_gas_genObject **faster_web3____utils___async_transactions____max_priority_fee_gas_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions____chain_id_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions____chain_id_genObject **faster_web3____utils___async_transactions____chain_id_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions_____mypyc_lambda__0_obj;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions_____mypyc_lambda__0_obj)(void);
    CPyThreadLocal faster_web3____utils___async_transactions_____mypyc_lambda__0_objObject **faster_web3____utils___async_transactions_____mypyc_lambda__0_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions___get_block_gas_limit_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions___get_block_gas_limit_genObject **faster_web3____utils___async_transactions___get_block_gas_limit_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions___get_buffered_gas_estimate_genObject **faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions___async_fill_nonce_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions___async_fill_nonce_genObject **faster_web3____utils___async_transactions___async_fill_nonce_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions___async_fill_transaction_defaults_genObject **faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions___async_get_required_transaction_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions___async_get_required_transaction_genObject **faster_web3____utils___async_transactions___async_get_required_transaction_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___async_transactions___async_replace_transaction_gen;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen)(void);
    CPyThreadLocal faster_web3____utils___async_transactions___async_replace_transaction_genObject **faster_web3____utils___async_transactions___async_replace_transaction_gen_free_instance;
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____estimate_gas)(PyObject *cpy_r_async_w3, PyObject *cpy_r_tx, PyObject *cpy_r__defaults);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_fee_per_gas)(PyObject *cpy_r_async_w3, PyObject *cpy_r_tx, PyObject *cpy_r_defaults);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____max_priority_fee_gas)(PyObject *cpy_r_async_w3, PyObject *cpy_r__tx, PyObject *cpy_r__defaults);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions____chain_id)(PyObject *cpy_r_async_w3, PyObject *cpy_r__tx, PyObject *cpy_r__defaults);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions_____mypyc_lambda__0_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions_____mypyc_lambda__0_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_async_w3, PyObject *cpy_r_tx, PyObject *cpy_r__defaults);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_block_gas_limit)(PyObject *cpy_r_web3_eth, PyObject *cpy_r_block_identifier);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___get_buffered_gas_estimate)(PyObject *cpy_r_async_w3, PyObject *cpy_r_transaction, CPyTagged cpy_r_gas_buffer);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_nonce)(PyObject *cpy_r_async_w3, PyObject *cpy_r_transaction);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_fill_transaction_defaults)(PyObject *cpy_r_async_w3, PyObject *cpy_r_transaction);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_get_required_transaction)(PyObject *cpy_r_async_w3, PyObject *cpy_r_transaction_hash);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___async_transactions___async_replace_transaction)(PyObject *cpy_r_async_w3, PyObject *cpy_r_current_transaction, PyObject *cpy_r_new_transaction);
    char (*CPyDef_faster_web3____utils___async_transactions_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___batching___RPC_METHODS_UNSUPPORTED_DURING_BATCH;
    PyTypeObject **CPyType_faster_web3____utils___batching___RequestBatcher;
    PyObject *(*CPyDef_faster_web3____utils___batching___RequestBatcher)(PyObject *cpy_r_web3);
    PyTypeObject **CPyType_faster_web3____utils___batching___async_execute_RequestBatcher_gen;
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen)(void);
    CPyThreadLocal faster_web3____utils___batching___async_execute_RequestBatcher_genObject **faster_web3____utils___batching___async_execute_RequestBatcher_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen;
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen)(void);
    CPyThreadLocal faster_web3____utils___batching_____aenter___3_RequestBatcher_genObject **faster_web3____utils___batching_____aenter___3_RequestBatcher_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen;
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen)(void);
    CPyThreadLocal faster_web3____utils___batching_____aexit___3_RequestBatcher_genObject **faster_web3____utils___batching_____aexit___3_RequestBatcher_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___batching___sort_batch_response_by_response_ids_env;
    PyObject *(*CPyDef_faster_web3____utils___batching___sort_batch_response_by_response_ids_env)(void);
    CPyThreadLocal faster_web3____utils___batching___sort_batch_response_by_response_ids_envObject **faster_web3____utils___batching___sort_batch_response_by_response_ids_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___batching_____mypyc_lambda__0_sort_batch_response_by_response_ids_obj;
    PyObject *(*CPyDef_faster_web3____utils___batching_____mypyc_lambda__0_sort_batch_response_by_response_ids_obj)(void);
    CPyThreadLocal faster_web3____utils___batching_____mypyc_lambda__0_sort_batch_response_by_response_ids_objObject **faster_web3____utils___batching_____mypyc_lambda__0_sort_batch_response_by_response_ids_obj_free_instance;
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_web3);
    PyObject *(*CPyDef_faster_web3____utils___batching___RequestBatcher____provider)(PyObject *cpy_r_self);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher____validate_is_batching)(PyObject *cpy_r_self);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher____initialize_batching)(PyObject *cpy_r_self);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher____end_batching)(PyObject *cpy_r_self);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher___add)(PyObject *cpy_r_self, PyObject *cpy_r_batch_payload);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher___add_mapping)(PyObject *cpy_r_self, PyObject *cpy_r_batch_payload);
    PyObject *(*CPyDef_faster_web3____utils___batching___RequestBatcher___execute)(PyObject *cpy_r_self);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher___clear)(PyObject *cpy_r_self);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher___cancel)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3____utils___batching___RequestBatcher_____enter__)(PyObject *cpy_r_self);
    char (*CPyDef_faster_web3____utils___batching___RequestBatcher_____exit__)(PyObject *cpy_r_self, PyObject *cpy_r_exc_type, PyObject *cpy_r_exc_val, PyObject *cpy_r_exc_tb);
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching___async_execute_RequestBatcher_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching___RequestBatcher___async_execute)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aenter___3_RequestBatcher_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching___RequestBatcher_____aenter__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching_____aexit___3_RequestBatcher_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___batching___RequestBatcher_____aexit__)(PyObject *cpy_r_self, PyObject *cpy_r_exc_type, PyObject *cpy_r_exc_val, PyObject *cpy_r_exc_tb);
    PyObject *(*CPyDef_faster_web3____utils___batching_____mypyc_lambda__0_sort_batch_response_by_response_ids_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___batching_____mypyc_lambda__0_sort_batch_response_by_response_ids_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_response);
    PyObject *(*CPyDef_faster_web3____utils___batching___sort_batch_response_by_response_ids)(PyObject *cpy_r_responses);
    char (*CPyDef_faster_web3____utils___batching_____top_level__)(void);
    char (*CPyDef_faster_web3____utils___blocks___is_predefined_block_number)(PyObject *cpy_r_value);
    char (*CPyDef_faster_web3____utils___blocks___is_hex_encoded_block_hash)(PyObject *cpy_r_value);
    char (*CPyDef_faster_web3____utils___blocks___is_hex_encoded_block_number)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___blocks___select_method_for_block_identifier)(PyObject *cpy_r_value, PyObject *cpy_r_if_hash, PyObject *cpy_r_if_number, PyObject *cpy_r_if_predefined);
    char (*CPyDef_faster_web3____utils___blocks_____top_level__)(void);
    PyTypeObject **CPyType_faster_web3____utils___contracts___async_parse_block_identifier_gen;
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen)(void);
    CPyThreadLocal faster_web3____utils___contracts___async_parse_block_identifier_genObject **faster_web3____utils___contracts___async_parse_block_identifier_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___contracts___async_parse_block_identifier_int_gen;
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen)(void);
    CPyThreadLocal faster_web3____utils___contracts___async_parse_block_identifier_int_genObject **faster_web3____utils___contracts___async_parse_block_identifier_int_gen_free_instance;
    PyObject *(*CPyDef_faster_web3____utils___contracts___find_matching_event_abi)(PyObject *cpy_r_abi, PyObject *cpy_r_event_name, PyObject *cpy_r_argument_names);
    PyObject *(*CPyDef_faster_web3____utils___contracts___encode_abi)(PyObject *cpy_r_w3, PyObject *cpy_r_abi, PyObject *cpy_r_arguments, PyObject *cpy_r_data);
    PyObject *(*CPyDef_faster_web3____utils___contracts___prepare_transaction)(PyObject *cpy_r_address, PyObject *cpy_r_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_contract_abi, PyObject *cpy_r_abi_callable, PyObject *cpy_r_transaction, PyObject *cpy_r_fn_args, PyObject *cpy_r_fn_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___contracts___encode_transaction_data)(PyObject *cpy_r_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_contract_abi, PyObject *cpy_r_abi_callable, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___contracts___decode_transaction_data)(PyObject *cpy_r_fn_abi, PyObject *cpy_r_data, PyObject *cpy_r_normalizers);
    tuple_T3OOO (*CPyDef_faster_web3____utils___contracts___get_constructor_function_info)(PyObject *cpy_r_contract_abi, PyObject *cpy_r_constructor_abi);
    tuple_T3OOO (*CPyDef_faster_web3____utils___contracts___get_fallback_function_info)(PyObject *cpy_r_contract_abi, PyObject *cpy_r_fallback_abi);
    tuple_T3OOO (*CPyDef_faster_web3____utils___contracts___get_receive_function_info)(PyObject *cpy_r_contract_abi, PyObject *cpy_r_receive_abi);
    char (*CPyDef_faster_web3____utils___contracts___validate_payable)(PyObject *cpy_r_transaction, PyObject *cpy_r_abi_callable);
    PyObject *(*CPyDef_faster_web3____utils___contracts___parse_block_identifier)(PyObject *cpy_r_w3, PyObject *cpy_r_block_identifier);
    CPyTagged (*CPyDef_faster_web3____utils___contracts___parse_block_identifier_int)(PyObject *cpy_r_w3, CPyTagged cpy_r_block_identifier_int);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier)(PyObject *cpy_r_async_w3, PyObject *cpy_r_block_identifier);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___contracts___async_parse_block_identifier_int)(PyObject *cpy_r_async_w3, CPyTagged cpy_r_block_identifier_int);
    PyObject *(*CPyDef_faster_web3____utils___contracts___copy_contract_function)(PyObject *cpy_r_contract_function, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___contracts___copy_contract_event)(PyObject *cpy_r_contract_event, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char (*CPyDef_faster_web3____utils___contracts_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___datatypes___apply_formatters_to_dict;
    PyObject **CPyStatic_faster_web3____utils___datatypes___concat;
    PyTypeObject **CPyType_faster_web3____utils___datatypes___PropertyCheckingFactory;
    PyTypeObject **CPyType_faster_web3____utils___datatypes_____init___3_PropertyCheckingFactory_obj;
    PyObject *(*CPyDef_faster_web3____utils___datatypes_____init___3_PropertyCheckingFactory_obj)(void);
    CPyThreadLocal faster_web3____utils___datatypes_____init___3_PropertyCheckingFactory_objObject **faster_web3____utils___datatypes_____init___3_PropertyCheckingFactory_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___datatypes_____new___3_PropertyCheckingFactory_obj;
    PyObject *(*CPyDef_faster_web3____utils___datatypes_____new___3_PropertyCheckingFactory_obj)(void);
    CPyThreadLocal faster_web3____utils___datatypes_____new___3_PropertyCheckingFactory_objObject **faster_web3____utils___datatypes_____new___3_PropertyCheckingFactory_obj_free_instance;
    char (*CPyDef_faster_web3____utils___datatypes___verify_attr)(PyObject *cpy_r_class_name, PyObject *cpy_r_key, PyObject *cpy_r_namespace);
    PyObject *(*CPyDef_faster_web3____utils___datatypes_____init___3_PropertyCheckingFactory_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_faster_web3____utils___datatypes_____init___3_PropertyCheckingFactory_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_cls, PyObject *cpy_r_name, PyObject *cpy_r_bases, PyObject *cpy_r_namespace, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___datatypes_____new___3_PropertyCheckingFactory_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___datatypes_____new___3_PropertyCheckingFactory_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_mcs, PyObject *cpy_r_name, tuple_T1O cpy_r_bases, PyObject *cpy_r_namespace, PyObject *cpy_r_normalizers);
    char (*CPyDef_faster_web3____utils___datatypes_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___decorators___get_thread_id;
    PyTypeObject **CPyType_faster_web3____utils___decorators___reject_recursive_repeats_env;
    PyObject *(*CPyDef_faster_web3____utils___decorators___reject_recursive_repeats_env)(void);
    CPyThreadLocal faster_web3____utils___decorators___reject_recursive_repeats_envObject **faster_web3____utils___decorators___reject_recursive_repeats_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___decorators___wrapped_reject_recursive_repeats_obj;
    PyObject *(*CPyDef_faster_web3____utils___decorators___wrapped_reject_recursive_repeats_obj)(void);
    CPyThreadLocal faster_web3____utils___decorators___wrapped_reject_recursive_repeats_objObject **faster_web3____utils___decorators___wrapped_reject_recursive_repeats_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___decorators___deprecated_for_env;
    PyObject *(*CPyDef_faster_web3____utils___decorators___deprecated_for_env)(void);
    CPyThreadLocal faster_web3____utils___decorators___deprecated_for_envObject **faster_web3____utils___decorators___deprecated_for_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___decorators___decorator_deprecated_for_env;
    PyObject *(*CPyDef_faster_web3____utils___decorators___decorator_deprecated_for_env)(void);
    CPyThreadLocal faster_web3____utils___decorators___decorator_deprecated_for_envObject **faster_web3____utils___decorators___decorator_deprecated_for_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___decorators___decorator_deprecated_for_obj;
    PyObject *(*CPyDef_faster_web3____utils___decorators___decorator_deprecated_for_obj)(void);
    CPyThreadLocal faster_web3____utils___decorators___decorator_deprecated_for_objObject **faster_web3____utils___decorators___decorator_deprecated_for_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___decorators___wrapper_deprecated_for_decorator_obj;
    PyObject *(*CPyDef_faster_web3____utils___decorators___wrapper_deprecated_for_decorator_obj)(void);
    CPyThreadLocal faster_web3____utils___decorators___wrapper_deprecated_for_decorator_objObject **faster_web3____utils___decorators___wrapper_deprecated_for_decorator_obj_free_instance;
    PyObject *(*CPyDef_faster_web3____utils___decorators___wrapped_reject_recursive_repeats_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___decorators___wrapped_reject_recursive_repeats_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args);
    PyObject *(*CPyDef_faster_web3____utils___decorators___reject_recursive_repeats)(PyObject *cpy_r_to_wrap);
    PyObject *(*CPyDef_faster_web3____utils___decorators___wrapper_deprecated_for_decorator_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___decorators___wrapper_deprecated_for_decorator_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___decorators___decorator_deprecated_for_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___decorators___decorator_deprecated_for_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_to_wrap);
    PyObject *(*CPyDef_faster_web3____utils___decorators___deprecated_for)(PyObject *cpy_r_replace_message);
    char (*CPyDef_faster_web3____utils___decorators_____top_level__)(void);
    char *CPyStatic_faster_web3____utils___encoding___DynamicArrayPackedEncoder___is_dynamic;
    PyTypeObject **CPyType_faster_web3____utils___encoding___FriendlyJsonSerde;
    PyObject *(*CPyDef_faster_web3____utils___encoding___FriendlyJsonSerde)(void);
    PyTypeObject **CPyType_faster_web3____utils___encoding___DynamicArrayPackedEncoder;
    PyObject *(*CPyDef_faster_web3____utils___encoding___DynamicArrayPackedEncoder)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject **CPyType_faster_web3____utils___encoding___Web3JsonEncoder;
    PyObject *(*CPyDef_faster_web3____utils___encoding___Web3JsonEncoder)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyTypeObject **CPyType_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen;
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen)(void);
    CPyThreadLocal faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_genObject **faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen;
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen)(void);
    CPyThreadLocal faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_genObject **faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen_free_instance;
    PyObject *(*CPyDef_faster_web3____utils___encoding___hex_encode_abi_type)(PyObject *cpy_r_abi_type, PyObject *cpy_r_value, PyObject *cpy_r_force_size);
    PyObject *(*CPyDef_faster_web3____utils___encoding___to_hex_twos_compliment)(CPyTagged cpy_r_value, CPyTagged cpy_r_bit_size);
    PyObject *(*CPyDef_faster_web3____utils___encoding___to_hex_with_size)(PyObject *cpy_r_value, CPyTagged cpy_r_bit_size);
    PyObject *(*CPyDef_faster_web3____utils___encoding___pad_hex)(PyObject *cpy_r_value, CPyTagged cpy_r_bit_size);
    PyObject *(*CPyDef_faster_web3____utils___encoding___trim_hex)(PyObject *cpy_r_hexstr);
    PyObject *(*CPyDef_faster_web3____utils___encoding___pad_bytes)(PyObject *cpy_r_fill_with, CPyTagged cpy_r_num_bytes, PyObject *cpy_r_unpadded);
    PyObject *(*CPyDef_faster_web3____utils___encoding___text_if_str)(PyObject *cpy_r_to_type, PyObject *cpy_r_text_or_primitive);
    PyObject *(*CPyDef_faster_web3____utils___encoding___hexstr_if_str)(PyObject *cpy_r_to_type, PyObject *cpy_r_hexstr_or_primitive);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_mapping_errors_FriendlyJsonSerde_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___encoding___FriendlyJsonSerde____json_mapping_errors)(PyObject *cpy_r_self, PyObject *cpy_r_mapping);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___encoding____json_list_errors_FriendlyJsonSerde_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___encoding___FriendlyJsonSerde____json_list_errors)(PyObject *cpy_r_self, PyObject *cpy_r_iterable);
    PyObject *(*CPyDef_faster_web3____utils___encoding___FriendlyJsonSerde____friendly_json_encode)(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_cls);
    PyObject *(*CPyDef_faster_web3____utils___encoding___FriendlyJsonSerde___json_decode)(PyObject *cpy_r_self, PyObject *cpy_r_json_str);
    PyObject *(*CPyDef_faster_web3____utils___encoding___FriendlyJsonSerde___json_encode)(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_cls);
    PyObject *(*CPyDef_faster_web3____utils___encoding___to_4byte_hex)(PyObject *cpy_r_hex_or_str_or_bytes);
    PyObject *(*CPyDef_faster_web3____utils___encoding___DynamicArrayPackedEncoder___encode)(PyObject *cpy_r_self, PyObject *cpy_r_value);
    char (*CPyDef_faster_web3____utils___encoding___DynamicArrayPackedEncoder_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___encoding___encode_single_packed)(PyObject *cpy_r__type, PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___encoding___Web3JsonEncoder___default)(PyObject *cpy_r_self, PyObject *cpy_r_obj);
    PyObject *(*CPyDef_faster_web3____utils___encoding___to_json)(PyObject *cpy_r_obj);
    char (*CPyDef_faster_web3____utils___encoding_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___error_formatters_utils___decode;
    PyObject **CPyStatic_faster_web3____utils___error_formatters_utils___to_bytes;
    tuple_T5OOOOO *CPyStatic_faster_web3____utils___error_formatters_utils___OFFCHAIN_LOOKUP_FIELD_NAMES;
    tuple_T5OOOOO *CPyStatic_faster_web3____utils___error_formatters_utils___OFFCHAIN_LOOKUP_FIELD_TYPES;
    PyObject **CPyStatic_faster_web3____utils___error_formatters_utils___OFFCHAIN_LOOKUP_FIELDS;
    PyObject **CPyStatic_faster_web3____utils___error_formatters_utils___PANIC_ERROR_CODES;
    PyObject *(*CPyDef_faster_web3____utils___error_formatters_utils____parse_error_with_reverted_prefix)(PyObject *cpy_r_data);
    char (*CPyDef_faster_web3____utils___error_formatters_utils____raise_contract_error)(PyObject *cpy_r_response_error_data);
    PyObject *(*CPyDef_faster_web3____utils___error_formatters_utils___raise_contract_logic_error_on_revert)(PyObject *cpy_r_response);
    PyObject *(*CPyDef_faster_web3____utils___error_formatters_utils___raise_transaction_indexing_error_if_indexing)(PyObject *cpy_r_response);
    PyObject *(*CPyDef_faster_web3____utils___error_formatters_utils___raise_block_not_found_on_error)(PyObject *cpy_r_response);
    char (*CPyDef_faster_web3____utils___error_formatters_utils_____top_level__)(void);
    CPyTagged *CPyStatic_faster_web3____utils___fee_utils___PRIORITY_FEE_MAX;
    CPyTagged *CPyStatic_faster_web3____utils___fee_utils___PRIORITY_FEE_MIN;
    tuple_T3IOO *CPyStatic_faster_web3____utils___fee_utils___PRIORITY_FEE_HISTORY_PARAMS;
    PyTypeObject **CPyType_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen;
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen)(void);
    CPyThreadLocal faster_web3____utils___fee_utils___async_fee_history_priority_fee_genObject **faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen_free_instance;
    CPyTagged (*CPyDef_faster_web3____utils___fee_utils____fee_history_priority_fee_estimate)(PyObject *cpy_r_fee_history);
    CPyTagged (*CPyDef_faster_web3____utils___fee_utils___fee_history_priority_fee)(PyObject *cpy_r_eth);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___fee_utils___async_fee_history_priority_fee)(PyObject *cpy_r_async_eth);
    char (*CPyDef_faster_web3____utils___fee_utils_____top_level__)(void);
    PyTypeObject **CPyType_faster_web3____utils___formatters___recursive_map_env;
    PyObject *(*CPyDef_faster_web3____utils___formatters___recursive_map_env)(void);
    CPyThreadLocal faster_web3____utils___formatters___recursive_map_envObject **faster_web3____utils___formatters___recursive_map_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___recurse_recursive_map_obj;
    PyObject *(*CPyDef_faster_web3____utils___formatters___recurse_recursive_map_obj)(void);
    CPyThreadLocal faster_web3____utils___formatters___recurse_recursive_map_objObject **faster_web3____utils___formatters___recurse_recursive_map_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___static_return_env;
    PyObject *(*CPyDef_faster_web3____utils___formatters___static_return_env)(void);
    CPyThreadLocal faster_web3____utils___formatters___static_return_envObject **faster_web3____utils___formatters___static_return_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___inner_static_return_obj;
    PyObject *(*CPyDef_faster_web3____utils___formatters___inner_static_return_obj)(void);
    CPyThreadLocal faster_web3____utils___formatters___inner_static_return_objObject **faster_web3____utils___formatters___inner_static_return_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___static_result_env;
    PyObject *(*CPyDef_faster_web3____utils___formatters___static_result_env)(void);
    CPyThreadLocal faster_web3____utils___formatters___static_result_envObject **faster_web3____utils___formatters___static_result_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___inner_static_result_obj;
    PyObject *(*CPyDef_faster_web3____utils___formatters___inner_static_result_obj)(void);
    CPyThreadLocal faster_web3____utils___formatters___inner_static_result_objObject **faster_web3____utils___formatters___inner_static_result_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___apply_key_map_env;
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_key_map_env)(void);
    CPyThreadLocal faster_web3____utils___formatters___apply_key_map_envObject **faster_web3____utils___formatters___apply_key_map_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___get_key_apply_key_map_obj;
    PyObject *(*CPyDef_faster_web3____utils___formatters___get_key_apply_key_map_obj)(void);
    CPyThreadLocal faster_web3____utils___formatters___get_key_apply_key_map_objObject **faster_web3____utils___formatters___get_key_apply_key_map_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___formatters___apply_key_map_curried_apply_key_map_obj;
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_key_map_curried_apply_key_map_obj)(void);
    CPyThreadLocal faster_web3____utils___formatters___apply_key_map_curried_apply_key_map_objObject **faster_web3____utils___formatters___apply_key_map_curried_apply_key_map_obj_free_instance;
    CPyTagged (*CPyDef_faster_web3____utils___formatters___hex_to_integer)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_formatters_to_args)(PyObject *cpy_r_formatters);
    PyObject *(*CPyDef_faster_web3____utils___formatters___map_collection)(PyObject *cpy_r_func, PyObject *cpy_r_collection);
    PyObject *(*CPyDef_faster_web3____utils___formatters___recurse_recursive_map_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___formatters___recurse_recursive_map_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_item);
    PyObject *(*CPyDef_faster_web3____utils___formatters___recursive_map)(PyObject *cpy_r_func, PyObject *cpy_r_data);
    PyObject *(*CPyDef_faster_web3____utils___formatters___inner_static_return_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___formatters___inner_static_return_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___formatters___static_return)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___formatters___inner_static_result_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___formatters___inner_static_result_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___formatters___static_result)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___formatters___get_key_apply_key_map_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___formatters___get_key_apply_key_map_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_key);
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_key_map_curried_apply_key_map_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_key_map_curried_apply_key_map_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_key_map)(PyObject *cpy_r_key_mappings);
    char (*CPyDef_faster_web3____utils___formatters___is_array_of_strings)(PyObject *cpy_r_value);
    char (*CPyDef_faster_web3____utils___formatters___is_array_of_dicts)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___formatters___remove_key_if)(PyObject *cpy_r_key, PyObject *cpy_r_remove_if, PyObject *cpy_r_input_dict);
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_error_formatters)(PyObject *cpy_r_error_formatters, PyObject *cpy_r_response);
    PyObject *(*CPyDef_faster_web3____utils___formatters___apply_null_result_formatters)(PyObject *cpy_r_null_result_formatters, PyObject *cpy_r_response, PyObject *cpy_r_params);
    char (*CPyDef_faster_web3____utils___formatters_____top_level__)(void);
    PyObject *(*CPyDef_faster_web3____utils___http___construct_user_agent)(PyObject *cpy_r_module, PyObject *cpy_r_class_name);
    char (*CPyDef_faster_web3____utils___http_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___http_session_manager___create_task;
    PyObject **CPyStatic_faster_web3____utils___http_session_manager___get_event_loop;
    PyObject **CPyStatic_faster_web3____utils___http_session_manager___sleep;
    PyObject **CPyStatic_faster_web3____utils___http_session_manager___HTTPSessionManager___logger;
    PyObject **CPyStatic_faster_web3____utils___http_session_manager___HTTPSessionManager____lock;
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager___HTTPSessionManager;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager)(CPyTagged cpy_r_cache_size, CPyTagged cpy_r_session_pool_max_workers);
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen)(void);
    CPyThreadLocal faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_genObject **faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen)(void);
    CPyThreadLocal faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_genObject **faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen)(void);
    CPyThreadLocal faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_genObject **faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen)(void);
    CPyThreadLocal faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_genObject **faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen)(void);
    CPyThreadLocal faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_genObject **faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen)(void);
    CPyThreadLocal faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_genObject **faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen;
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen)(void);
    CPyThreadLocal faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_genObject **faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen_free_instance;
    char (*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager_____init__)(PyObject *cpy_r_self, CPyTagged cpy_r_cache_size, CPyTagged cpy_r_session_pool_max_workers);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___get_default_http_endpoint)(void);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___cache_and_return_session)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_session, PyObject *cpy_r_request_timeout);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___get_response_from_get_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___json_make_get_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___get_response_from_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___json_make_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___make_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_data, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager____handle_streaming_response)(PyObject *cpy_r_response, double cpy_r_start, double cpy_r_timeout);
    char (*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager____close_evicted_sessions)(PyObject *cpy_r_self, PyObject *cpy_r_evicted_sessions);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_cache_and_return_session_HTTPSessionManager_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___async_cache_and_return_session)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_session, PyObject *cpy_r_request_timeout);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_get_request_HTTPSessionManager_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___async_get_response_from_get_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_get_request_HTTPSessionManager_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___async_json_make_get_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_get_response_from_post_request_HTTPSessionManager_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___async_get_response_from_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_json_make_post_request_HTTPSessionManager_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___async_json_make_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___async_make_post_request_HTTPSessionManager_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___async_make_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_data, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager____async_close_evicted_sessions_HTTPSessionManager_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager____async_close_evicted_sessions)(PyObject *cpy_r_self, double cpy_r_timeout, PyObject *cpy_r_evicted_sessions);
    char (*CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_web3____utils___http_session_manager_____top_level__)(void);
    double (*CPyDef_faster_web3____utils___math___percentile)(PyObject *cpy_r_values, double cpy_r_percentile);
    char (*CPyDef_faster_web3____utils___math_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___method_formatters___to_ascii_if_bytes;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___to_integer_if_hex;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___to_hex_if_integer;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___is_false;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___is_not_false;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___is_not_null;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___ACCESS_LIST_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___ACCESS_LIST_RESPONSE_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___AUTH_LIST_RESULT_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___TRANSACTION_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___transaction_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___WITHDRAWAL_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___withdrawal_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___LOG_ENTRY_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___log_entry_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___RECEIPT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___receipt_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___BLOCK_REQUEST_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___block_request_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___BLOCK_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___block_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___SYNCING_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___syncing_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___GETH_SYNCING_SUBSCRIPTION_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___TRANSACTION_POOL_CONTENT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___transaction_pool_content_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___TRANSACTION_POOL_INSPECT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___transaction_pool_inspect_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___FEE_HISTORY_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___fee_history_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___STORAGE_PROOF_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___ACCOUNT_PROOF_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___proof_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___FILTER_PARAMS_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___filter_params_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___filter_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___AUTH_LIST_REQUEST_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___TRANSACTION_REQUEST_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___transaction_request_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___ETH_CALL_TX_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___transaction_param_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___call_without_override;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___STATE_OVERRIDE_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___state_override_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___call_with_override;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___estimate_gas_without_block_id;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___estimate_gas_with_block_id;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___estimate_gas_with_override;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___block_state_calls_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___simulate_v1_request_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___block_result_formatters_copy;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___simulate_v1_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___SIGNED_TX_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___signed_tx_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___FILTER_PARAM_NORMALIZERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___GETH_WALLET_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___geth_wallet_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___GETH_WALLETS_FORMATTER;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___geth_wallets_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___PYTHONIC_REQUEST_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___DEBUG_CALLTRACE_LOG_ENTRY_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___debug_calltrace_log_list_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___PRETRACE_INNER_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___DEBUG_PRESTATE_DIFFMODE_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___DEBUG_CALLTRACE_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___OPCODE_TRACE_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___DEBUG_TRACE_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___trace_result_formatters;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___debug_calltrace_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___debug_calltrace_list_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___TRACE_ACTION_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___TRACE_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___TRACE_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___trace_list_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___common_tracing_result_formatter;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___PYTHONIC_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___METHOD_NORMALIZERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___STANDARD_NORMALIZERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___ABI_REQUEST_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___ERROR_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___NULL_RESULT_FORMATTERS;
    PyObject **CPyStatic_faster_web3____utils___method_formatters___FILTER_RESULT_FORMATTERS;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters_____mypyc_lambda__0_obj;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__0_obj)(void);
    CPyThreadLocal faster_web3____utils___method_formatters_____mypyc_lambda__0_objObject **faster_web3____utils___method_formatters_____mypyc_lambda__0_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters_____mypyc_lambda__1_obj;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__1_obj)(void);
    CPyThreadLocal faster_web3____utils___method_formatters_____mypyc_lambda__1_objObject **faster_web3____utils___method_formatters_____mypyc_lambda__1_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters_____mypyc_lambda__2_obj;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__2_obj)(void);
    CPyThreadLocal faster_web3____utils___method_formatters_____mypyc_lambda__2_objObject **faster_web3____utils___method_formatters_____mypyc_lambda__2_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters_____mypyc_lambda__3_obj;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__3_obj)(void);
    CPyThreadLocal faster_web3____utils___method_formatters_____mypyc_lambda__3_objObject **faster_web3____utils___method_formatters_____mypyc_lambda__3_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters_____mypyc_lambda__4_obj;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__4_obj)(void);
    CPyThreadLocal faster_web3____utils___method_formatters_____mypyc_lambda__4_objObject **faster_web3____utils___method_formatters_____mypyc_lambda__4_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters_____mypyc_lambda__5_obj;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__5_obj)(void);
    CPyThreadLocal faster_web3____utils___method_formatters_____mypyc_lambda__5_objObject **faster_web3____utils___method_formatters_____mypyc_lambda__5_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters_____mypyc_lambda__6_obj;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__6_obj)(void);
    CPyThreadLocal faster_web3____utils___method_formatters_____mypyc_lambda__6_objObject **faster_web3____utils___method_formatters_____mypyc_lambda__6_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters___combine_formatters_gen;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters_gen)(void);
    CPyThreadLocal faster_web3____utils___method_formatters___combine_formatters_genObject **faster_web3____utils___method_formatters___combine_formatters_gen_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___method_formatters___apply_module_to_formatters_gen;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters_gen)(void);
    CPyThreadLocal faster_web3____utils___method_formatters___apply_module_to_formatters_genObject **faster_web3____utils___method_formatters___apply_module_to_formatters_gen_free_instance;
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___bytes_to_ascii)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___to_hexbytes)(CPyTagged cpy_r_num_bytes, PyObject *cpy_r_val, char cpy_r_variable_length);
    char (*CPyDef_faster_web3____utils___method_formatters___is_attrdict)(PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___type_aware_apply_formatters_to_dict)(PyObject *cpy_r_formatters, PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___type_aware_apply_formatters_to_dict_keys_and_values)(PyObject *cpy_r_key_formatters, PyObject *cpy_r_value_formatters, PyObject *cpy_r_dict_like_object);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter)(PyObject *cpy_r_formatter);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___storage_key_to_hexstr)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__0_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__0_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_txn);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__1_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__1_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_txn);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__2_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__2_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__3_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__3_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__4_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__4_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__5_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__5_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x);
    char (*CPyDef_faster_web3____utils___method_formatters___has_pretrace_keys)(PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___pretrace_formatter)(PyObject *cpy_r_resp);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__6_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters_____mypyc_lambda__6_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_calls);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___subscription_formatter)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___combine_formatters)(PyObject *cpy_r_formatter_maps, PyObject *cpy_r_method_name);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___get_request_formatters)(PyObject *cpy_r_method_name);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___raise_block_not_found)(PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___raise_block_not_found_for_uncle_at_index)(PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___raise_transaction_not_found)(PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___raise_transaction_not_found_with_index)(tuple_T2OI cpy_r_params);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___filter_wrapper)(PyObject *cpy_r_module, PyObject *cpy_r_method, PyObject *cpy_r_filter_id);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___apply_module_to_formatters)(PyObject *cpy_r_formatters, PyObject *cpy_r_module, PyObject *cpy_r_method_name);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___get_result_formatters)(PyObject *cpy_r_method_name, PyObject *cpy_r_module);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___get_error_formatters)(PyObject *cpy_r_method_name);
    PyObject *(*CPyDef_faster_web3____utils___method_formatters___get_null_result_formatters)(PyObject *cpy_r_method_name);
    char (*CPyDef_faster_web3____utils___method_formatters_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___type_conversion___to_bytes;
    PyObject **CPyStatic_faster_web3____utils___type_conversion___to_hex;
    PyObject *(*CPyDef_faster_web3____utils___type_conversion___to_hex_if_bytes)(PyObject *cpy_r_val);
    PyObject *(*CPyDef_faster_web3____utils___type_conversion___to_bytes_if_hex)(PyObject *cpy_r_val);
    char (*CPyDef_faster_web3____utils___type_conversion_____top_level__)(void);
    char (*CPyDef_faster_web3____utils___utility_methods___all_in_dict)(PyObject *cpy_r_values, PyObject *cpy_r_d);
    char (*CPyDef_faster_web3____utils___utility_methods___any_in_dict)(PyObject *cpy_r_values, PyObject *cpy_r_d);
    char (*CPyDef_faster_web3____utils___utility_methods___none_in_dict)(PyObject *cpy_r_values, PyObject *cpy_r_d);
    char (*CPyDef_faster_web3____utils___utility_methods___either_set_is_a_subset)(PyObject *cpy_r_set1, PyObject *cpy_r_set2, CPyTagged cpy_r_percentage);
    char (*CPyDef_faster_web3____utils___utility_methods_____top_level__)(void);
    PyObject **CPyStatic_faster_web3____utils___validation___KNOWN_REQUEST_TIMEOUT_MESSAGING;
    PyTypeObject **CPyType_faster_web3____utils___validation____prepare_selector_collision_msg_env;
    PyObject *(*CPyDef_faster_web3____utils___validation____prepare_selector_collision_msg_env)(void);
    CPyThreadLocal faster_web3____utils___validation____prepare_selector_collision_msg_envObject **faster_web3____utils___validation____prepare_selector_collision_msg_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___validation_____mypyc_lambda__0__prepare_selector_collision_msg_obj;
    PyObject *(*CPyDef_faster_web3____utils___validation_____mypyc_lambda__0__prepare_selector_collision_msg_obj)(void);
    CPyThreadLocal faster_web3____utils___validation_____mypyc_lambda__0__prepare_selector_collision_msg_objObject **faster_web3____utils___validation_____mypyc_lambda__0__prepare_selector_collision_msg_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___validation___validate_abi_env;
    PyObject *(*CPyDef_faster_web3____utils___validation___validate_abi_env)(void);
    CPyThreadLocal faster_web3____utils___validation___validate_abi_envObject **faster_web3____utils___validation___validate_abi_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___validation_____mypyc_lambda__1_validate_abi_obj;
    PyObject *(*CPyDef_faster_web3____utils___validation_____mypyc_lambda__1_validate_abi_obj)(void);
    CPyThreadLocal faster_web3____utils___validation_____mypyc_lambda__1_validate_abi_objObject **faster_web3____utils___validation_____mypyc_lambda__1_validate_abi_obj_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___validation___has_one_val_env;
    PyObject *(*CPyDef_faster_web3____utils___validation___has_one_val_env)(void);
    CPyThreadLocal faster_web3____utils___validation___has_one_val_envObject **faster_web3____utils___validation___has_one_val_env_free_instance;
    PyTypeObject **CPyType_faster_web3____utils___validation_____mypyc_lambda__2_has_one_val_obj;
    PyObject *(*CPyDef_faster_web3____utils___validation_____mypyc_lambda__2_has_one_val_obj)(void);
    CPyThreadLocal faster_web3____utils___validation_____mypyc_lambda__2_has_one_val_objObject **faster_web3____utils___validation_____mypyc_lambda__2_has_one_val_obj_free_instance;
    PyObject *(*CPyDef_faster_web3____utils___validation_____mypyc_lambda__0__prepare_selector_collision_msg_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_faster_web3____utils___validation_____mypyc_lambda__0__prepare_selector_collision_msg_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_funcs);
    PyObject *(*CPyDef_faster_web3____utils___validation____prepare_selector_collision_msg)(PyObject *cpy_r_duplicates);
    PyObject *(*CPyDef_faster_web3____utils___validation_____mypyc_lambda__1_validate_abi_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_faster_web3____utils___validation_____mypyc_lambda__1_validate_abi_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_funcs);
    char (*CPyDef_faster_web3____utils___validation___validate_abi)(PyObject *cpy_r_abi);
    char (*CPyDef_faster_web3____utils___validation___validate_abi_type)(PyObject *cpy_r_abi_type);
    char (*CPyDef_faster_web3____utils___validation___validate_abi_value)(PyObject *cpy_r_abi_type, PyObject *cpy_r_value);
    char (*CPyDef_faster_web3____utils___validation___is_not_address_string)(PyObject *cpy_r_value);
    char (*CPyDef_faster_web3____utils___validation___validate_address)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3____utils___validation_____mypyc_lambda__2_has_one_val_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    char (*CPyDef_faster_web3____utils___validation_____mypyc_lambda__2_has_one_val_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_val);
    char (*CPyDef_faster_web3____utils___validation___has_one_val)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char (*CPyDef_faster_web3____utils___validation___assert_one_val)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char (*CPyDef_faster_web3____utils___validation____validate_subscription_fields)(PyObject *cpy_r_response);
    char (*CPyDef_faster_web3____utils___validation____raise_bad_response_format)(PyObject *cpy_r_response, PyObject *cpy_r_error);
    PyObject *(*CPyDef_faster_web3____utils___validation___raise_error_for_batch_response)(PyObject *cpy_r_response, PyObject *cpy_r_logger);
    char (*CPyDef_faster_web3____utils___validation___validate_rpc_response_and_raise_if_error)(PyObject *cpy_r_response, PyObject *cpy_r_error_formatters, char cpy_r_is_subscription_response, PyObject *cpy_r_logger, PyObject *cpy_r_params);
    char (*CPyDef_faster_web3____utils___validation_____top_level__)(void);
    PyObject **CPyStatic_faster_web3___constants___ADDRESS_ZERO;
    PyObject **CPyStatic_faster_web3___constants___CHECKSUM_ADDRESSS_ZERO;
    PyObject **CPyStatic_faster_web3___constants___MAX_INT;
    PyObject **CPyStatic_faster_web3___constants___HASH_ZERO;
    tuple_T2OO *CPyStatic_faster_web3___constants___DYNAMIC_FEE_TXN_PARAMS;
    char (*CPyDef_faster_web3___constants_____top_level__)(void);
    tuple_T4OOOO *CPyStatic_faster_web3___contract___utils___ACCEPTABLE_EMPTY_STRINGS;
    PyTypeObject **CPyType_faster_web3___contract___utils___async_call_contract_function_gen;
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen)(void);
    CPyThreadLocal faster_web3___contract___utils___async_call_contract_function_genObject **faster_web3___contract___utils___async_call_contract_function_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___contract___utils___async_transact_with_contract_function_gen;
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen)(void);
    CPyThreadLocal faster_web3___contract___utils___async_transact_with_contract_function_genObject **faster_web3___contract___utils___async_transact_with_contract_function_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___contract___utils___async_estimate_gas_for_function_gen;
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen)(void);
    CPyThreadLocal faster_web3___contract___utils___async_estimate_gas_for_function_genObject **faster_web3___contract___utils___async_estimate_gas_for_function_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___contract___utils___async_build_transaction_for_function_gen;
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen)(void);
    CPyThreadLocal faster_web3___contract___utils___async_build_transaction_for_function_genObject **faster_web3___contract___utils___async_build_transaction_for_function_gen_free_instance;
    PyObject *(*CPyDef_faster_web3___contract___utils___format_contract_call_return_data_curried)(PyObject *cpy_r_async_w3, char cpy_r_decode_tuples, PyObject *cpy_r_fn_abi, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_normalizers, PyObject *cpy_r_output_types, PyObject *cpy_r_return_data);
    PyObject *(*CPyDef_faster_web3___contract___utils___call_contract_function)(PyObject *cpy_r_w3, PyObject *cpy_r_address, PyObject *cpy_r_normalizers, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_block_id, PyObject *cpy_r_contract_abi, PyObject *cpy_r_abi_callable, PyObject *cpy_r_state_override, PyObject *cpy_r_ccip_read_enabled, PyObject *cpy_r_decode_tuples, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3___contract___utils___transact_with_contract_function)(PyObject *cpy_r_address, PyObject *cpy_r_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_contract_abi, PyObject *cpy_r_fn_abi, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    CPyTagged (*CPyDef_faster_web3___contract___utils___estimate_gas_for_function)(PyObject *cpy_r_address, PyObject *cpy_r_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_contract_abi, PyObject *cpy_r_fn_abi, PyObject *cpy_r_block_identifier, PyObject *cpy_r_state_override, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3___contract___utils___build_transaction_for_function)(PyObject *cpy_r_address, PyObject *cpy_r_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_contract_abi, PyObject *cpy_r_fn_abi, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3___contract___utils___find_functions_by_identifier)(PyObject *cpy_r_contract_abi, PyObject *cpy_r_w3, PyObject *cpy_r_address, PyObject *cpy_r_callable_check, PyObject *cpy_r_function_type);
    tuple_T2OI (*CPyDef_faster_web3___contract___utils_____function_abi_sort_key)(PyObject *cpy_r_abi);
    PyObject *(*CPyDef_faster_web3___contract___utils___get_function_by_identifier)(PyObject *cpy_r_fns, PyObject *cpy_r_identifier);
    PyObject *(*CPyDef_faster_web3___contract___utils___find_events_by_identifier)(PyObject *cpy_r_contract_abi, PyObject *cpy_r_w3, PyObject *cpy_r_address, PyObject *cpy_r_callable_check, PyObject *cpy_r_event_type);
    PyObject *(*CPyDef_faster_web3___contract___utils___get_event_by_identifier)(PyObject *cpy_r_events, PyObject *cpy_r_identifier);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_call_contract_function)(PyObject *cpy_r_async_w3, PyObject *cpy_r_address, PyObject *cpy_r_normalizers, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_block_id, PyObject *cpy_r_contract_abi, PyObject *cpy_r_fn_abi, PyObject *cpy_r_state_override, PyObject *cpy_r_ccip_read_enabled, PyObject *cpy_r_decode_tuples, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_transact_with_contract_function)(PyObject *cpy_r_address, PyObject *cpy_r_async_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_contract_abi, PyObject *cpy_r_fn_abi, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_estimate_gas_for_function)(PyObject *cpy_r_address, PyObject *cpy_r_async_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_contract_abi, PyObject *cpy_r_fn_abi, PyObject *cpy_r_block_identifier, PyObject *cpy_r_state_override, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___contract___utils___async_build_transaction_for_function)(PyObject *cpy_r_address, PyObject *cpy_r_async_w3, PyObject *cpy_r_abi_element_identifier, PyObject *cpy_r_transaction, PyObject *cpy_r_contract_abi, PyObject *cpy_r_fn_abi, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char (*CPyDef_faster_web3___contract___utils_____top_level__)(void);
    PyTypeObject **CPyType_faster_web3___tools___benchmark___node___GethBenchmarkFixture;
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture)(void);
    PyTypeObject **CPyType_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen;
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen)(void);
    CPyThreadLocal faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject **faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen;
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen)(void);
    CPyThreadLocal faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject **faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen_free_instance;
    char (*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture_____init__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture___build)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture____rpc_port)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture____endpoint_uri)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture____geth_binary)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture____geth_command_arguments)(PyObject *cpy_r_self, PyObject *cpy_r_datadir);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___node___GethBenchmarkFixture____geth_process)(PyObject *cpy_r_self, PyObject *cpy_r_datadir, PyObject *cpy_r_genesis_file, PyObject *cpy_r_rpc_port);
    char (*CPyDef_faster_web3___tools___benchmark___node_____top_level__)(void);
    char (*CPyDef_faster_web3___tools___benchmark___reporting___print_header)(PyObject *cpy_r_logger, CPyTagged cpy_r_num_calls);
    char (*CPyDef_faster_web3___tools___benchmark___reporting___print_entry)(PyObject *cpy_r_logger, PyObject *cpy_r_method_benchmarks);
    char (*CPyDef_faster_web3___tools___benchmark___reporting___print_footer)(PyObject *cpy_r_logger);
    char (*CPyDef_faster_web3___tools___benchmark___reporting_____top_level__)(void);
    PyTypeObject **CPyType_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen;
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen)(void);
    CPyThreadLocal faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject **faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen_free_instance;
    char (*CPyDef_faster_web3___tools___benchmark___utils___wait_for_socket)(PyObject *cpy_r_ipc_path, CPyTagged cpy_r_timeout);
    char (*CPyDef_faster_web3___tools___benchmark___utils___wait_for_http)(PyObject *cpy_r_endpoint_uri, CPyTagged cpy_r_timeout);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___tools___benchmark___utils___wait_for_aiohttp)(PyObject *cpy_r_endpoint_uri, CPyTagged cpy_r_timeout);
    char (*CPyDef_faster_web3___tools___benchmark___utils___wait_for_popen)(PyObject *cpy_r_proc, CPyTagged cpy_r_timeout);
    char (*CPyDef_faster_web3___tools___benchmark___utils___kill_proc_gracefully)(PyObject *cpy_r_proc);
    char (*CPyDef_faster_web3___tools___benchmark___utils_____top_level__)(void);
    PyTypeObject **CPyType_faster_web3___types___AccessListEntry;
    PyTypeObject **CPyType_faster_web3___types___EventData;
    PyTypeObject **CPyType_faster_web3___types___RPCError;
    PyTypeObject **CPyType_faster_web3___types___SetCodeAuthorizationData;
    PyTypeObject **CPyType_faster_web3___types___SetCodeAuthorizationParams;
    PyTypeObject **CPyType_faster_web3___types___WithdrawalData;
    PyTypeObject **CPyType_faster_web3___types___BlockData;
    PyTypeObject **CPyType_faster_web3___types___LogReceipt;
    PyTypeObject **CPyType_faster_web3___types___SubscriptionResponse;
    PyTypeObject **CPyType_faster_web3___types___BlockTypeSubscriptionResponse;
    PyTypeObject **CPyType_faster_web3___types___TransactionTypeSubscriptionResponse;
    PyTypeObject **CPyType_faster_web3___types___LogsSubscriptionResponse;
    PyTypeObject **CPyType_faster_web3___types___SyncProgress;
    PyTypeObject **CPyType_faster_web3___types___SyncingSubscriptionResponse;
    PyTypeObject **CPyType_faster_web3___types___GethSyncingStatus;
    PyTypeObject **CPyType_faster_web3___types___GethSyncingSubscriptionResult;
    PyTypeObject **CPyType_faster_web3___types___GethSyncingSubscriptionResponse;
    PyTypeObject **CPyType_faster_web3___types___RPCRequest;
    PyTypeObject **CPyType_faster_web3___types___RPCResponse;
    PyTypeObject **CPyType_faster_web3___types___FormattedEthSubscriptionResponse;
    PyTypeObject **CPyType_faster_web3___types___CreateAccessListResponse;
    PyTypeObject **CPyType_faster_web3___types___FormattersDict;
    PyTypeObject **CPyType_faster_web3___types___FilterParams;
    PyTypeObject **CPyType_faster_web3___types___FeeHistory;
    PyTypeObject **CPyType_faster_web3___types___StateOverrideParams;
    PyTypeObject **CPyType_faster_web3___types___SignedTx;
    PyTypeObject **CPyType_faster_web3___types___StorageProof;
    PyTypeObject **CPyType_faster_web3___types___MerkleProof;
    PyTypeObject **CPyType_faster_web3___types___Protocol;
    PyTypeObject **CPyType_faster_web3___types___NodeInfo;
    PyTypeObject **CPyType_faster_web3___types___Peer;
    PyTypeObject **CPyType_faster_web3___types___SyncStatus;
    PyTypeObject **CPyType_faster_web3___types___Uncle;
    PyTypeObject **CPyType_faster_web3___types___TxPoolContent;
    PyTypeObject **CPyType_faster_web3___types___TxPoolInspect;
    PyTypeObject **CPyType_faster_web3___types___TxPoolStatus;
    PyTypeObject **CPyType_faster_web3___types___TraceConfig;
    PyTypeObject **CPyType_faster_web3___types___CallTraceLog;
    PyTypeObject **CPyType_faster_web3___types___TraceData;
    PyTypeObject **CPyType_faster_web3___types___DiffModeTrace;
    PyTypeObject **CPyType_faster_web3___types___StructLog;
    PyTypeObject **CPyType_faster_web3___types___OpcodeTrace;
    PyTypeObject **CPyType_faster_web3___types___BlockStateCallV1;
    PyTypeObject **CPyType_faster_web3___types___SimulateV1Payload;
    PyTypeObject **CPyType_faster_web3___types___SimulateV1CallResult;
    PyTypeObject **CPyType_faster_web3___types___SimulateV1Result;
    PyTypeObject **CPyType_faster_web3___types___GethWallet;
    PyTypeObject **CPyType_faster_web3___types___TraceFilterParams;
    PyTypeObject **CPyType_faster_web3___types___LogsSubscriptionArg;
    char (*CPyDef_faster_web3___types_____top_level__)(void);
    PyObject **CPyStatic_faster_web3___utils___caching___RequestCacheValidationThreshold___FINALIZED;
    PyObject **CPyStatic_faster_web3___utils___caching___RequestCacheValidationThreshold___SAFE;
    PyTypeObject **CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold;
    PyTypeObject **CPyType_faster_web3___utils___caching___SimpleCache;
    PyObject *(*CPyDef_faster_web3___utils___caching___SimpleCache)(CPyTagged cpy_r_size);
    PyTypeObject **CPyType_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen;
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen)(void);
    CPyThreadLocal faster_web3___utils___caching___async_await_and_popitem_SimpleCache_genObject **faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen_free_instance;
    char (*CPyDef_faster_web3___utils___caching___SimpleCache_____init__)(PyObject *cpy_r_self, CPyTagged cpy_r_size);
    char (*CPyDef_faster_web3___utils___caching___SimpleCache_____contains__)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    CPyTagged (*CPyDef_faster_web3___utils___caching___SimpleCache_____len__)(PyObject *cpy_r_self);
    tuple_T2OO (*CPyDef_faster_web3___utils___caching___SimpleCache___cache)(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_value);
    PyObject *(*CPyDef_faster_web3___utils___caching___SimpleCache___get_cache_entry)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    char (*CPyDef_faster_web3___utils___caching___SimpleCache___clear)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___utils___caching___SimpleCache___items)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___utils___caching___SimpleCache___pop)(PyObject *cpy_r_self, PyObject *cpy_r_key);
    tuple_T2OO (*CPyDef_faster_web3___utils___caching___SimpleCache___popitem)(PyObject *cpy_r_self, char cpy_r_last);
    char (*CPyDef_faster_web3___utils___caching___SimpleCache___is_full)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___utils___caching___async_await_and_popitem_SimpleCache_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___utils___caching___SimpleCache___async_await_and_popitem)(PyObject *cpy_r_self, char cpy_r_last, double cpy_r_timeout, uint32_t cpy_r___bitmap);
    char (*CPyDef_faster_web3___utils___caching_____top_level__)(void);
};
#endif
