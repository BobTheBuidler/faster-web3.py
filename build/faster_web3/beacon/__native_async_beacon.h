#ifndef MYPYC_NATIVE_faster_web3___beacon___async_beacon_H
#define MYPYC_NATIVE_faster_web3___beacon___async_beacon_H
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
    uint32_t bitmap;
    char _is_async;
    PyObject *_base_url;
    double _request_timeout;
    PyObject *__request_session_manager;
} faster_web3___beacon___async_beacon___AsyncBeaconObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__params;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__uri;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
} faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__endpoint_uri;
    PyObject *___mypyc_generator_attribute__body;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__uri;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
} faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
} faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
} faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__10;
    tuple_T3OOO ___mypyc_temp__11;
} faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__12;
    tuple_T3OOO ___mypyc_temp__13;
} faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__validator_id;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__14;
    tuple_T3OOO ___mypyc_temp__15;
} faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__16;
    tuple_T3OOO ___mypyc_temp__17;
} faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__18;
    tuple_T3OOO ___mypyc_temp__19;
} faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__20;
    tuple_T3OOO ___mypyc_temp__21;
} faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__22;
    tuple_T3OOO ___mypyc_temp__23;
} faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__24;
    tuple_T3OOO ___mypyc_temp__25;
} faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__26;
    tuple_T3OOO ___mypyc_temp__27;
} faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__28;
    tuple_T3OOO ___mypyc_temp__29;
} faster_web3___beacon___async_beacon___get_block_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__30;
    tuple_T3OOO ___mypyc_temp__31;
} faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__32;
    tuple_T3OOO ___mypyc_temp__33;
} faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__34;
    tuple_T3OOO ___mypyc_temp__35;
} faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__36;
    tuple_T3OOO ___mypyc_temp__37;
} faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_root;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__38;
    tuple_T3OOO ___mypyc_temp__39;
} faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__40;
    tuple_T3OOO ___mypyc_temp__41;
} faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__42;
    tuple_T3OOO ___mypyc_temp__43;
} faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__44;
    tuple_T3OOO ___mypyc_temp__45;
} faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__46;
    tuple_T3OOO ___mypyc_temp__47;
} faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__48;
    tuple_T3OOO ___mypyc_temp__49;
} faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__50;
    tuple_T3OOO ___mypyc_temp__51;
} faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__52;
    tuple_T3OOO ___mypyc_temp__53;
} faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__54;
    tuple_T3OOO ___mypyc_temp__55;
} faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__56;
    tuple_T3OOO ___mypyc_temp__57;
} faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__58;
    tuple_T3OOO ___mypyc_temp__59;
} faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__60;
    tuple_T3OOO ___mypyc_temp__61;
} faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__state_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__62;
    tuple_T3OOO ___mypyc_temp__63;
} faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__64;
    tuple_T3OOO ___mypyc_temp__65;
} faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__66;
    tuple_T3OOO ___mypyc_temp__67;
} faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__68;
    tuple_T3OOO ___mypyc_temp__69;
} faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__peer_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__70;
    tuple_T3OOO ___mypyc_temp__71;
} faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__72;
    tuple_T3OOO ___mypyc_temp__73;
} faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__url;
    PyObject *___mypyc_temp__74;
    tuple_T3OOO ___mypyc_temp__75;
    PyObject *___mypyc_generator_attribute__response;
} faster_web3___beacon___async_beacon___get_health_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__76;
    tuple_T3OOO ___mypyc_temp__77;
} faster_web3___beacon___async_beacon___get_version_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__78;
    tuple_T3OOO ___mypyc_temp__79;
} faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__block_id;
    PyObject *___mypyc_generator_attribute__indices;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__indices_param;
    PyObject *___mypyc_temp__80;
    tuple_T3OOO ___mypyc_temp__81;
} faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__epoch;
    PyObject *___mypyc_generator_attribute__validator_indices;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__82;
    tuple_T3OOO ___mypyc_temp__83;
} faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__epoch;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__84;
    tuple_T3OOO ___mypyc_temp__85;
} faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__epoch;
    PyObject *___mypyc_generator_attribute__validator_indices;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__86;
    tuple_T3OOO ___mypyc_temp__87;
} faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__epoch;
    PyObject *___mypyc_generator_attribute__validator_indices;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__88;
    tuple_T3OOO ___mypyc_temp__89;
} faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_genObject;


struct export_table_faster_web3___beacon___async_beacon {
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___AsyncBeacon;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon)(PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap);
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_genObject **faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_genObject **faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_block_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_health_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_version_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen_free_instance;
    PyTypeObject **CPyType_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen;
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen)(void);
    CPyThreadLocal faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_genObject **faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen_free_instance;
    char (*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_get_request_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon____async_make_get_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon____async_make_post_request_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon____async_make_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_uri, PyObject *cpy_r_body);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_genesis_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_genesis)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_hash_root_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_hash_root)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_data_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_fork_data)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_finality_checkpoint_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_finality_checkpoint)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validators_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_validators)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_validator)(PyObject *cpy_r_self, PyObject *cpy_r_validator_id, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_validator_balances_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_validator_balances)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_committees_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_epoch_committees)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_sync_committees_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_epoch_sync_committees)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_epoch_randao_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_epoch_randao)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_headers_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_block_headers)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_header_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_block_header)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_block)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_root_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_block_root)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_attestations_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_block_attestations)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blinded_blocks_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_blinded_blocks)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_rewards_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_rewards)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_bootstrap_structure_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_light_client_bootstrap_structure)(PyObject *cpy_r_self, PyObject *cpy_r_block_root);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_updates_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_light_client_updates)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_finality_update_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_light_client_finality_update)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_light_client_optimistic_update_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_light_client_optimistic_update)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_attestations)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_slashings_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_attester_slashings)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_proposer_slashings_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_proposer_slashings)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_voluntary_exits_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_voluntary_exits)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_bls_to_execution_changes_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_bls_to_execution_changes)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_fork_schedule_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_fork_schedule)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_spec_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_spec)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_deposit_contract_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_deposit_contract)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_state_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_beacon_state)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_beacon_heads_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_beacon_heads)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_node_identity_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_node_identity)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peers_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_peers)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_peer)(PyObject *cpy_r_self, PyObject *cpy_r_peer_id);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_peer_count_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_peer_count)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_health_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_health)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_version_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_version)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_syncing_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_syncing)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_blob_sidecars_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_blob_sidecars)(PyObject *cpy_r_self, PyObject *cpy_r_block_id, PyObject *cpy_r_indices);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attester_duties_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_attester_duties)(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_block_proposer_duties_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_block_proposer_duties)(PyObject *cpy_r_self, PyObject *cpy_r_epoch);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_sync_committee_duties_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_sync_committee_duties)(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___get_attestations_rewards_AsyncBeacon_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon___get_attestations_rewards)(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
    char (*CPyDef_faster_web3___beacon___async_beacon___AsyncBeacon_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    char (*CPyDef_faster_web3___beacon___async_beacon_____top_level__)(void);
};
#endif
