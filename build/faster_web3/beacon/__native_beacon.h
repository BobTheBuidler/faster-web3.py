#ifndef MYPYC_NATIVE_faster_web3___beacon___beacon_H
#define MYPYC_NATIVE_faster_web3___beacon___beacon_H
#include <Python.h>
#include <CPy.h>
typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    uint32_t bitmap;
    PyObject *_base_url;
    double _request_timeout;
    PyObject *__request_session_manager;
} faster_web3___beacon___beacon___BeaconObject;


struct export_table_faster_web3___beacon___beacon {
    PyTypeObject **CPyType_faster_web3___beacon___beacon___Beacon;
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon)(PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap);
    char (*CPyDef_faster_web3___beacon___beacon___Beacon_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_url, PyObject *cpy_r_params);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request)(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_url, PyObject *cpy_r_body);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_genesis)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_hash_root)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_data)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_validators)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_validator)(PyObject *cpy_r_self, PyObject *cpy_r_validator_id, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_validator_balances)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_committees)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_randao)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_block_headers)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_block_header)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_block)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_block_root)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_block_attestations)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_blinded_blocks)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_rewards)(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure)(PyObject *cpy_r_self, PyObject *cpy_r_block_root);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_updates)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_slashings)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_proposer_slashings)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_voluntary_exits)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_schedule)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_spec)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_deposit_contract)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_state)(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_heads)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_node_identity)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_peers)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_peer)(PyObject *cpy_r_self, PyObject *cpy_r_peer_id);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_peer_count)(PyObject *cpy_r_self);
    CPyTagged (*CPyDef_faster_web3___beacon___beacon___Beacon___get_health)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_version)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_syncing)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_blob_sidecars)(PyObject *cpy_r_self, PyObject *cpy_r_block_id, PyObject *cpy_r_indices);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_duties)(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties)(PyObject *cpy_r_self, PyObject *cpy_r_epoch);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties)(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
    PyObject *(*CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations_rewards)(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
    char (*CPyDef_faster_web3___beacon___beacon_____top_level__)(void);
};
#endif
