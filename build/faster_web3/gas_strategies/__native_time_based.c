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
#include "__native_time_based.h"
#include "__native_internal_time_based.h"

PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_get_raw_miner_data_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen(void);

static PyObject *
faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_get_raw_miner_data_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_traverse(faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__w3);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__sample_size)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__sample_size));
    }
    Py_VISIT(self->___mypyc_generator_attribute__latest);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->___mypyc_generator_attribute__transaction);
    Py_VISIT(self->___mypyc_generator_attribute__block);
    if (CPyTagged_CheckLong(self->___mypyc_temp__2)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__2));
    }
    if (CPyTagged_CheckLong(self->___mypyc_temp__3)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__3));
    }
    Py_VISIT(self->___mypyc_generator_attribute___);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5);
    return 0;
}

static int
faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_clear(faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__w3);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__sample_size)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__sample_size;
        self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_generator_attribute__latest);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->___mypyc_generator_attribute__transaction);
    Py_CLEAR(self->___mypyc_generator_attribute__block);
    if (CPyTagged_CheckLong(self->___mypyc_temp__2)) {
        CPyTagged __tmp = self->___mypyc_temp__2;
        self->___mypyc_temp__2 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->___mypyc_temp__3)) {
        CPyTagged __tmp = self->___mypyc_temp__3;
        self->___mypyc_temp__3 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_generator_attribute___);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5);
    return 0;
}

static void
faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_dealloc(faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance == NULL) {
        faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__w3);
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__sample_size)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__sample_size;
            self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
        }
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__latest);
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1);
        Py_CLEAR(self->___mypyc_generator_attribute__transaction);
        Py_CLEAR(self->___mypyc_generator_attribute__block);
        if (CPyTagged_CheckLong(self->___mypyc_temp__2)) {
            CPyTagged __tmp = self->___mypyc_temp__2;
            self->___mypyc_temp__2 = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_temp__2 = CPY_INT_TAG;
        }
        if (CPyTagged_CheckLong(self->___mypyc_temp__3)) {
            CPyTagged __tmp = self->___mypyc_temp__3;
            self->___mypyc_temp__3 = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_temp__3 = CPY_INT_TAG;
        }
        Py_CLEAR(self->___mypyc_generator_attribute___);
        Py_CLEAR(self->___mypyc_temp__4);
        Py_CLEAR(self->___mypyc_temp__5);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_dealloc)
    faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_vtable[6];
static bool
CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close,
    };
    memcpy(faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_vtable, faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_vtable_scratch, sizeof(faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_get_raw_miner_data_gen",
    .tp_new = faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_new,
    .tp_dealloc = (destructor)faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_traverse,
    .tp_clear = (inquiry)faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_clear,
    .tp_methods = faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_methods,
    .tp_iter = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__,
    .tp_basicsize = sizeof(faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("_get_raw_miner_data_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_template = &CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_template_;

PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_get_raw_miner_data_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *self;
    if (faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance != NULL) {
        self = faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance;
        faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_vtable;
    self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__2 = CPY_INT_TAG;
    self->___mypyc_temp__3 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen(void)
{
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_get_raw_miner_data_gen_setup((PyObject *)CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_aggregate_miner_data_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen(void);

static PyObject *
faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_aggregate_miner_data_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_traverse(faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__raw_data);
    Py_VISIT(self->___mypyc_generator_attribute__data_by_miner);
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7);
    Py_VISIT(self->___mypyc_generator_attribute__miner);
    Py_VISIT(self->___mypyc_generator_attribute__miner_data);
    Py_VISIT(self->___mypyc_generator_attribute___);
    Py_VISIT(self->___mypyc_generator_attribute__block_hashes);
    Py_VISIT(self->___mypyc_generator_attribute__gas_prices);
    Py_VISIT(self->___mypyc_temp__8.f0);
    Py_VISIT(self->___mypyc_temp__8.f1);
    Py_VISIT(self->___mypyc_temp__8.f2);
    return 0;
}

static int
faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_clear(faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__raw_data);
    Py_CLEAR(self->___mypyc_generator_attribute__data_by_miner);
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7);
    Py_CLEAR(self->___mypyc_generator_attribute__miner);
    Py_CLEAR(self->___mypyc_generator_attribute__miner_data);
    Py_CLEAR(self->___mypyc_generator_attribute___);
    Py_CLEAR(self->___mypyc_generator_attribute__block_hashes);
    Py_CLEAR(self->___mypyc_generator_attribute__gas_prices);
    Py_CLEAR(self->___mypyc_temp__8.f0);
    Py_CLEAR(self->___mypyc_temp__8.f1);
    Py_CLEAR(self->___mypyc_temp__8.f2);
    return 0;
}

static void
faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_dealloc(faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance == NULL) {
        faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance = self;
        self->bitmap = 0;
        Py_CLEAR(self->___mypyc_generator_attribute__raw_data);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__data_by_miner);
        Py_CLEAR(self->___mypyc_temp__6);
        Py_CLEAR(self->___mypyc_temp__7);
        Py_CLEAR(self->___mypyc_generator_attribute__miner);
        Py_CLEAR(self->___mypyc_generator_attribute__miner_data);
        Py_CLEAR(self->___mypyc_generator_attribute___);
        Py_CLEAR(self->___mypyc_generator_attribute__block_hashes);
        Py_CLEAR(self->___mypyc_generator_attribute__gas_prices);
        self->___mypyc_generator_attribute__price_percentile = -113.0;
        Py_CLEAR(self->___mypyc_temp__8.f0);
        Py_CLEAR(self->___mypyc_temp__8.f1);
        Py_CLEAR(self->___mypyc_temp__8.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_dealloc)
    faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_vtable[6];
static bool
CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close,
    };
    memcpy(faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_vtable, faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_vtable_scratch, sizeof(faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_aggregate_miner_data_gen",
    .tp_new = faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_new,
    .tp_dealloc = (destructor)faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_traverse,
    .tp_clear = (inquiry)faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_clear,
    .tp_methods = faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_methods,
    .tp_iter = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__,
    .tp_basicsize = sizeof(faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("_aggregate_miner_data_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_template = &CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_template_;

PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_aggregate_miner_data_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *self;
    if (faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance != NULL) {
        self = faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance;
        faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_vtable;
    self->bitmap = 0;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__price_percentile = -113.0;
    self->___mypyc_temp__8 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen(void)
{
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_aggregate_miner_data_gen_setup((PyObject *)CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_compute_probabilities_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen(void);

static PyObject *
faster_web3___gas_strategies___time_based____compute_probabilities_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_compute_probabilities_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___gas_strategies___time_based____compute_probabilities_gen_traverse(faster_web3___gas_strategies___time_based____compute_probabilities_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__miner_data);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__wait_blocks)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__wait_blocks));
    }
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__sample_size)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__sample_size));
    }
    Py_VISIT(self->___mypyc_generator_attribute__miner_data_by_price);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__idx)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__idx));
    }
    Py_VISIT(self->___mypyc_generator_attribute__low_percentile_gas_price);
    Py_VISIT(self->___mypyc_temp__11);
    Py_VISIT(self->___mypyc_generator_attribute__m);
    Py_VISIT(self->___mypyc_generator_attribute__num_blocks_accepting_price);
    Py_VISIT(self->___mypyc_generator_attribute__inv_prob_per_block);
    Py_VISIT(self->___mypyc_generator_attribute__probability_accepted);
    return 0;
}

static int
faster_web3___gas_strategies___time_based____compute_probabilities_gen_clear(faster_web3___gas_strategies___time_based____compute_probabilities_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__miner_data);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__wait_blocks)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__wait_blocks;
        self->___mypyc_generator_attribute__wait_blocks = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__sample_size)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__sample_size;
        self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_generator_attribute__miner_data_by_price);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__idx)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__idx;
        self->___mypyc_generator_attribute__idx = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_generator_attribute__low_percentile_gas_price);
    Py_CLEAR(self->___mypyc_temp__11);
    Py_CLEAR(self->___mypyc_generator_attribute__m);
    Py_CLEAR(self->___mypyc_generator_attribute__num_blocks_accepting_price);
    Py_CLEAR(self->___mypyc_generator_attribute__inv_prob_per_block);
    Py_CLEAR(self->___mypyc_generator_attribute__probability_accepted);
    return 0;
}

static void
faster_web3___gas_strategies___time_based____compute_probabilities_gen_dealloc(faster_web3___gas_strategies___time_based____compute_probabilities_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance == NULL) {
        faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__miner_data);
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__wait_blocks)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__wait_blocks;
            self->___mypyc_generator_attribute__wait_blocks = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__wait_blocks = CPY_INT_TAG;
        }
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__sample_size)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__sample_size;
            self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
        }
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__miner_data_by_price);
        self->___mypyc_temp__9 = CPY_INT_TAG;
        self->___mypyc_temp__10 = CPY_INT_TAG;
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__idx)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__idx;
            self->___mypyc_generator_attribute__idx = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__idx = CPY_INT_TAG;
        }
        Py_CLEAR(self->___mypyc_generator_attribute__low_percentile_gas_price);
        Py_CLEAR(self->___mypyc_temp__11);
        self->___mypyc_temp__12 = -113;
        self->___mypyc_temp__13 = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__m);
        Py_CLEAR(self->___mypyc_generator_attribute__num_blocks_accepting_price);
        Py_CLEAR(self->___mypyc_generator_attribute__inv_prob_per_block);
        Py_CLEAR(self->___mypyc_generator_attribute__probability_accepted);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___gas_strategies___time_based____compute_probabilities_gen_dealloc)
    faster_web3___gas_strategies___time_based____compute_probabilities_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___gas_strategies___time_based____compute_probabilities_gen_vtable[6];
static bool
CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___gas_strategies___time_based____compute_probabilities_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close,
    };
    memcpy(faster_web3___gas_strategies___time_based____compute_probabilities_gen_vtable, faster_web3___gas_strategies___time_based____compute_probabilities_gen_vtable_scratch, sizeof(faster_web3___gas_strategies___time_based____compute_probabilities_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___gas_strategies___time_based____compute_probabilities_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_compute_probabilities_gen",
    .tp_new = faster_web3___gas_strategies___time_based____compute_probabilities_gen_new,
    .tp_dealloc = (destructor)faster_web3___gas_strategies___time_based____compute_probabilities_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___gas_strategies___time_based____compute_probabilities_gen_traverse,
    .tp_clear = (inquiry)faster_web3___gas_strategies___time_based____compute_probabilities_gen_clear,
    .tp_methods = faster_web3___gas_strategies___time_based____compute_probabilities_gen_methods,
    .tp_iter = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__,
    .tp_basicsize = sizeof(faster_web3___gas_strategies___time_based____compute_probabilities_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("_compute_probabilities_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen_template = &CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen_template_;

PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_compute_probabilities_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___gas_strategies___time_based____compute_probabilities_genObject *self;
    if (faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance != NULL) {
        self = faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance;
        faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___gas_strategies___time_based____compute_probabilities_gen_vtable;
    self->___mypyc_generator_attribute__wait_blocks = CPY_INT_TAG;
    self->___mypyc_generator_attribute__sample_size = CPY_INT_TAG;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__9 = CPY_INT_TAG;
    self->___mypyc_temp__10 = CPY_INT_TAG;
    self->___mypyc_generator_attribute__idx = CPY_INT_TAG;
    self->___mypyc_temp__12 = -113;
    self->___mypyc_temp__13 = -113;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen(void)
{
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc___3_compute_probabilities_gen_setup((PyObject *)CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc__construct_time_based_gas_price_strategy_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env(void);

static PyObject *
faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc__construct_time_based_gas_price_strategy_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_traverse(faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_max_wait_seconds)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_max_wait_seconds));
    }
    if (CPyTagged_CheckLong(self->_sample_size)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_sample_size));
    }
    if (CPyTagged_CheckLong(self->_probability)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_probability));
    }
    Py_VISIT(self->_time_based_gas_price_strategy);
    return 0;
}

static int
faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_clear(faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_max_wait_seconds)) {
        CPyTagged __tmp = self->_max_wait_seconds;
        self->_max_wait_seconds = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_sample_size)) {
        CPyTagged __tmp = self->_sample_size;
        self->_sample_size = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_probability)) {
        CPyTagged __tmp = self->_probability;
        self->_probability = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_time_based_gas_price_strategy);
    return 0;
}

static void
faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_dealloc(faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance == NULL) {
        faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        if (CPyTagged_CheckLong(self->_max_wait_seconds)) {
            CPyTagged __tmp = self->_max_wait_seconds;
            self->_max_wait_seconds = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->_max_wait_seconds = CPY_INT_TAG;
        }
        if (CPyTagged_CheckLong(self->_sample_size)) {
            CPyTagged __tmp = self->_sample_size;
            self->_sample_size = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->_sample_size = CPY_INT_TAG;
        }
        if (CPyTagged_CheckLong(self->_probability)) {
            CPyTagged __tmp = self->_probability;
            self->_probability = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->_probability = CPY_INT_TAG;
        }
        self->_weighted = 2;
        Py_CLEAR(self->_time_based_gas_price_strategy);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_dealloc)
    faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_vtable[1];
static bool
CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_vtable, faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_vtable_scratch, sizeof(faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_vtable));
    return 1;
}

