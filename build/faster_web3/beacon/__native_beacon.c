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
#include "__native_beacon.h"
#include "__native_internal_beacon.h"

static int
faster_web3___beacon___beacon___Beacon_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef_faster_web3___beacon___beacon_____mypyc__Beacon_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon(PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap);

static PyObject *
faster_web3___beacon___beacon___Beacon_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___beacon___beacon___Beacon) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___beacon___beacon_____mypyc__Beacon_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_faster_web3___beacon___beacon___Beacon_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
faster_web3___beacon___beacon___Beacon_traverse(faster_web3___beacon___beacon___BeaconObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_base_url);
    Py_VISIT(self->__request_session_manager);
    return 0;
}

static int
faster_web3___beacon___beacon___Beacon_clear(faster_web3___beacon___beacon___BeaconObject *self)
{
    Py_CLEAR(self->_base_url);
    Py_CLEAR(self->__request_session_manager);
    return 0;
}

static void
faster_web3___beacon___beacon___Beacon_dealloc(faster_web3___beacon___beacon___BeaconObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, faster_web3___beacon___beacon___Beacon_dealloc)
    faster_web3___beacon___beacon___Beacon_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___beacon___beacon___Beacon_vtable[46];
static bool
CPyDef_faster_web3___beacon___beacon___Beacon_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___beacon___beacon___Beacon_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon_____init__,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_genesis,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_hash_root,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_data,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_validators,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_validator,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_validator_balances,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_committees,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_randao,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_block_headers,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_block_header,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_block,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_block_root,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_block_attestations,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_blinded_blocks,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_rewards,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_updates,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_slashings,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_proposer_slashings,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_voluntary_exits,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_schedule,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_spec,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_deposit_contract,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_state,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_heads,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_node_identity,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_peers,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_peer,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_peer_count,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_health,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_version,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_syncing,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_blob_sidecars,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_duties,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties,
        (CPyVTableItem)CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations_rewards,
    };
    memcpy(faster_web3___beacon___beacon___Beacon_vtable, faster_web3___beacon___beacon___Beacon_vtable_scratch, sizeof(faster_web3___beacon___beacon___Beacon_vtable));
    return 1;
}

