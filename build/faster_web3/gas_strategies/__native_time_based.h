#ifndef MYPYC_NATIVE_faster_web3___gas_strategies___time_based_H
#define MYPYC_NATIVE_faster_web3___gas_strategies___time_based_H
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
    PyObject *___mypyc_generator_attribute__w3;
    CPyTagged ___mypyc_generator_attribute__sample_size;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__latest;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__transaction;
    PyObject *___mypyc_generator_attribute__block;
    CPyTagged ___mypyc_temp__2;
    CPyTagged ___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute___;
    PyObject *___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
} faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    uint32_t bitmap;
    PyObject *___mypyc_generator_attribute__raw_data;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__data_by_miner;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    PyObject *___mypyc_generator_attribute__miner;
    PyObject *___mypyc_generator_attribute__miner_data;
    PyObject *___mypyc_generator_attribute___;
    PyObject *___mypyc_generator_attribute__block_hashes;
    PyObject *___mypyc_generator_attribute__gas_prices;
    double ___mypyc_generator_attribute__price_percentile;
    tuple_T3OOO ___mypyc_temp__8;
} faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__miner_data;
    CPyTagged ___mypyc_generator_attribute__wait_blocks;
    CPyTagged ___mypyc_generator_attribute__sample_size;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__miner_data_by_price;
    CPyTagged ___mypyc_temp__9;
    CPyTagged ___mypyc_temp__10;
    CPyTagged ___mypyc_generator_attribute__idx;
    PyObject *___mypyc_generator_attribute__low_percentile_gas_price;
    PyObject *___mypyc_temp__11;
    int64_t ___mypyc_temp__12;
    int64_t ___mypyc_temp__13;
    PyObject *___mypyc_generator_attribute__m;
    PyObject *___mypyc_generator_attribute__num_blocks_accepting_price;
    PyObject *___mypyc_generator_attribute__inv_prob_per_block;
    PyObject *___mypyc_generator_attribute__probability_accepted;
} faster_web3___gas_strategies___time_based____compute_probabilities_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    CPyTagged _max_wait_seconds;
    CPyTagged _sample_size;
    CPyTagged _probability;
    char _weighted;
    PyObject *_time_based_gas_price_strategy;
} faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject;


struct export_table_faster_web3___gas_strategies___time_based {
    PyObject **CPyStatic_faster_web3___gas_strategies___time_based___fast_gas_price_strategy;
    PyObject **CPyStatic_faster_web3___gas_strategies___time_based___medium_gas_price_strategy;
    PyObject **CPyStatic_faster_web3___gas_strategies___time_based___slow_gas_price_strategy;
    PyObject **CPyStatic_faster_web3___gas_strategies___time_based___glacial_gas_price_strategy;
    PyTypeObject **CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen;
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen)(void);
    CPyThreadLocal faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject **faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen;
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen)(void);
    CPyThreadLocal faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject **faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen;
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen)(void);
    CPyThreadLocal faster_web3___gas_strategies___time_based____compute_probabilities_genObject **faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env;
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env)(void);
    CPyThreadLocal faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject **faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance;
    PyTypeObject **CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj;
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj)(void);
    CPyThreadLocal faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject **faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance;
    double (*CPyDef_faster_web3___gas_strategies___time_based____get_avg_block_time)(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size);
    double (*CPyDef_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time)(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data)(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data)(PyObject *cpy_r_raw_data);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities)(PyObject *cpy_r_miner_data, CPyTagged cpy_r_wait_blocks, CPyTagged cpy_r_sample_size);
    CPyTagged (*CPyDef_faster_web3___gas_strategies___time_based____compute_gas_price)(PyObject *cpy_r_probabilities, double cpy_r_desired_probability);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    CPyTagged (*CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_w3, PyObject *cpy_r_transaction_params);
    PyObject *(*CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy)(CPyTagged cpy_r_max_wait_seconds, CPyTagged cpy_r_sample_size, CPyTagged cpy_r_probability, char cpy_r_weighted);
    char (*CPyDef_faster_web3___gas_strategies___time_based_____top_level__)(void);
};
#endif