static PyMethodDef faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "construct_time_based_gas_price_strategy_env",
    .tp_new = faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_new,
    .tp_dealloc = (destructor)faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_traverse,
    .tp_clear = (inquiry)faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_clear,
    .tp_methods = faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_methods,
    .tp_basicsize = sizeof(faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("construct_time_based_gas_price_strategy_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_template = &CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_template_;

PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc__construct_time_based_gas_price_strategy_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *self;
    if (faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance != NULL) {
        self = faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance;
        faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_vtable;
    self->_max_wait_seconds = CPY_INT_TAG;
    self->_sample_size = CPY_INT_TAG;
    self->_probability = CPY_INT_TAG;
    self->_weighted = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env(void)
{
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc__construct_time_based_gas_price_strategy_env_setup((PyObject *)CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc__time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj(void);

static PyObject *
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc__time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_traverse(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_clear(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_dealloc(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance == NULL) {
        faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_dealloc)
    faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_vtable[2];
static bool
CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__,
    };
    memcpy(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_vtable, faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_vtable_scratch, sizeof(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_vtable));
    return 1;
}

static PyObject *
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_get___3_mypyc_env__(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self, void *closure);
static int
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_set___3_mypyc_env__(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_get___3_mypyc_env__, (setter)faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($w3, transaction_params)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj",
    .tp_new = faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_new,
    .tp_dealloc = (destructor)faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_traverse,
    .tp_clear = (inquiry)faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_clear,
    .tp_getset = faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_getseters,
    .tp_methods = faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj,
    .tp_basicsize = sizeof(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_template = &CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_template_;

PyObject *CPyDef_faster_web3___gas_strategies___time_based_____mypyc__time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self;
    if (faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance != NULL) {
        self = faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance;
        faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_vtable;
    self->vectorcall = CPyPy_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj(void)
{
    PyObject *self = CPyDef_faster_web3___gas_strategies___time_based_____mypyc__time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_setup((PyObject *)CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_get___3_mypyc_env__(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_set___3_mypyc_env__(faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based.construct_time_based_gas_price_strategy_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}
static PyMethodDef faster_web3___gas_strategies___time_basedmodule_methods[] = {
    {"_get_avg_block_time", (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_avg_block_time, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_get_avg_block_time(w3, sample_size)\n--\n\n") /* docstring */},
    {"_get_weighted_avg_block_time", (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_get_weighted_avg_block_time(w3, sample_size)\n--\n\n") /* docstring */},
    {"_get_raw_miner_data", (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_get_raw_miner_data(w3, sample_size)\n--\n\n") /* docstring */},
    {"_aggregate_miner_data", (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_aggregate_miner_data(raw_data)\n--\n\n") /* docstring */},
    {"_compute_probabilities", (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_compute_probabilities(miner_data, wait_blocks, sample_size)\n--\n\n") /* docstring */},
    {"_compute_gas_price", (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based____compute_gas_price, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_compute_gas_price(probabilities, desired_probability)\n--\n\n") /* docstring */},
    {"construct_time_based_gas_price_strategy", (PyCFunction)CPyPy_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("construct_time_based_gas_price_strategy(max_wait_seconds, sample_size=120, probability=98, weighted=False)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___gas_strategies___time_based(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___gas_strategies___time_based__internal, "__name__");
    CPyStatic_faster_web3___gas_strategies___time_based___globals = PyModule_GetDict(CPyModule_faster_web3___gas_strategies___time_based__internal);
    if (unlikely(CPyStatic_faster_web3___gas_strategies___time_based___globals == NULL))
        goto fail;
    CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen))
        goto fail;
    CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen))
        goto fail;
    CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen))
        goto fail;
    CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env))
        goto fail;
    CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___gas_strategies___time_based_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___gas_strategies___time_based__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_web3___gas_strategies___time_based___fast_gas_price_strategy);
    CPyStatic_faster_web3___gas_strategies___time_based___fast_gas_price_strategy = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___gas_strategies___time_based___medium_gas_price_strategy);
    CPyStatic_faster_web3___gas_strategies___time_based___medium_gas_price_strategy = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___gas_strategies___time_based___slow_gas_price_strategy);
    CPyStatic_faster_web3___gas_strategies___time_based___slow_gas_price_strategy = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___gas_strategies___time_based___glacial_gas_price_strategy);
    CPyStatic_faster_web3___gas_strategies___time_based___glacial_gas_price_strategy = NULL;
    Py_CLEAR(CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen);
    Py_CLEAR(CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen);
    Py_CLEAR(CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen);
    Py_CLEAR(CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env);
    Py_CLEAR(CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj);
    return -1;
}
static struct PyModuleDef faster_web3___gas_strategies___time_basedmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.gas_strategies.time_based",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___gas_strategies___time_basedmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___gas_strategies___time_based(void)
{
    if (CPyModule_faster_web3___gas_strategies___time_based__internal) {
        Py_INCREF(CPyModule_faster_web3___gas_strategies___time_based__internal);
        return CPyModule_faster_web3___gas_strategies___time_based__internal;
    }
    CPyModule_faster_web3___gas_strategies___time_based__internal = PyModule_Create(&faster_web3___gas_strategies___time_basedmodule);
    if (unlikely(CPyModule_faster_web3___gas_strategies___time_based__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___gas_strategies___time_based(CPyModule_faster_web3___gas_strategies___time_based__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___gas_strategies___time_based__internal;
    fail:
    return NULL;
}

double CPyDef_faster_web3___gas_strategies___time_based____get_avg_block_time(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_latest;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_constrained_sample_size;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_oldest;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    double cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    double cpy_r_r56;
    cpy_r_r0 = CPyStatics[3]; /* 'eth' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 52, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL31;
    }
    cpy_r_r2 = CPyStatics[4]; /* 'latest' */
    cpy_r_r3 = CPyStatics[5]; /* 'get_block' */
    PyObject *cpy_r_r4[2] = {cpy_r_r1, cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 52, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_latest = cpy_r_r6;
    cpy_r_r7 = CPyStatics[6]; /* 'number' */
    CPy_INCREF(cpy_r_latest);
    cpy_r_r8 = cpy_r_latest;
    cpy_r_r9 = PyObject_GetItem(cpy_r_r8, cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 54, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL33;
    }
    cpy_r_r10 = cpy_r_r9;
    CPyTagged_INCREF(cpy_r_sample_size);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_sample_size);
    cpy_r_r12 = PyObject_RichCompare(cpy_r_r10, cpy_r_r11, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 54, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL34;
    }
    cpy_r_r13 = PyObject_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 54, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL34;
    }
    cpy_r_r15 = cpy_r_r13;
    if (!cpy_r_r15) goto CPyL35;
    cpy_r_r16 = cpy_r_r10;
    goto CPyL9;
CPyL8: ;
    CPyTagged_INCREF(cpy_r_sample_size);
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_sample_size);
    cpy_r_r16 = cpy_r_r17;
CPyL9: ;
    cpy_r_constrained_sample_size = cpy_r_r16;
    cpy_r_r18 = CPyStatics[80]; /* 0 */
    cpy_r_r19 = PyObject_RichCompare(cpy_r_constrained_sample_size, cpy_r_r18, 2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 55, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL36;
    }
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 55, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL36;
    }
    cpy_r_r22 = cpy_r_r20;
    if (cpy_r_r22) {
        goto CPyL37;
    } else
        goto CPyL16;
CPyL12: ;
    cpy_r_r23 = CPyStatics[7]; /* 'Constrained sample size is 0' */
    cpy_r_r24 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r25 = CPyStatics[8]; /* 'Web3ValidationError' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 56, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 56, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL31;
    }
    CPy_Raise(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 56, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r30 = CPyStatics[3]; /* 'eth' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 58, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL36;
    }
    cpy_r_r32 = CPyStatics[6]; /* 'number' */
    CPy_INCREF(cpy_r_latest);
    cpy_r_r33 = cpy_r_latest;
    cpy_r_r34 = PyObject_GetItem(cpy_r_r33, cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 58, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL38;
    }
    cpy_r_r35 = cpy_r_r34;
    cpy_r_r36 = PyNumber_Subtract(cpy_r_r35, cpy_r_constrained_sample_size);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 58, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL38;
    }
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 58, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL38;
    }
    cpy_r_r38 = CPyStatics[5]; /* 'get_block' */
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r37);
    PyObject *cpy_r_r40[2] = {cpy_r_r31, cpy_r_r39};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_VectorcallMethod(cpy_r_r38, cpy_r_r41, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 58, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r39);
    cpy_r_oldest = cpy_r_r42;
    cpy_r_r43 = CPyStatics[9]; /* 'timestamp' */
    cpy_r_r44 = cpy_r_latest;
    cpy_r_r45 = PyObject_GetItem(cpy_r_r44, cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 59, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL40;
    }
    cpy_r_r46 = cpy_r_r45;
    cpy_r_r47 = CPyStatics[9]; /* 'timestamp' */
    cpy_r_r48 = cpy_r_oldest;
    cpy_r_r49 = PyObject_GetItem(cpy_r_r48, cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 59, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    cpy_r_r50 = cpy_r_r49;
    cpy_r_r51 = PyNumber_Subtract(cpy_r_r46, cpy_r_r50);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 59, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r52 = PyNumber_TrueDivide(cpy_r_r51, cpy_r_constrained_sample_size);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_constrained_sample_size);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 59, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL31;
    }
    cpy_r_r53 = PyFloat_AsDouble(cpy_r_r52);
    if (cpy_r_r53 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r52); cpy_r_r53 = -113.0;
    }
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 == -113.0;
    if (unlikely(cpy_r_r54)) goto CPyL30;
CPyL29: ;
    return cpy_r_r53;
CPyL30: ;
    cpy_r_r55 = PyErr_Occurred();
    if (unlikely(cpy_r_r55 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 59, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    } else
        goto CPyL29;
CPyL31: ;
    cpy_r_r56 = -113.0;
    return cpy_r_r56;
CPyL32: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_latest);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_latest);
    CPy_DecRef(cpy_r_r10);
    goto CPyL31;
CPyL35: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL8;
CPyL36: ;
    CPy_DecRef(cpy_r_latest);
    CPy_DecRef(cpy_r_constrained_sample_size);
    goto CPyL31;
CPyL37: ;
    CPy_DECREF(cpy_r_latest);
    CPy_DECREF(cpy_r_constrained_sample_size);
    goto CPyL12;
CPyL38: ;
    CPy_DecRef(cpy_r_latest);
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r31);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_latest);
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r39);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_oldest);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r46);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    goto CPyL31;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_avg_block_time(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"w3", "sample_size", 0};
    static CPyArg_Parser parser = {"OO:_get_avg_block_time", kwlist, 0};
    PyObject *obj_w3;
    PyObject *obj_sample_size;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_w3, &obj_sample_size)) {
        return NULL;
    }
    PyObject *arg_w3 = obj_w3;
    CPyTagged arg_sample_size;
    if (likely(PyLong_Check(obj_sample_size)))
        arg_sample_size = CPyTagged_BorrowFromObject(obj_sample_size);
    else {
        CPy_TypeError("int", obj_sample_size); goto fail;
    }
    double retval = CPyDef_faster_web3___gas_strategies___time_based____get_avg_block_time(arg_w3, arg_sample_size);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_avg_block_time", 51, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

double CPyDef_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_latest_block_number;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_constrained_sample_size;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_oldest_block;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_prev_timestamp;
    double cpy_r_weighted_sum;
    double cpy_r_sum_of_weights;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_curr_timestamp;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_time;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    double cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    double cpy_r_r78;
    char cpy_r_r79;
    double cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    double cpy_r_r85;
    double cpy_r_r86;
    cpy_r_r0 = CPyStatics[3]; /* 'eth' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 63, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    }
    cpy_r_r2 = CPyStatics[4]; /* 'latest' */
    cpy_r_r3 = CPyStatics[5]; /* 'get_block' */
    PyObject *cpy_r_r4[2] = {cpy_r_r1, cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 63, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r7 = CPyStatics[6]; /* 'number' */
    cpy_r_r8 = PyObject_GetItem(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 63, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    }
    cpy_r_latest_block_number = cpy_r_r8;
    CPyTagged_INCREF(cpy_r_sample_size);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_sample_size);
    cpy_r_r10 = PyObject_RichCompare(cpy_r_latest_block_number, cpy_r_r9, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 64, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL51;
    }
    cpy_r_r11 = PyObject_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 64, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL51;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL7;
    CPy_INCREF(cpy_r_latest_block_number);
    cpy_r_r14 = cpy_r_latest_block_number;
    goto CPyL8;
CPyL7: ;
    CPyTagged_INCREF(cpy_r_sample_size);
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_sample_size);
    cpy_r_r14 = cpy_r_r15;
CPyL8: ;
    cpy_r_constrained_sample_size = cpy_r_r14;
    cpy_r_r16 = CPyStatics[80]; /* 0 */
    cpy_r_r17 = PyObject_RichCompare(cpy_r_constrained_sample_size, cpy_r_r16, 2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 65, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL52;
    }
    cpy_r_r18 = PyObject_IsTrue(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 65, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL52;
    }
    cpy_r_r20 = cpy_r_r18;
    if (cpy_r_r20) {
        goto CPyL53;
    } else
        goto CPyL15;
CPyL11: ;
    cpy_r_r21 = CPyStatics[7]; /* 'Constrained sample size is 0' */
    cpy_r_r22 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r23 = CPyStatics[8]; /* 'Web3ValidationError' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 66, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r25[1] = {cpy_r_r21};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 66, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    }
    CPy_Raise(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 66, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r28 = CPyStatics[3]; /* 'eth' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 67, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL52;
    }
    cpy_r_r30 = PyNumber_Subtract(cpy_r_latest_block_number, cpy_r_constrained_sample_size);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 68, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL54;
    }
    if (likely(PyLong_Check(cpy_r_r30)))
        cpy_r_r31 = CPyTagged_FromObject(cpy_r_r30);
    else {
        CPy_TypeError("int", cpy_r_r30); cpy_r_r31 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 68, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL54;
    }
    cpy_r_r32 = CPyStatics[5]; /* 'get_block' */
    cpy_r_r33 = CPyTagged_StealAsObject(cpy_r_r31);
    PyObject *cpy_r_r34[2] = {cpy_r_r29, cpy_r_r33};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r32, cpy_r_r35, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 67, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r33);
    cpy_r_oldest_block = cpy_r_r36;
    cpy_r_r37 = CPyStatics[6]; /* 'number' */
    CPy_INCREF(cpy_r_oldest_block);
    cpy_r_r38 = cpy_r_oldest_block;
    cpy_r_r39 = PyObject_GetItem(cpy_r_r38, cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 70, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL56;
    }
    cpy_r_r40 = cpy_r_r39;
    cpy_r_r41 = CPyStatics[9]; /* 'timestamp' */
    cpy_r_r42 = cpy_r_oldest_block;
    cpy_r_r43 = PyObject_GetItem(cpy_r_r42, cpy_r_r41);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 71, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL57;
    }
    cpy_r_r44 = cpy_r_r43;
    cpy_r_prev_timestamp = cpy_r_r44;
    cpy_r_weighted_sum = 0.0;
    cpy_r_sum_of_weights = 0.0;
    cpy_r_r45 = CPyStatics[81]; /* 1 */
    cpy_r_r46 = PyNumber_Add(cpy_r_r40, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 74, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL58;
    }
    cpy_r_r47 = CPyStatics[81]; /* 1 */
    cpy_r_r48 = PyNumber_Add(cpy_r_latest_block_number, cpy_r_r47);
    CPy_DECREF(cpy_r_latest_block_number);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 74, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL59;
    }
    if (likely(PyLong_Check(cpy_r_r46)))
        cpy_r_r49 = CPyTagged_FromObject(cpy_r_r46);
    else {
        CPy_TypeError("int", cpy_r_r46); cpy_r_r49 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL60;
    }
    cpy_r_r50 = cpy_r_r49;
    CPyTagged_INCREF(cpy_r_r50);
    cpy_r_i = cpy_r_r50;