static PyObject *
faster_web3___beacon___beacon___Beacon_get_base_url(faster_web3___beacon___beacon___BeaconObject *self, void *closure);
static int
faster_web3___beacon___beacon___Beacon_set_base_url(faster_web3___beacon___beacon___BeaconObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___beacon___beacon___Beacon_get_request_timeout(faster_web3___beacon___beacon___BeaconObject *self, void *closure);
static int
faster_web3___beacon___beacon___Beacon_set_request_timeout(faster_web3___beacon___beacon___BeaconObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___beacon___beacon___Beacon_get__request_session_manager(faster_web3___beacon___beacon___BeaconObject *self, void *closure);
static int
faster_web3___beacon___beacon___Beacon_set__request_session_manager(faster_web3___beacon___beacon___BeaconObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___beacon___beacon___Beacon_getseters[] = {
    {"base_url",
     (getter)faster_web3___beacon___beacon___Beacon_get_base_url, (setter)faster_web3___beacon___beacon___Beacon_set_base_url,
     NULL, NULL},
    {"request_timeout",
     (getter)faster_web3___beacon___beacon___Beacon_get_request_timeout, (setter)faster_web3___beacon___beacon___Beacon_set_request_timeout,
     NULL, NULL},
    {"_request_session_manager",
     (getter)faster_web3___beacon___beacon___Beacon_get__request_session_manager, (setter)faster_web3___beacon___beacon___Beacon_set__request_session_manager,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___beacon___beacon___Beacon_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, base_url, request_timeout=10.0, /)\n--\n\n")},
    {"_make_get_request",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon____make_get_request,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_make_get_request($self, endpoint_url, params=None)\n--\n\n")},
    {"_make_post_request",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon____make_post_request,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_make_post_request($self, endpoint_url, body)\n--\n\n")},
    {"get_genesis",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_genesis,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_genesis($self)\n--\n\n")},
    {"get_hash_root",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_hash_root,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_hash_root($self, state_id=\'head\')\n--\n\n")},
    {"get_fork_data",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_fork_data,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_fork_data($self, state_id=\'head\')\n--\n\n")},
    {"get_finality_checkpoint",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_finality_checkpoint($self, state_id=\'head\')\n--\n\n")},
    {"get_validators",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_validators,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_validators($self, state_id=\'head\')\n--\n\n")},
    {"get_validator",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_validator,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_validator($self, validator_id, state_id=\'head\')\n--\n\n")},
    {"get_validator_balances",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_validator_balances,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_validator_balances($self, state_id=\'head\')\n--\n\n")},
    {"get_epoch_committees",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_committees,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_epoch_committees($self, state_id=\'head\')\n--\n\n")},
    {"get_epoch_sync_committees",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_epoch_sync_committees($self, state_id=\'head\')\n--\n\n")},
    {"get_epoch_randao",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_randao,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_epoch_randao($self, state_id=\'head\')\n--\n\n")},
    {"get_block_headers",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_block_headers,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_block_headers($self)\n--\n\n")},
    {"get_block_header",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_block_header,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_block_header($self, block_id)\n--\n\n")},
    {"get_block",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_block,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_block($self, block_id)\n--\n\n")},
    {"get_block_root",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_block_root,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_block_root($self, block_id)\n--\n\n")},
    {"get_block_attestations",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_block_attestations,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_block_attestations($self, block_id)\n--\n\n")},
    {"get_blinded_blocks",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_blinded_blocks,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_blinded_blocks($self, block_id)\n--\n\n")},
    {"get_rewards",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_rewards,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_rewards($self, block_id)\n--\n\n")},
    {"get_light_client_bootstrap_structure",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_light_client_bootstrap_structure($self, block_root)\n--\n\n")},
    {"get_light_client_updates",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_updates,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_light_client_updates($self)\n--\n\n")},
    {"get_light_client_finality_update",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_light_client_finality_update($self)\n--\n\n")},
    {"get_light_client_optimistic_update",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_light_client_optimistic_update($self)\n--\n\n")},
    {"get_attestations",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_attestations,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_attestations($self)\n--\n\n")},
    {"get_attester_slashings",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_attester_slashings,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_attester_slashings($self)\n--\n\n")},
    {"get_proposer_slashings",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_proposer_slashings,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_proposer_slashings($self)\n--\n\n")},
    {"get_voluntary_exits",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_voluntary_exits,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_voluntary_exits($self)\n--\n\n")},
    {"get_bls_to_execution_changes",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_bls_to_execution_changes($self)\n--\n\n")},
    {"get_fork_schedule",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_fork_schedule,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_fork_schedule($self)\n--\n\n")},
    {"get_spec",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_spec,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_spec($self)\n--\n\n")},
    {"get_deposit_contract",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_deposit_contract,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_deposit_contract($self)\n--\n\n")},
    {"get_beacon_state",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_beacon_state,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_beacon_state($self, state_id=\'head\')\n--\n\n")},
    {"get_beacon_heads",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_beacon_heads,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_beacon_heads($self)\n--\n\n")},
    {"get_node_identity",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_node_identity,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_node_identity($self)\n--\n\n")},
    {"get_peers",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_peers,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_peers($self)\n--\n\n")},
    {"get_peer",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_peer,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_peer($self, peer_id)\n--\n\n")},
    {"get_peer_count",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_peer_count,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_peer_count($self)\n--\n\n")},
    {"get_health",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_health,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_health($self)\n--\n\n")},
    {"get_version",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_version,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_version($self)\n--\n\n")},
    {"get_syncing",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_syncing,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_syncing($self)\n--\n\n")},
    {"get_blob_sidecars",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_blob_sidecars,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_blob_sidecars($self, block_id, indices=None)\n--\n\n")},
    {"get_attester_duties",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_attester_duties,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_attester_duties($self, epoch, validator_indices)\n--\n\n")},
    {"get_block_proposer_duties",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_block_proposer_duties($self, epoch)\n--\n\n")},
    {"get_sync_committee_duties",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_sync_committee_duties($self, epoch, validator_indices)\n--\n\n")},
    {"get_attestations_rewards",
     (PyCFunction)CPyPy_faster_web3___beacon___beacon___Beacon___get_attestations_rewards,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_attestations_rewards($self, epoch, validator_indices)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___beacon___beacon___Beacon_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Beacon",
    .tp_new = faster_web3___beacon___beacon___Beacon_new,
    .tp_dealloc = (destructor)faster_web3___beacon___beacon___Beacon_dealloc,
    .tp_traverse = (traverseproc)faster_web3___beacon___beacon___Beacon_traverse,
    .tp_clear = (inquiry)faster_web3___beacon___beacon___Beacon_clear,
    .tp_getset = faster_web3___beacon___beacon___Beacon_getseters,
    .tp_methods = faster_web3___beacon___beacon___Beacon_methods,
    .tp_init = faster_web3___beacon___beacon___Beacon_init,
    .tp_basicsize = sizeof(faster_web3___beacon___beacon___BeaconObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("Beacon(base_url, request_timeout=10.0, /)\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___beacon___beacon___Beacon_template = &CPyType_faster_web3___beacon___beacon___Beacon_template_;

PyObject *CPyDef_faster_web3___beacon___beacon_____mypyc__Beacon_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___beacon___beacon___BeaconObject *self;
    self = (faster_web3___beacon___beacon___BeaconObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___beacon___beacon___Beacon_vtable;
    self->bitmap = 0;
    self->_request_timeout = -113.0;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon(PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap)
{
    PyObject *self = CPyDef_faster_web3___beacon___beacon_____mypyc__Beacon_setup((PyObject *)CPyType_faster_web3___beacon___beacon___Beacon);
    if (self == NULL)
        return NULL;
    char res = CPyDef_faster_web3___beacon___beacon___Beacon_____init__(self, cpy_r_base_url, cpy_r_request_timeout, cpy_r___bitmap);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
faster_web3___beacon___beacon___Beacon_get_base_url(faster_web3___beacon___beacon___BeaconObject *self, void *closure)
{
    if (unlikely(self->_base_url == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'base_url' of 'Beacon' undefined");
        return NULL;
    }
    CPy_INCREF(self->_base_url);
    PyObject *retval = self->_base_url;
    return retval;
}

static int
faster_web3___beacon___beacon___Beacon_set_base_url(faster_web3___beacon___beacon___BeaconObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Beacon' object attribute 'base_url' cannot be deleted");
        return -1;
    }
    if (self->_base_url != NULL) {
        CPy_DECREF(self->_base_url);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_base_url = tmp;
    return 0;
}

static PyObject *
faster_web3___beacon___beacon___Beacon_get_request_timeout(faster_web3___beacon___beacon___BeaconObject *self, void *closure)
{
    if (unlikely(self->_request_timeout == -113.0) && !(((faster_web3___beacon___beacon___BeaconObject *)self)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'request_timeout' of 'Beacon' undefined");
        return NULL;
    }
    PyObject *retval = PyFloat_FromDouble(self->_request_timeout);
    return retval;
}

static int
faster_web3___beacon___beacon___Beacon_set_request_timeout(faster_web3___beacon___beacon___BeaconObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Beacon' object attribute 'request_timeout' cannot be deleted");
        return -1;
    }
    double tmp;
    tmp = PyFloat_AsDouble(value);
    if (tmp == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", value); return -1;
    }
    self->_request_timeout = tmp;
    if (unlikely(tmp == -113.0)) {
        ((faster_web3___beacon___beacon___BeaconObject *)self)->bitmap |= 1;
    }
    return 0;
}

static PyObject *
faster_web3___beacon___beacon___Beacon_get__request_session_manager(faster_web3___beacon___beacon___BeaconObject *self, void *closure)
{
    if (unlikely(self->__request_session_manager == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_request_session_manager' of 'Beacon' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->__request_session_manager);
    PyObject *retval = self->__request_session_manager;
    return retval;
}

static int
faster_web3___beacon___beacon___Beacon_set__request_session_manager(faster_web3___beacon___beacon___BeaconObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Beacon' object attribute '_request_session_manager' cannot be deleted");
        return -1;
    }
    if (self->__request_session_manager != NULL) {
        CPy_DECREF_NO_IMM(self->__request_session_manager);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, *exports_faster_web3.CPyType_faster_web3____utils___http_session_manager___HTTPSessionManager)))
        tmp = value;
    else {
        CPy_TypeError("faster_web3._utils.http_session_manager.HTTPSessionManager", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->__request_session_manager = tmp;
    return 0;
}
static PyMethodDef faster_web3___beacon___beaconmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___beacon___beacon(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___beacon___beacon__internal, "__name__");
    CPyStatic_faster_web3___beacon___beacon___globals = PyModule_GetDict(CPyModule_faster_web3___beacon___beacon__internal);
    if (unlikely(CPyStatic_faster_web3___beacon___beacon___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___beacon___beacon_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___beacon___beacon__internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_faster_web3___beacon___beacon___Beacon);
    return -1;
}
static struct PyModuleDef faster_web3___beacon___beaconmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.beacon.beacon",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___beacon___beaconmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___beacon___beacon(void)
{
    if (CPyModule_faster_web3___beacon___beacon__internal) {
        Py_INCREF(CPyModule_faster_web3___beacon___beacon__internal);
        return CPyModule_faster_web3___beacon___beacon__internal;
    }
    CPyModule_faster_web3___beacon___beacon__internal = PyModule_Create(&faster_web3___beacon___beaconmodule);
    if (unlikely(CPyModule_faster_web3___beacon___beacon__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___beacon___beacon(CPyModule_faster_web3___beacon___beacon__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___beacon___beacon__internal;
    fail:
    return NULL;
}

char CPyDef_faster_web3___beacon___beacon___Beacon_____init__(PyObject *cpy_r_self, PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap) {
    uint32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = cpy_r___bitmap & 1;
    cpy_r_r1 = cpy_r_r0 == 0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_request_timeout = 10.0;
CPyL2: ;
    CPy_INCREF(cpy_r_base_url);
    if (((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_base_url != NULL) {
        CPy_DECREF(((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_base_url);
    }
    ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_base_url = cpy_r_base_url;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "__init__", 74, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL7;
    }
    if (unlikely(cpy_r_request_timeout == -113.0)) {
        ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->bitmap |= 1;
    }
    ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_request_timeout = cpy_r_request_timeout;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "__init__", 75, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = exports_faster_web3.CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "__init__", 76, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL7;
    }
    if (((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->__request_session_manager != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->__request_session_manager);
    }
    ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->__request_session_manager = cpy_r_r6;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "__init__", 76, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"base_url", "request_timeout", 0};
    PyObject *obj_base_url;
    PyObject *obj_request_timeout = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|O", "__init__", kwlist, &obj_base_url, &obj_request_timeout)) {
        return NULL;
    }
    uint32_t __bitmap = 0;
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_base_url;
    if (likely(PyUnicode_Check(obj_base_url)))
        arg_base_url = obj_base_url;
    else {
        CPy_TypeError("str", obj_base_url); 
        goto fail;
    }
    double arg_request_timeout = -113.0;
    if (obj_request_timeout != NULL) {
        __bitmap |= 1 << 0;
        arg_request_timeout = PyFloat_AsDouble(obj_request_timeout);
        if (arg_request_timeout == -1.0 && PyErr_Occurred()) {
            CPy_TypeError("float", obj_request_timeout); goto fail;
        }
    }
    char retval = CPyDef_faster_web3___beacon___beacon___Beacon_____init__(arg_self, arg_base_url, arg_request_timeout, __bitmap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "__init__", 69, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_url, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    double cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    if (cpy_r_params != NULL) goto CPyL12;
    cpy_r_r0 = Py_None;
    cpy_r_params = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_base_url;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_web3/beacon/beacon.py", "_make_get_request", "Beacon", "base_url", 81, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = PyUnicode_Concat(cpy_r_r1, cpy_r_endpoint_url);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_get_request", 81, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    cpy_r_r3 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->__request_session_manager;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_web3/beacon/beacon.py", "_make_get_request", "Beacon", "_request_session_manager", 82, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL14;
    }
    CPy_INCREF_NO_IMM(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_request_timeout;
    if (unlikely(cpy_r_r4 == -113.0) && !(((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'request_timeout' of 'Beacon' undefined");
    }
    cpy_r_r5 = cpy_r_r4 == -113.0;
    if (unlikely(cpy_r_r5)) goto CPyL7;
CPyL6: ;
    cpy_r_r6 = CPyStatics[3]; /* 'params' */
    cpy_r_r7 = CPyStatics[4]; /* 'timeout' */
    cpy_r_r8 = CPyTuple_LoadEmptyTupleConstant();
    cpy_r_r9 = PyFloat_FromDouble(cpy_r_r4);
    cpy_r_r10 = CPyDict_Build(2, cpy_r_r6, cpy_r_params, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_params);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_get_request", 82, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL15;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r11 = PyErr_Occurred();
    if (unlikely(cpy_r_r11 != NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_get_request", 83, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL16;
    } else
        goto CPyL6;
CPyL8: ;
    cpy_r_r12 = exports_faster_web3.CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___json_make_get_request(cpy_r_r3, cpy_r_r2, cpy_r_r8, cpy_r_r10);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF_NO_IMM(cpy_r_r3);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_get_request", 82, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL11;
    }
    if (likely(PyDict_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "_make_get_request", 85, CPyStatic_faster_web3___beacon___beacon___globals, "dict", cpy_r_r12);
        goto CPyL11;
    }
    return cpy_r_r13;
CPyL11: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL12: ;
    CPy_INCREF(cpy_r_params);
    goto CPyL2;
CPyL13: ;
    CPy_DecRef(cpy_r_params);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_params);
    CPy_DecRef(cpy_r_r2);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_params);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL11;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon____make_get_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"endpoint_url", "params", 0};
    static CPyArg_Parser parser = {"O|O:_make_get_request", kwlist, 0};
    PyObject *obj_endpoint_url;
    PyObject *obj_params = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_endpoint_url, &obj_params)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_endpoint_url;
    if (likely(PyUnicode_Check(obj_endpoint_url)))
        arg_endpoint_url = obj_endpoint_url;
    else {
        CPy_TypeError("str", obj_endpoint_url); 
        goto fail;
    }
    PyObject *arg_params;
    if (obj_params == NULL) {
        arg_params = NULL;
        goto __LL1;
    }
    if (PyDict_Check(obj_params))
        arg_params = obj_params;
    else {
        arg_params = NULL;
    }
    if (arg_params != NULL) goto __LL1;
    if (obj_params == Py_None)
        arg_params = obj_params;
    else {
        arg_params = NULL;
    }
    if (arg_params != NULL) goto __LL1;
    CPy_TypeError("dict or None", obj_params); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(arg_self, arg_endpoint_url, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_get_request", 78, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_url, PyObject *cpy_r_body) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    double cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_base_url;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/beacon/beacon.py", "_make_post_request", "Beacon", "base_url", 90, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyUnicode_Concat(cpy_r_r0, cpy_r_endpoint_url);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_post_request", 90, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL9;
    }
    cpy_r_r2 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->__request_session_manager;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_web3/beacon/beacon.py", "_make_post_request", "Beacon", "_request_session_manager", 91, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL10;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_request_timeout;
    if (unlikely(cpy_r_r3 == -113.0) && !(((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'request_timeout' of 'Beacon' undefined");
    }
    cpy_r_r4 = cpy_r_r3 == -113.0;
    if (unlikely(cpy_r_r4)) goto CPyL5;
CPyL4: ;
    cpy_r_r5 = CPyStatics[5]; /* 'json' */
    cpy_r_r6 = CPyStatics[4]; /* 'timeout' */
    cpy_r_r7 = CPyTuple_LoadEmptyTupleConstant();
    cpy_r_r8 = PyFloat_FromDouble(cpy_r_r3);
    cpy_r_r9 = CPyDict_Build(2, cpy_r_r5, cpy_r_body, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_post_request", 91, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL11;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r10 = PyErr_Occurred();
    if (unlikely(cpy_r_r10 != NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_post_request", 92, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL12;
    } else
        goto CPyL4;
CPyL6: ;
    cpy_r_r11 = exports_faster_web3.CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___json_make_post_request(cpy_r_r2, cpy_r_r1, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_post_request", 91, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL9;
    }
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "_make_post_request", 91, CPyStatic_faster_web3___beacon___beacon___globals, "dict", cpy_r_r11);
        goto CPyL9;
    }
    return cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon____make_post_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"endpoint_url", "body", 0};
    static CPyArg_Parser parser = {"OO:_make_post_request", kwlist, 0};
    PyObject *obj_endpoint_url;
    PyObject *obj_body;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_endpoint_url, &obj_body)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_endpoint_url;
    if (likely(PyUnicode_Check(obj_endpoint_url)))
        arg_endpoint_url = obj_endpoint_url;
    else {
        CPy_TypeError("str", obj_endpoint_url); 
        goto fail;
    }
    PyObject *arg_body;
    if (PyList_Check(obj_body))
        arg_body = obj_body;
    else {
        arg_body = NULL;
    }
    if (arg_body != NULL) goto __LL2;
    if (PyDict_Check(obj_body))
        arg_body = obj_body;
    else {
        arg_body = NULL;
    }
    if (arg_body != NULL) goto __LL2;
    CPy_TypeError("union[list, dict]", obj_body); 
    goto fail;
__LL2: ;
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request(arg_self, arg_endpoint_url, arg_body);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "_make_post_request", 87, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_genesis(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[6]; /* '/eth/v1/beacon/genesis' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_genesis", 100, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_genesis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_genesis", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_genesis(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_genesis", 99, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_hash_root(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[8]; /* '/eth/v1/beacon/states/{0}/root' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_hash_root", 103, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_hash_root", 103, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_hash_root", 103, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_hash_root(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_hash_root", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_hash_root(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_hash_root", 102, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_data(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[10]; /* '/eth/v1/beacon/states/{0}/fork' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_fork_data", 106, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_fork_data", 106, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_fork_data", 106, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_fork_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_fork_data", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_data(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_fork_data", 105, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[11]; /* '/eth/v1/beacon/states/{0}/finality_checkpoints' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_finality_checkpoint", 109, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_finality_checkpoint", 109, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_finality_checkpoint", 109, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_finality_checkpoint", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_finality_checkpoint", 108, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_validators(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[12]; /* '/eth/v1/beacon/states/{0}/validators' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validators", 112, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_validators", 112, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validators", 112, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_validators(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_validators", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_validators(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validators", 111, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_validator(PyObject *cpy_r_self, PyObject *cpy_r_validator_id, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[13]; /* '/eth/v1/beacon/states/{0}/validators/{1}' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[3] = {cpy_r_r1, cpy_r_state_id, cpy_r_validator_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validator", 117, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_validator", 117, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validator", 117, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_validator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"validator_id", "state_id", 0};
    static CPyArg_Parser parser = {"O|O:get_validator", kwlist, 0};
    PyObject *obj_validator_id;
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_validator_id, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_validator_id;
    if (likely(PyUnicode_Check(obj_validator_id)))
        arg_validator_id = obj_validator_id;
    else {
        CPy_TypeError("str", obj_validator_id); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_validator(arg_self, arg_validator_id, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validator", 114, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_validator_balances(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[14]; /* '/eth/v1/beacon/states/{0}/validator_balances' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validator_balances", 120, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_validator_balances", 120, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validator_balances", 120, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_validator_balances(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_validator_balances", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_validator_balances(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_validator_balances", 119, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_committees(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[15]; /* '/eth/v1/beacon/states/{0}/committees' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_committees", 123, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_epoch_committees", 123, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_committees", 123, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_committees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_epoch_committees", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_committees(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_committees", 122, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[16]; /* '/eth/v1/beacon/states/{0}/sync_committees' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_sync_committees", 126, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_epoch_sync_committees", 126, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_sync_committees", 126, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_epoch_sync_committees", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_sync_committees", 125, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_randao(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[17]; /* '/eth/v1/beacon/states/{0}/randao' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_randao", 129, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_epoch_randao", 129, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_randao", 129, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_randao(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_epoch_randao", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_randao(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_epoch_randao", 128, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_headers(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[18]; /* '/eth/v1/beacon/headers' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_headers", 134, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_headers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_block_headers", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_block_headers(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_headers", 133, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_header(PyObject *cpy_r_self, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[19]; /* '/eth/v1/beacon/headers/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_block_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_header", 137, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_block_header", 137, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_header", 137, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_id", 0};
    static CPyArg_Parser parser = {"O:get_block_header", kwlist, 0};
    PyObject *obj_block_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (likely(PyUnicode_Check(obj_block_id)))
        arg_block_id = obj_block_id;
    else {
        CPy_TypeError("str", obj_block_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_block_header(arg_self, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_header", 136, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block(PyObject *cpy_r_self, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[20]; /* '/eth/v2/beacon/blocks/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_block_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block", 142, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_block", 142, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block", 142, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_id", 0};
    static CPyArg_Parser parser = {"O:get_block", kwlist, 0};
    PyObject *obj_block_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (likely(PyUnicode_Check(obj_block_id)))
        arg_block_id = obj_block_id;
    else {
        CPy_TypeError("str", obj_block_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_block(arg_self, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block", 141, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_root(PyObject *cpy_r_self, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[21]; /* '/eth/v1/beacon/blocks/{0}/root' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_block_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_root", 145, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_block_root", 145, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_root", 145, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_root(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_id", 0};
    static CPyArg_Parser parser = {"O:get_block_root", kwlist, 0};
    PyObject *obj_block_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (likely(PyUnicode_Check(obj_block_id)))
        arg_block_id = obj_block_id;
    else {
        CPy_TypeError("str", obj_block_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_block_root(arg_self, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_root", 144, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_attestations(PyObject *cpy_r_self, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[22]; /* '/eth/v1/beacon/blocks/{0}/attestations' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_block_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_attestations", 148, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_block_attestations", 148, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_attestations", 148, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_attestations(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_id", 0};
    static CPyArg_Parser parser = {"O:get_block_attestations", kwlist, 0};
    PyObject *obj_block_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (likely(PyUnicode_Check(obj_block_id)))
        arg_block_id = obj_block_id;
    else {
        CPy_TypeError("str", obj_block_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_block_attestations(arg_self, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_attestations", 147, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_blinded_blocks(PyObject *cpy_r_self, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[23]; /* '/eth/v1/beacon/blinded_blocks/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_block_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blinded_blocks", 151, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_blinded_blocks", 151, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blinded_blocks", 151, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_blinded_blocks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_id", 0};
    static CPyArg_Parser parser = {"O:get_blinded_blocks", kwlist, 0};
    PyObject *obj_block_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (likely(PyUnicode_Check(obj_block_id)))
        arg_block_id = obj_block_id;
    else {
        CPy_TypeError("str", obj_block_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_blinded_blocks(arg_self, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blinded_blocks", 150, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_rewards(PyObject *cpy_r_self, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[24]; /* '/eth/v1/beacon/rewards/blocks/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_block_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_rewards", 156, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_rewards", 156, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_rewards", 156, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_rewards(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_id", 0};
    static CPyArg_Parser parser = {"O:get_rewards", kwlist, 0};
    PyObject *obj_block_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (likely(PyUnicode_Check(obj_block_id)))
        arg_block_id = obj_block_id;
    else {
        CPy_TypeError("str", obj_block_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_rewards(arg_self, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_rewards", 155, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure(PyObject *cpy_r_self, PyObject *cpy_r_block_root) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[25]; /* '/eth/v1/beacon/light_client/bootstrap/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_block_root};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_bootstrap_structure", 164, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_light_client_bootstrap_structure", 164, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_bootstrap_structure", 163, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_root", 0};
    static CPyArg_Parser parser = {"O:get_light_client_bootstrap_structure", kwlist, 0};
    PyObject *obj_block_root;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block_root)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_root;
    if (likely(PyUnicode_Check(obj_block_root)))
        arg_block_root = obj_block_root;
    else {
        CPy_TypeError("str", obj_block_root); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure(arg_self, arg_block_root);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_bootstrap_structure", 160, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_updates(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[26]; /* '/eth/v1/beacon/light_client/updates' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_updates", 168, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_updates(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_light_client_updates", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_updates(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_updates", 167, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[27]; /* '/eth/v1/beacon/light_client/finality_update' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_finality_update", 171, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_light_client_finality_update", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_finality_update", 170, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[28]; /* '/eth/v1/beacon/light_client/optimistic_update' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_optimistic_update", 174, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_light_client_optimistic_update", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_light_client_optimistic_update", 173, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[29]; /* '/eth/v1/beacon/pool/attestations' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attestations", 179, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attestations(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_attestations", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attestations", 178, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_slashings(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[30]; /* '/eth/v1/beacon/pool/attester_slashings' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attester_slashings", 182, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attester_slashings(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_attester_slashings", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_slashings(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attester_slashings", 181, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_proposer_slashings(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[31]; /* '/eth/v1/beacon/pool/proposer_slashings' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_proposer_slashings", 185, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_proposer_slashings(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_proposer_slashings", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_proposer_slashings(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_proposer_slashings", 184, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_voluntary_exits(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[32]; /* '/eth/v1/beacon/pool/voluntary_exits' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_voluntary_exits", 188, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_voluntary_exits(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_voluntary_exits", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_voluntary_exits(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_voluntary_exits", 187, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[33]; /* '/eth/v1/beacon/pool/bls_to_execution_changes' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_bls_to_execution_changes", 191, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_bls_to_execution_changes", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_bls_to_execution_changes", 190, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_schedule(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[34]; /* '/eth/v1/config/fork_schedule' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_fork_schedule", 196, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_fork_schedule(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_fork_schedule", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_schedule(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_fork_schedule", 195, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_spec(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[35]; /* '/eth/v1/config/spec' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_spec", 199, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_spec", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_spec(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_spec", 198, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_deposit_contract(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[36]; /* '/eth/v1/config/deposit_contract' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_deposit_contract", 202, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_deposit_contract(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_deposit_contract", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_deposit_contract(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_deposit_contract", 201, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_state(PyObject *cpy_r_self, PyObject *cpy_r_state_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_state_id != NULL) goto CPyL7;
    cpy_r_r0 = CPyStatics[7]; /* 'head' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_state_id = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[37]; /* '/eth/v1/debug/beacon/states/{0}' */
    cpy_r_r2 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r3[2] = {cpy_r_r1, cpy_r_state_id};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_beacon_state", 207, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_state_id);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_beacon_state", 207, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_beacon_state", 207, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_INCREF(cpy_r_state_id);
    goto CPyL2;
CPyL8: ;
    CPy_DecRef(cpy_r_state_id);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_beacon_state(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state_id", 0};
    static CPyArg_Parser parser = {"|O:get_beacon_state", kwlist, 0};
    PyObject *obj_state_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_state_id;
    if (obj_state_id == NULL) {
        arg_state_id = NULL;
    } else if (likely(PyUnicode_Check(obj_state_id)))
        arg_state_id = obj_state_id;
    else {
        CPy_TypeError("str", obj_state_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_state(arg_self, arg_state_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_beacon_state", 206, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_heads(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[38]; /* '/eth/v1/debug/beacon/heads' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_beacon_heads", 210, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_beacon_heads(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_beacon_heads", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_heads(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_beacon_heads", 209, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_node_identity(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[39]; /* '/eth/v1/node/identity' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_node_identity", 215, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_node_identity(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_node_identity", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_node_identity(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_node_identity", 214, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_peers(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[40]; /* '/eth/v1/node/peers' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_peers", 218, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_peers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_peers", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_peers(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_peers", 217, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_peer(PyObject *cpy_r_self, PyObject *cpy_r_peer_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[41]; /* '/eth/v1/node/peers/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_peer_id};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_peer", 221, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_peer", 221, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_peer", 221, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_peer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"peer_id", 0};
    static CPyArg_Parser parser = {"O:get_peer", kwlist, 0};
    PyObject *obj_peer_id;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_peer_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_peer_id;
    if (likely(PyUnicode_Check(obj_peer_id)))
        arg_peer_id = obj_peer_id;
    else {
        CPy_TypeError("str", obj_peer_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_peer(arg_self, arg_peer_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_peer", 220, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_peer_count(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[42]; /* '/eth/v1/node/peer_count' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_peer_count", 224, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_peer_count(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_peer_count", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_peer_count(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_peer_count", 223, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

CPyTagged CPyDef_faster_web3___beacon___beacon___Beacon___get_health(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    cpy_r_r0 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->_base_url;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/beacon/beacon.py", "get_health", "Beacon", "base_url", 227, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[43]; /* '/eth/v1/node/health' */
    cpy_r_r2 = PyUnicode_Concat(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_health", 227, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    cpy_r_r3 = ((faster_web3___beacon___beacon___BeaconObject *)cpy_r_self)->__request_session_manager;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_web3/beacon/beacon.py", "get_health", "Beacon", "_request_session_manager", 228, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL9;
    }
    CPy_INCREF_NO_IMM(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = CPyTuple_LoadEmptyTupleConstant();
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_health", 228, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL10;
    }
    cpy_r_r6 = exports_faster_web3.CPyDef_faster_web3____utils___http_session_manager___HTTPSessionManager___get_response_from_get_request(cpy_r_r3, cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF_NO_IMM(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_health", 228, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    cpy_r_r7 = CPyStatics[44]; /* 'status_code' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_health", 229, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r9 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r9 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_health", 229, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL8;
    }
    return cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = CPY_INT_TAG;
    return cpy_r_r10;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_health(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_health", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_health(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_health", 226, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_version(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[45]; /* '/eth/v1/node/version' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_version", 232, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_version", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_version(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_version", 231, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_syncing(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[46]; /* '/eth/v1/node/syncing' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_syncing", 235, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_syncing(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_syncing", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_syncing(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_syncing", 234, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_blob_sidecars(PyObject *cpy_r_self, PyObject *cpy_r_block_id, PyObject *cpy_r_indices) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_indices_param;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    if (cpy_r_indices != NULL) goto CPyL17;
    cpy_r_r0 = Py_None;
    cpy_r_indices = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_indices != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL18;
    CPy_INCREF(cpy_r_indices);
    if (likely(cpy_r_indices != Py_None))
        cpy_r_r3 = cpy_r_indices;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 240, CPyStatic_faster_web3___beacon___beacon___globals, "list", cpy_r_indices);
        goto CPyL19;
    }
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    CPy_DECREF_NO_IMM(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL18;
    cpy_r_r8 = CPyStatics[47]; /* 'indices' */
    cpy_r_r9 = CPyStatics[48]; /* ',' */
    cpy_r_r10 = (PyObject *)&PyUnicode_Type;
    if (likely(cpy_r_indices != Py_None))
        cpy_r_r11 = cpy_r_indices;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 242, CPyStatic_faster_web3___beacon___beacon___globals, "list", cpy_r_indices);
        goto CPyL16;
    }
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[49]; /* 'map' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 242, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL20;
    }
    PyObject *cpy_r_r15[2] = {cpy_r_r10, cpy_r_r11};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 2, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 242, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL20;
    }
    CPy_DECREF_NO_IMM(cpy_r_r11);
    cpy_r_r18 = PyUnicode_Join(cpy_r_r9, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 242, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL16;
    }
    cpy_r_r19 = CPyDict_Build(1, cpy_r_r8, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 242, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL16;
    }
    cpy_r_r20 = cpy_r_r19;
    goto CPyL12;
CPyL11: ;
    cpy_r_r21 = Py_None;
    cpy_r_r20 = cpy_r_r21;
CPyL12: ;
    cpy_r_indices_param = cpy_r_r20;
    cpy_r_r22 = CPyStatics[50]; /* '/eth/v1/beacon/blob_sidecars/{0}' */
    cpy_r_r23 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r24[2] = {cpy_r_r22, cpy_r_block_id};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 244, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL21;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 244, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r26);
        goto CPyL21;
    }
    cpy_r_r28 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r27, cpy_r_indices_param);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_indices_param);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 243, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL16;
    }
    return cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL17: ;
    CPy_INCREF(cpy_r_indices);
    goto CPyL2;
CPyL18: ;
    CPy_DECREF(cpy_r_indices);
    goto CPyL11;
CPyL19: ;
    CPy_DecRef(cpy_r_indices);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_indices_param);
    goto CPyL16;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_blob_sidecars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_id", "indices", 0};
    static CPyArg_Parser parser = {"O|O:get_blob_sidecars", kwlist, 0};
    PyObject *obj_block_id;
    PyObject *obj_indices = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_block_id, &obj_indices)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (likely(PyUnicode_Check(obj_block_id)))
        arg_block_id = obj_block_id;
    else {
        CPy_TypeError("str", obj_block_id); 
        goto fail;
    }
    PyObject *arg_indices;
    if (obj_indices == NULL) {
        arg_indices = NULL;
        goto __LL3;
    }
    if (PyList_Check(obj_indices))
        arg_indices = obj_indices;
    else {
        arg_indices = NULL;
    }
    if (arg_indices != NULL) goto __LL3;
    if (obj_indices == Py_None)
        arg_indices = obj_indices;
    else {
        arg_indices = NULL;
    }
    if (arg_indices != NULL) goto __LL3;
    CPy_TypeError("list or None", obj_indices); 
    goto fail;
__LL3: ;
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_blob_sidecars(arg_self, arg_block_id, arg_indices);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_blob_sidecars", 239, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_duties(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[51]; /* '/eth/v1/validator/duties/attester/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_epoch};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attester_duties", 254, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_attester_duties", 254, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request(cpy_r_self, cpy_r_r5, cpy_r_validator_indices);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attester_duties", 253, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attester_duties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"epoch", "validator_indices", 0};
    static CPyArg_Parser parser = {"OO:get_attester_duties", kwlist, 0};
    PyObject *obj_epoch;
    PyObject *obj_validator_indices;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_epoch, &obj_validator_indices)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_epoch;
    if (likely(PyUnicode_Check(obj_epoch)))
        arg_epoch = obj_epoch;
    else {
        CPy_TypeError("str", obj_epoch); 
        goto fail;
    }
    PyObject *arg_validator_indices;
    if (likely(PyList_Check(obj_validator_indices)))
        arg_validator_indices = obj_validator_indices;
    else {
        CPy_TypeError("list", obj_validator_indices); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_duties(arg_self, arg_epoch, arg_validator_indices);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attester_duties", 250, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties(PyObject *cpy_r_self, PyObject *cpy_r_epoch) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[52]; /* '/eth/v1/validator/duties/proposer/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_epoch};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_proposer_duties", 258, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_block_proposer_duties", 258, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(cpy_r_self, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_proposer_duties", 258, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"epoch", 0};
    static CPyArg_Parser parser = {"O:get_block_proposer_duties", kwlist, 0};
    PyObject *obj_epoch;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_epoch)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_epoch;
    if (likely(PyUnicode_Check(obj_epoch)))
        arg_epoch = obj_epoch;
    else {
        CPy_TypeError("str", obj_epoch); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties(arg_self, arg_epoch);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_block_proposer_duties", 257, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[53]; /* '/eth/v1/validator/duties/sync/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_epoch};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_sync_committee_duties", 264, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_sync_committee_duties", 264, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request(cpy_r_self, cpy_r_r5, cpy_r_validator_indices);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_sync_committee_duties", 263, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"epoch", "validator_indices", 0};
    static CPyArg_Parser parser = {"OO:get_sync_committee_duties", kwlist, 0};
    PyObject *obj_epoch;
    PyObject *obj_validator_indices;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_epoch, &obj_validator_indices)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_epoch;
    if (likely(PyUnicode_Check(obj_epoch)))
        arg_epoch = obj_epoch;
    else {
        CPy_TypeError("str", obj_epoch); 
        goto fail;
    }
    PyObject *arg_validator_indices;
    if (likely(PyList_Check(obj_validator_indices)))
        arg_validator_indices = obj_validator_indices;
    else {
        CPy_TypeError("list", obj_validator_indices); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties(arg_self, arg_epoch, arg_validator_indices);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_sync_committee_duties", 260, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations_rewards(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[54]; /* '/eth/v1/beacon/rewards/attestations/{0}' */
    cpy_r_r1 = CPyStatics[9]; /* 'format' */
    PyObject *cpy_r_r2[2] = {cpy_r_r0, cpy_r_epoch};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attestations_rewards", 273, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/beacon/beacon.py", "get_attestations_rewards", 273, CPyStatic_faster_web3___beacon___beacon___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    cpy_r_r6 = CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request(cpy_r_self, cpy_r_r5, cpy_r_validator_indices);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attestations_rewards", 272, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attestations_rewards(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"epoch", "validator_indices", 0};
    static CPyArg_Parser parser = {"OO:get_attestations_rewards", kwlist, 0};
    PyObject *obj_epoch;
    PyObject *obj_validator_indices;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_epoch, &obj_validator_indices)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___beacon___beacon___Beacon)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.beacon.beacon.Beacon", obj_self); 
        goto fail;
    }
    PyObject *arg_epoch;
    if (likely(PyUnicode_Check(obj_epoch)))
        arg_epoch = obj_epoch;
    else {
        CPy_TypeError("str", obj_epoch); 
        goto fail;
    }
    PyObject *arg_validator_indices;
    if (likely(PyList_Check(obj_validator_indices)))
        arg_validator_indices = obj_validator_indices;
    else {
        CPy_TypeError("list", obj_validator_indices); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations_rewards(arg_self, arg_epoch, arg_validator_indices);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/beacon/beacon.py", "get_attestations_rewards", 269, CPyStatic_faster_web3___beacon___beacon___globals);
    return NULL;
}

char CPyDef_faster_web3___beacon___beacon_____top_level__(void) {
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
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[55]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", -1, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[120]; /* ('Any', 'Dict', 'Final', 'List', 'Optional', 'Union',
                                   'cast', 'final') */
    cpy_r_r6 = CPyStatics[64]; /* 'typing' */
    cpy_r_r7 = CPyStatic_faster_web3___beacon___beacon___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 1, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[121]; /* ('URI', 'HexStr') */
    cpy_r_r10 = CPyStatics[67]; /* 'eth_typing' */
    cpy_r_r11 = CPyStatic_faster_web3___beacon___beacon___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 12, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    CPyModule_eth_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[122]; /* ('HTTPSessionManager',) */
    cpy_r_r14 = CPyStatics[69]; /* 'faster_web3._utils.http_session_manager' */
    cpy_r_r15 = CPyStatic_faster_web3___beacon___beacon___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 17, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    CPyModule_faster_web3____utils___http_session_manager = cpy_r_r16;
    CPy_INCREF(CPyModule_faster_web3____utils___http_session_manager);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[123]; /* ('GET_ATTESTATIONS', 'GET_ATTESTATIONS_REWARDS',
                                    'GET_ATTESTER_DUTIES', 'GET_ATTESTER_SLASHINGS',
                                    'GET_BEACON_HEADS', 'GET_BEACON_STATE',
                                    'GET_BLINDED_BLOCKS', 'GET_BLOB_SIDECARS', 'GET_BLOCK',
                                    'GET_BLOCK_ATTESTATIONS', 'GET_BLOCK_HEADER',
                                    'GET_BLOCK_HEADERS', 'GET_BLOCK_PROPOSERS_DUTIES',
                                    'GET_BLOCK_ROOT', 'GET_BLS_TO_EXECUTION_CHANGES',
                                    'GET_DEPOSIT_CONTRACT', 'GET_EPOCH_COMMITTEES',
                                    'GET_EPOCH_RANDAO', 'GET_EPOCH_SYNC_COMMITTEES',
                                    'GET_FINALITY_CHECKPOINT', 'GET_FORK_DATA',
                                    'GET_FORK_SCHEDULE', 'GET_GENESIS', 'GET_HASH_ROOT',
                                    'GET_HEALTH', 'GET_LIGHT_CLIENT_BOOTSTRAP_STRUCTURE',
                                    'GET_LIGHT_CLIENT_FINALITY_UPDATE',
                                    'GET_LIGHT_CLIENT_OPTIMISTIC_UPDATE',
                                    'GET_LIGHT_CLIENT_UPDATES', 'GET_NODE_IDENTITY',
                                    'GET_PEER', 'GET_PEER_COUNT', 'GET_PEERS',
                                    'GET_PROPOSER_SLASHINGS', 'GET_REWARDS', 'GET_SPEC',
                                    'GET_SYNC_COMMITTEE_DUTIES', 'GET_SYNCING',
                                    'GET_VALIDATOR', 'GET_VALIDATOR_BALANCES',
                                    'GET_VALIDATORS', 'GET_VERSION', 'GET_VOLUNTARY_EXITS') */
    cpy_r_r18 = CPyStatics[113]; /* 'faster_web3.beacon.api_endpoints' */
    cpy_r_r19 = CPyStatic_faster_web3___beacon___beacon___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 20, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    CPyModule_faster_web3___beacon___api_endpoints = cpy_r_r20;
    CPy_INCREF(CPyModule_faster_web3___beacon___api_endpoints);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyStatics[114]; /* 'faster_web3.beacon.beacon' */
    cpy_r_r23 = (PyObject *)CPyType_faster_web3___beacon___beacon___Beacon_template;
    cpy_r_r24 = CPyType_FromTemplate(cpy_r_r23, cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 68, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    cpy_r_r25 = CPyDef_faster_web3___beacon___beacon___Beacon_trait_vtable_setup();
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", -1, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL14;
    }
    cpy_r_r26 = CPyStatics[115]; /* '__mypyc_attrs__' */
    cpy_r_r27 = CPyStatics[116]; /* 'base_url' */
    cpy_r_r28 = CPyStatics[117]; /* 'request_timeout' */
    cpy_r_r29 = CPyStatics[118]; /* '_request_session_manager' */
    cpy_r_r30 = PyTuple_Pack(3, cpy_r_r27, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 68, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL14;
    }
    cpy_r_r31 = PyObject_SetAttr(cpy_r_r24, cpy_r_r26, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 68, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL14;
    }
    CPyType_faster_web3___beacon___beacon___Beacon = (PyTypeObject *)cpy_r_r24;
    CPy_INCREF(CPyType_faster_web3___beacon___beacon___Beacon);
    cpy_r_r33 = CPyStatic_faster_web3___beacon___beacon___globals;
    cpy_r_r34 = CPyStatics[119]; /* 'Beacon' */
    cpy_r_r35 = PyDict_SetItem(cpy_r_r33, cpy_r_r34, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("faster_web3/beacon/beacon.py", "<module>", 68, CPyStatic_faster_web3___beacon___beacon___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL14: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL13;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___beacon___beacon = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_web3____utils___http_session_manager = Py_None;
    CPyModule_faster_web3___beacon___api_endpoints = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[124];
const char * const CPyLit_Str[] = {
    "\005\006params\atimeout\004json\026/eth/v1/beacon/genesis\004head",
    "\003\036/eth/v1/beacon/states/{0}/root\006format\036/eth/v1/beacon/states/{0}/fork",
    "\001./eth/v1/beacon/states/{0}/finality_checkpoints",
    "\001$/eth/v1/beacon/states/{0}/validators",
    "\001(/eth/v1/beacon/states/{0}/validators/{1}",
    "\001,/eth/v1/beacon/states/{0}/validator_balances",
    "\001$/eth/v1/beacon/states/{0}/committees",
    "\001)/eth/v1/beacon/states/{0}/sync_committees",
    "\002 /eth/v1/beacon/states/{0}/randao\026/eth/v1/beacon/headers",
    "\002\032/eth/v1/beacon/headers/{0}\031/eth/v2/beacon/blocks/{0}",
    "\002\036/eth/v1/beacon/blocks/{0}/root&/eth/v1/beacon/blocks/{0}/attestations",
    "\002!/eth/v1/beacon/blinded_blocks/{0}!/eth/v1/beacon/rewards/blocks/{0}",
    "\001)/eth/v1/beacon/light_client/bootstrap/{0}",
    "\001#/eth/v1/beacon/light_client/updates",
    "\001+/eth/v1/beacon/light_client/finality_update",
    "\001-/eth/v1/beacon/light_client/optimistic_update",
    "\001 /eth/v1/beacon/pool/attestations",
    "\001&/eth/v1/beacon/pool/attester_slashings",
    "\001&/eth/v1/beacon/pool/proposer_slashings",
    "\001#/eth/v1/beacon/pool/voluntary_exits",
    "\001,/eth/v1/beacon/pool/bls_to_execution_changes",
    "\002\034/eth/v1/config/fork_schedule\023/eth/v1/config/spec",
    "\002\037/eth/v1/config/deposit_contract\037/eth/v1/debug/beacon/states/{0}",
    "\003\032/eth/v1/debug/beacon/heads\025/eth/v1/node/identity\022/eth/v1/node/peers",
    "\003\026/eth/v1/node/peers/{0}\027/eth/v1/node/peer_count\023/eth/v1/node/health",
    "\006\vstatus_code\024/eth/v1/node/version\024/eth/v1/node/syncing\aindices\001,\003map",
    "\001 /eth/v1/beacon/blob_sidecars/{0}",
    "\001%/eth/v1/validator/duties/attester/{0}",
    "\001%/eth/v1/validator/duties/proposer/{0}",
    "\001!/eth/v1/validator/duties/sync/{0}",
    "\006\'/eth/v1/beacon/rewards/attestations/{0}\bbuiltins\003Any\004Dict\005Final\004List",
    "\b\bOptional\005Union\004cast\005final\006typing\003URI\006HexStr\neth_typing",
    "\002\022HTTPSessionManager\'faster_web3._utils.http_session_manager",
    "\003\020GET_ATTESTATIONS\030GET_ATTESTATIONS_REWARDS\023GET_ATTESTER_DUTIES",
    "\003\026GET_ATTESTER_SLASHINGS\020GET_BEACON_HEADS\020GET_BEACON_STATE",
    "\004\022GET_BLINDED_BLOCKS\021GET_BLOB_SIDECARS\tGET_BLOCK\026GET_BLOCK_ATTESTATIONS",
    "\003\020GET_BLOCK_HEADER\021GET_BLOCK_HEADERS\032GET_BLOCK_PROPOSERS_DUTIES",
    "\003\016GET_BLOCK_ROOT\034GET_BLS_TO_EXECUTION_CHANGES\024GET_DEPOSIT_CONTRACT",
    "\003\024GET_EPOCH_COMMITTEES\020GET_EPOCH_RANDAO\031GET_EPOCH_SYNC_COMMITTEES",
    "\004\027GET_FINALITY_CHECKPOINT\rGET_FORK_DATA\021GET_FORK_SCHEDULE\vGET_GENESIS",
    "\003\rGET_HASH_ROOT\nGET_HEALTH$GET_LIGHT_CLIENT_BOOTSTRAP_STRUCTURE",
    "\002 GET_LIGHT_CLIENT_FINALITY_UPDATE\"GET_LIGHT_CLIENT_OPTIMISTIC_UPDATE",
    "\004\030GET_LIGHT_CLIENT_UPDATES\021GET_NODE_IDENTITY\bGET_PEER\016GET_PEER_COUNT",
    "\004\tGET_PEERS\026GET_PROPOSER_SLASHINGS\vGET_REWARDS\bGET_SPEC",
    "\003\031GET_SYNC_COMMITTEE_DUTIES\vGET_SYNCING\rGET_VALIDATOR",
    "\004\026GET_VALIDATOR_BALANCES\016GET_VALIDATORS\vGET_VERSION\023GET_VOLUNTARY_EXITS",
    "\002 faster_web3.beacon.api_endpoints\031faster_web3.beacon.beacon",
    "\004\017__mypyc_attrs__\bbase_url\017request_timeout\030_request_session_manager",
    "\001\006Beacon",
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
    4, 8, 56, 57, 58, 59, 60, 61, 62, 63, 2, 65, 66, 1, 68, 43, 70, 71,
    72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___beacon___beacon__internal = NULL;
CPyModule *CPyModule_faster_web3___beacon___beacon;
PyObject *CPyStatic_faster_web3___beacon___beacon___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_faster_web3____utils___http_session_manager;
CPyModule *CPyModule_faster_web3___beacon___api_endpoints;
PyTypeObject *CPyType_faster_web3___beacon___beacon___Beacon;
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon(PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap);
char CPyDef_faster_web3___beacon___beacon___Beacon_____init__(PyObject *cpy_r_self, PyObject *cpy_r_base_url, double cpy_r_request_timeout, uint32_t cpy_r___bitmap);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_url, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon____make_get_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request(PyObject *cpy_r_self, PyObject *cpy_r_endpoint_url, PyObject *cpy_r_body);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon____make_post_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_genesis(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_genesis(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_hash_root(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_hash_root(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_data(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_fork_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_validators(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_validators(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_validator(PyObject *cpy_r_self, PyObject *cpy_r_validator_id, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_validator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_validator_balances(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_validator_balances(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_committees(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_committees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_randao(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_epoch_randao(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_headers(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_headers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_header(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_root(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_root(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_attestations(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_attestations(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_blinded_blocks(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_blinded_blocks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_rewards(PyObject *cpy_r_self, PyObject *cpy_r_block_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_rewards(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure(PyObject *cpy_r_self, PyObject *cpy_r_block_root);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_updates(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_updates(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attestations(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_slashings(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attester_slashings(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_proposer_slashings(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_proposer_slashings(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_voluntary_exits(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_voluntary_exits(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_schedule(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_fork_schedule(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_spec(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_deposit_contract(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_deposit_contract(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_state(PyObject *cpy_r_self, PyObject *cpy_r_state_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_beacon_state(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_heads(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_beacon_heads(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_node_identity(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_node_identity(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_peers(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_peers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_peer(PyObject *cpy_r_self, PyObject *cpy_r_peer_id);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_peer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_peer_count(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_peer_count(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_faster_web3___beacon___beacon___Beacon___get_health(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_health(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_version(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_syncing(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_syncing(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_blob_sidecars(PyObject *cpy_r_self, PyObject *cpy_r_block_id, PyObject *cpy_r_indices);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_blob_sidecars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_duties(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attester_duties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties(PyObject *cpy_r_self, PyObject *cpy_r_epoch);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations_rewards(PyObject *cpy_r_self, PyObject *cpy_r_epoch, PyObject *cpy_r_validator_indices);
PyObject *CPyPy_faster_web3___beacon___beacon___Beacon___get_attestations_rewards(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___beacon___beacon_____top_level__(void);

static struct export_table_faster_web3___beacon___beacon exports = {
    &CPyType_faster_web3___beacon___beacon___Beacon,
    &CPyDef_faster_web3___beacon___beacon___Beacon,
    &CPyDef_faster_web3___beacon___beacon___Beacon_____init__,
    &CPyDef_faster_web3___beacon___beacon___Beacon____make_get_request,
    &CPyDef_faster_web3___beacon___beacon___Beacon____make_post_request,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_genesis,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_hash_root,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_data,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_finality_checkpoint,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_validators,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_validator,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_validator_balances,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_committees,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_sync_committees,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_epoch_randao,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_block_headers,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_block_header,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_block,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_block_root,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_block_attestations,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_blinded_blocks,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_rewards,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_bootstrap_structure,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_updates,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_finality_update,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_light_client_optimistic_update,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_slashings,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_proposer_slashings,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_voluntary_exits,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_bls_to_execution_changes,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_fork_schedule,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_spec,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_deposit_contract,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_state,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_beacon_heads,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_node_identity,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_peers,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_peer,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_peer_count,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_health,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_version,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_syncing,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_blob_sidecars,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_attester_duties,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_block_proposer_duties,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_sync_committee_duties,
    &CPyDef_faster_web3___beacon___beacon___Beacon___get_attestations_rewards,
    &CPyDef_faster_web3___beacon___beacon_____top_level__,
};

static int exec_beacon__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.beacon.beacon__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___beacon___beacon(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___beacon___beacon, "faster_web3.beacon.beacon__mypyc.init_faster_web3___beacon___beacon", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___beacon___beacon", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    tmp = PyImport_ImportModule("faster_web3__mypyc"); if (!tmp) goto fail; Py_DECREF(tmp);
    struct export_table_faster_web3 *pexports_faster_web3 = PyCapsule_Import("faster_web3__mypyc.exports", 0);
    if (!pexports_faster_web3) {
        goto fail;
    }
    memcpy(&exports_faster_web3, pexports_faster_web3, sizeof(exports_faster_web3));
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_beacon__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.beacon.beacon__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_beacon__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_beacon__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_beacon__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