CPyL27: ;
    CPyTagged_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyTagged_StealAsObject(cpy_r_r50);
    cpy_r_r52 = PyObject_RichCompare(cpy_r_r51, cpy_r_r48, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 74, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL61;
    }
    cpy_r_r53 = PyObject_IsTrue(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 74, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL61;
    }
    cpy_r_r55 = cpy_r_r53;
    if (!cpy_r_r55) goto CPyL62;
    cpy_r_r56 = CPyStatics[3]; /* 'eth' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 75, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL61;
    }
    cpy_r_r58 = CPyStatics[5]; /* 'get_block' */
    CPyTagged_INCREF(cpy_r_i);
    cpy_r_r59 = CPyTagged_StealAsObject(cpy_r_i);
    PyObject *cpy_r_r60[2] = {cpy_r_r57, cpy_r_r59};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = PyObject_VectorcallMethod(cpy_r_r58, cpy_r_r61, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 75, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r63 = CPyStatics[9]; /* 'timestamp' */
    cpy_r_r64 = PyObject_GetItem(cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 75, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL61;
    }
    cpy_r_curr_timestamp = cpy_r_r64;
    cpy_r_r65 = PyNumber_Subtract(cpy_r_curr_timestamp, cpy_r_prev_timestamp);
    CPy_DECREF(cpy_r_prev_timestamp);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 76, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL64;
    }
    cpy_r_time = cpy_r_r65;
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r67 = PyNumber_Subtract(cpy_r_r66, cpy_r_r40);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 77, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL65;
    }
    if (likely(PyLong_Check(cpy_r_r67)))
        cpy_r_r68 = CPyTagged_FromObject(cpy_r_r67);
    else {
        CPy_TypeError("int", cpy_r_r67); cpy_r_r68 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 77, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL65;
    }
    cpy_r_r69 = CPyTagged_StealAsObject(cpy_r_r68);
    cpy_r_r70 = PyNumber_TrueDivide(cpy_r_r69, cpy_r_constrained_sample_size);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 77, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL65;
    }
    cpy_r_r71 = PyFloat_AsDouble(cpy_r_r70);
    if (cpy_r_r71 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r70); cpy_r_r71 = -113.0;
    }
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 == -113.0;
    if (unlikely(cpy_r_r72)) goto CPyL39;
CPyL38: ;
    cpy_r_r73 = PyFloat_FromDouble(cpy_r_r71);
    cpy_r_r74 = PyNumber_Multiply(cpy_r_time, cpy_r_r73);
    CPy_DECREF(cpy_r_time);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 78, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL66;
    } else
        goto CPyL40;
CPyL39: ;
    cpy_r_r75 = PyErr_Occurred();
    if (unlikely(cpy_r_r75 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 77, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL65;
    } else
        goto CPyL38;
CPyL40: ;
    cpy_r_r76 = PyFloat_FromDouble(cpy_r_weighted_sum);
    cpy_r_r77 = PyNumber_InPlaceAdd(cpy_r_r76, cpy_r_r74);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 78, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL66;
    }
    cpy_r_r78 = PyFloat_AsDouble(cpy_r_r77);
    if (cpy_r_r78 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r77); cpy_r_r78 = -113.0;
    }
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 == -113.0;
    if (unlikely(cpy_r_r79)) goto CPyL43;
CPyL42: ;
    cpy_r_weighted_sum = cpy_r_r78;
    cpy_r_r80 = cpy_r_sum_of_weights + cpy_r_r71;
    cpy_r_sum_of_weights = cpy_r_r80;
    cpy_r_prev_timestamp = cpy_r_curr_timestamp;
    goto CPyL44;
CPyL43: ;
    cpy_r_r81 = PyErr_Occurred();
    if (unlikely(cpy_r_r81 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 78, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL66;
    } else
        goto CPyL42;
CPyL44: ;
    cpy_r_r82 = CPyTagged_Add(cpy_r_r50, 2);
    CPyTagged_DECREF(cpy_r_r50);
    CPyTagged_INCREF(cpy_r_r82);
    cpy_r_r50 = cpy_r_r82;
    cpy_r_i = cpy_r_r82;
    goto CPyL27;
CPyL45: ;
    cpy_r_r83 = cpy_r_sum_of_weights == 0.0;
    if (likely(!cpy_r_r83)) goto CPyL48;
    PyErr_SetString(PyExc_ZeroDivisionError, "float division by zero");
    cpy_r_r84 = 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 81, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r85 = cpy_r_weighted_sum / cpy_r_sum_of_weights;
    return cpy_r_r85;
CPyL49: ;
    cpy_r_r86 = -113.0;
    return cpy_r_r86;
CPyL50: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL49;
CPyL51: ;
    CPy_DecRef(cpy_r_latest_block_number);
    goto CPyL49;
CPyL52: ;
    CPy_DecRef(cpy_r_latest_block_number);
    CPy_DecRef(cpy_r_constrained_sample_size);
    goto CPyL49;
CPyL53: ;
    CPy_DECREF(cpy_r_latest_block_number);
    CPy_DECREF(cpy_r_constrained_sample_size);
    goto CPyL11;
CPyL54: ;
    CPy_DecRef(cpy_r_latest_block_number);
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r29);
    goto CPyL49;
CPyL55: ;
    CPy_DecRef(cpy_r_latest_block_number);
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    goto CPyL49;
CPyL56: ;
    CPy_DecRef(cpy_r_latest_block_number);
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_oldest_block);
    goto CPyL49;
CPyL57: ;
    CPy_DecRef(cpy_r_latest_block_number);
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    goto CPyL49;
CPyL58: ;
    CPy_DecRef(cpy_r_latest_block_number);
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_prev_timestamp);
    goto CPyL49;
CPyL59: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_prev_timestamp);
    CPy_DecRef(cpy_r_r46);
    goto CPyL49;
CPyL60: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_prev_timestamp);
    CPy_DecRef(cpy_r_r48);
    goto CPyL49;
CPyL61: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_prev_timestamp);
    CPy_DecRef(cpy_r_r48);
    CPyTagged_DecRef(cpy_r_r50);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL49;
CPyL62: ;
    CPy_DECREF(cpy_r_constrained_sample_size);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_prev_timestamp);
    CPy_DECREF(cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r50);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL45;
CPyL63: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_prev_timestamp);
    CPy_DecRef(cpy_r_r48);
    CPyTagged_DecRef(cpy_r_r50);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    goto CPyL49;
CPyL64: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r48);
    CPyTagged_DecRef(cpy_r_r50);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_curr_timestamp);
    goto CPyL49;
CPyL65: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r48);
    CPyTagged_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_curr_timestamp);
    CPy_DecRef(cpy_r_time);
    goto CPyL49;
CPyL66: ;
    CPy_DecRef(cpy_r_constrained_sample_size);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r48);
    CPyTagged_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_curr_timestamp);
    goto CPyL49;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"w3", "sample_size", 0};
    static CPyArg_Parser parser = {"OO:_get_weighted_avg_block_time", kwlist, 0};
    PyObject *obj_w3;
    PyObject *obj_sample_size;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_w3, &obj_sample_size)) {
        return NULL;
    }
    PyObject *arg_w3 = obj_w3;
    CPyTagged arg_sample_size;
    if (likely(PyLong_Check(obj_sample_size)))
        arg_sample_size = CPyTagged_BorrowFromObject(obj_sample_size);
    else {
        CPy_TypeError("int", obj_sample_size); goto fail;
    }
    double retval = CPyDef_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time(arg_w3, arg_sample_size);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_weighted_avg_block_time", 62, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    int32_t cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    int64_t cpy_r_r56;
    char cpy_r_r57;
    int64_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyTagged cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    cpy_r_r0 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL89;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 84, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__w3;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "w3", 87, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = CPyStatics[3]; /* 'eth' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 87, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r6 = CPyStatics[4]; /* 'latest' */
    cpy_r_r7 = CPyStatics[5]; /* 'get_block' */
    cpy_r_r8 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r9[3] = {cpy_r_r5, cpy_r_r6, cpy_r_r8};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[90]; /* ('full_transactions',) */
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r7, cpy_r_r10, 9223372036854775810ULL, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 87, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_r5);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__latest != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__latest);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__latest = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 87, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r14 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__latest;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "latest", 89, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r14);
CPyL9: ;
    cpy_r_r15 = CPyStatics[11]; /* 'transactions' */
    cpy_r_r16 = cpy_r_r14;
    cpy_r_r17 = PyObject_GetItem(cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 89, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r18 = PyObject_GetIter(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 89, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r17;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL97;
    }
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r18;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
CPyL14: ;
    cpy_r_r21 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "__mypyc_temp__1", 89, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r21);
CPyL15: ;
    cpy_r_r22 = PyIter_Next(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (cpy_r_r22 == NULL) goto CPyL30;
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction = cpy_r_r22;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 89, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r24 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__latest;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "latest", 90, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r24);
CPyL18: ;
    cpy_r_r25 = CPyStatics[12]; /* 'miner' */
    cpy_r_r26 = cpy_r_r24;
    cpy_r_r27 = PyObject_GetItem(cpy_r_r26, cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 90, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r28 = cpy_r_r27;
    cpy_r_r29 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__latest;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "latest", 90, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r29);
CPyL21: ;
    cpy_r_r30 = CPyStatics[13]; /* 'hash' */
    cpy_r_r31 = cpy_r_r29;
    cpy_r_r32 = PyObject_GetItem(cpy_r_r31, cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 90, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL98;
    }
    cpy_r_r33 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "transaction", 90, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r33);
CPyL24: ;
    cpy_r_r34 = CPyStatics[14]; /* 'gasPrice' */
    cpy_r_r35 = cpy_r_r33;
    cpy_r_r36 = PyObject_GetItem(cpy_r_r35, cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 90, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL99;
    }
    cpy_r_r37 = cpy_r_r36;
    cpy_r_r38.f0 = cpy_r_r28;
    cpy_r_r38.f1 = cpy_r_r32;
    cpy_r_r38.f2 = cpy_r_r37;
    cpy_r_r39 = PyTuple_New(3);
    if (unlikely(cpy_r_r39 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r38.f0;
    PyTuple_SET_ITEM(cpy_r_r39, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r38.f1;
    PyTuple_SET_ITEM(cpy_r_r39, 1, __tmp2);
    PyObject *__tmp3 = cpy_r_r38.f2;
    PyTuple_SET_ITEM(cpy_r_r39, 2, __tmp3);
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r39;
CPyL27: ;
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_type != cpy_r_r41;
    if (!cpy_r_r42) goto CPyL14;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 90, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r43 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 89, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r44 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__latest;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "latest", 92, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r44);
CPyL32: ;
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 92, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r46 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__sample_size;
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "sample_size", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPyTagged_INCREF(cpy_r_r46);
CPyL34: ;
    cpy_r_r47 = CPyTagged_Subtract(cpy_r_r46, 2);
    CPyTagged_DECREF(cpy_r_r46);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r49 = 0;
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r49;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r51 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "__mypyc_temp__3", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPyTagged_INCREF(cpy_r_r51);
CPyL37: ;
    cpy_r_r52 = CPyTagged_StealAsObject(cpy_r_r51);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
CPyL38: ;
    cpy_r_r54 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "__mypyc_temp__3", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPyTagged_INCREF(cpy_r_r54);
CPyL39: ;
    cpy_r_r55 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "__mypyc_temp__2", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL100;
    }
    CPyTagged_INCREF(cpy_r_r55);
CPyL40: ;
    cpy_r_r56 = cpy_r_r54 & 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (cpy_r_r57) goto CPyL42;
    cpy_r_r58 = cpy_r_r55 & 1;
    cpy_r_r59 = cpy_r_r58 != 0;
    if (!cpy_r_r59) goto CPyL43;
CPyL42: ;
    cpy_r_r60 = CPyTagged_IsLt_(cpy_r_r54, cpy_r_r55);
    cpy_r_r61 = cpy_r_r60;
    goto CPyL44;
CPyL43: ;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r54 < (Py_ssize_t)cpy_r_r55;
    cpy_r_r61 = cpy_r_r62;
CPyL44: ;
    CPyTagged_DECREF(cpy_r_r54);
    CPyTagged_DECREF(cpy_r_r55);
    if (!cpy_r_r61) goto CPyL84;
    cpy_r_r63 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "block", 95, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r63);
CPyL46: ;
    cpy_r_r64 = CPyStatics[6]; /* 'number' */
    cpy_r_r65 = cpy_r_r63;
    cpy_r_r66 = PyObject_GetItem(cpy_r_r65, cpy_r_r64);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 95, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r67 = cpy_r_r66;
    cpy_r_r68 = CPyStatics[80]; /* 0 */
    cpy_r_r69 = PyObject_RichCompare(cpy_r_r67, cpy_r_r68, 2);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 95, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r70 = PyObject_IsTrue(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 95, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r72 = cpy_r_r70;
    if (cpy_r_r72) goto CPyL84;
    cpy_r_r73 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__w3;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "w3", 100, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r73);
CPyL52: ;
    cpy_r_r74 = CPyStatics[3]; /* 'eth' */
    cpy_r_r75 = CPyObject_GetAttr(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 100, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r76 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "block", 100, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r76);
CPyL54: ;
    cpy_r_r77 = CPyStatics[15]; /* 'parentHash' */
    cpy_r_r78 = cpy_r_r76;
    cpy_r_r79 = PyObject_GetItem(cpy_r_r78, cpy_r_r77);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 100, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL101;
    }
    cpy_r_r80 = CPyStatics[5]; /* 'get_block' */
    cpy_r_r81 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r82[3] = {cpy_r_r75, cpy_r_r79, cpy_r_r81};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = CPyStatics[90]; /* ('full_transactions',) */
    cpy_r_r85 = PyObject_VectorcallMethod(cpy_r_r80, cpy_r_r83, 9223372036854775810ULL, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 100, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL102;
    }
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r79);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block = cpy_r_r85;
    cpy_r_r86 = 1;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 100, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r87 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "block", 101, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r87);
CPyL59: ;
    cpy_r_r88 = CPyStatics[11]; /* 'transactions' */
    cpy_r_r89 = cpy_r_r87;
    cpy_r_r90 = PyObject_GetItem(cpy_r_r89, cpy_r_r88);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 101, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r91 = PyObject_GetIter(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 101, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL103;
    }
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r90;
    cpy_r_r92 = 1;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL104;
    }
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r91;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
CPyL64: ;
    cpy_r_r94 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "__mypyc_temp__5", 101, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r94);
CPyL65: ;
    cpy_r_r95 = PyIter_Next(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (cpy_r_r95 == NULL) goto CPyL80;
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction = cpy_r_r95;
    cpy_r_r96 = 1;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 101, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r97 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "block", 102, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r97);
CPyL68: ;
    cpy_r_r98 = CPyStatics[12]; /* 'miner' */
    cpy_r_r99 = cpy_r_r97;
    cpy_r_r100 = PyObject_GetItem(cpy_r_r99, cpy_r_r98);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 102, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r101 = cpy_r_r100;
    cpy_r_r102 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "block", 102, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL105;
    }
    CPy_INCREF(cpy_r_r102);
CPyL71: ;
    cpy_r_r103 = CPyStatics[13]; /* 'hash' */
    cpy_r_r104 = cpy_r_r102;
    cpy_r_r105 = PyObject_GetItem(cpy_r_r104, cpy_r_r103);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 102, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL105;
    }
    cpy_r_r106 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction;
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "transaction", 102, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL106;
    }
    CPy_INCREF(cpy_r_r106);
CPyL74: ;
    cpy_r_r107 = CPyStatics[14]; /* 'gasPrice' */
    cpy_r_r108 = cpy_r_r106;
    cpy_r_r109 = PyObject_GetItem(cpy_r_r108, cpy_r_r107);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 102, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL106;
    }
    cpy_r_r110 = cpy_r_r109;
    cpy_r_r111.f0 = cpy_r_r101;
    cpy_r_r111.f1 = cpy_r_r105;
    cpy_r_r111.f2 = cpy_r_r110;
    cpy_r_r112 = PyTuple_New(3);
    if (unlikely(cpy_r_r112 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4 = cpy_r_r111.f0;
    PyTuple_SET_ITEM(cpy_r_r112, 0, __tmp4);
    PyObject *__tmp5 = cpy_r_r111.f1;
    PyTuple_SET_ITEM(cpy_r_r112, 1, __tmp5);
    PyObject *__tmp6 = cpy_r_r111.f2;
    PyTuple_SET_ITEM(cpy_r_r112, 2, __tmp6);
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r112;
CPyL77: ;
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = cpy_r_type != cpy_r_r114;
    if (!cpy_r_r115) goto CPyL64;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 102, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r116 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 101, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    cpy_r_r117 = ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r117 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", "_get_raw_miner_data_gen", "__mypyc_temp__3", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPyTagged_INCREF(cpy_r_r117);
CPyL82: ;
    cpy_r_r118 = CPyTagged_Add(cpy_r_r117, 2);
    CPyTagged_DECREF(cpy_r_r117);
    CPyTagged_INCREF(cpy_r_r118);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r118;
    cpy_r_r119 = 1;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL107;
    }
    cpy_r_r120 = CPyTagged_StealAsObject(cpy_r_r118);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ = cpy_r_r120;
    cpy_r_r121 = 1;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 94, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    } else
        goto CPyL38;
CPyL84: ;
    cpy_r_r122 = Py_None;
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL88;
    CPyGen_SetStopIterationValue(cpy_r_r122);
    if (!0) goto CPyL94;
    CPy_Unreachable();
CPyL88: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r122;
    return 0;
CPyL89: ;
    cpy_r_r124 = cpy_r_r0 == 0;
    if (cpy_r_r124) goto CPyL1;
    cpy_r_r125 = cpy_r_r0 == 1;
    if (cpy_r_r125) goto CPyL27;
    cpy_r_r126 = cpy_r_r0 == 2;
    if (cpy_r_r126) goto CPyL77;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 84, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL94: ;
    cpy_r_r128 = NULL;
    return cpy_r_r128;
CPyL95: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL94;
CPyL96: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL94;
CPyL97: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL94;
CPyL98: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL94;
CPyL99: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r32);
    goto CPyL94;
CPyL100: ;
    CPyTagged_DecRef(cpy_r_r54);
    goto CPyL94;
CPyL101: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL94;
CPyL102: ;
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r79);
    goto CPyL94;
CPyL103: ;
    CPy_DecRef(cpy_r_r90);
    goto CPyL94;
CPyL104: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL94;
CPyL105: ;
    CPy_DecRef(cpy_r_r101);
    goto CPyL94;
CPyL106: ;
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r105);
    goto CPyL94;
CPyL107: ;
    CPyTagged_DecRef(cpy_r_r118);
    goto CPyL94;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._get_raw_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "__next__", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._get_raw_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "send", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._get_raw_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "__iter__", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._get_raw_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "throw", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[16]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[17]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp7);
    PyObject *__tmp8 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp8);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._get_raw_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "close", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 84, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL4;
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_w3);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__w3 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__w3);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__w3 = cpy_r_w3;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 84, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL5;
    }
    CPyTagged_INCREF(cpy_r_sample_size);
    if (((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__sample_size != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__sample_size);
    }
    ((faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__sample_size = cpy_r_sample_size;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 84, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL5;
    }
    return cpy_r_r0;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"w3", "sample_size", 0};
    static CPyArg_Parser parser = {"OO:_get_raw_miner_data", kwlist, 0};
    PyObject *obj_w3;
    PyObject *obj_sample_size;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_w3, &obj_sample_size)) {
        return NULL;
    }
    PyObject *arg_w3 = obj_w3;
    CPyTagged arg_sample_size;
    if (likely(PyLong_Check(obj_sample_size)))
        arg_sample_size = CPyTagged_BorrowFromObject(obj_sample_size);
    else {
        CPy_TypeError("int", obj_sample_size); goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data(arg_w3, arg_sample_size);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_get_raw_miner_data", 84, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    int32_t cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    double cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T3OOO cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    double cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    double cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    cpy_r_r0 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL92;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 105, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__raw_data;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "raw_data", 108, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r5 = CPyStatics[18]; /* 'groupby' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 108, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL97;
    }
    cpy_r_r7 = CPyStatics[80]; /* 0 */
    PyObject *cpy_r_r8[2] = {cpy_r_r7, cpy_r_r3};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r9, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 108, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r3);
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__data_by_miner != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__data_by_miner);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__data_by_miner = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 108, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    cpy_r_r12 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__data_by_miner;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "data_by_miner", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = CPyStatics[19]; /* 'items' */
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r17 = PyObject_GetIter(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL99;
    }
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r16;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL100;
    }
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r17;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
CPyL13: ;
    cpy_r_r20 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "__mypyc_temp__7", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r20);
CPyL14: ;
    cpy_r_r21 = PyIter_Next(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (cpy_r_r21 == NULL) goto CPyL86;
    cpy_r_r22 = PyObject_GetIter(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    cpy_r_r23 = PyIter_Next(cpy_r_r22);
    if (cpy_r_r23 == NULL) {
        goto CPyL101;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL19: ;
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner = cpy_r_r23;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL102;
    }
    cpy_r_r26 = PyIter_Next(cpy_r_r22);
    if (cpy_r_r26 == NULL) {
        goto CPyL103;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL23: ;
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data = cpy_r_r26;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL102;
    }
    cpy_r_r29 = PyIter_Next(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (cpy_r_r29 == NULL) {
        goto CPyL27;
    } else
        goto CPyL104;
CPyL25: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r31 = (PyObject *)&PySet_Type;
    cpy_r_r32 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r32);
CPyL28: ;
    cpy_r_r33 = CPyModule_builtins;
    cpy_r_r34 = CPyStatics[20]; /* 'zip' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL105;
    }
    cpy_r_r36 = PySequence_Tuple(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL106;
    }
    cpy_r_r37 = PyObject_CallObject(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[21]; /* 'map' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL107;
    }
    PyObject *cpy_r_r41[2] = {cpy_r_r31, cpy_r_r37};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 2, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL107;
    }
    CPy_DECREF(cpy_r_r37);
    cpy_r_r44 = PyObject_GetIter(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    cpy_r_r45 = PyIter_Next(cpy_r_r44);
    if (cpy_r_r45 == NULL) {
        goto CPyL108;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL37: ;
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ = cpy_r_r45;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL109;
    }
    cpy_r_r48 = PyIter_Next(cpy_r_r44);
    if (cpy_r_r48 == NULL) {
        goto CPyL110;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL41: ;
    if (likely(PySet_Check(cpy_r_r48)))
        cpy_r_r50 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals, "set", cpy_r_r48);
        goto CPyL109;
    }
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_hashes != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_hashes);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_hashes = cpy_r_r50;
    cpy_r_r51 = 1;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL109;
    }
    cpy_r_r52 = PyIter_Next(cpy_r_r44);
    if (cpy_r_r52 == NULL) {
        goto CPyL111;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL46: ;
    if (likely(PySet_Check(cpy_r_r52)))
        cpy_r_r54 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals, "set", cpy_r_r52);
        goto CPyL109;
    }
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__gas_prices != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__gas_prices);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__gas_prices = cpy_r_r54;
    cpy_r_r55 = 1;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL109;
    }
    cpy_r_r56 = PyIter_Next(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (cpy_r_r56 == NULL) {
        goto CPyL51;
    } else
        goto CPyL112;
CPyL49: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 111, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r58 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__gas_prices;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "gas_prices", 114, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r58);
CPyL52: ;
    cpy_r_r59 = exports_faster_web3.CPyDef_faster_web3____utils___math___percentile(cpy_r_r58, 20.0);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 == -113.0;
    if (unlikely(cpy_r_r60)) goto CPyL54;
CPyL53: ;
    if (unlikely(cpy_r_r59 == -113.0)) {
        ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->bitmap |= 1;
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__price_percentile = cpy_r_r59;
    cpy_r_r61 = 1;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 114, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL55;
    } else
        goto CPyL71;
CPyL54: ;
    cpy_r_r62 = PyErr_Occurred();
    if (unlikely(cpy_r_r62 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 114, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    } else
        goto CPyL53;
CPyL55: ;
    cpy_r_r63 = CPy_CatchError();
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8.f0 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8.f0);
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8.f1);
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8.f2);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r63;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r65 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r66 = CPyStatics[22]; /* 'InsufficientData' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 115, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r68 = CPy_ExceptionMatches(cpy_r_r67);
    CPy_DecRef(cpy_r_r67);
    if (!cpy_r_r68) goto CPyL64;
    cpy_r_r69 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__gas_prices;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "gas_prices", 116, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r69);
CPyL59: ;
    cpy_r_r70 = CPyModule_builtins;
    cpy_r_r71 = CPyStatics[23]; /* 'min' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 116, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL113;
    }
    PyObject *cpy_r_r73[1] = {cpy_r_r69};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 116, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL113;
    }
    CPy_DecRef(cpy_r_r69);
    cpy_r_r76 = PyFloat_AsDouble(cpy_r_r75);
    if (cpy_r_r76 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r75); cpy_r_r76 = -113.0;
    }
    CPy_DecRef(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 == -113.0;
    if (unlikely(cpy_r_r77)) goto CPyL63;
CPyL62: ;
    if (unlikely(cpy_r_r76 == -113.0)) {
        ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->bitmap |= 1;
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__price_percentile = cpy_r_r76;
    cpy_r_r78 = 1;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 116, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    } else
        goto CPyL66;
CPyL63: ;
    cpy_r_r79 = PyErr_Occurred();
    if (unlikely(cpy_r_r79 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 116, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    } else
        goto CPyL62;
CPyL64: ;
    CPy_Reraise();
    if (!0) goto CPyL68;
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r80 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r80.f0 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "__mypyc_temp__8", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r80.f0);
    CPy_INCREF(cpy_r_r80.f1);
    CPy_INCREF(cpy_r_r80.f2);
CPyL67: ;
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_DecRef(cpy_r_r80.f0);
    CPy_DecRef(cpy_r_r80.f1);
    CPy_DecRef(cpy_r_r80.f2);
    goto CPyL71;
CPyL68: ;
    cpy_r_r81 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r81.f0 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "__mypyc_temp__8", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r81.f0);
    CPy_INCREF(cpy_r_r81.f1);
    CPy_INCREF(cpy_r_r81.f2);
CPyL69: ;
    CPy_RestoreExcInfo(cpy_r_r81);
    CPy_DecRef(cpy_r_r81.f0);
    CPy_DecRef(cpy_r_r81.f1);
    CPy_DecRef(cpy_r_r81.f2);
    cpy_r_r82 = CPy_KeepPropagating();
    if (!cpy_r_r82) goto CPyL96;
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r83 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "miner", 118, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r83);
CPyL72: ;
    cpy_r_r84 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_hashes;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "block_hashes", 119, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL114;
    }
    CPy_INCREF(cpy_r_r84);
CPyL73: ;
    cpy_r_r85 = PySet_New(cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 119, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL114;
    }
    cpy_r_r86 = (CPyPtr)&((PySetObject *)cpy_r_r85)->used;
    cpy_r_r87 = *(int64_t *)cpy_r_r86;
    CPy_DECREF(cpy_r_r85);
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__gas_prices;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", "_aggregate_miner_data_gen", "gas_prices", 120, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL114;
    }
    CPy_INCREF(cpy_r_r89);
CPyL75: ;
    cpy_r_r90 = CPyModule_builtins;
    cpy_r_r91 = CPyStatics[23]; /* 'min' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 120, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL115;
    }
    PyObject *cpy_r_r93[1] = {cpy_r_r89};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = PyObject_Vectorcall(cpy_r_r92, cpy_r_r94, 1, 0);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 120, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL115;
    }
    CPy_DECREF(cpy_r_r89);
    cpy_r_r96 = ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__price_percentile;
    if (unlikely(cpy_r_r96 == -113.0) && !(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'price_percentile' of '_aggregate_miner_data_gen' undefined");
    }
    cpy_r_r97 = cpy_r_r96 == -113.0;
    if (unlikely(cpy_r_r97)) goto CPyL79;
CPyL78: ;
    cpy_r_r98 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r99 = CPyStatics[24]; /* 'MinerData' */
    cpy_r_r100 = CPyDict_GetItem(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 117, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL116;
    } else
        goto CPyL80;
CPyL79: ;
    cpy_r_r101 = PyErr_Occurred();
    if (unlikely(cpy_r_r101 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 121, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL116;
    } else
        goto CPyL78;
CPyL80: ;
    cpy_r_r102 = CPyTagged_StealAsObject(cpy_r_r88);
    cpy_r_r103 = PyFloat_FromDouble(cpy_r_r96);
    PyObject *cpy_r_r104[4] = {cpy_r_r83, cpy_r_r102, cpy_r_r95, cpy_r_r103};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = PyObject_Vectorcall(cpy_r_r100, cpy_r_r105, 4, 0);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 117, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL117;
    }
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r103);
    if (likely(PyTuple_Check(cpy_r_r106)))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 117, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r106);
        goto CPyL96;
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r107;
CPyL83: ;
    cpy_r_r109 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r110 = cpy_r_type != cpy_r_r109;
    if (!cpy_r_r110) goto CPyL13;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 117, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r111 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 110, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    cpy_r_r112 = Py_None;
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL91;
    CPyGen_SetStopIterationValue(cpy_r_r112);
    if (!0) goto CPyL96;
    CPy_Unreachable();
CPyL91: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r112;
    return 0;
CPyL92: ;
    cpy_r_r114 = cpy_r_r0 == 0;
    if (cpy_r_r114) goto CPyL1;
    cpy_r_r115 = cpy_r_r0 == 1;
    if (cpy_r_r115) goto CPyL83;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 105, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL96: ;
    cpy_r_r117 = NULL;
    return cpy_r_r117;
CPyL97: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL96;
CPyL98: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL96;
CPyL99: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL96;
CPyL100: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL96;
CPyL101: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL17;
CPyL102: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL96;
CPyL103: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL21;
CPyL104: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL25;
CPyL105: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL96;
CPyL106: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL96;
CPyL107: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL96;
CPyL108: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL35;
CPyL109: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL96;
CPyL110: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL39;
CPyL111: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL44;
CPyL112: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL49;
CPyL113: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL68;
CPyL114: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL96;
CPyL115: ;
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r89);
    goto CPyL96;
CPyL116: ;
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r95);
    goto CPyL96;
CPyL117: ;
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r103);
    goto CPyL96;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._aggregate_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "__next__", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._aggregate_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "send", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._aggregate_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "__iter__", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._aggregate_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "throw", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[16]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[17]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp9);
    PyObject *__tmp10 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp10);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._aggregate_miner_data_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "close", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data(PyObject *cpy_r_raw_data) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 105, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL3;
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_raw_data);
    if (((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__raw_data != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__raw_data);
    }
    ((faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *)cpy_r_r0)->___mypyc_generator_attribute__raw_data = cpy_r_raw_data;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 105, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL4;
    }
    return cpy_r_r0;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"raw_data", 0};
    static CPyArg_Parser parser = {"O:_aggregate_miner_data", kwlist, 0};
    PyObject *obj_raw_data;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_raw_data)) {
        return NULL;
    }
    PyObject *arg_raw_data = obj_raw_data;
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data(arg_raw_data);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_aggregate_miner_data", 105, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    int32_t cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
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
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    int64_t cpy_r_r51;
    int64_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int64_t cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int64_t cpy_r_r62;
    int64_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyTagged cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    cpy_r_r0 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL76;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 126, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "miner_data", 135, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = CPyStatics[25]; /* 'low_percentile_gas_price' */
    cpy_r_r5 = CPyModule_operator;
    cpy_r_r6 = CPyStatics[26]; /* 'attrgetter' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 136, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL81;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_r4};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 136, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL81;
    }
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[27]; /* 'sorted' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 134, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL82;
    }
    cpy_r_r14 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r15[3] = {cpy_r_r3, cpy_r_r10, cpy_r_r14};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = CPyStatics[91]; /* ('key', 'reverse') */
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r13, cpy_r_r16, 1, cpy_r_r17);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 134, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL82;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r10);
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 134, CPyStatic_faster_web3___gas_strategies___time_based___globals, "list", cpy_r_r18);
        goto CPyL80;
    }
    cpy_r_r20 = PyList_AsTuple(cpy_r_r19);
    CPy_DECREF_NO_IMM(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 133, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data_by_price != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data_by_price);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data_by_price = cpy_r_r20;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 133, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r22 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data_by_price;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "miner_data_by_price", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r22);
CPyL13: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 << 1;
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = 0;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r28 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__10", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
CPyL16: ;
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
CPyL17: ;
    cpy_r_r30 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__10", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
CPyL18: ;
    cpy_r_r31 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__9", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
CPyL19: ;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r31;
    if (!cpy_r_r32) goto CPyL71;
    cpy_r_r33 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data_by_price;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "miner_data_by_price", 141, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r33);
CPyL21: ;
    cpy_r_r34 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx;
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "idx", 141, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL83;
    }
    CPyTagged_INCREF(cpy_r_r34);
CPyL22: ;
    cpy_r_r35 = CPySequenceTuple_GetItem(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 141, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    if (likely(PyTuple_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 141, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r35);
        goto CPyL80;
    }
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_r36, 6);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 141, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__low_percentile_gas_price != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__low_percentile_gas_price);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__low_percentile_gas_price = cpy_r_r37;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 141, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r39 = CPyStatics[80]; /* 0 */
    cpy_r_r40 = cpy_r_r39;
    cpy_r_r41 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__miner_data_by_price;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "miner_data_by_price", 143, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r41);
CPyL27: ;
    cpy_r_r42 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx;
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "idx", 143, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL85;
    }
    CPyTagged_INCREF(cpy_r_r42);
CPyL28: ;
    cpy_r_r43 = CPySequenceTuple_GetSlice(cpy_r_r41, cpy_r_r42, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r41);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 143, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    if (likely(PyTuple_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 143, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r43);
        goto CPyL84;
    }
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    cpy_r_r46 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__11", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r46);
CPyL32: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    CPy_DECREF(cpy_r_r46);
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r48;
    cpy_r_r49 = 1;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = 0;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
CPyL34: ;
    cpy_r_r51 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (unlikely(cpy_r_r51 == -113)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__12", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
CPyL35: ;
    cpy_r_r52 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r52 == -113)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__13", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
CPyL36: ;
    cpy_r_r53 = cpy_r_r52 < cpy_r_r51;
    if (!cpy_r_r53) goto CPyL47;
    cpy_r_r54 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__11", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r54);
CPyL38: ;
    cpy_r_r55 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r55 == -113)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__13", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL86;
    }
CPyL39: ;
    cpy_r_r56 = CPySequenceTuple_GetItemUnsafe(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (likely(PyTuple_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r56);
        goto CPyL84;
    }
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__m != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__m);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__m = cpy_r_r57;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    cpy_r_r59 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__m;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "m", 143, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r59);
CPyL42: ;
    cpy_r_r60 = CPySequenceTuple_GetItem(cpy_r_r59, 2);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 143, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
    cpy_r_r61 = PyNumber_Add(cpy_r_r40, cpy_r_r60);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r40 = cpy_r_r61;
    cpy_r_r62 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r62 == -113)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__13", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    }
CPyL46: ;
    cpy_r_r63 = cpy_r_r62 + 1;
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = cpy_r_r63;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL84;
    } else
        goto CPyL34;
CPyL47: ;
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__num_blocks_accepting_price != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__num_blocks_accepting_price);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__num_blocks_accepting_price = cpy_r_r40;
    cpy_r_r65 = 1;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 142, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r66 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__sample_size;
    if (unlikely(cpy_r_r66 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "sample_size", 145, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPyTagged_INCREF(cpy_r_r66);
CPyL49: ;
    cpy_r_r67 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__num_blocks_accepting_price;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "num_blocks_accepting_price", 145, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r67);
CPyL50: ;
    cpy_r_r68 = CPyTagged_StealAsObject(cpy_r_r66);
    cpy_r_r69 = PyNumber_Subtract(cpy_r_r68, cpy_r_r67);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 145, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r70 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__sample_size;
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "sample_size", 145, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL88;
    }
    CPyTagged_INCREF(cpy_r_r70);
CPyL52: ;
    cpy_r_r71 = CPyTagged_StealAsObject(cpy_r_r70);
    cpy_r_r72 = PyNumber_TrueDivide(cpy_r_r69, cpy_r_r71);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 145, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__inv_prob_per_block != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__inv_prob_per_block);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__inv_prob_per_block = cpy_r_r72;
    cpy_r_r73 = 1;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 145, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r74 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__inv_prob_per_block;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "inv_prob_per_block", 146, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r74);
CPyL55: ;
    cpy_r_r75 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__wait_blocks;
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "wait_blocks", 146, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL89;
    }
    CPyTagged_INCREF(cpy_r_r75);
CPyL56: ;
    cpy_r_r76 = CPyTagged_StealAsObject(cpy_r_r75);
    cpy_r_r77 = CPyNumber_Power(cpy_r_r74, cpy_r_r76);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 146, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r78 = CPyStatics[81]; /* 1 */
    cpy_r_r79 = PyNumber_Subtract(cpy_r_r78, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 146, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__probability_accepted != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__probability_accepted);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__probability_accepted = cpy_r_r79;
    cpy_r_r80 = 1;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 146, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    cpy_r_r81 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__low_percentile_gas_price;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "low_percentile_gas_price", 147, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r81);
CPyL60: ;
    cpy_r_r82 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__probability_accepted;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "probability_accepted", 147, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r82);
CPyL61: ;
    cpy_r_r83 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r84 = CPyStatics[30]; /* 'Probability' */
    cpy_r_r85 = CPyDict_GetItem(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 147, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r86[2] = {cpy_r_r81, cpy_r_r82};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 2, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 147, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    if (likely(PyTuple_Check(cpy_r_r88)))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 147, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r88);
        goto CPyL80;
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r89;
CPyL65: ;
    cpy_r_r91 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r92 = cpy_r_type != cpy_r_r91;
    if (!cpy_r_r92) goto CPyL68;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 147, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r93 = ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r93 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", "_compute_probabilities_gen", "__mypyc_temp__10", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
CPyL69: ;
    cpy_r_r94 = cpy_r_r93 + 2;
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r94;
    cpy_r_r95 = 1;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__idx = cpy_r_r94;
    cpy_r_r96 = 1;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 140, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    } else
        goto CPyL17;
CPyL71: ;
    cpy_r_r97 = Py_None;
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL75;
    CPyGen_SetStopIterationValue(cpy_r_r97);
    if (!0) goto CPyL80;
    CPy_Unreachable();
CPyL75: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r97;
    return 0;
CPyL76: ;
    cpy_r_r99 = cpy_r_r0 == 0;
    if (cpy_r_r99) goto CPyL1;
    cpy_r_r100 = cpy_r_r0 == 1;
    if (cpy_r_r100) goto CPyL65;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 126, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL80;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r102 = NULL;
    return cpy_r_r102;
CPyL81: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL80;
CPyL82: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r10);
    goto CPyL80;
CPyL83: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL80;
CPyL84: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL80;
CPyL85: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    goto CPyL80;
CPyL86: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r54);
    goto CPyL80;
CPyL87: ;
    CPyTagged_DecRef(cpy_r_r66);
    goto CPyL80;
CPyL88: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL80;
CPyL89: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL80;
CPyL90: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL80;
CPyL91: ;
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r82);
    goto CPyL80;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._compute_probabilities_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "__next__", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._compute_probabilities_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "send", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._compute_probabilities_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "__iter__", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._compute_probabilities_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "throw", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[16]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[17]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp11);
    PyObject *__tmp12 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp12);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.gas_strategies.time_based._compute_probabilities_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "close", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities(PyObject *cpy_r_miner_data, CPyTagged cpy_r_wait_blocks, CPyTagged cpy_r_sample_size) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 126, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL5;
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_miner_data);
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__miner_data != NULL) {
        CPy_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__miner_data);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__miner_data = cpy_r_miner_data;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 126, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL6;
    }
    CPyTagged_INCREF(cpy_r_wait_blocks);
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__wait_blocks != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__wait_blocks);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__wait_blocks = cpy_r_wait_blocks;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 126, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL6;
    }
    CPyTagged_INCREF(cpy_r_sample_size);
    if (((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__sample_size != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__sample_size);
    }
    ((faster_web3___gas_strategies___time_based____compute_probabilities_genObject *)cpy_r_r0)->___mypyc_generator_attribute__sample_size = cpy_r_sample_size;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 126, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL6;
    }
    return cpy_r_r0;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"miner_data", "wait_blocks", "sample_size", 0};
    static CPyArg_Parser parser = {"OOO:_compute_probabilities", kwlist, 0};
    PyObject *obj_miner_data;
    PyObject *obj_wait_blocks;
    PyObject *obj_sample_size;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_miner_data, &obj_wait_blocks, &obj_sample_size)) {
        return NULL;
    }
    PyObject *arg_miner_data = obj_miner_data;
    CPyTagged arg_wait_blocks;
    if (likely(PyLong_Check(obj_wait_blocks)))
        arg_wait_blocks = CPyTagged_BorrowFromObject(obj_wait_blocks);
    else {
        CPy_TypeError("int", obj_wait_blocks); goto fail;
    }
    CPyTagged arg_sample_size;
    if (likely(PyLong_Check(obj_sample_size)))
        arg_sample_size = CPyTagged_BorrowFromObject(obj_sample_size);
    else {
        CPy_TypeError("int", obj_sample_size); goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities(arg_miner_data, arg_wait_blocks, arg_sample_size);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_probabilities", 126, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

CPyTagged CPyDef_faster_web3___gas_strategies___time_based____compute_gas_price(PyObject *cpy_r_probabilities, double cpy_r_desired_probability) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    cpy_r_r0 = CPyStatics[80]; /* 0 */
    cpy_r_r1 = PyObject_GetItem(cpy_r_probabilities, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 163, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    if (likely(PyTuple_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 163, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r1);
        goto CPyL68;
    }
    cpy_r_r3 = CPyStatics[82]; /* -1 */
    cpy_r_r4 = PyObject_GetItem(cpy_r_probabilities, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 164, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL69;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 164, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r4);
        goto CPyL69;
    }
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_r2, 2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 166, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL70;
    }
    cpy_r_r7 = PyFloat_FromDouble(cpy_r_desired_probability);
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r7, cpy_r_r6, 5);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 166, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL70;
    }
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 166, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL70;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL71;
    } else
        goto CPyL72;
CPyL8: ;
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_r2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 167, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r13 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 167, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_r12);
    if (likely(PyLong_Check(cpy_r_r16)))
        cpy_r_r17 = CPyTagged_FromObject(cpy_r_r16);
    else {
        CPy_TypeError("int", cpy_r_r16); cpy_r_r17 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 167, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    return cpy_r_r17;
CPyL12: ;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_r5, 2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 168, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL74;
    }
    cpy_r_r19 = PyFloat_FromDouble(cpy_r_desired_probability);
    cpy_r_r20 = PyObject_RichCompare(cpy_r_r19, cpy_r_r18, 1);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 168, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL74;
    }
    cpy_r_r21 = PyObject_IsTrue(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 168, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL74;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL75;
    cpy_r_r24 = CPySequenceTuple_GetItem(cpy_r_r5, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 169, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r25 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r26[1] = {cpy_r_r24};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 169, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r24);
    if (likely(PyLong_Check(cpy_r_r28)))
        cpy_r_r29 = CPyTagged_FromObject(cpy_r_r28);
    else {
        CPy_TypeError("int", cpy_r_r28); cpy_r_r29 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 169, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    return cpy_r_r29;
CPyL20: ;
    cpy_r_r30 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r31 = CPyStatics[31]; /* 'sliding_window' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r33 = CPyStatics[83]; /* 2 */
    PyObject *cpy_r_r34[2] = {cpy_r_r33, cpy_r_probabilities};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r35, 2, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r37 = PyObject_GetIter(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
CPyL23: ;
    cpy_r_r38 = PyIter_Next(cpy_r_r37);
    if (cpy_r_r38 == NULL) goto CPyL77;
    cpy_r_r39 = PyObject_GetIter(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL78;
    }
    cpy_r_r40 = PyIter_Next(cpy_r_r39);
    if (cpy_r_r40 == NULL) {
        goto CPyL79;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r42 = PyIter_Next(cpy_r_r39);
    if (cpy_r_r42 == NULL) {
        goto CPyL80;
    } else
        goto CPyL31;
CPyL29: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r44 = PyIter_Next(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (cpy_r_r44 == NULL) {
        goto CPyL34;
    } else
        goto CPyL81;
CPyL32: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r46 = CPyStatics[32]; /* 'prob' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 172, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL82;
    }
    cpy_r_r48 = PyFloat_FromDouble(cpy_r_desired_probability);
    cpy_r_r49 = PyObject_RichCompare(cpy_r_r48, cpy_r_r47, 0);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 172, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL82;
    }
    cpy_r_r50 = PyObject_IsTrue(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 172, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL82;
    }
    cpy_r_r52 = cpy_r_r50;
    if (cpy_r_r52) {
        goto CPyL83;
    } else
        goto CPyL84;
CPyL38: ;
    cpy_r_r53 = CPyStatics[32]; /* 'prob' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 174, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL85;
    }
    cpy_r_r55 = PyFloat_FromDouble(cpy_r_desired_probability);
    cpy_r_r56 = PyObject_RichCompare(cpy_r_r55, cpy_r_r54, 4);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 174, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL85;
    }
    cpy_r_r57 = PyObject_IsTrue(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 174, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL85;
    }
    cpy_r_r59 = cpy_r_r57;
    if (cpy_r_r59) {
        goto CPyL86;
    } else
        goto CPyL46;
CPyL42: ;
    cpy_r_r60 = CPyStatics[33]; /* 'Invariant' */
    cpy_r_r61 = CPyModule_builtins;
    cpy_r_r62 = CPyStatics[34]; /* 'Exception' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 178, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r64[1] = {cpy_r_r60};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 178, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_Raise(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 178, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r67 = CPyStatics[32]; /* 'prob' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 180, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL85;
    }
    cpy_r_r69 = PyFloat_FromDouble(cpy_r_desired_probability);
    cpy_r_r70 = PyNumber_Subtract(cpy_r_r69, cpy_r_r68);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 180, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL85;
    }
    cpy_r_r71 = CPyStatics[32]; /* 'prob' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 181, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL87;
    }
    cpy_r_r73 = CPyStatics[32]; /* 'prob' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 181, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL88;
    }
    cpy_r_r75 = PyNumber_Subtract(cpy_r_r72, cpy_r_r74);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 181, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL87;
    }
    cpy_r_r76 = PyNumber_TrueDivide(cpy_r_r70, cpy_r_r75);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 182, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL85;
    }
    cpy_r_r77 = CPyStatics[35]; /* 'gas_price' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r77);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 183, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL89;
    }
    cpy_r_r79 = CPyStatics[35]; /* 'gas_price' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 183, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL90;
    }
    cpy_r_r81 = PyNumber_Subtract(cpy_r_r78, cpy_r_r80);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 183, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL89;
    }
    cpy_r_r82 = CPyStatics[35]; /* 'gas_price' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r82);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 184, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL91;
    }
    cpy_r_r84 = PyNumber_Multiply(cpy_r_r81, cpy_r_r76);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 184, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL92;
    }
    cpy_r_r85 = PyNumber_Add(cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 184, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r86 = CPyModule_math;
    cpy_r_r87 = CPyStatics[36]; /* 'ceil' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 184, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL93;
    }
    PyObject *cpy_r_r89[1] = {cpy_r_r85};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = PyObject_Vectorcall(cpy_r_r88, cpy_r_r90, 1, 0);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 184, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL93;
    }
    CPy_DECREF(cpy_r_r85);
    cpy_r_r92 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r93[1] = {cpy_r_r91};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = PyObject_Vectorcall(cpy_r_r92, cpy_r_r94, 1, 0);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 184, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL94;
    }
    CPy_DECREF(cpy_r_r91);
    if (likely(PyLong_Check(cpy_r_r95)))
        cpy_r_r96 = CPyTagged_FromObject(cpy_r_r95);
    else {
        CPy_TypeError("int", cpy_r_r95); cpy_r_r96 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 184, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    return cpy_r_r96;
CPyL63: ;
    cpy_r_r97 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 171, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    cpy_r_r98 = CPyStatics[33]; /* 'Invariant' */
    cpy_r_r99 = CPyModule_builtins;
    cpy_r_r100 = CPyStatics[34]; /* 'Exception' */
    cpy_r_r101 = CPyObject_GetAttr(cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 195, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r102[1] = {cpy_r_r98};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_Vectorcall(cpy_r_r101, cpy_r_r103, 1, 0);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 195, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_Raise(cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 195, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r105 = CPY_INT_TAG;
    return cpy_r_r105;
CPyL69: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL68;
CPyL70: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL68;
CPyL71: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL72: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL12;
CPyL73: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL68;
CPyL74: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL68;
CPyL75: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL20;
CPyL76: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL68;
CPyL77: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL63;
CPyL78: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL68;
CPyL79: ;
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    goto CPyL26;
CPyL80: ;
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    goto CPyL29;
CPyL81: ;
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    goto CPyL32;
CPyL82: ;
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r42);
    goto CPyL68;
CPyL83: ;
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    goto CPyL23;
CPyL84: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL38;
CPyL85: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r42);
    goto CPyL68;
CPyL86: ;
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    goto CPyL42;
CPyL87: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r70);
    goto CPyL68;
CPyL88: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r72);
    goto CPyL68;
CPyL89: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r76);
    goto CPyL68;
CPyL90: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    goto CPyL68;
CPyL91: ;
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r81);
    goto CPyL68;
CPyL92: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL68;
CPyL93: ;
    CPy_DecRef(cpy_r_r85);
    goto CPyL68;
CPyL94: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL68;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_gas_price(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"probabilities", "desired_probability", 0};
    static CPyArg_Parser parser = {"OO:_compute_gas_price", kwlist, 0};
    PyObject *obj_probabilities;
    PyObject *obj_desired_probability;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_probabilities, &obj_desired_probability)) {
        return NULL;
    }
    PyObject *arg_probabilities = obj_probabilities;
    double arg_desired_probability;
    arg_desired_probability = PyFloat_AsDouble(obj_desired_probability);
    if (arg_desired_probability == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", obj_desired_probability); goto fail;
    }
    CPyTagged retval = CPyDef_faster_web3___gas_strategies___time_based____compute_gas_price(arg_probabilities, arg_desired_probability);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "_compute_gas_price", 150, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "__get__", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

CPyTagged CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_w3, PyObject *cpy_r_transaction_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    double cpy_r_r22;
    char cpy_r_r23;
    double cpy_r_avg_block_time;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    double cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    double cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    double cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_raw_miner_data;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_miner_data;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    double cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    cpy_r_r0 = ((faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", "time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj", "__mypyc_env__", 219, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL40;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[3]; /* 'eth' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 221, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    cpy_r_r3 = CPyStatics[4]; /* 'latest' */
    cpy_r_r4 = CPyStatics[5]; /* 'get_block' */
    PyObject *cpy_r_r5[2] = {cpy_r_r2, cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 221, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r2);
    cpy_r_r8 = CPyStatics[6]; /* 'number' */
    cpy_r_r9 = PyObject_GetItem(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 221, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    cpy_r_r10 = CPyStatics[80]; /* 0 */
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r9, cpy_r_r10, 2);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 221, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    cpy_r_r12 = PyObject_IsTrue(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 221, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    cpy_r_r14 = cpy_r_r12;
    if (cpy_r_r14) {
        goto CPyL43;
    } else
        goto CPyL11;
CPyL7: ;
    cpy_r_r15 = CPyStatics[3]; /* 'eth' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 222, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL40;
    }
    cpy_r_r17 = CPyStatics[35]; /* 'gas_price' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 222, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL40;
    }
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18); cpy_r_r19 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 222, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL40;
    }
    return cpy_r_r19;
CPyL11: ;
    cpy_r_r20 = ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_weighted;
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", "construct_time_based_gas_price_strategy_env", "weighted", 224, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
CPyL12: ;
    if (!cpy_r_r20) goto CPyL17;
CPyL13: ;
    cpy_r_r21 = ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_sample_size;
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", "construct_time_based_gas_price_strategy_env", "sample_size", 225, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r21);
CPyL14: ;
    cpy_r_r22 = CPyDef_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time(cpy_r_w3, cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 == -113.0;
    if (unlikely(cpy_r_r23)) goto CPyL16;
CPyL15: ;
    cpy_r_avg_block_time = cpy_r_r22;
    goto CPyL21;
CPyL16: ;
    cpy_r_r24 = PyErr_Occurred();
    if (unlikely(cpy_r_r24 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 225, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    } else
        goto CPyL15;
CPyL17: ;
    cpy_r_r25 = ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_sample_size;
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", "construct_time_based_gas_price_strategy_env", "sample_size", 227, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r25);
CPyL18: ;
    cpy_r_r26 = CPyDef_faster_web3___gas_strategies___time_based____get_avg_block_time(cpy_r_w3, cpy_r_r25);
    CPyTagged_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 == -113.0;
    if (unlikely(cpy_r_r27)) goto CPyL20;
CPyL19: ;
    cpy_r_avg_block_time = cpy_r_r26;
    goto CPyL21;
CPyL20: ;
    cpy_r_r28 = PyErr_Occurred();
    if (unlikely(cpy_r_r28 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 227, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    } else
        goto CPyL19;
CPyL21: ;
    cpy_r_r29 = ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_max_wait_seconds;
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", "construct_time_based_gas_price_strategy_env", "max_wait_seconds", 229, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r29);
CPyL22: ;
    cpy_r_r30 = CPyFloat_FromTagged(cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 == -113.0;
    if (unlikely(cpy_r_r31)) goto CPyL24;
CPyL23: ;
    cpy_r_r32 = cpy_r_avg_block_time == 0.0;
    if (unlikely(cpy_r_r32)) {
        goto CPyL44;
    } else
        goto CPyL27;
CPyL24: ;
    cpy_r_r33 = PyErr_Occurred();
    if (unlikely(cpy_r_r33 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 229, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    } else
        goto CPyL23;
CPyL25: ;
    PyErr_SetString(PyExc_ZeroDivisionError, "float division by zero");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 229, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r35 = cpy_r_r30 / cpy_r_avg_block_time;
    cpy_r_r36 = CPyFloat_Ceil(cpy_r_r35);
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 229, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL41;
    }
    cpy_r_r37 = ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_sample_size;
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", "construct_time_based_gas_price_strategy_env", "sample_size", 230, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL45;
    }
    CPyTagged_INCREF(cpy_r_r37);
CPyL29: ;
    cpy_r_r38 = CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data(cpy_r_w3, cpy_r_r37);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 230, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL45;
    }
    cpy_r_raw_miner_data = cpy_r_r38;
    cpy_r_r39 = CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data(cpy_r_raw_miner_data);
    CPy_DECREF(cpy_r_raw_miner_data);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 231, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL45;
    }
    cpy_r_miner_data = cpy_r_r39;
    cpy_r_r40 = ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_sample_size;
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", "construct_time_based_gas_price_strategy_env", "sample_size", 236, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL46;
    }
    CPyTagged_INCREF(cpy_r_r40);
CPyL32: ;
    cpy_r_r41 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r42 = CPyStatics[37]; /* '_compute_probabilities' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 233, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL47;
    }
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_r36);
    cpy_r_r45 = CPyTagged_StealAsObject(cpy_r_r40);
    PyObject *cpy_r_r46[3] = {cpy_r_miner_data, cpy_r_r44, cpy_r_r45};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = CPyStatics[92]; /* ('wait_blocks', 'sample_size') */
    cpy_r_r49 = PyObject_Vectorcall(cpy_r_r43, cpy_r_r47, 1, cpy_r_r48);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 233, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_miner_data);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    if (likely(PyTuple_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 233, CPyStatic_faster_web3___gas_strategies___time_based___globals, "tuple", cpy_r_r49);
        goto CPyL41;
    }
    cpy_r_r51 = ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_probability;
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'probability' of 'construct_time_based_gas_price_strategy_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r51);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 239, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    }
CPyL36: ;
    cpy_r_r52 = CPyTagged_TrueDivide(cpy_r_r51, 200);
    CPyTagged_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 == -113.0;
    if (unlikely(cpy_r_r53)) goto CPyL38;
CPyL37: ;
    cpy_r_r54 = CPyDef_faster_web3___gas_strategies___time_based____compute_gas_price(cpy_r_r50, cpy_r_r52);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 239, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL40;
    } else
        goto CPyL39;
CPyL38: ;
    cpy_r_r55 = PyErr_Occurred();
    if (unlikely(cpy_r_r55 != NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 239, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL49;
    } else
        goto CPyL37;
CPyL39: ;
    return cpy_r_r54;
CPyL40: ;
    cpy_r_r56 = CPY_INT_TAG;
    return cpy_r_r56;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL40;
CPyL43: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL7;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r36);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_miner_data);
    goto CPyL40;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_miner_data);
    CPyTagged_DecRef(cpy_r_r40);
    goto CPyL40;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_miner_data);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    goto CPyL40;
CPyL49: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL40;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"w3", "transaction_params", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_w3;
    PyObject *obj_transaction_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_w3, &obj_transaction_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_w3 = obj_w3;
    PyObject *arg_transaction_params;
    if (PyDict_Check(obj_transaction_params))
        arg_transaction_params = obj_transaction_params;
    else {
        arg_transaction_params = NULL;
    }
    if (arg_transaction_params != NULL) goto __LL13;
    if (obj_transaction_params == Py_None)
        arg_transaction_params = obj_transaction_params;
    else {
        arg_transaction_params = NULL;
    }
    if (arg_transaction_params != NULL) goto __LL13;
    CPy_TypeError("dict or None", obj_transaction_params); 
    goto fail;
__LL13: ;
    CPyTagged retval = CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__(arg___mypyc_self__, arg_w3, arg_transaction_params);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "time_based_gas_price_strategy", 219, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy(CPyTagged cpy_r_max_wait_seconds, CPyTagged cpy_r_sample_size, CPyTagged cpy_r_probability, char cpy_r_weighted) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_time_based_gas_price_strategy;
    PyObject *cpy_r_r7;
    if (cpy_r_sample_size != CPY_INT_TAG) goto CPyL15;
    cpy_r_sample_size = 240;
CPyL2: ;
    if (cpy_r_probability != CPY_INT_TAG) goto CPyL16;
    cpy_r_probability = 196;
CPyL4: ;
    if (cpy_r_weighted != 2) goto CPyL6;
    cpy_r_weighted = 0;
CPyL6: ;
    cpy_r_r0 = CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 199, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL17;
    }
    CPyTagged_INCREF(cpy_r_max_wait_seconds);
    if (((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_max_wait_seconds != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_max_wait_seconds);
    }
    ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_max_wait_seconds = cpy_r_max_wait_seconds;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 199, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL18;
    }
    if (((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_sample_size != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_sample_size);
    }
    ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_sample_size = cpy_r_sample_size;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 199, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL19;
    }
    if (((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_probability != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_probability);
    }
    ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_probability = cpy_r_probability;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 199, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL20;
    }
    ((faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *)cpy_r_r0)->_weighted = cpy_r_weighted;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 199, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL20;
    }
    cpy_r_r5 = CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 219, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL20;
    }
    if (((faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *)cpy_r_r5)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *)cpy_r_r5)->___mypyc_env__);
    }
    ((faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *)cpy_r_r5)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 219, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL21;
    }
    cpy_r_time_based_gas_price_strategy = cpy_r_r5;
    return cpy_r_time_based_gas_price_strategy;
CPyL14: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL15: ;
    CPyTagged_INCREF(cpy_r_sample_size);
    goto CPyL2;
CPyL16: ;
    CPyTagged_INCREF(cpy_r_probability);
    goto CPyL4;
CPyL17: ;
    CPyTagged_DecRef(cpy_r_sample_size);
    CPyTagged_DecRef(cpy_r_probability);
    goto CPyL14;
CPyL18: ;
    CPyTagged_DecRef(cpy_r_sample_size);
    CPyTagged_DecRef(cpy_r_probability);
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_probability);
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL21: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL14;
}

PyObject *CPyPy_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"max_wait_seconds", "sample_size", "probability", "weighted", 0};
    static CPyArg_Parser parser = {"O|OOO:construct_time_based_gas_price_strategy", kwlist, 0};
    PyObject *obj_max_wait_seconds;
    PyObject *obj_sample_size = NULL;
    PyObject *obj_probability = NULL;
    PyObject *obj_weighted = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_max_wait_seconds, &obj_sample_size, &obj_probability, &obj_weighted)) {
        return NULL;
    }
    CPyTagged arg_max_wait_seconds;
    if (likely(PyLong_Check(obj_max_wait_seconds)))
        arg_max_wait_seconds = CPyTagged_BorrowFromObject(obj_max_wait_seconds);
    else {
        CPy_TypeError("int", obj_max_wait_seconds); goto fail;
    }
    CPyTagged arg_sample_size;
    if (obj_sample_size == NULL) {
        arg_sample_size = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_sample_size)))
        arg_sample_size = CPyTagged_BorrowFromObject(obj_sample_size);
    else {
        CPy_TypeError("int", obj_sample_size); goto fail;
    }
    CPyTagged arg_probability;
    if (obj_probability == NULL) {
        arg_probability = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_probability)))
        arg_probability = CPyTagged_BorrowFromObject(obj_probability);
    else {
        CPy_TypeError("int", obj_probability); goto fail;
    }
    char arg_weighted;
    if (obj_weighted == NULL) {
        arg_weighted = 2;
    } else if (unlikely(!PyBool_Check(obj_weighted))) {
        CPy_TypeError("bool", obj_weighted); goto fail;
    } else
        arg_weighted = obj_weighted == Py_True;
    PyObject *retval = CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy(arg_max_wait_seconds, arg_sample_size, arg_probability, arg_weighted);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "construct_time_based_gas_price_strategy", 199, CPyStatic_faster_web3___gas_strategies___time_based___globals);
    return NULL;
}

char CPyDef_faster_web3___gas_strategies___time_based_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    PyObject **cpy_r_r7;
    void *cpy_r_r9;
    void *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject **cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject **cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject **cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[40]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", -1, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_collections;
    cpy_r_r6 = (PyObject **)&CPyModule_math;
    cpy_r_r7 = (PyObject **)&CPyModule_operator;
    PyObject **cpy_r_r8[3] = {cpy_r_r5, cpy_r_r6, cpy_r_r7};
    cpy_r_r9 = (void *)&cpy_r_r8;
    int64_t cpy_r_r10[3] = {1, 2, 3};
    cpy_r_r11 = (void *)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[96]; /* (('collections', 'collections', 'collections'),
                                   ('math', 'math', 'math'),
                                   ('operator', 'operator', 'operator')) */
    cpy_r_r13 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r14 = CPyStatics[44]; /* 'faster_web3/gas_strategies/time_based.py' */
    cpy_r_r15 = CPyStatics[45]; /* '<module>' */
    cpy_r_r16 = CPyImport_ImportMany(cpy_r_r12, cpy_r_r9, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r11);
    if (!cpy_r_r16) goto CPyL42;
    cpy_r_r17 = CPyStatics[97]; /* ('Final', 'Iterable', 'Optional', 'Sequence', 'Tuple') */
    cpy_r_r18 = CPyStatics[51]; /* 'typing' */
    cpy_r_r19 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 4, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_typing = cpy_r_r20;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[98]; /* ('ChecksumAddress',) */
    cpy_r_r22 = CPyStatics[53]; /* 'eth_typing' */
    cpy_r_r23 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 12, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_eth_typing = cpy_r_r24;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[99]; /* ('to_tuple',) */
    cpy_r_r26 = CPyStatics[55]; /* 'faster_eth_utils' */
    cpy_r_r27 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 15, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_faster_eth_utils = cpy_r_r28;
    CPy_INCREF(CPyModule_faster_eth_utils);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[100]; /* ('curry', 'groupby', 'sliding_window') */
    cpy_r_r30 = CPyStatics[57]; /* 'faster_eth_utils.toolz' */
    cpy_r_r31 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 18, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_faster_eth_utils___toolz = cpy_r_r32;
    CPy_INCREF(CPyModule_faster_eth_utils___toolz);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[101]; /* ('HexBytes',) */
    cpy_r_r34 = CPyStatics[59]; /* 'faster_hexbytes' */
    cpy_r_r35 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 23, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_faster_hexbytes = cpy_r_r36;
    CPy_INCREF(CPyModule_faster_hexbytes);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[102]; /* ('Web3',) */
    cpy_r_r38 = CPyStatics[61]; /* 'faster_web3' */
    cpy_r_r39 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 27, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_faster_web3 = cpy_r_r40;
    CPy_INCREF(CPyModule_faster_web3);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[103]; /* ('percentile',) */
    cpy_r_r42 = CPyStatics[63]; /* 'faster_web3._utils.math' */
    cpy_r_r43 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 30, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_faster_web3____utils___math = cpy_r_r44;
    CPy_INCREF(CPyModule_faster_web3____utils___math);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[104]; /* ('InsufficientData', 'Web3ValidationError') */
    cpy_r_r46 = CPyStatics[64]; /* 'faster_web3.exceptions' */
    cpy_r_r47 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 33, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_faster_web3___exceptions = cpy_r_r48;
    CPy_INCREF(CPyModule_faster_web3___exceptions);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[105]; /* ('BlockNumber', 'GasPriceStrategy', 'TxData', 'TxParams',
                                    'Wei') */
    cpy_r_r50 = CPyStatics[70]; /* 'faster_web3.types' */
    cpy_r_r51 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 37, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyModule_faster_web3___types = cpy_r_r52;
    CPy_INCREF(CPyModule_faster_web3___types);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[24]; /* 'MinerData' */
    cpy_r_r54 = CPyStatics[12]; /* 'miner' */
    cpy_r_r55 = CPyStatics[71]; /* 'num_blocks' */
    cpy_r_r56 = CPyStatics[72]; /* 'min_gas_price' */
    cpy_r_r57 = CPyStatics[25]; /* 'low_percentile_gas_price' */
    cpy_r_r58 = PyList_New(4);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 46, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r59 = (CPyPtr)&((PyListObject *)cpy_r_r58)->ob_item;
    cpy_r_r60 = *(CPyPtr *)cpy_r_r59;
    CPy_INCREF(cpy_r_r54);
    *(PyObject * *)cpy_r_r60 = cpy_r_r54;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r61 = cpy_r_r60 + 8;
    *(PyObject * *)cpy_r_r61 = cpy_r_r55;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r62 = cpy_r_r60 + 16;
    *(PyObject * *)cpy_r_r62 = cpy_r_r56;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r63 = cpy_r_r60 + 24;
    *(PyObject * *)cpy_r_r63 = cpy_r_r57;
    cpy_r_r64 = CPyModule_collections;
    cpy_r_r65 = CPyStatics[73]; /* 'namedtuple' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 45, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL43;
    }
    PyObject *cpy_r_r67[2] = {cpy_r_r53, cpy_r_r58};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_Vectorcall(cpy_r_r66, cpy_r_r68, 2, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 45, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL43;
    }
    CPy_DECREF_NO_IMM(cpy_r_r58);
    cpy_r_r70 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r71 = CPyStatics[24]; /* 'MinerData' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 45, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r74 = CPyStatics[30]; /* 'Probability' */
    cpy_r_r75 = CPyStatics[35]; /* 'gas_price' */
    cpy_r_r76 = CPyStatics[32]; /* 'prob' */
    cpy_r_r77 = PyList_New(2);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 48, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r78 = (CPyPtr)&((PyListObject *)cpy_r_r77)->ob_item;
    cpy_r_r79 = *(CPyPtr *)cpy_r_r78;
    CPy_INCREF(cpy_r_r75);
    *(PyObject * *)cpy_r_r79 = cpy_r_r75;
    CPy_INCREF(cpy_r_r76);
    cpy_r_r80 = cpy_r_r79 + 8;
    *(PyObject * *)cpy_r_r80 = cpy_r_r76;
    cpy_r_r81 = CPyModule_collections;
    cpy_r_r82 = CPyStatics[73]; /* 'namedtuple' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 48, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r84[2] = {cpy_r_r74, cpy_r_r77};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 2, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 48, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL44;
    }
    CPy_DECREF_NO_IMM(cpy_r_r77);
    cpy_r_r87 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r88 = CPyStatics[30]; /* 'Probability' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 48, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r91 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r92 = CPyStatics[37]; /* '_compute_probabilities' */
    cpy_r_r93 = CPyDict_GetItem(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 125, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r94 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r95 = CPyStatics[54]; /* 'to_tuple' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 125, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r97[1] = {cpy_r_r93};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = PyObject_Vectorcall(cpy_r_r96, cpy_r_r98, 1, 0);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 125, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r93);
    cpy_r_r100 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r101 = CPyStatics[37]; /* '_compute_probabilities' */
    cpy_r_r102 = PyDict_SetItem(cpy_r_r100, cpy_r_r101, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 125, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r104 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r105 = CPyStatics[74]; /* 'construct_time_based_gas_price_strategy' */
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 198, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r107 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r108 = CPyStatics[56]; /* 'curry' */
    cpy_r_r109 = CPyDict_GetItem(cpy_r_r107, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 198, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r110[1] = {cpy_r_r106};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = PyObject_Vectorcall(cpy_r_r109, cpy_r_r111, 1, 0);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 198, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r106);
    cpy_r_r113 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r114 = CPyStatics[74]; /* 'construct_time_based_gas_price_strategy' */
    cpy_r_r115 = PyDict_SetItem(cpy_r_r113, cpy_r_r114, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 198, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r117 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r118 = CPyStatics[74]; /* 'construct_time_based_gas_price_strategy' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 246, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r120 = CPyStatics[84]; /* 60 */
    cpy_r_r121 = CPyStatics[85]; /* 120 */
    PyObject *cpy_r_r122[2] = {cpy_r_r120, cpy_r_r121};
    cpy_r_r123 = (PyObject **)&cpy_r_r122;
    cpy_r_r124 = CPyStatics[106]; /* ('max_wait_seconds', 'sample_size') */
    cpy_r_r125 = PyObject_Vectorcall(cpy_r_r119, cpy_r_r123, 0, cpy_r_r124);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 246, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyStatic_faster_web3___gas_strategies___time_based___fast_gas_price_strategy = cpy_r_r125;
    CPy_INCREF(CPyStatic_faster_web3___gas_strategies___time_based___fast_gas_price_strategy);
    cpy_r_r126 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r127 = CPyStatics[76]; /* 'fast_gas_price_strategy' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r126, cpy_r_r127, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 246, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r130 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r131 = CPyStatics[74]; /* 'construct_time_based_gas_price_strategy' */
    cpy_r_r132 = CPyDict_GetItem(cpy_r_r130, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 251, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r133 = CPyStatics[86]; /* 600 */
    cpy_r_r134 = CPyStatics[85]; /* 120 */
    PyObject *cpy_r_r135[2] = {cpy_r_r133, cpy_r_r134};
    cpy_r_r136 = (PyObject **)&cpy_r_r135;
    cpy_r_r137 = CPyStatics[106]; /* ('max_wait_seconds', 'sample_size') */
    cpy_r_r138 = PyObject_Vectorcall(cpy_r_r132, cpy_r_r136, 0, cpy_r_r137);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 251, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyStatic_faster_web3___gas_strategies___time_based___medium_gas_price_strategy = cpy_r_r138;
    CPy_INCREF(CPyStatic_faster_web3___gas_strategies___time_based___medium_gas_price_strategy);
    cpy_r_r139 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r140 = CPyStatics[77]; /* 'medium_gas_price_strategy' */
    cpy_r_r141 = CPyDict_SetItem(cpy_r_r139, cpy_r_r140, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 251, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r143 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r144 = CPyStatics[74]; /* 'construct_time_based_gas_price_strategy' */
    cpy_r_r145 = CPyDict_GetItem(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 256, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r146 = CPyStatics[87]; /* 3600 */
    cpy_r_r147 = CPyStatics[85]; /* 120 */
    PyObject *cpy_r_r148[2] = {cpy_r_r146, cpy_r_r147};
    cpy_r_r149 = (PyObject **)&cpy_r_r148;
    cpy_r_r150 = CPyStatics[106]; /* ('max_wait_seconds', 'sample_size') */
    cpy_r_r151 = PyObject_Vectorcall(cpy_r_r145, cpy_r_r149, 0, cpy_r_r150);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 256, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyStatic_faster_web3___gas_strategies___time_based___slow_gas_price_strategy = cpy_r_r151;
    CPy_INCREF(CPyStatic_faster_web3___gas_strategies___time_based___slow_gas_price_strategy);
    cpy_r_r152 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r153 = CPyStatics[78]; /* 'slow_gas_price_strategy' */
    cpy_r_r154 = CPyDict_SetItem(cpy_r_r152, cpy_r_r153, cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 256, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r156 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r157 = CPyStatics[74]; /* 'construct_time_based_gas_price_strategy' */
    cpy_r_r158 = CPyDict_GetItem(cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 261, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    cpy_r_r159 = CPyStatics[88]; /* 86400 */
    cpy_r_r160 = CPyStatics[89]; /* 720 */
    PyObject *cpy_r_r161[2] = {cpy_r_r159, cpy_r_r160};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = CPyStatics[106]; /* ('max_wait_seconds', 'sample_size') */
    cpy_r_r164 = PyObject_Vectorcall(cpy_r_r158, cpy_r_r162, 0, cpy_r_r163);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 261, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    CPyStatic_faster_web3___gas_strategies___time_based___glacial_gas_price_strategy = cpy_r_r164;
    CPy_INCREF(CPyStatic_faster_web3___gas_strategies___time_based___glacial_gas_price_strategy);
    cpy_r_r165 = CPyStatic_faster_web3___gas_strategies___time_based___globals;
    cpy_r_r166 = CPyStatics[79]; /* 'glacial_gas_price_strategy' */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r165, cpy_r_r166, cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("faster_web3/gas_strategies/time_based.py", "<module>", 261, CPyStatic_faster_web3___gas_strategies___time_based___globals);
        goto CPyL42;
    }
    return 1;
CPyL42: ;
    cpy_r_r169 = 2;
    return cpy_r_r169;
CPyL43: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL42;
CPyL46: ;
    CPy_DecRef(cpy_r_r106);
    goto CPyL42;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___gas_strategies___time_based = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_collections = Py_None;
    CPyModule_math = Py_None;
    CPyModule_operator = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_utils = Py_None;
    CPyModule_faster_eth_utils___toolz = Py_None;
    CPyModule_faster_hexbytes = Py_None;
    CPyModule_faster_web3 = Py_None;
    CPyModule_faster_web3____utils___math = Py_None;
    CPyModule_faster_web3___exceptions = Py_None;
    CPyModule_faster_web3___types = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[107];
const char * const CPyLit_Str[] = {
    "\005\003eth\006latest\tget_block\006number\034Constrained sample size is 0",
    "\005\023Web3ValidationError\ttimestamp\021full_transactions\ftransactions\005miner",
    "\a\004hash\bgasPrice\nparentHash\rGeneratorExit\rStopIteration\agroupby\005items",
    "\006\003zip\003map\020InsufficientData\003min\tMinerData\030low_percentile_gas_price",
    "\a\nattrgetter\006sorted\003key\areverse\vProbability\016sliding_window\004prob",
    "\006\tInvariant\tException\tgas_price\004ceil\026_compute_probabilities\vwait_blocks",
    "\005\vsample_size\bbuiltins\vcollections\004math\boperator",
    "\004(faster_web3/gas_strategies/time_based.py\b<module>\005Final\bIterable",
    "\a\bOptional\bSequence\005Tuple\006typing\017ChecksumAddress\neth_typing\bto_tuple",
    "\004\020faster_eth_utils\005curry\026faster_eth_utils.toolz\bHexBytes",
    "\005\017faster_hexbytes\004Web3\vfaster_web3\npercentile\027faster_web3._utils.math",
    "\005\026faster_web3.exceptions\vBlockNumber\020GasPriceStrategy\006TxData\bTxParams",
    "\005\003Wei\021faster_web3.types\nnum_blocks\rmin_gas_price\nnamedtuple",
    "\002\'construct_time_based_gas_price_strategy\020max_wait_seconds",
    "\002\027fast_gas_price_strategy\031medium_gas_price_strategy",
    "\002\027slow_gas_price_strategy\032glacial_gas_price_strategy",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\n0\0001\000-1\0002\00060\000120\000600\0003600\00086400\000720",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    17, 1, 10, 2, 28, 29, 2, 38, 39, 3, 41, 41, 41, 3, 42, 42, 42, 3,
    43, 43, 43, 3, 93, 94, 95, 5, 46, 47, 48, 49, 50, 1, 52, 1, 54, 3, 56,
    18, 31, 1, 58, 1, 60, 1, 62, 2, 22, 8, 5, 65, 66, 67, 68, 69, 2, 75,
    39
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___gas_strategies___time_based__internal = NULL;
CPyModule *CPyModule_faster_web3___gas_strategies___time_based;
PyObject *CPyStatic_faster_web3___gas_strategies___time_based___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_collections;
CPyModule *CPyModule_math;
CPyModule *CPyModule_operator;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_faster_eth_utils;
CPyModule *CPyModule_faster_eth_utils___toolz;
CPyModule *CPyModule_faster_hexbytes;
CPyModule *CPyModule_faster_web3;
CPyModule *CPyModule_faster_web3____utils___math;
CPyModule *CPyModule_faster_web3___exceptions;
CPyModule *CPyModule_faster_web3___types;
PyObject *CPyStatic_faster_web3___gas_strategies___time_based___fast_gas_price_strategy = NULL;
PyObject *CPyStatic_faster_web3___gas_strategies___time_based___medium_gas_price_strategy = NULL;
PyObject *CPyStatic_faster_web3___gas_strategies___time_based___slow_gas_price_strategy = NULL;
PyObject *CPyStatic_faster_web3___gas_strategies___time_based___glacial_gas_price_strategy = NULL;
PyTypeObject *CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen;
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen(void);
CPyThreadLocal faster_web3___gas_strategies___time_based____get_raw_miner_data_genObject *faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance;
PyTypeObject *CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen;
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen(void);
CPyThreadLocal faster_web3___gas_strategies___time_based____aggregate_miner_data_genObject *faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance;
PyTypeObject *CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen;
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen(void);
CPyThreadLocal faster_web3___gas_strategies___time_based____compute_probabilities_genObject *faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance;
PyTypeObject *CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env;
PyObject *CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env(void);
CPyThreadLocal faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_envObject *faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance;
PyTypeObject *CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj;
PyObject *CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj(void);
CPyThreadLocal faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_objObject *faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance;
double CPyDef_faster_web3___gas_strategies___time_based____get_avg_block_time(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_avg_block_time(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
double CPyDef_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data(PyObject *cpy_r_w3, CPyTagged cpy_r_sample_size);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____get_raw_miner_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data(PyObject *cpy_r_raw_data);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____aggregate_miner_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities(PyObject *cpy_r_miner_data, CPyTagged cpy_r_wait_blocks, CPyTagged cpy_r_sample_size);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_probabilities(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_faster_web3___gas_strategies___time_based____compute_gas_price(PyObject *cpy_r_probabilities, double cpy_r_desired_probability);
PyObject *CPyPy_faster_web3___gas_strategies___time_based____compute_gas_price(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_w3, PyObject *cpy_r_transaction_params);
PyObject *CPyPy_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy(CPyTagged cpy_r_max_wait_seconds, CPyTagged cpy_r_sample_size, CPyTagged cpy_r_probability, char cpy_r_weighted);
PyObject *CPyPy_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___gas_strategies___time_based_____top_level__(void);

static struct export_table_faster_web3___gas_strategies___time_based exports = {
    &CPyStatic_faster_web3___gas_strategies___time_based___fast_gas_price_strategy,
    &CPyStatic_faster_web3___gas_strategies___time_based___medium_gas_price_strategy,
    &CPyStatic_faster_web3___gas_strategies___time_based___slow_gas_price_strategy,
    &CPyStatic_faster_web3___gas_strategies___time_based___glacial_gas_price_strategy,
    &CPyType_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen,
    &faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_free_instance,
    &CPyType_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen,
    &faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_free_instance,
    &CPyType_faster_web3___gas_strategies___time_based____compute_probabilities_gen,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen,
    &faster_web3___gas_strategies___time_based____compute_probabilities_gen_free_instance,
    &CPyType_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env,
    &CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env,
    &faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy_env_free_instance,
    &CPyType_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj,
    &CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj,
    &faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_free_instance,
    &CPyDef_faster_web3___gas_strategies___time_based____get_avg_block_time,
    &CPyDef_faster_web3___gas_strategies___time_based____get_weighted_avg_block_time,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____next__,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___send,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen_____iter__,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___throw,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data_gen___close,
    &CPyDef_faster_web3___gas_strategies___time_based____get_raw_miner_data,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____next__,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___send,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen_____iter__,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___throw,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data_gen___close,
    &CPyDef_faster_web3___gas_strategies___time_based____aggregate_miner_data,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____next__,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___send,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen_____iter__,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___throw,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities_gen___close,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_probabilities,
    &CPyDef_faster_web3___gas_strategies___time_based____compute_gas_price,
    &CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____get__,
    &CPyDef_faster_web3___gas_strategies___time_based___time_based_gas_price_strategy_construct_time_based_gas_price_strategy_obj_____call__,
    &CPyDef_faster_web3___gas_strategies___time_based___construct_time_based_gas_price_strategy,
    &CPyDef_faster_web3___gas_strategies___time_based_____top_level__,
};

static int exec_time_based__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.gas_strategies.time_based__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___gas_strategies___time_based(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___gas_strategies___time_based, "faster_web3.gas_strategies.time_based__mypyc.init_faster_web3___gas_strategies___time_based", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___gas_strategies___time_based", capsule);
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
static PyModuleDef module_def_time_based__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.gas_strategies.time_based__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_time_based__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_time_based__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_time_based__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
