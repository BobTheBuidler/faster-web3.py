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
#include "__native_request_caching_validation.h"
#include "__native_internal_request_caching_validation.h"

static PyAsyncMethods faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_is_beyond_validation_threshold_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen(void);

static PyObject *
faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_is_beyond_validation_threshold_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_traverse(faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__blocknum);
    Py_VISIT(self->___mypyc_generator_attribute__block_timestamp);
    Py_VISIT(self->___mypyc_generator_attribute__threshold);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1.f0);
    Py_VISIT(self->___mypyc_temp__1.f1);
    Py_VISIT(self->___mypyc_temp__1.f2);
    Py_VISIT(self->___mypyc_generator_attribute__threshold_block);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4.f0);
    Py_VISIT(self->___mypyc_temp__4.f1);
    Py_VISIT(self->___mypyc_temp__4.f2);
    Py_VISIT(self->___mypyc_generator_attribute__block);
    Py_VISIT(self->___mypyc_temp__5.f0);
    Py_VISIT(self->___mypyc_temp__5.f1);
    Py_VISIT(self->___mypyc_temp__5.f2);
    Py_VISIT(self->___mypyc_generator_attribute__e);
    return 0;
}

static int
faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_clear(faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__blocknum);
    Py_CLEAR(self->___mypyc_generator_attribute__block_timestamp);
    Py_CLEAR(self->___mypyc_generator_attribute__threshold);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1.f0);
    Py_CLEAR(self->___mypyc_temp__1.f1);
    Py_CLEAR(self->___mypyc_temp__1.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__threshold_block);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4.f0);
    Py_CLEAR(self->___mypyc_temp__4.f1);
    Py_CLEAR(self->___mypyc_temp__4.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__block);
    Py_CLEAR(self->___mypyc_temp__5.f0);
    Py_CLEAR(self->___mypyc_temp__5.f1);
    Py_CLEAR(self->___mypyc_temp__5.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__e);
    return 0;
}

static void
faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_dealloc(faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance == NULL) {
        faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute__blocknum);
        Py_CLEAR(self->___mypyc_generator_attribute__block_timestamp);
        self->___mypyc_next_label__ = -113;
        self->___mypyc_generator_attribute__cache_allowed_requests = 2;
        Py_CLEAR(self->___mypyc_generator_attribute__threshold);
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1.f0);
        Py_CLEAR(self->___mypyc_temp__1.f1);
        Py_CLEAR(self->___mypyc_temp__1.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__threshold_block);
        Py_CLEAR(self->___mypyc_temp__2);
        Py_CLEAR(self->___mypyc_temp__3);
        Py_CLEAR(self->___mypyc_temp__4.f0);
        Py_CLEAR(self->___mypyc_temp__4.f1);
        Py_CLEAR(self->___mypyc_temp__4.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__block);
        Py_CLEAR(self->___mypyc_temp__5.f0);
        Py_CLEAR(self->___mypyc_temp__5.f1);
        Py_CLEAR(self->___mypyc_temp__5.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__e);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_dealloc)
    faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__,
    };
    memcpy(faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_vtable, faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_vtable_scratch, sizeof(faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_is_beyond_validation_threshold_gen",
    .tp_new = faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_clear,
    .tp_methods = faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__,
    .tp_as_async = &faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_is_beyond_validation_threshold_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_template = &CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_template_;

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_is_beyond_validation_threshold_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *self;
    if (faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance != NULL) {
        self = faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance;
        faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__cache_allowed_requests = 2;
    self->___mypyc_temp__1 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__4 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__5 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_is_beyond_validation_threshold_gen_setup((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_block_id_in_params_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen(void);

static PyObject *
faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_block_id_in_params_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_traverse(faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->___mypyc_generator_attribute___result);
    Py_VISIT(self->___mypyc_generator_attribute__block_id);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__blocknum)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__blocknum));
    }
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7.f0);
    Py_VISIT(self->___mypyc_temp__7.f1);
    Py_VISIT(self->___mypyc_temp__7.f2);
    return 0;
}

static int
faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_clear(faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->___mypyc_generator_attribute___result);
    Py_CLEAR(self->___mypyc_generator_attribute__block_id);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__blocknum)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__blocknum;
        self->___mypyc_generator_attribute__blocknum = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7.f0);
    Py_CLEAR(self->___mypyc_temp__7.f1);
    Py_CLEAR(self->___mypyc_temp__7.f2);
    return 0;
}

static void
faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_dealloc(faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance == NULL) {
        faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        Py_CLEAR(self->___mypyc_generator_attribute___result);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__block_id);
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__blocknum)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__blocknum;
            self->___mypyc_generator_attribute__blocknum = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__blocknum = CPY_INT_TAG;
        }
        Py_CLEAR(self->___mypyc_temp__6);
        Py_CLEAR(self->___mypyc_temp__7.f0);
        Py_CLEAR(self->___mypyc_temp__7.f1);
        Py_CLEAR(self->___mypyc_temp__7.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_dealloc)
    faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__,
    };
    memcpy(faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_vtable, faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_vtable_scratch, sizeof(faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_validate_from_block_id_in_params_gen",
    .tp_new = faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_clear,
    .tp_methods = faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__,
    .tp_as_async = &faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_validate_from_block_id_in_params_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_template = &CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_template_;

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_block_id_in_params_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *self;
    if (faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance != NULL) {
        self = faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance;
        faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__blocknum = CPY_INT_TAG;
    self->___mypyc_temp__7 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_block_id_in_params_gen_setup((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blocknum_in_result_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen(void);

static PyObject *
faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blocknum_in_result_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_traverse(faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute___params);
    Py_VISIT(self->___mypyc_generator_attribute__result);
    Py_VISIT(self->___mypyc_generator_attribute__blocknum);
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__9.f0);
    Py_VISIT(self->___mypyc_temp__9.f1);
    Py_VISIT(self->___mypyc_temp__9.f2);
    Py_VISIT(self->___mypyc_generator_attribute__block);
    Py_VISIT(self->___mypyc_temp__10);
    Py_VISIT(self->___mypyc_temp__11.f0);
    Py_VISIT(self->___mypyc_temp__11.f1);
    Py_VISIT(self->___mypyc_temp__11.f2);
    Py_VISIT(self->___mypyc_temp__12);
    Py_VISIT(self->___mypyc_temp__13);
    Py_VISIT(self->___mypyc_temp__14.f0);
    Py_VISIT(self->___mypyc_temp__14.f1);
    Py_VISIT(self->___mypyc_temp__14.f2);
    Py_VISIT(self->___mypyc_temp__15.f0);
    Py_VISIT(self->___mypyc_temp__15.f1);
    Py_VISIT(self->___mypyc_temp__15.f2);
    Py_VISIT(self->___mypyc_generator_attribute__e);
    return 0;
}

static int
faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_clear(faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute___params);
    Py_CLEAR(self->___mypyc_generator_attribute__result);
    Py_CLEAR(self->___mypyc_generator_attribute__blocknum);
    Py_CLEAR(self->___mypyc_temp__8);
    Py_CLEAR(self->___mypyc_temp__9.f0);
    Py_CLEAR(self->___mypyc_temp__9.f1);
    Py_CLEAR(self->___mypyc_temp__9.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__block);
    Py_CLEAR(self->___mypyc_temp__10);
    Py_CLEAR(self->___mypyc_temp__11.f0);
    Py_CLEAR(self->___mypyc_temp__11.f1);
    Py_CLEAR(self->___mypyc_temp__11.f2);
    Py_CLEAR(self->___mypyc_temp__12);
    Py_CLEAR(self->___mypyc_temp__13);
    Py_CLEAR(self->___mypyc_temp__14.f0);
    Py_CLEAR(self->___mypyc_temp__14.f1);
    Py_CLEAR(self->___mypyc_temp__14.f2);
    Py_CLEAR(self->___mypyc_temp__15.f0);
    Py_CLEAR(self->___mypyc_temp__15.f1);
    Py_CLEAR(self->___mypyc_temp__15.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__e);
    return 0;
}

static void
faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_dealloc(faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance == NULL) {
        faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute___params);
        Py_CLEAR(self->___mypyc_generator_attribute__result);
        self->___mypyc_next_label__ = -113;
        self->___mypyc_generator_attribute__cache_allowed_requests = 2;
        Py_CLEAR(self->___mypyc_generator_attribute__blocknum);
        Py_CLEAR(self->___mypyc_temp__8);
        Py_CLEAR(self->___mypyc_temp__9.f0);
        Py_CLEAR(self->___mypyc_temp__9.f1);
        Py_CLEAR(self->___mypyc_temp__9.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__block);
        Py_CLEAR(self->___mypyc_temp__10);
        Py_CLEAR(self->___mypyc_temp__11.f0);
        Py_CLEAR(self->___mypyc_temp__11.f1);
        Py_CLEAR(self->___mypyc_temp__11.f2);
        Py_CLEAR(self->___mypyc_temp__12);
        Py_CLEAR(self->___mypyc_temp__13);
        Py_CLEAR(self->___mypyc_temp__14.f0);
        Py_CLEAR(self->___mypyc_temp__14.f1);
        Py_CLEAR(self->___mypyc_temp__14.f2);
        Py_CLEAR(self->___mypyc_temp__15.f0);
        Py_CLEAR(self->___mypyc_temp__15.f1);
        Py_CLEAR(self->___mypyc_temp__15.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__e);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_dealloc)
    faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__,
    };
    memcpy(faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_vtable, faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_vtable_scratch, sizeof(faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_validate_from_blocknum_in_result_gen",
    .tp_new = faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_clear,
    .tp_methods = faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__,
    .tp_as_async = &faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_validate_from_blocknum_in_result_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_template = &CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_template_;

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blocknum_in_result_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *self;
    if (faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance != NULL) {
        self = faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance;
        faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__cache_allowed_requests = 2;
    self->___mypyc_temp__9 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__11 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__14 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__15 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blocknum_in_result_gen_setup((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blockhash_in_params_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen(void);

static PyObject *
faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blockhash_in_params_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_traverse(faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->___mypyc_generator_attribute___result);
    Py_VISIT(self->___mypyc_temp__16);
    Py_VISIT(self->___mypyc_temp__17.f0);
    Py_VISIT(self->___mypyc_temp__17.f1);
    Py_VISIT(self->___mypyc_temp__17.f2);
    Py_VISIT(self->___mypyc_generator_attribute__response);
    Py_VISIT(self->___mypyc_temp__18);
    Py_VISIT(self->___mypyc_temp__19.f0);
    Py_VISIT(self->___mypyc_temp__19.f1);
    Py_VISIT(self->___mypyc_temp__19.f2);
    Py_VISIT(self->___mypyc_temp__20);
    Py_VISIT(self->___mypyc_temp__21.f0);
    Py_VISIT(self->___mypyc_temp__21.f1);
    Py_VISIT(self->___mypyc_temp__21.f2);
    Py_VISIT(self->___mypyc_generator_attribute__e);
    return 0;
}

static int
faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_clear(faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->___mypyc_generator_attribute___result);
    Py_CLEAR(self->___mypyc_temp__16);
    Py_CLEAR(self->___mypyc_temp__17.f0);
    Py_CLEAR(self->___mypyc_temp__17.f1);
    Py_CLEAR(self->___mypyc_temp__17.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__response);
    Py_CLEAR(self->___mypyc_temp__18);
    Py_CLEAR(self->___mypyc_temp__19.f0);
    Py_CLEAR(self->___mypyc_temp__19.f1);
    Py_CLEAR(self->___mypyc_temp__19.f2);
    Py_CLEAR(self->___mypyc_temp__20);
    Py_CLEAR(self->___mypyc_temp__21.f0);
    Py_CLEAR(self->___mypyc_temp__21.f1);
    Py_CLEAR(self->___mypyc_temp__21.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__e);
    return 0;
}

static void
faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_dealloc(faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance == NULL) {
        faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        Py_CLEAR(self->___mypyc_generator_attribute___result);
        self->___mypyc_next_label__ = -113;
        self->___mypyc_generator_attribute__cache_allowed_requests = 2;
        Py_CLEAR(self->___mypyc_temp__16);
        Py_CLEAR(self->___mypyc_temp__17.f0);
        Py_CLEAR(self->___mypyc_temp__17.f1);
        Py_CLEAR(self->___mypyc_temp__17.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__response);
        Py_CLEAR(self->___mypyc_temp__18);
        Py_CLEAR(self->___mypyc_temp__19.f0);
        Py_CLEAR(self->___mypyc_temp__19.f1);
        Py_CLEAR(self->___mypyc_temp__19.f2);
        Py_CLEAR(self->___mypyc_temp__20);
        Py_CLEAR(self->___mypyc_temp__21.f0);
        Py_CLEAR(self->___mypyc_temp__21.f1);
        Py_CLEAR(self->___mypyc_temp__21.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__e);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_dealloc)
    faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__,
    };
    memcpy(faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_vtable, faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_vtable_scratch, sizeof(faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_validate_from_blockhash_in_params_gen",
    .tp_new = faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_clear,
    .tp_methods = faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__,
    .tp_as_async = &faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_validate_from_blockhash_in_params_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_template = &CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_template_;

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blockhash_in_params_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *self;
    if (faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance != NULL) {
        self = faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance;
        faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__cache_allowed_requests = 2;
    self->___mypyc_temp__17 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__19 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__21 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___request_caching_validation_____mypyc__async_validate_from_blockhash_in_params_gen_setup((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef faster_web3____utils___caching___request_caching_validationmodule_methods[] = {
    {"_error_log", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation____error_log, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_error_log(provider, e)\n--\n\n") /* docstring */},
    {"always_cache_request", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___always_cache_request, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("always_cache_request(*_args, **_kwargs)\n--\n\n") /* docstring */},
    {"is_beyond_validation_threshold", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("is_beyond_validation_threshold(provider, blocknum=None, block_timestamp=None)\n--\n\n") /* docstring */},
    {"validate_from_block_id_in_params", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("validate_from_block_id_in_params(provider, params, _result)\n--\n\n") /* docstring */},
    {"validate_from_blocknum_in_result", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("validate_from_blocknum_in_result(provider, _params, result)\n--\n\n") /* docstring */},
    {"validate_from_blockhash_in_params", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("validate_from_blockhash_in_params(provider, params, _result)\n--\n\n") /* docstring */},
    {"async_is_beyond_validation_threshold", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_is_beyond_validation_threshold(provider, blocknum=None, block_timestamp=None)\n--\n\n") /* docstring */},
    {"async_validate_from_block_id_in_params", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_validate_from_block_id_in_params(provider, params, _result)\n--\n\n") /* docstring */},
    {"async_validate_from_blocknum_in_result", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_validate_from_blocknum_in_result(provider, _params, result)\n--\n\n") /* docstring */},
    {"async_validate_from_blockhash_in_params", (PyCFunction)CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_validate_from_blockhash_in_params(provider, params, _result)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3____utils___caching___request_caching_validation(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3____utils___caching___request_caching_validation__internal, "__name__");
    CPyStatic_faster_web3____utils___caching___request_caching_validation___globals = PyModule_GetDict(CPyModule_faster_web3____utils___caching___request_caching_validation__internal);
    if (unlikely(CPyStatic_faster_web3____utils___caching___request_caching_validation___globals == NULL))
        goto fail;
    CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen))
        goto fail;
    CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen))
        goto fail;
    CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen))
        goto fail;
    CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3____utils___caching___request_caching_validation_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3____utils___caching___request_caching_validation__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS);
    CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS = NULL;
    Py_CLEAR(CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen);
    Py_CLEAR(CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen);
    Py_CLEAR(CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen);
    Py_CLEAR(CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen);
    return -1;
}
static struct PyModuleDef faster_web3____utils___caching___request_caching_validationmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3._utils.caching.request_caching_validation",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3____utils___caching___request_caching_validationmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3____utils___caching___request_caching_validation(void)
{
    if (CPyModule_faster_web3____utils___caching___request_caching_validation__internal) {
        Py_INCREF(CPyModule_faster_web3____utils___caching___request_caching_validation__internal);
        return CPyModule_faster_web3____utils___caching___request_caching_validation__internal;
    }
    CPyModule_faster_web3____utils___caching___request_caching_validation__internal = PyModule_Create(&faster_web3____utils___caching___request_caching_validationmodule);
    if (unlikely(CPyModule_faster_web3____utils___caching___request_caching_validation__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3____utils___caching___request_caching_validation(CPyModule_faster_web3____utils___caching___request_caching_validation__internal) != 0)
        goto fail;
    return CPyModule_faster_web3____utils___caching___request_caching_validation__internal;
    fail:
    return NULL;
}

char CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(PyObject *cpy_r_provider, PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyStatics[3]; /* 'logger' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "_error_log", 36, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyStatics[4]; /* 'There was an exception while caching the request.' */
    cpy_r_r3 = CPyStatics[5]; /* 'error' */
    PyObject *cpy_r_r4[3] = {cpy_r_r1, cpy_r_r2, cpy_r_e};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = CPyStatics[53]; /* ('exc_info',) */
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775810ULL, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "_error_log", 36, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL2: ;
    CPy_DECREF(cpy_r_r1);
    return 1;
CPyL3: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL4: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL3;
CPyL5: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation____error_log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "e", 0};
    static CPyArg_Parser parser = {"OO:_error_log", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_e)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_e = obj_e;
    char retval = CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(arg_provider, arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "_error_log", 33, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___request_caching_validation___always_cache_request(PyObject *cpy_r__args, PyObject *cpy_r__kwargs) {
    return 1;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___always_cache_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:always_cache_request", kwlist, 0};
    PyObject *obj__args;
    PyObject *obj__kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj__args, &obj__kwargs)) {
        return NULL;
    }
    PyObject *arg__args = obj__args;
    PyObject *arg__kwargs = obj__kwargs;
    char retval = CPyDef_faster_web3____utils___caching___request_caching_validation___always_cache_request(arg__args, arg__kwargs);
    CPy_DECREF(obj__args);
    CPy_DECREF(obj__kwargs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj__args);
    CPy_DECREF(obj__kwargs);
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "always_cache_request", 41, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(PyObject *cpy_r_provider, PyObject *cpy_r_blocknum, PyObject *cpy_r_block_timestamp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_threshold;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyTagged cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    double cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    double cpy_r_r85;
    char cpy_r_r86;
    double cpy_r_r87;
    double cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    tuple_T3OOO cpy_r_r109;
    char cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    if (cpy_r_blocknum != NULL) goto CPyL74;
    cpy_r_r0 = Py_None;
    cpy_r_blocknum = cpy_r_r0;
CPyL2: ;
    if (cpy_r_block_timestamp != NULL) goto CPyL75;
    cpy_r_r1 = Py_None;
    cpy_r_block_timestamp = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 50, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL76;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 50, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL76;
    }
    cpy_r_r5 = CPyStatics[8]; /* 'request_cache_validation_threshold' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 52, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL77;
    }
    cpy_r_threshold = cpy_r_r6;
    cpy_r_r7 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r8 = 0 ? Py_True : Py_False;
    cpy_r_r9 = PyObject_SetAttr(cpy_r_provider, cpy_r_r7, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 55, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL78;
    }
    cpy_r_r11 = (PyObject *)*exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold;
    cpy_r_r12 = CPy_TypeCheck(cpy_r_threshold, cpy_r_r11);
    if (cpy_r_r12) {
        goto CPyL79;
    } else
        goto CPyL23;
CPyL10: ;
    cpy_r_r13 = CPyStatics[9]; /* 'eth_getBlockByNumber' */
    if (likely(PyObject_TypeCheck(cpy_r_threshold, *exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold)))
        cpy_r_r14 = cpy_r_threshold;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 59, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "faster_web3.utils.caching.RequestCacheValidationThreshold", cpy_r_threshold);
        goto CPyL80;
    }
    cpy_r_r15 = CPyStatics[10]; /* 'value' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 59, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL80;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 59, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "str", cpy_r_r16);
        goto CPyL80;
    }
    cpy_r_r18 = PyList_New(2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 59, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL81;
    }
    cpy_r_r19 = 0 ? Py_True : Py_False;
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r17;
    cpy_r_r22 = cpy_r_r21 + 8;
    *(PyObject * *)cpy_r_r22 = cpy_r_r19;
    cpy_r_r23 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r24[3] = {cpy_r_provider, cpy_r_r13, cpy_r_r18};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 58, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL82;
    }
    CPy_DECREF_NO_IMM(cpy_r_r18);
    if (likely(PyDict_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 58, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r26);
        goto CPyL80;
    }
    cpy_r_r28 = CPyStatics[12]; /* 'result' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 58, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL80;
    }
    cpy_r_r30 = CPyStatics[13]; /* 'number' */
    cpy_r_r31 = PyObject_GetItem(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 62, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL80;
    }
    cpy_r_r32 = (PyObject *)&PyLong_Type;
    cpy_r_r33 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r34[2] = {cpy_r_r31, cpy_r_r33};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r35, 2, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 62, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL83;
    }
    CPy_DECREF(cpy_r_r31);
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 62, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL80;
    }
    cpy_r_r38 = CPyTagged_StealAsObject(cpy_r_r37);
    cpy_r_r39 = PyObject_RichCompare(cpy_r_blocknum, cpy_r_r38, 1);
    CPy_DECREF(cpy_r_blocknum);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 62, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL52;
    }
    if (unlikely(!PyBool_Check(cpy_r_r39))) {
        CPy_TypeError("bool", cpy_r_r39); cpy_r_r40 = 2;
    } else
        cpy_r_r40 = cpy_r_r39 == Py_True;
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 62, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL52;
    }
    cpy_r_r41 = cpy_r_r40;
    goto CPyL60;
CPyL23: ;
    cpy_r_r42 = PyLong_Check(cpy_r_threshold);
    if (!cpy_r_r42) goto CPyL84;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_block_timestamp != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL85;
    if (likely(PyLong_Check(cpy_r_block_timestamp)))
        cpy_r_r45 = CPyTagged_FromObject(cpy_r_block_timestamp);
    else {
        CPy_TypeError("int", cpy_r_block_timestamp); cpy_r_r45 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 48, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL78;
    }
    cpy_r_r46 = cpy_r_r45 != 0;
    CPyTagged_DECREF(cpy_r_r45);
    if (cpy_r_r46) {
        goto CPyL86;
    } else
        goto CPyL85;
CPyL27: ;
    cpy_r_r47 = CPyStatics[9]; /* 'eth_getBlockByNumber' */
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[14]; /* 'hex' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 68, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL87;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_blocknum};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 68, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL87;
    }
    CPy_DECREF(cpy_r_blocknum);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 68, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "str", cpy_r_r53);
        goto CPyL88;
    }
    cpy_r_r55 = PyList_New(2);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 68, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL89;
    }
    cpy_r_r56 = 0 ? Py_True : Py_False;
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    *(PyObject * *)cpy_r_r58 = cpy_r_r54;
    cpy_r_r59 = cpy_r_r58 + 8;
    *(PyObject * *)cpy_r_r59 = cpy_r_r56;
    cpy_r_r60 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r61[3] = {cpy_r_provider, cpy_r_r47, cpy_r_r55};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_VectorcallMethod(cpy_r_r60, cpy_r_r62, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 67, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL90;
    }
    CPy_DECREF_NO_IMM(cpy_r_r55);
    if (likely(PyDict_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 67, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r63);
        goto CPyL88;
    }
    cpy_r_r65 = CPyStatics[12]; /* 'result' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 67, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL88;
    }
    cpy_r_r67 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r68 = PyObject_GetItem(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 70, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL88;
    }
    cpy_r_r69 = (PyObject *)&PyLong_Type;
    cpy_r_r70 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r71[2] = {cpy_r_r68, cpy_r_r70};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = PyObject_Vectorcall(cpy_r_r69, cpy_r_r72, 2, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 70, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r68);
    if (likely(PyLong_Check(cpy_r_r73)))
        cpy_r_r74 = CPyTagged_FromObject(cpy_r_r73);
    else {
        CPy_TypeError("int", cpy_r_r73); cpy_r_r74 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 70, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL88;
    }
    cpy_r_r75 = CPyTagged_StealAsObject(cpy_r_r74);
    cpy_r_block_timestamp = cpy_r_r75;
CPyL38: ;
    if (likely(PyLong_Check(cpy_r_block_timestamp)))
        cpy_r_r76 = CPyTagged_FromObject(cpy_r_block_timestamp);
    else {
        CPy_TypeError("int", cpy_r_block_timestamp); cpy_r_r76 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_block_timestamp);
    if (unlikely(cpy_r_r76 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 74, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL88;
    }
    cpy_r_r77 = CPyModule_time;
    cpy_r_r78 = CPyStatics[16]; /* 'time' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 74, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL92;
    }
    cpy_r_r80 = PyObject_Vectorcall(cpy_r_r79, 0, 0, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 74, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL92;
    }
    cpy_r_r81 = PyFloat_AsDouble(cpy_r_r80);
    if (cpy_r_r81 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r80); cpy_r_r81 = -113.0;
    }
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 == -113.0;
    if (unlikely(cpy_r_r82)) goto CPyL43;
CPyL42: ;
    if (likely(PyLong_Check(cpy_r_threshold)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_threshold);
    else {
        CPy_TypeError("int", cpy_r_threshold); cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_threshold);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 74, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL93;
    } else
        goto CPyL44;
CPyL43: ;
    cpy_r_r84 = PyErr_Occurred();
    if (unlikely(cpy_r_r84 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 74, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL92;
    } else
        goto CPyL42;
CPyL44: ;
    cpy_r_r85 = CPyFloat_FromTagged(cpy_r_r83);
    CPyTagged_DECREF(cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 == -113.0;
    if (unlikely(cpy_r_r86)) goto CPyL46;
CPyL45: ;
    cpy_r_r87 = cpy_r_r81 - cpy_r_r85;
    cpy_r_r88 = CPyFloat_FromTagged(cpy_r_r76);
    CPyTagged_DECREF(cpy_r_r76);
    cpy_r_r89 = cpy_r_r88 == -113.0;
    if (unlikely(cpy_r_r89)) {
        goto CPyL48;
    } else
        goto CPyL47;
CPyL46: ;
    cpy_r_r90 = PyErr_Occurred();
    if (unlikely(cpy_r_r90 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 74, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL93;
    } else
        goto CPyL45;
CPyL47: ;
    cpy_r_r91 = cpy_r_r88 <= cpy_r_r87;
    cpy_r_r41 = cpy_r_r91;
    goto CPyL60;
CPyL48: ;
    cpy_r_r92 = PyErr_Occurred();
    if (unlikely(cpy_r_r92 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 74, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL52;
    } else
        goto CPyL47;
CPyL49: ;
    cpy_r_r93 = CPyStatics[3]; /* 'logger' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 76, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL88;
    }
    cpy_r_r95 = CPyStatics[17]; /* ('Invalid request_cache_validation_threshold value. This '
                                   'should not have happened. Request not cached.\n'
                                   '    threshold: %s') */
    cpy_r_r96 = CPyStatics[5]; /* 'error' */
    PyObject *cpy_r_r97[3] = {cpy_r_r94, cpy_r_r95, cpy_r_threshold};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = PyObject_VectorcallMethod(cpy_r_r96, cpy_r_r98, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 76, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL94;
    } else
        goto CPyL95;
CPyL51: ;
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_threshold);
    cpy_r_r41 = 0;
    goto CPyL60;
CPyL52: ;
    cpy_r_r100 = CPy_CatchError();
    cpy_r_r101 = CPyModule_builtins;
    cpy_r_r102 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 82, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL58;
    }
    cpy_r_r104 = CPy_ExceptionMatches(cpy_r_r103);
    CPy_DecRef(cpy_r_r103);
    if (!cpy_r_r104) goto CPyL56;
    cpy_r_r105 = CPy_GetExcValue();
    cpy_r_r106 = CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(cpy_r_provider, cpy_r_r105);
    CPy_DecRef(cpy_r_r105);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 83, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL58;
    }
    CPy_RestoreExcInfo(cpy_r_r100);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    cpy_r_r41 = 0;
    goto CPyL60;
CPyL56: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL58;
    } else
        goto CPyL96;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r100);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    cpy_r_r107 = CPy_KeepPropagating();
    if (!cpy_r_r107) goto CPyL61;
    CPy_Unreachable();
CPyL60: ;
    tuple_T3OOO __tmp1 = { NULL, NULL, NULL };
    cpy_r_r108 = __tmp1;
    cpy_r_r109 = cpy_r_r108;
    goto CPyL62;
CPyL61: ;
    cpy_r_r110 = 2;
    cpy_r_r41 = cpy_r_r110;
    cpy_r_r111 = CPy_CatchError();
    cpy_r_r109 = cpy_r_r111;
CPyL62: ;
    cpy_r_r112 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r113 = cpy_r_r4 ? Py_True : Py_False;
    cpy_r_r114 = PyObject_SetAttr(cpy_r_provider, cpy_r_r112, cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 86, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL68;
    }
    if (cpy_r_r109.f0 == NULL) goto CPyL66;
    CPy_Reraise();
    if (!0) {
        goto CPyL68;
    } else
        goto CPyL97;
CPyL65: ;
    CPy_Unreachable();
CPyL66: ;
    if (cpy_r_r41 == 2) goto CPyL72;
    return cpy_r_r41;
CPyL68: ;
    if (cpy_r_r109.f0 == NULL) goto CPyL70;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_XDECREF(cpy_r_r109.f0);
    CPy_XDECREF(cpy_r_r109.f1);
    CPy_XDECREF(cpy_r_r109.f2);
CPyL70: ;
    cpy_r_r116 = CPy_KeepPropagating();
    if (!cpy_r_r116) goto CPyL73;
    CPy_Unreachable();
CPyL72: ;
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r117 = 2;
    return cpy_r_r117;
CPyL74: ;
    CPy_INCREF(cpy_r_blocknum);
    goto CPyL2;
CPyL75: ;
    CPy_INCREF(cpy_r_block_timestamp);
    goto CPyL4;
CPyL76: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_block_timestamp);
    goto CPyL73;
CPyL77: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_block_timestamp);
    goto CPyL52;
CPyL78: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_block_timestamp);
    CPy_DecRef(cpy_r_threshold);
    goto CPyL52;
CPyL79: ;
    CPy_DECREF(cpy_r_block_timestamp);
    goto CPyL10;
CPyL80: ;
    CPy_DecRef(cpy_r_blocknum);
    goto CPyL52;
CPyL81: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_r17);
    goto CPyL52;
CPyL82: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_r18);
    goto CPyL52;
CPyL83: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_r31);
    goto CPyL52;
CPyL84: ;
    CPy_DECREF(cpy_r_blocknum);
    CPy_DECREF(cpy_r_block_timestamp);
    goto CPyL49;
CPyL85: ;
    CPy_DECREF(cpy_r_block_timestamp);
    goto CPyL27;
CPyL86: ;
    CPy_DECREF(cpy_r_blocknum);
    goto CPyL38;
CPyL87: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_threshold);
    goto CPyL52;
CPyL88: ;
    CPy_DecRef(cpy_r_threshold);
    goto CPyL52;
CPyL89: ;
    CPy_DecRef(cpy_r_threshold);
    CPy_DecRef(cpy_r_r54);
    goto CPyL52;
CPyL90: ;
    CPy_DecRef(cpy_r_threshold);
    CPy_DecRef(cpy_r_r55);
    goto CPyL52;
CPyL91: ;
    CPy_DecRef(cpy_r_threshold);
    CPy_DecRef(cpy_r_r68);
    goto CPyL52;
CPyL92: ;
    CPy_DecRef(cpy_r_threshold);
    CPyTagged_DecRef(cpy_r_r76);
    goto CPyL52;
CPyL93: ;
    CPyTagged_DecRef(cpy_r_r76);
    goto CPyL52;
CPyL94: ;
    CPy_DecRef(cpy_r_threshold);
    CPy_DecRef(cpy_r_r94);
    goto CPyL52;
CPyL95: ;
    CPy_DECREF(cpy_r_r99);
    goto CPyL51;
CPyL96: ;
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    goto CPyL57;
CPyL97: ;
    CPy_XDECREF(cpy_r_r109.f0);
    CPy_XDECREF(cpy_r_r109.f1);
    CPy_XDECREF(cpy_r_r109.f2);
    goto CPyL65;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "blocknum", "block_timestamp", 0};
    static CPyArg_Parser parser = {"O|OO:is_beyond_validation_threshold", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_blocknum = NULL;
    PyObject *obj_block_timestamp = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_blocknum, &obj_block_timestamp)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_blocknum;
    if (obj_blocknum == NULL) {
        arg_blocknum = NULL;
        goto __LL2;
    }
    if (PyLong_Check(obj_blocknum))
        arg_blocknum = obj_blocknum;
    else {
        arg_blocknum = NULL;
    }
    if (arg_blocknum != NULL) goto __LL2;
    if (obj_blocknum == Py_None)
        arg_blocknum = obj_blocknum;
    else {
        arg_blocknum = NULL;
    }
    if (arg_blocknum != NULL) goto __LL2;
    CPy_TypeError("int or None", obj_blocknum); 
    goto fail;
__LL2: ;
    PyObject *arg_block_timestamp;
    if (obj_block_timestamp == NULL) {
        arg_block_timestamp = NULL;
        goto __LL3;
    }
    if (PyLong_Check(obj_block_timestamp))
        arg_block_timestamp = obj_block_timestamp;
    else {
        arg_block_timestamp = NULL;
    }
    if (arg_block_timestamp != NULL) goto __LL3;
    if (obj_block_timestamp == Py_None)
        arg_block_timestamp = obj_block_timestamp;
    else {
        arg_block_timestamp = NULL;
    }
    if (arg_block_timestamp != NULL) goto __LL3;
    CPy_TypeError("int or None", obj_block_timestamp); 
    goto fail;
__LL3: ;
    char retval = CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(arg_provider, arg_blocknum, arg_block_timestamp);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "is_beyond_validation_threshold", 45, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = CPyStatics[52]; /* 0 */
    cpy_r_r1 = PyObject_GetItem(cpy_r_params, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_block_id_in_params", 94, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL9;
    }
    cpy_r_r2 = CPyStatics[19]; /* 'earliest' */
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_block_id_in_params", 95, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL10;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_block_id_in_params", 95, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL10;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) {
        goto CPyL11;
    } else
        goto CPyL5;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r7 = (PyObject *)&PyLong_Type;
    cpy_r_r8 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r9[2] = {cpy_r_r1, cpy_r_r8};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r10, 2, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_block_id_in_params", 99, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r1);
    if (likely(PyLong_Check(cpy_r_r11)))
        cpy_r_r12 = CPyTagged_FromObject(cpy_r_r11);
    else {
        CPy_TypeError("int", cpy_r_r11); cpy_r_r12 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_block_id_in_params", 99, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL9;
    }
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r12);
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(cpy_r_provider, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_block_id_in_params", 100, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL9;
    }
    return cpy_r_r15;
CPyL9: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "params", "_result", 0};
    static CPyArg_Parser parser = {"OOO:validate_from_block_id_in_params", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_params;
    PyObject *obj__result;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_params, &obj__result)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_params = obj_params;
    PyObject *arg__result = obj__result;
    char retval = CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params(arg_provider, arg_params, arg__result);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_block_id_in_params", 89, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result(PyObject *cpy_r_provider, PyObject *cpy_r__params, PyObject *cpy_r_result) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_blocknum;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    tuple_T3OOO cpy_r_r82;
    tuple_T3OOO cpy_r_r83;
    char cpy_r_r84;
    tuple_T3OOO cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    cpy_r_r0 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 108, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL52;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 108, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL52;
    }
    cpy_r_r3 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r4 = 0 ? Py_True : Py_False;
    cpy_r_r5 = PyObject_SetAttr(cpy_r_provider, cpy_r_r3, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 111, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r7 = CPyStatics[20]; /* 'blockNumber' */
    cpy_r_r8 = PyDict_Contains(cpy_r_result, cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 114, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL18;
    cpy_r_r11 = CPyStatics[20]; /* 'blockNumber' */
    cpy_r_r12 = CPyDict_GetWithNone(cpy_r_result, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 115, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_blocknum = cpy_r_r12;
    cpy_r_r13 = CPyStatics[9]; /* 'eth_getBlockByNumber' */
    cpy_r_r14 = PyList_New(2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 118, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL53;
    }
    cpy_r_r15 = 0 ? Py_True : Py_False;
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    CPy_INCREF(cpy_r_blocknum);
    *(PyObject * *)cpy_r_r17 = cpy_r_blocknum;
    cpy_r_r18 = cpy_r_r17 + 8;
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    cpy_r_r19 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r20[3] = {cpy_r_provider, cpy_r_r13, cpy_r_r14};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_VectorcallMethod(cpy_r_r19, cpy_r_r21, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 117, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL54;
    }
    CPy_DECREF_NO_IMM(cpy_r_r14);
    if (likely(PyDict_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 117, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r22);
        goto CPyL53;
    }
    cpy_r_r24 = CPyStatics[12]; /* 'result' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 117, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL53;
    }
    cpy_r_r26 = (PyObject *)&PyLong_Type;
    cpy_r_r27 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r28[2] = {cpy_r_blocknum, cpy_r_r27};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_Vectorcall(cpy_r_r26, cpy_r_r29, 2, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 122, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_blocknum);
    if (likely(PyLong_Check(cpy_r_r30)))
        cpy_r_r31 = CPyTagged_FromObject(cpy_r_r30);
    else {
        CPy_TypeError("int", cpy_r_r30); cpy_r_r31 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 122, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL56;
    }
    cpy_r_r32 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r33 = PyObject_GetItem(cpy_r_r25, cpy_r_r32);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 123, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL57;
    }
    cpy_r_r34 = (PyObject *)&PyLong_Type;
    cpy_r_r35 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r36[2] = {cpy_r_r33, cpy_r_r35};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = PyObject_Vectorcall(cpy_r_r34, cpy_r_r37, 2, 0);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 123, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_r33);
    if (likely(PyLong_Check(cpy_r_r38)))
        cpy_r_r39 = CPyTagged_FromObject(cpy_r_r38);
    else {
        CPy_TypeError("int", cpy_r_r38); cpy_r_r39 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 123, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL57;
    }
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_r31);
    cpy_r_r41 = CPyTagged_StealAsObject(cpy_r_r39);
    cpy_r_r42 = CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(cpy_r_provider, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 120, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r43 = cpy_r_r42;
    goto CPyL39;
CPyL18: ;
    cpy_r_r44 = CPyStatics[13]; /* 'number' */
    cpy_r_r45 = PyDict_Contains(cpy_r_result, cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 125, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r47 = cpy_r_r45;
    if (!cpy_r_r47) goto CPyL28;
    cpy_r_r48 = CPyStatics[13]; /* 'number' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_result, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 128, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r50 = (PyObject *)&PyLong_Type;
    cpy_r_r51 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r52[2] = {cpy_r_r49, cpy_r_r51};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r53, 2, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 128, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL59;
    }
    CPy_DECREF(cpy_r_r49);
    if (likely(PyLong_Check(cpy_r_r54)))
        cpy_r_r55 = CPyTagged_FromObject(cpy_r_r54);
    else {
        CPy_TypeError("int", cpy_r_r54); cpy_r_r55 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 128, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r56 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_result, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 129, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r58 = (PyObject *)&PyLong_Type;
    cpy_r_r59 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r60[2] = {cpy_r_r57, cpy_r_r59};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = PyObject_Vectorcall(cpy_r_r58, cpy_r_r61, 2, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 129, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_r57);
    if (likely(PyLong_Check(cpy_r_r62)))
        cpy_r_r63 = CPyTagged_FromObject(cpy_r_r62);
    else {
        CPy_TypeError("int", cpy_r_r62); cpy_r_r63 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 129, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r64 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r65 = CPyTagged_StealAsObject(cpy_r_r63);
    cpy_r_r66 = CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(cpy_r_provider, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 126, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r43 = cpy_r_r66;
    goto CPyL39;
CPyL28: ;
    cpy_r_r67 = CPyStatics[3]; /* 'logger' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 132, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL31;
    }
    cpy_r_r69 = CPyStatics[21]; /* ('Could not find block number in result. This should not '
                                   'have happened. Request not cached.\n'
                                   '    result: %s') */
    cpy_r_r70 = CPyStatics[5]; /* 'error' */
    PyObject *cpy_r_r71[3] = {cpy_r_r68, cpy_r_r69, cpy_r_result};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = PyObject_VectorcallMethod(cpy_r_r70, cpy_r_r72, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 132, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL62;
    } else
        goto CPyL63;
CPyL30: ;
    CPy_DECREF(cpy_r_r68);
    cpy_r_r43 = 0;
    goto CPyL39;
CPyL31: ;
    cpy_r_r74 = CPy_CatchError();
    cpy_r_r75 = CPyModule_builtins;
    cpy_r_r76 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 138, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL37;
    }
    cpy_r_r78 = CPy_ExceptionMatches(cpy_r_r77);
    CPy_DecRef(cpy_r_r77);
    if (!cpy_r_r78) goto CPyL35;
    cpy_r_r79 = CPy_GetExcValue();
    cpy_r_r80 = CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(cpy_r_provider, cpy_r_r79);
    CPy_DecRef(cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 139, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL37;
    }
    CPy_RestoreExcInfo(cpy_r_r74);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r74.f2);
    cpy_r_r43 = 0;
    goto CPyL39;
CPyL35: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL37;
    } else
        goto CPyL64;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r74);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r74.f2);
    cpy_r_r81 = CPy_KeepPropagating();
    if (!cpy_r_r81) goto CPyL40;
    CPy_Unreachable();
CPyL39: ;
    tuple_T3OOO __tmp4 = { NULL, NULL, NULL };
    cpy_r_r82 = __tmp4;
    cpy_r_r83 = cpy_r_r82;
    goto CPyL41;
CPyL40: ;
    cpy_r_r84 = 2;
    cpy_r_r43 = cpy_r_r84;
    cpy_r_r85 = CPy_CatchError();
    cpy_r_r83 = cpy_r_r85;
CPyL41: ;
    cpy_r_r86 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r87 = cpy_r_r2 ? Py_True : Py_False;
    cpy_r_r88 = PyObject_SetAttr(cpy_r_provider, cpy_r_r86, cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 142, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL47;
    }
    if (cpy_r_r83.f0 == NULL) goto CPyL45;
    CPy_Reraise();
    if (!0) {
        goto CPyL47;
    } else
        goto CPyL65;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    if (cpy_r_r43 == 2) goto CPyL51;
    return cpy_r_r43;
CPyL47: ;
    if (cpy_r_r83.f0 == NULL) goto CPyL49;
    CPy_RestoreExcInfo(cpy_r_r83);
    CPy_XDECREF(cpy_r_r83.f0);
    CPy_XDECREF(cpy_r_r83.f1);
    CPy_XDECREF(cpy_r_r83.f2);
CPyL49: ;
    cpy_r_r90 = CPy_KeepPropagating();
    if (!cpy_r_r90) goto CPyL52;
    CPy_Unreachable();
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r91 = 2;
    return cpy_r_r91;
CPyL53: ;
    CPy_DecRef(cpy_r_blocknum);
    goto CPyL31;
CPyL54: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_r14);
    goto CPyL31;
CPyL55: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_r25);
    goto CPyL31;
CPyL56: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL31;
CPyL57: ;
    CPyTagged_DecRef(cpy_r_r31);
    goto CPyL31;
CPyL58: ;
    CPyTagged_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r33);
    goto CPyL31;
CPyL59: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL31;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_r55);
    goto CPyL31;
CPyL61: ;
    CPyTagged_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    goto CPyL31;
CPyL62: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL31;
CPyL63: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL30;
CPyL64: ;
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r74.f2);
    goto CPyL36;
CPyL65: ;
    CPy_XDECREF(cpy_r_r83.f0);
    CPy_XDECREF(cpy_r_r83.f1);
    CPy_XDECREF(cpy_r_r83.f2);
    goto CPyL44;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "_params", "result", 0};
    static CPyArg_Parser parser = {"OOO:validate_from_blocknum_in_result", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj__params;
    PyObject *obj_result;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj__params, &obj_result)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg__params = obj__params;
    PyObject *arg_result;
    if (likely(PyDict_Check(obj_result)))
        arg_result = obj_result;
    else {
        CPy_TypeError("dict", obj_result); 
        goto fail;
    }
    char retval = CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result(arg_provider, arg__params, arg_result);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blocknum_in_result", 103, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
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
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    tuple_T3OOO cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    char cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 150, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL38;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 150, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL38;
    }
    cpy_r_r3 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r4 = 0 ? Py_True : Py_False;
    cpy_r_r5 = PyObject_SetAttr(cpy_r_provider, cpy_r_r3, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 153, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL17;
    }
    cpy_r_r7 = CPyStatics[22]; /* 'eth_getBlockByHash' */
    cpy_r_r8 = CPyStatics[52]; /* 0 */
    cpy_r_r9 = PyObject_GetItem(cpy_r_params, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 157, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL17;
    }
    cpy_r_r10 = PyList_New(2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 157, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL39;
    }
    cpy_r_r11 = 0 ? Py_True : Py_False;
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r9;
    cpy_r_r14 = cpy_r_r13 + 8;
    *(PyObject * *)cpy_r_r14 = cpy_r_r11;
    cpy_r_r15 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r16[3] = {cpy_r_provider, cpy_r_r7, cpy_r_r10};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 156, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL40;
    }
    CPy_DECREF_NO_IMM(cpy_r_r10);
    if (likely(PyDict_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 156, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r18);
        goto CPyL17;
    }
    cpy_r_r20 = CPyStatics[12]; /* 'result' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 156, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL17;
    }
    cpy_r_r22 = CPyStatics[13]; /* 'number' */
    cpy_r_r23 = PyObject_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 161, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL41;
    }
    cpy_r_r24 = (PyObject *)&PyLong_Type;
    cpy_r_r25 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r26[2] = {cpy_r_r23, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r24, cpy_r_r27, 2, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 161, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r23);
    if (likely(PyLong_Check(cpy_r_r28)))
        cpy_r_r29 = CPyTagged_FromObject(cpy_r_r28);
    else {
        CPy_TypeError("int", cpy_r_r28); cpy_r_r29 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 161, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL41;
    }
    cpy_r_r30 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r31 = PyObject_GetItem(cpy_r_r21, cpy_r_r30);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 162, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL43;
    }
    cpy_r_r32 = (PyObject *)&PyLong_Type;
    cpy_r_r33 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r34[2] = {cpy_r_r31, cpy_r_r33};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r35, 2, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 162, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r31);
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 162, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL43;
    }
    cpy_r_r38 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r37);
    cpy_r_r40 = CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(cpy_r_provider, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 159, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL17;
    }
    cpy_r_r41 = cpy_r_r40;
    goto CPyL25;
CPyL17: ;
    cpy_r_r42 = CPy_CatchError();
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 164, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL23;
    }
    cpy_r_r46 = CPy_ExceptionMatches(cpy_r_r45);
    CPy_DecRef(cpy_r_r45);
    if (!cpy_r_r46) goto CPyL21;
    cpy_r_r47 = CPy_GetExcValue();
    cpy_r_r48 = CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(cpy_r_provider, cpy_r_r47);
    CPy_DecRef(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 165, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL23;
    }
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    cpy_r_r41 = 0;
    goto CPyL25;
CPyL21: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL45;
CPyL22: ;
    CPy_Unreachable();
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    cpy_r_r49 = CPy_KeepPropagating();
    if (!cpy_r_r49) goto CPyL26;
    CPy_Unreachable();
CPyL25: ;
    tuple_T3OOO __tmp5 = { NULL, NULL, NULL };
    cpy_r_r50 = __tmp5;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL27;
CPyL26: ;
    cpy_r_r52 = 2;
    cpy_r_r41 = cpy_r_r52;
    cpy_r_r53 = CPy_CatchError();
    cpy_r_r51 = cpy_r_r53;
CPyL27: ;
    cpy_r_r54 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r55 = cpy_r_r2 ? Py_True : Py_False;
    cpy_r_r56 = PyObject_SetAttr(cpy_r_provider, cpy_r_r54, cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 168, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL33;
    }
    if (cpy_r_r51.f0 == NULL) goto CPyL31;
    CPy_Reraise();
    if (!0) {
        goto CPyL33;
    } else
        goto CPyL46;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    if (cpy_r_r41 == 2) goto CPyL37;
    return cpy_r_r41;
CPyL33: ;
    if (cpy_r_r51.f0 == NULL) goto CPyL35;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
CPyL35: ;
    cpy_r_r58 = CPy_KeepPropagating();
    if (!cpy_r_r58) goto CPyL38;
    CPy_Unreachable();
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL39: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL17;
CPyL40: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL17;
CPyL41: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL17;
CPyL42: ;
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    goto CPyL17;
CPyL43: ;
    CPyTagged_DecRef(cpy_r_r29);
    goto CPyL17;
CPyL44: ;
    CPyTagged_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r31);
    goto CPyL17;
CPyL45: ;
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    goto CPyL22;
CPyL46: ;
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
    goto CPyL30;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "params", "_result", 0};
    static CPyArg_Parser parser = {"OOO:validate_from_blockhash_in_params", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_params;
    PyObject *obj__result;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_params, &obj__result)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_params = obj_params;
    PyObject *arg__result = obj__result;
    char retval = CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params(arg_provider, arg_params, arg__result);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "validate_from_blockhash_in_params", 145, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
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
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    char cpy_r_r53;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    tuple_T3OOO cpy_r_r121;
    char cpy_r_r122;
    PyObject **cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    tuple_T3OOO cpy_r_r126;
    tuple_T3OOO cpy_r_r127;
    tuple_T3OOO cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyTagged cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyTagged cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    double cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyTagged cpy_r_r158;
    double cpy_r_r159;
    char cpy_r_r160;
    double cpy_r_r161;
    double cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    tuple_T3OOO cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    tuple_T3OOO cpy_r_r192;
    char cpy_r_r193;
    tuple_T3OOO cpy_r_r194;
    char cpy_r_r195;
    tuple_T3OOO cpy_r_r196;
    tuple_T3OOO cpy_r_r197;
    PyObject *cpy_r_r198;
    char cpy_r_r199;
    tuple_T3OOO cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    char cpy_r_r213;
    char cpy_r_r214;
    char cpy_r_r215;
    PyObject *cpy_r_r216;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL166;
CPyL1: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_type != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 174, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL171;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 179, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL171;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 179, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL171;
    }
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 179, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL171;
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 179, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL171;
    }
    cpy_r_r12 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 181, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = CPyStatics[8]; /* 'request_cache_validation_threshold' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 181, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 181, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r16 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 184, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r16);
CPyL12: ;
    cpy_r_r17 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r18 = 0 ? Py_True : Py_False;
    cpy_r_r19 = PyObject_SetAttr(cpy_r_r16, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 184, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r21 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "threshold", 185, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r21);
CPyL14: ;
    cpy_r_r22 = (PyObject *)*exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold;
    cpy_r_r23 = CPy_TypeCheck(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (!cpy_r_r23) goto CPyL61;
    cpy_r_r24 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r24);
CPyL16: ;
    cpy_r_r25 = CPyStatics[9]; /* 'eth_getBlockByNumber' */
    cpy_r_r26 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "threshold", 188, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL172;
    }
    CPy_INCREF(cpy_r_r26);
CPyL17: ;
    if (likely(PyObject_TypeCheck(cpy_r_r26, *exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 188, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "faster_web3.utils.caching.RequestCacheValidationThreshold", cpy_r_r26);
        goto CPyL172;
    }
    cpy_r_r28 = CPyStatics[10]; /* 'value' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    CPy_DECREF_NO_IMM(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 188, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL172;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 188, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "str", cpy_r_r29);
        goto CPyL172;
    }
    cpy_r_r31 = PyList_New(2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 188, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL173;
    }
    cpy_r_r32 = 0 ? Py_True : Py_False;
    cpy_r_r33 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r34 = *(CPyPtr *)cpy_r_r33;
    *(PyObject * *)cpy_r_r34 = cpy_r_r30;
    cpy_r_r35 = cpy_r_r34 + 8;
    *(PyObject * *)cpy_r_r35 = cpy_r_r32;
    cpy_r_r36 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r37[3] = {cpy_r_r24, cpy_r_r25, cpy_r_r31};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_VectorcallMethod(cpy_r_r36, cpy_r_r38, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL174;
    }
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF_NO_IMM(cpy_r_r31);
    cpy_r_r40 = CPy_GetCoro(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r42 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r42);
CPyL25: ;
    cpy_r_r43 = CPyIter_Next(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (cpy_r_r43 != NULL) goto CPyL28;
    cpy_r_r44 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r45 = cpy_r_r44;
    cpy_r_r46 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL175;
    } else
        goto CPyL50;
CPyL28: ;
    cpy_r_r48 = cpy_r_r43;
CPyL29: ;
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r48;
CPyL30: ;
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_type != cpy_r_r50;
    if (!cpy_r_r51) goto CPyL176;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL34;
    } else
        goto CPyL177;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL45;
CPyL34: ;
    cpy_r_r52 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL178;
    }
    cpy_r_r54 = (PyObject **)&cpy_r_r1;
    cpy_r_r55 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL178;
    }
    CPy_INCREF(cpy_r_r55);
CPyL36: ;
    cpy_r_r56 = CPy_YieldFromErrorHandle(cpy_r_r55, cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL178;
    }
    if (cpy_r_r56) goto CPyL40;
    cpy_r_r48 = cpy_r_r1;
    cpy_r_r57 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r57.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL179;
    }
    CPy_INCREF(cpy_r_r57.f0);
    CPy_INCREF(cpy_r_r57.f1);
    CPy_INCREF(cpy_r_r57.f2);
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r57);
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    goto CPyL29;
CPyL40: ;
    cpy_r_r45 = cpy_r_r1;
    cpy_r_r58 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r58.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    CPy_INCREF(cpy_r_r58.f0);
    CPy_INCREF(cpy_r_r58.f1);
    CPy_INCREF(cpy_r_r58.f2);
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    goto CPyL50;
CPyL42: ;
    cpy_r_r59 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r59.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r59.f0);
    CPy_INCREF(cpy_r_r59.f1);
    CPy_INCREF(cpy_r_r59.f2);
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r59);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    cpy_r_r60 = CPy_KeepPropagating();
    if (!cpy_r_r60) goto CPyL128;
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r61 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL181;
    }
    CPy_INCREF(cpy_r_r61);
CPyL46: ;
    cpy_r_r62 = CPyIter_Send(cpy_r_r61, cpy_r_arg);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r62 == NULL) goto CPyL48;
    cpy_r_r48 = cpy_r_r62;
    goto CPyL29;
CPyL48: ;
    cpy_r_r63 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r45 = cpy_r_r63;
CPyL50: ;
    if (likely(PyDict_Check(cpy_r_r45)))
        cpy_r_r64 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r45);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold_block != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold_block);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold_block = cpy_r_r64;
    cpy_r_r65 = 1;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 187, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r66 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "blocknum", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r66);
CPyL53: ;
    cpy_r_r67 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold_block;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "threshold_block", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL182;
    }
    CPy_INCREF(cpy_r_r67);
CPyL54: ;
    cpy_r_r68 = CPyStatics[12]; /* 'result' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL182;
    }
    cpy_r_r70 = CPyStatics[13]; /* 'number' */
    cpy_r_r71 = PyObject_GetItem(cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL182;
    }
    cpy_r_r72 = (PyObject *)&PyLong_Type;
    cpy_r_r73 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r74[2] = {cpy_r_r71, cpy_r_r73};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r75, 2, 0);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL183;
    }
    CPy_DECREF(cpy_r_r71);
    if (likely(PyLong_Check(cpy_r_r76)))
        cpy_r_r77 = CPyTagged_FromObject(cpy_r_r76);
    else {
        CPy_TypeError("int", cpy_r_r76); cpy_r_r77 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL182;
    }
    cpy_r_r78 = CPyTagged_StealAsObject(cpy_r_r77);
    cpy_r_r79 = PyObject_RichCompare(cpy_r_r66, cpy_r_r78, 1);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    if (unlikely(!PyBool_Check(cpy_r_r79))) {
        CPy_TypeError("bool", cpy_r_r79); cpy_r_r80 = 2;
    } else
        cpy_r_r80 = cpy_r_r79 == Py_True;
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r81 = cpy_r_r80 ? Py_True : Py_False;
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r81;
    cpy_r_r82 = 1;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 191, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    } else
        goto CPyL142;
CPyL61: ;
    cpy_r_r83 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "threshold", 192, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r83);
CPyL62: ;
    cpy_r_r84 = PyLong_Check(cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (!cpy_r_r84) goto CPyL123;
    cpy_r_r85 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_timestamp;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "block_timestamp", 193, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r85);
CPyL64: ;
    cpy_r_r86 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r87 = cpy_r_r85 != cpy_r_r86;
    if (!cpy_r_r87) goto CPyL184;
    if (likely(PyLong_Check(cpy_r_r85)))
        cpy_r_r88 = CPyTagged_FromObject(cpy_r_r85);
    else {
        CPy_TypeError("int", cpy_r_r85); cpy_r_r88 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 193, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r89 = cpy_r_r88 != 0;
    CPyTagged_DECREF(cpy_r_r88);
    if (cpy_r_r89) goto CPyL110;
CPyL67: ;
    cpy_r_r90 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r90);
CPyL68: ;
    cpy_r_r91 = CPyStatics[9]; /* 'eth_getBlockByNumber' */
    cpy_r_r92 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "blocknum", 195, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL185;
    }
    CPy_INCREF(cpy_r_r92);
CPyL69: ;
    cpy_r_r93 = CPyModule_builtins;
    cpy_r_r94 = CPyStatics[14]; /* 'hex' */
    cpy_r_r95 = CPyObject_GetAttr(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 195, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL186;
    }
    PyObject *cpy_r_r96[1] = {cpy_r_r92};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = PyObject_Vectorcall(cpy_r_r95, cpy_r_r97, 1, 0);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 195, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL186;
    }
    CPy_DECREF(cpy_r_r92);
    if (likely(PyUnicode_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 195, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "str", cpy_r_r98);
        goto CPyL185;
    }
    cpy_r_r100 = PyList_New(2);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 195, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL187;
    }
    cpy_r_r101 = 0 ? Py_True : Py_False;
    cpy_r_r102 = (CPyPtr)&((PyListObject *)cpy_r_r100)->ob_item;
    cpy_r_r103 = *(CPyPtr *)cpy_r_r102;
    *(PyObject * *)cpy_r_r103 = cpy_r_r99;
    cpy_r_r104 = cpy_r_r103 + 8;
    *(PyObject * *)cpy_r_r104 = cpy_r_r101;
    cpy_r_r105 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r106[3] = {cpy_r_r90, cpy_r_r91, cpy_r_r100};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = PyObject_VectorcallMethod(cpy_r_r105, cpy_r_r107, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL188;
    }
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF_NO_IMM(cpy_r_r100);
    cpy_r_r109 = CPy_GetCoro(cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r109;
    cpy_r_r110 = 1;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r111 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r111);
CPyL77: ;
    cpy_r_r112 = CPyIter_Next(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (cpy_r_r112 != NULL) goto CPyL80;
    cpy_r_r113 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r114 = cpy_r_r113;
    cpy_r_r115 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r115;
    cpy_r_r116 = 1;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL189;
    } else
        goto CPyL102;
CPyL80: ;
    cpy_r_r117 = cpy_r_r112;
CPyL81: ;
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r117;
CPyL82: ;
    cpy_r_r119 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r120 = cpy_r_type != cpy_r_r119;
    if (!cpy_r_r120) goto CPyL190;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    } else
        goto CPyL191;
CPyL84: ;
    CPy_Unreachable();
CPyL85: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL97;
CPyL86: ;
    cpy_r_r121 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r121;
    cpy_r_r122 = 1;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL192;
    }
    cpy_r_r123 = (PyObject **)&cpy_r_r3;
    cpy_r_r124 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL192;
    }
    CPy_INCREF(cpy_r_r124);
CPyL88: ;
    cpy_r_r125 = CPy_YieldFromErrorHandle(cpy_r_r124, cpy_r_r123);
    CPy_DecRef(cpy_r_r124);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL192;
    }
    if (cpy_r_r125) goto CPyL92;
    cpy_r_r117 = cpy_r_r3;
    cpy_r_r126 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r126.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r126.f0);
    CPy_INCREF(cpy_r_r126.f1);
    CPy_INCREF(cpy_r_r126.f2);
CPyL91: ;
    CPy_RestoreExcInfo(cpy_r_r126);
    CPy_DecRef(cpy_r_r126.f0);
    CPy_DecRef(cpy_r_r126.f1);
    CPy_DecRef(cpy_r_r126.f2);
    goto CPyL81;
CPyL92: ;
    cpy_r_r114 = cpy_r_r3;
    cpy_r_r127 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r127.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL194;
    }
    CPy_INCREF(cpy_r_r127.f0);
    CPy_INCREF(cpy_r_r127.f1);
    CPy_INCREF(cpy_r_r127.f2);
CPyL93: ;
    CPy_RestoreExcInfo(cpy_r_r127);
    CPy_DecRef(cpy_r_r127.f0);
    CPy_DecRef(cpy_r_r127.f1);
    CPy_DecRef(cpy_r_r127.f2);
    goto CPyL102;
CPyL94: ;
    cpy_r_r128 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r128.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r128.f0);
    CPy_INCREF(cpy_r_r128.f1);
    CPy_INCREF(cpy_r_r128.f2);
CPyL95: ;
    CPy_RestoreExcInfo(cpy_r_r128);
    CPy_DecRef(cpy_r_r128.f0);
    CPy_DecRef(cpy_r_r128.f1);
    CPy_DecRef(cpy_r_r128.f2);
    cpy_r_r129 = CPy_KeepPropagating();
    if (!cpy_r_r129) goto CPyL128;
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r130 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL195;
    }
    CPy_INCREF(cpy_r_r130);
CPyL98: ;
    cpy_r_r131 = CPyIter_Send(cpy_r_r130, cpy_r_arg);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r131 == NULL) goto CPyL100;
    cpy_r_r117 = cpy_r_r131;
    goto CPyL81;
CPyL100: ;
    cpy_r_r132 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r114 = cpy_r_r132;
CPyL102: ;
    if (likely(PyDict_Check(cpy_r_r114)))
        cpy_r_r133 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r114);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block = cpy_r_r133;
    cpy_r_r134 = 1;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 194, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r135 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block;
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "block", 197, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r135);
CPyL105: ;
    cpy_r_r136 = CPyStatics[12]; /* 'result' */
    cpy_r_r137 = CPyDict_GetItem(cpy_r_r135, cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 197, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r138 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r139 = PyObject_GetItem(cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 197, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r140 = (PyObject *)&PyLong_Type;
    cpy_r_r141 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r142[2] = {cpy_r_r139, cpy_r_r141};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = PyObject_Vectorcall(cpy_r_r140, cpy_r_r143, 2, 0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 197, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL196;
    }
    CPy_DECREF(cpy_r_r139);
    if (likely(PyLong_Check(cpy_r_r144)))
        cpy_r_r145 = CPyTagged_FromObject(cpy_r_r144);
    else {
        CPy_TypeError("int", cpy_r_r144); cpy_r_r145 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 197, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r146 = CPyTagged_StealAsObject(cpy_r_r145);
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_timestamp != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_timestamp);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_timestamp = cpy_r_r146;
    cpy_r_r147 = 1;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 197, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
CPyL110: ;
    cpy_r_r148 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_timestamp;
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "block_timestamp", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r148);
CPyL111: ;
    if (likely(PyLong_Check(cpy_r_r148)))
        cpy_r_r149 = CPyTagged_FromObject(cpy_r_r148);
    else {
        CPy_TypeError("int", cpy_r_r148); cpy_r_r149 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r149 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r150 = CPyModule_time;
    cpy_r_r151 = CPyStatics[16]; /* 'time' */
    cpy_r_r152 = CPyObject_GetAttr(cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL197;
    }
    cpy_r_r153 = PyObject_Vectorcall(cpy_r_r152, 0, 0, 0);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL197;
    }
    cpy_r_r154 = PyFloat_AsDouble(cpy_r_r153);
    if (cpy_r_r154 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r153); cpy_r_r154 = -113.0;
    }
    CPy_DECREF(cpy_r_r153);
    cpy_r_r155 = cpy_r_r154 == -113.0;
    if (unlikely(cpy_r_r155)) goto CPyL116;
CPyL115: ;
    cpy_r_r156 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold;
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL197;
    }
    CPy_INCREF(cpy_r_r156);
    goto CPyL117;
CPyL116: ;
    cpy_r_r157 = PyErr_Occurred();
    if (unlikely(cpy_r_r157 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL197;
    } else
        goto CPyL115;
CPyL117: ;
    if (likely(PyLong_Check(cpy_r_r156)))
        cpy_r_r158 = CPyTagged_FromObject(cpy_r_r156);
    else {
        CPy_TypeError("int", cpy_r_r156); cpy_r_r158 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r158 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL197;
    }
    cpy_r_r159 = CPyFloat_FromTagged(cpy_r_r158);
    CPyTagged_DECREF(cpy_r_r158);
    cpy_r_r160 = cpy_r_r159 == -113.0;
    if (unlikely(cpy_r_r160)) goto CPyL120;
CPyL119: ;
    cpy_r_r161 = cpy_r_r154 - cpy_r_r159;
    cpy_r_r162 = CPyFloat_FromTagged(cpy_r_r149);
    CPyTagged_DECREF(cpy_r_r149);
    cpy_r_r163 = cpy_r_r162 == -113.0;
    if (unlikely(cpy_r_r163)) {
        goto CPyL122;
    } else
        goto CPyL121;
CPyL120: ;
    cpy_r_r164 = PyErr_Occurred();
    if (unlikely(cpy_r_r164 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL197;
    } else
        goto CPyL119;
CPyL121: ;
    cpy_r_r165 = cpy_r_r162 <= cpy_r_r161;
    cpy_r_r166 = cpy_r_r165 ? Py_True : Py_False;
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r166;
    cpy_r_r167 = 1;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    } else
        goto CPyL142;
CPyL122: ;
    cpy_r_r168 = PyErr_Occurred();
    if (unlikely(cpy_r_r168 != NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 201, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    } else
        goto CPyL121;
CPyL123: ;
    cpy_r_r169 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 203, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r169);
CPyL124: ;
    cpy_r_r170 = CPyStatics[3]; /* 'logger' */
    cpy_r_r171 = CPyObject_GetAttr(cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 203, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL128;
    }
    cpy_r_r172 = CPyStatics[17]; /* ('Invalid request_cache_validation_threshold value. This '
                                    'should not have happened. Request not cached.\n'
                                    '    threshold: %s') */
    cpy_r_r173 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__threshold;
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "threshold", 206, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL198;
    }
    CPy_INCREF(cpy_r_r173);
CPyL126: ;
    cpy_r_r174 = CPyStatics[5]; /* 'error' */
    PyObject *cpy_r_r175[3] = {cpy_r_r171, cpy_r_r172, cpy_r_r173};
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = PyObject_VectorcallMethod(cpy_r_r174, cpy_r_r176, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 203, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL199;
    } else
        goto CPyL200;
CPyL127: ;
    CPy_DECREF(cpy_r_r171);
    CPy_DECREF(cpy_r_r173);
    cpy_r_r178 = 0 ? Py_True : Py_False;
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r178;
    cpy_r_r179 = 1;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 208, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    } else
        goto CPyL142;
CPyL128: ;
    cpy_r_r180 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r180;
    cpy_r_r181 = 1;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    }
    cpy_r_r182 = CPyModule_builtins;
    cpy_r_r183 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r184 = CPyObject_GetAttr(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 209, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    }
    cpy_r_r185 = CPy_ExceptionMatches(cpy_r_r184);
    CPy_DecRef(cpy_r_r184);
    if (!cpy_r_r185) goto CPyL137;
    cpy_r_r186 = CPy_GetExcValue();
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e = cpy_r_r186;
    cpy_r_r187 = 1;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 209, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    }
    cpy_r_r188 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 210, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r188);
CPyL133: ;
    cpy_r_r189 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e;
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "e", 210, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL201;
    }
    CPy_INCREF(cpy_r_r189);
CPyL134: ;
    cpy_r_r190 = CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(cpy_r_r188, cpy_r_r189);
    CPy_DecRef(cpy_r_r188);
    CPy_DecRef(cpy_r_r189);
    if (unlikely(cpy_r_r190 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 210, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    }
    cpy_r_r191 = 0 ? Py_True : Py_False;
    cpy_r_r192 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r192.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r192.f0);
    CPy_INCREF(cpy_r_r192.f1);
    CPy_INCREF(cpy_r_r192.f2);
CPyL136: ;
    CPy_RestoreExcInfo(cpy_r_r192);
    CPy_DecRef(cpy_r_r192.f0);
    CPy_DecRef(cpy_r_r192.f1);
    CPy_DecRef(cpy_r_r192.f2);
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r191;
    cpy_r_r193 = 1;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 211, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    } else
        goto CPyL142;
CPyL137: ;
    CPy_Reraise();
    if (!0) goto CPyL139;
    CPy_Unreachable();
CPyL139: ;
    cpy_r_r194 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r194.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r194.f0);
    CPy_INCREF(cpy_r_r194.f1);
    CPy_INCREF(cpy_r_r194.f2);
CPyL140: ;
    CPy_RestoreExcInfo(cpy_r_r194);
    CPy_DecRef(cpy_r_r194.f0);
    CPy_DecRef(cpy_r_r194.f1);
    CPy_DecRef(cpy_r_r194.f2);
    cpy_r_r195 = CPy_KeepPropagating();
    if (!cpy_r_r195) goto CPyL143;
    CPy_Unreachable();
CPyL142: ;
    tuple_T3OOO __tmp6 = { NULL, NULL, NULL };
    cpy_r_r196 = __tmp6;
    cpy_r_r197 = cpy_r_r196;
    goto CPyL145;
CPyL143: ;
    cpy_r_r198 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r198;
    cpy_r_r199 = 1;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL171;
    }
    cpy_r_r200 = CPy_CatchError();
    cpy_r_r197 = cpy_r_r200;
CPyL145: ;
    cpy_r_r201 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests;
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "cache_allowed_requests", 213, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL157;
    }
CPyL146: ;
    cpy_r_r202 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", "async_is_beyond_validation_threshold_gen", "provider", 213, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL157;
    }
    CPy_INCREF(cpy_r_r202);
CPyL147: ;
    cpy_r_r203 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r204 = cpy_r_r201 ? Py_True : Py_False;
    cpy_r_r205 = PyObject_SetAttr(cpy_r_r202, cpy_r_r203, cpy_r_r204);
    CPy_DECREF(cpy_r_r202);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 213, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL157;
    }
    if (cpy_r_r197.f0 == NULL) goto CPyL151;
    CPy_Reraise();
    if (!0) {
        goto CPyL157;
    } else
        goto CPyL202;
CPyL150: ;
    CPy_Unreachable();
CPyL151: ;
    cpy_r_r207 = ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (cpy_r_r207 != NULL) {
        CPy_INCREF(cpy_r_r207);
    }
    if (cpy_r_r207 == NULL) goto CPyL161;
CPyL152: ;
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL156;
    CPyGen_SetStopIterationValue(cpy_r_r207);
    CPy_DECREF(cpy_r_r207);
    if (!0) goto CPyL171;
    CPy_Unreachable();
CPyL156: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r207;
    return 0;
CPyL157: ;
    if (cpy_r_r197.f0 == NULL) goto CPyL159;
    CPy_RestoreExcInfo(cpy_r_r197);
    CPy_XDECREF(cpy_r_r197.f0);
    CPy_XDECREF(cpy_r_r197.f1);
    CPy_XDECREF(cpy_r_r197.f2);
CPyL159: ;
    cpy_r_r209 = CPy_KeepPropagating();
    if (!cpy_r_r209) goto CPyL171;
    CPy_Unreachable();
CPyL161: ;
    cpy_r_r210 = Py_None;
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL165;
    CPyGen_SetStopIterationValue(cpy_r_r210);
    if (!0) goto CPyL171;
    CPy_Unreachable();
CPyL165: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r210;
    return 0;
CPyL166: ;
    cpy_r_r212 = cpy_r_r4 == 0;
    if (cpy_r_r212) goto CPyL203;
    cpy_r_r213 = cpy_r_r4 == 1;
    if (cpy_r_r213) {
        goto CPyL204;
    } else
        goto CPyL205;
CPyL168: ;
    cpy_r_r214 = cpy_r_r4 == 2;
    if (cpy_r_r214) {
        goto CPyL82;
    } else
        goto CPyL206;
CPyL169: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r215 = 0;
    if (unlikely(!cpy_r_r215)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 174, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL171;
    }
    CPy_Unreachable();
CPyL171: ;
    cpy_r_r216 = NULL;
    return cpy_r_r216;
CPyL172: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL128;
CPyL173: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r30);
    goto CPyL128;
CPyL174: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r31);
    goto CPyL128;
CPyL175: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL128;
CPyL176: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL33;
CPyL177: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL32;
CPyL178: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL42;
CPyL179: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL42;
CPyL180: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL42;
CPyL181: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL128;
CPyL182: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL128;
CPyL183: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r71);
    goto CPyL128;
CPyL184: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL67;
CPyL185: ;
    CPy_DecRef(cpy_r_r90);
    goto CPyL128;
CPyL186: ;
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r92);
    goto CPyL128;
CPyL187: ;
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r99);
    goto CPyL128;
CPyL188: ;
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r100);
    goto CPyL128;
CPyL189: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL128;
CPyL190: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL85;
CPyL191: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL84;
CPyL192: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL94;
CPyL193: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL94;
CPyL194: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL94;
CPyL195: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL128;
CPyL196: ;
    CPy_DecRef(cpy_r_r139);
    goto CPyL128;
CPyL197: ;
    CPyTagged_DecRef(cpy_r_r149);
    goto CPyL128;
CPyL198: ;
    CPy_DecRef(cpy_r_r171);
    goto CPyL128;
CPyL199: ;
    CPy_DecRef(cpy_r_r171);
    CPy_DecRef(cpy_r_r173);
    goto CPyL128;
CPyL200: ;
    CPy_DECREF(cpy_r_r177);
    goto CPyL127;
CPyL201: ;
    CPy_DecRef(cpy_r_r188);
    goto CPyL139;
CPyL202: ;
    CPy_XDECREF(cpy_r_r197.f0);
    CPy_XDECREF(cpy_r_r197.f1);
    CPy_XDECREF(cpy_r_r197.f2);
    goto CPyL150;
CPyL203: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    goto CPyL1;
CPyL204: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL30;
CPyL205: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL168;
CPyL206: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL169;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_is_beyond_validation_threshold_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_is_beyond_validation_threshold_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "send", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_is_beyond_validation_threshold_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_is_beyond_validation_threshold_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "throw", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[23]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[24]; /* 'StopIteration' */
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_is_beyond_validation_threshold_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "close", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_is_beyond_validation_threshold_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(PyObject *cpy_r_provider, PyObject *cpy_r_blocknum, PyObject *cpy_r_block_timestamp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    if (cpy_r_blocknum != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    cpy_r_blocknum = cpy_r_r0;
CPyL2: ;
    if (cpy_r_block_timestamp != NULL) goto CPyL11;
    cpy_r_r1 = Py_None;
    cpy_r_block_timestamp = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 174, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL12;
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 174, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL13;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__blocknum != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__blocknum);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__blocknum = cpy_r_blocknum;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 174, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL14;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__block_timestamp != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__block_timestamp);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *)cpy_r_r2)->___mypyc_generator_attribute__block_timestamp = cpy_r_block_timestamp;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 174, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL15;
    }
    return cpy_r_r2;
CPyL9: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL10: ;
    CPy_INCREF(cpy_r_blocknum);
    goto CPyL2;
CPyL11: ;
    CPy_INCREF(cpy_r_block_timestamp);
    goto CPyL4;
CPyL12: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_block_timestamp);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_blocknum);
    CPy_DecRef(cpy_r_block_timestamp);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_block_timestamp);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL15: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "blocknum", "block_timestamp", 0};
    static CPyArg_Parser parser = {"O|OO:async_is_beyond_validation_threshold", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_blocknum = NULL;
    PyObject *obj_block_timestamp = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_blocknum, &obj_block_timestamp)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_blocknum;
    if (obj_blocknum == NULL) {
        arg_blocknum = NULL;
        goto __LL9;
    }
    if (PyLong_Check(obj_blocknum))
        arg_blocknum = obj_blocknum;
    else {
        arg_blocknum = NULL;
    }
    if (arg_blocknum != NULL) goto __LL9;
    if (obj_blocknum == Py_None)
        arg_blocknum = obj_blocknum;
    else {
        arg_blocknum = NULL;
    }
    if (arg_blocknum != NULL) goto __LL9;
    CPy_TypeError("int or None", obj_blocknum); 
    goto fail;
__LL9: ;
    PyObject *arg_block_timestamp;
    if (obj_block_timestamp == NULL) {
        arg_block_timestamp = NULL;
        goto __LL10;
    }
    if (PyLong_Check(obj_block_timestamp))
        arg_block_timestamp = obj_block_timestamp;
    else {
        arg_block_timestamp = NULL;
    }
    if (arg_block_timestamp != NULL) goto __LL10;
    if (obj_block_timestamp == Py_None)
        arg_block_timestamp = obj_block_timestamp;
    else {
        arg_block_timestamp = NULL;
    }
    if (arg_block_timestamp != NULL) goto __LL10;
    CPy_TypeError("int or None", obj_block_timestamp); 
    goto fail;
__LL10: ;
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(arg_provider, arg_blocknum, arg_block_timestamp);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_is_beyond_validation_threshold", 174, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    char cpy_r_r47;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    CPy_XDECREF(cpy_r_r1);
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL56;
CPyL1: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_type != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 216, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "params", 221, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = CPyStatics[52]; /* 0 */
    cpy_r_r9 = PyObject_GetItem(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 221, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_id != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_id);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_id = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 221, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r11 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_id;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "block_id", 222, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = CPyStatics[19]; /* 'earliest' */
    cpy_r_r13 = PyObject_RichCompare(cpy_r_r11, cpy_r_r12, 2);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 222, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 222, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL16;
    cpy_r_r17 = 1 ? Py_True : Py_False;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL15;
    CPyGen_SetStopIterationValue(cpy_r_r17);
    if (!0) goto CPyL60;
    CPy_Unreachable();
CPyL15: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r17;
    return 0;
CPyL16: ;
    cpy_r_r19 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_id;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "block_id", 226, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r19);
CPyL17: ;
    cpy_r_r20 = (PyObject *)&PyLong_Type;
    cpy_r_r21 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r22[2] = {cpy_r_r19, cpy_r_r21};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r23, 2, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 226, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyLong_Check(cpy_r_r24)))
        cpy_r_r25 = CPyTagged_FromObject(cpy_r_r24);
    else {
        CPy_TypeError("int", cpy_r_r24); cpy_r_r25 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 226, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 226, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r27 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "provider", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r27);
CPyL21: ;
    cpy_r_r28 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum;
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "blocknum", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL62;
    }
    CPyTagged_INCREF(cpy_r_r28);
CPyL22: ;
    cpy_r_r29 = CPyTagged_StealAsObject(cpy_r_r28);
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(cpy_r_r27, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r31;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r33 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "__mypyc_temp__6", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_INCREF_NO_IMM(cpy_r_r33);
CPyL25: ;
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = NULL;
    cpy_r_r1 = cpy_r_r35;
    cpy_r_r36 = (PyObject **)&cpy_r_r1;
    cpy_r_r37 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(cpy_r_r33, cpy_r_r34, cpy_r_r34, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    CPy_DECREF_NO_IMM(cpy_r_r33);
    if (cpy_r_r37 != NULL) goto CPyL63;
    cpy_r_r38 = cpy_r_r1 != 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL64;
    }
    cpy_r_r39 = cpy_r_r1;
    cpy_r_r40 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL65;
    } else
        goto CPyL50;
CPyL28: ;
    cpy_r_r42 = cpy_r_r37;
CPyL29: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r42;
CPyL30: ;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_type != cpy_r_r44;
    if (!cpy_r_r45) goto CPyL66;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL34;
    } else
        goto CPyL67;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL45;
CPyL34: ;
    cpy_r_r46 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL68;
    }
    cpy_r_r48 = (PyObject **)&cpy_r_r3;
    cpy_r_r49 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "__mypyc_temp__6", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL68;
    }
    CPy_INCREF_NO_IMM(cpy_r_r49);
CPyL36: ;
    cpy_r_r50 = CPy_YieldFromErrorHandle(cpy_r_r49, cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL68;
    }
    if (cpy_r_r50) goto CPyL40;
    cpy_r_r42 = cpy_r_r3;
    cpy_r_r51 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r51.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "__mypyc_temp__7", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r51.f0);
    CPy_INCREF(cpy_r_r51.f1);
    CPy_INCREF(cpy_r_r51.f2);
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    goto CPyL29;
CPyL40: ;
    cpy_r_r39 = cpy_r_r3;
    cpy_r_r52 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r52.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "__mypyc_temp__7", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r52.f0);
    CPy_INCREF(cpy_r_r52.f1);
    CPy_INCREF(cpy_r_r52.f2);
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    goto CPyL50;
CPyL42: ;
    cpy_r_r53 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r53.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "__mypyc_temp__7", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r53.f0);
    CPy_INCREF(cpy_r_r53.f1);
    CPy_INCREF(cpy_r_r53.f2);
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r53);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    cpy_r_r54 = CPy_KeepPropagating();
    if (!cpy_r_r54) goto CPyL60;
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r55 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", "async_validate_from_block_id_in_params_gen", "__mypyc_temp__6", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL71;
    }
    CPy_INCREF_NO_IMM(cpy_r_r55);
CPyL46: ;
    cpy_r_r56 = CPyIter_Send(cpy_r_r55, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r55);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r56 == NULL) goto CPyL48;
    cpy_r_r42 = cpy_r_r56;
    goto CPyL29;
CPyL48: ;
    cpy_r_r57 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r39 = cpy_r_r57;
CPyL50: ;
    if (unlikely(!PyBool_Check(cpy_r_r39))) {
        CPy_TypeError("bool", cpy_r_r39); cpy_r_r58 = 2;
    } else
        cpy_r_r58 = cpy_r_r39 == Py_True;
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 227, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    cpy_r_r59 = cpy_r_r58 ? Py_True : Py_False;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL55;
    CPyGen_SetStopIterationValue(cpy_r_r59);
    if (!0) goto CPyL60;
    CPy_Unreachable();
CPyL55: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r59;
    return 0;
CPyL56: ;
    cpy_r_r61 = cpy_r_r4 == 0;
    if (cpy_r_r61) goto CPyL72;
    cpy_r_r62 = cpy_r_r4 == 1;
    if (cpy_r_r62) {
        goto CPyL30;
    } else
        goto CPyL73;
CPyL58: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 216, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL61: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL60;
CPyL62: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL60;
CPyL63: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL28;
CPyL64: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL60;
CPyL65: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL60;
CPyL66: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL33;
CPyL67: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL32;
CPyL68: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL42;
CPyL69: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL42;
CPyL70: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL42;
CPyL71: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL60;
CPyL72: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL1;
CPyL73: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL58;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "send", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "throw", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[23]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[24]; /* 'StopIteration' */
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "close", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_block_id_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 216, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL5;
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 216, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params = cpy_r_params;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 216, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r__result);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute___result != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute___result);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute___result = cpy_r__result;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 216, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "params", "_result", 0};
    static CPyArg_Parser parser = {"OOO:async_validate_from_block_id_in_params", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_params;
    PyObject *obj__result;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_params, &obj__result)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_params = obj_params;
    PyObject *arg__result;
    if (likely(PyDict_Check(obj__result)))
        arg__result = obj__result;
    else {
        CPy_TypeError("dict", obj__result); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params(arg_provider, arg_params, arg__result);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_block_id_in_params", 216, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    char cpy_r_r57;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    tuple_T3OOO cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    tuple_T3OOO cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    tuple_T3OOO cpy_r_r106;
    char cpy_r_r107;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject **cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject **cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyTagged cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject **cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    tuple_T3OOO cpy_r_r162;
    char cpy_r_r163;
    PyObject **cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    tuple_T3OOO cpy_r_r167;
    tuple_T3OOO cpy_r_r168;
    tuple_T3OOO cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject **cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    tuple_T3OOO cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    tuple_T3OOO cpy_r_r200;
    char cpy_r_r201;
    tuple_T3OOO cpy_r_r202;
    char cpy_r_r203;
    tuple_T3OOO cpy_r_r204;
    tuple_T3OOO cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    tuple_T3OOO cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    int32_t cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    char cpy_r_r219;
    char cpy_r_r220;
    char cpy_r_r221;
    char cpy_r_r222;
    char cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    CPy_XDECREF(cpy_r_r3);
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    CPy_XDECREF(cpy_r_r7);
    cpy_r_r8 = NULL;
    cpy_r_r9 = cpy_r_r8;
    cpy_r_r10 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL174;
CPyL1: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_type != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 230, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r13 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 235, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    CPy_INCREF(cpy_r_r13);
CPyL5: ;
    cpy_r_r14 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 235, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 235, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 235, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    cpy_r_r18 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 238, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r18);
CPyL9: ;
    cpy_r_r19 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r20 = 0 ? Py_True : Py_False;
    cpy_r_r21 = PyObject_SetAttr(cpy_r_r18, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 238, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r23 = CPyStatics[20]; /* 'blockNumber' */
    cpy_r_r24 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "result", 241, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r24);
CPyL11: ;
    cpy_r_r25 = PyDict_Contains(cpy_r_r24, cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 241, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL89;
    cpy_r_r28 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "result", 242, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r28);
CPyL14: ;
    cpy_r_r29 = CPyStatics[20]; /* 'blockNumber' */
    cpy_r_r30 = CPyDict_GetWithNone(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 242, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum = cpy_r_r30;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 242, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r32 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r32);
CPyL17: ;
    cpy_r_r33 = CPyStatics[9]; /* 'eth_getBlockByNumber' */
    cpy_r_r34 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "blocknum", 245, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL181;
    }
    CPy_INCREF(cpy_r_r34);
CPyL18: ;
    cpy_r_r35 = PyList_New(2);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 245, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL182;
    }
    cpy_r_r36 = 0 ? Py_True : Py_False;
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r35)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    *(PyObject * *)cpy_r_r38 = cpy_r_r34;
    cpy_r_r39 = cpy_r_r38 + 8;
    *(PyObject * *)cpy_r_r39 = cpy_r_r36;
    cpy_r_r40 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r41[3] = {cpy_r_r32, cpy_r_r33, cpy_r_r35};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r40, cpy_r_r42, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL183;
    }
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF_NO_IMM(cpy_r_r35);
    cpy_r_r44 = CPy_GetCoro(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r46 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__8", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r46);
CPyL23: ;
    cpy_r_r47 = CPyIter_Next(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (cpy_r_r47 != NULL) goto CPyL26;
    cpy_r_r48 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r49 = cpy_r_r48;
    cpy_r_r50 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r50;
    cpy_r_r51 = 1;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL184;
    } else
        goto CPyL48;
CPyL26: ;
    cpy_r_r52 = cpy_r_r47;
CPyL27: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r52;
CPyL28: ;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_type != cpy_r_r54;
    if (!cpy_r_r55) goto CPyL185;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL32;
    } else
        goto CPyL186;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL43;
CPyL32: ;
    cpy_r_r56 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r56;
    cpy_r_r57 = 1;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL187;
    }
    cpy_r_r58 = (PyObject **)&cpy_r_r1;
    cpy_r_r59 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__8", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL187;
    }
    CPy_INCREF(cpy_r_r59);
CPyL34: ;
    cpy_r_r60 = CPy_YieldFromErrorHandle(cpy_r_r59, cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL187;
    }
    if (cpy_r_r60) goto CPyL38;
    cpy_r_r52 = cpy_r_r1;
    cpy_r_r61 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r61.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__9", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL188;
    }
    CPy_INCREF(cpy_r_r61.f0);
    CPy_INCREF(cpy_r_r61.f1);
    CPy_INCREF(cpy_r_r61.f2);
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r61);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    goto CPyL27;
CPyL38: ;
    cpy_r_r49 = cpy_r_r1;
    cpy_r_r62 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__9", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL189;
    }
    CPy_INCREF(cpy_r_r62.f0);
    CPy_INCREF(cpy_r_r62.f1);
    CPy_INCREF(cpy_r_r62.f2);
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_DecRef(cpy_r_r62.f0);
    CPy_DecRef(cpy_r_r62.f1);
    CPy_DecRef(cpy_r_r62.f2);
    goto CPyL48;
CPyL40: ;
    cpy_r_r63 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r63.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__9", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r63.f0);
    CPy_INCREF(cpy_r_r63.f1);
    CPy_INCREF(cpy_r_r63.f2);
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r63);
    CPy_DecRef(cpy_r_r63.f0);
    CPy_DecRef(cpy_r_r63.f1);
    CPy_DecRef(cpy_r_r63.f2);
    cpy_r_r64 = CPy_KeepPropagating();
    if (!cpy_r_r64) goto CPyL136;
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r65 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__8", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r65);
CPyL44: ;
    cpy_r_r66 = CPyIter_Send(cpy_r_r65, cpy_r_arg);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r66 == NULL) goto CPyL46;
    cpy_r_r52 = cpy_r_r66;
    goto CPyL27;
CPyL46: ;
    cpy_r_r67 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r49 = cpy_r_r67;
CPyL48: ;
    if (likely(PyDict_Check(cpy_r_r49)))
        cpy_r_r68 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r49);
        goto CPyL136;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block = cpy_r_r68;
    cpy_r_r69 = 1;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 244, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r70 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 248, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r70);
CPyL51: ;
    cpy_r_r71 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__blocknum;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "blocknum", 249, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL191;
    }
    CPy_INCREF(cpy_r_r71);
CPyL52: ;
    cpy_r_r72 = (PyObject *)&PyLong_Type;
    cpy_r_r73 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r74[2] = {cpy_r_r71, cpy_r_r73};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r75, 2, 0);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 249, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_r71);
    if (likely(PyLong_Check(cpy_r_r76)))
        cpy_r_r77 = CPyTagged_FromObject(cpy_r_r76);
    else {
        CPy_TypeError("int", cpy_r_r76); cpy_r_r77 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 249, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL191;
    }
    cpy_r_r78 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "block", 250, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r78);
CPyL55: ;
    cpy_r_r79 = CPyStatics[12]; /* 'result' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 250, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL193;
    }
    cpy_r_r81 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r82 = PyObject_GetItem(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 250, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL193;
    }
    cpy_r_r83 = (PyObject *)&PyLong_Type;
    cpy_r_r84 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r85[2] = {cpy_r_r82, cpy_r_r84};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_Vectorcall(cpy_r_r83, cpy_r_r86, 2, 0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 250, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL194;
    }
    CPy_DECREF(cpy_r_r82);
    if (likely(PyLong_Check(cpy_r_r87)))
        cpy_r_r88 = CPyTagged_FromObject(cpy_r_r87);
    else {
        CPy_TypeError("int", cpy_r_r87); cpy_r_r88 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 250, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL193;
    }
    cpy_r_r89 = CPyTagged_StealAsObject(cpy_r_r77);
    cpy_r_r90 = CPyTagged_StealAsObject(cpy_r_r88);
    cpy_r_r91 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(cpy_r_r70, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 247, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r91;
    cpy_r_r92 = 1;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r93 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__10", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF_NO_IMM(cpy_r_r93);
CPyL62: ;
    cpy_r_r94 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r95 = NULL;
    cpy_r_r3 = cpy_r_r95;
    cpy_r_r96 = (PyObject **)&cpy_r_r3;
    cpy_r_r97 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(cpy_r_r93, cpy_r_r94, cpy_r_r94, cpy_r_r94, cpy_r_r94, cpy_r_r96);
    CPy_DECREF_NO_IMM(cpy_r_r93);
    if (cpy_r_r97 != NULL) goto CPyL195;
    cpy_r_r98 = cpy_r_r3 != 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL196;
    }
    cpy_r_r99 = cpy_r_r3;
    cpy_r_r100 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r100;
    cpy_r_r101 = 1;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 247, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL197;
    } else
        goto CPyL87;
CPyL65: ;
    cpy_r_r102 = cpy_r_r97;
CPyL66: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r102;
CPyL67: ;
    cpy_r_r104 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r105 = cpy_r_type != cpy_r_r104;
    if (!cpy_r_r105) goto CPyL198;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 247, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL71;
    } else
        goto CPyL199;
CPyL69: ;
    CPy_Unreachable();
CPyL70: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL82;
CPyL71: ;
    cpy_r_r106 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r106;
    cpy_r_r107 = 1;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL200;
    }
    cpy_r_r108 = (PyObject **)&cpy_r_r5;
    cpy_r_r109 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__10", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL200;
    }
    CPy_INCREF_NO_IMM(cpy_r_r109);
CPyL73: ;
    cpy_r_r110 = CPy_YieldFromErrorHandle(cpy_r_r109, cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 247, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL200;
    }
    if (cpy_r_r110) goto CPyL77;
    cpy_r_r102 = cpy_r_r5;
    cpy_r_r111 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r111.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__11", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL201;
    }
    CPy_INCREF(cpy_r_r111.f0);
    CPy_INCREF(cpy_r_r111.f1);
    CPy_INCREF(cpy_r_r111.f2);
CPyL76: ;
    CPy_RestoreExcInfo(cpy_r_r111);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    CPy_DecRef(cpy_r_r111.f2);
    goto CPyL66;
CPyL77: ;
    cpy_r_r99 = cpy_r_r5;
    cpy_r_r112 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__11", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL202;
    }
    CPy_INCREF(cpy_r_r112.f0);
    CPy_INCREF(cpy_r_r112.f1);
    CPy_INCREF(cpy_r_r112.f2);
CPyL78: ;
    CPy_RestoreExcInfo(cpy_r_r112);
    CPy_DecRef(cpy_r_r112.f0);
    CPy_DecRef(cpy_r_r112.f1);
    CPy_DecRef(cpy_r_r112.f2);
    goto CPyL87;
CPyL79: ;
    cpy_r_r113 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r113.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__11", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r113.f0);
    CPy_INCREF(cpy_r_r113.f1);
    CPy_INCREF(cpy_r_r113.f2);
CPyL80: ;
    CPy_RestoreExcInfo(cpy_r_r113);
    CPy_DecRef(cpy_r_r113.f0);
    CPy_DecRef(cpy_r_r113.f1);
    CPy_DecRef(cpy_r_r113.f2);
    cpy_r_r114 = CPy_KeepPropagating();
    if (!cpy_r_r114) goto CPyL136;
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r115 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__10", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r115);
CPyL83: ;
    cpy_r_r116 = CPyIter_Send(cpy_r_r115, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r115);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r116 == NULL) goto CPyL85;
    cpy_r_r102 = cpy_r_r116;
    goto CPyL66;
CPyL85: ;
    cpy_r_r117 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 247, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r99 = cpy_r_r117;
CPyL87: ;
    if (unlikely(!PyBool_Check(cpy_r_r99))) {
        CPy_TypeError("bool", cpy_r_r99); cpy_r_r118 = 2;
    } else
        cpy_r_r118 = cpy_r_r99 == Py_True;
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 247, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r119 = cpy_r_r118 ? Py_True : Py_False;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r119;
    cpy_r_r120 = 1;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 247, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    } else
        goto CPyL150;
CPyL89: ;
    cpy_r_r121 = CPyStatics[13]; /* 'number' */
    cpy_r_r122 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "result", 252, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r122);
CPyL90: ;
    cpy_r_r123 = PyDict_Contains(cpy_r_r122, cpy_r_r121);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 252, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r125 = cpy_r_r123;
    if (!cpy_r_r125) goto CPyL131;
    cpy_r_r126 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 254, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r126);
CPyL93: ;
    cpy_r_r127 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "result", 255, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL204;
    }
    CPy_INCREF(cpy_r_r127);
CPyL94: ;
    cpy_r_r128 = CPyStatics[13]; /* 'number' */
    cpy_r_r129 = CPyDict_GetItem(cpy_r_r127, cpy_r_r128);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 255, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL204;
    }
    cpy_r_r130 = (PyObject *)&PyLong_Type;
    cpy_r_r131 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r132[2] = {cpy_r_r129, cpy_r_r131};
    cpy_r_r133 = (PyObject **)&cpy_r_r132;
    cpy_r_r134 = PyObject_Vectorcall(cpy_r_r130, cpy_r_r133, 2, 0);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 255, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL205;
    }
    CPy_DECREF(cpy_r_r129);
    if (likely(PyLong_Check(cpy_r_r134)))
        cpy_r_r135 = CPyTagged_FromObject(cpy_r_r134);
    else {
        CPy_TypeError("int", cpy_r_r134); cpy_r_r135 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 255, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL204;
    }
    cpy_r_r136 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "result", 256, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL206;
    }
    CPy_INCREF(cpy_r_r136);
CPyL98: ;
    cpy_r_r137 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r138 = CPyDict_GetItem(cpy_r_r136, cpy_r_r137);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 256, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL206;
    }
    cpy_r_r139 = (PyObject *)&PyLong_Type;
    cpy_r_r140 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r141[2] = {cpy_r_r138, cpy_r_r140};
    cpy_r_r142 = (PyObject **)&cpy_r_r141;
    cpy_r_r143 = PyObject_Vectorcall(cpy_r_r139, cpy_r_r142, 2, 0);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 256, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL207;
    }
    CPy_DECREF(cpy_r_r138);
    if (likely(PyLong_Check(cpy_r_r143)))
        cpy_r_r144 = CPyTagged_FromObject(cpy_r_r143);
    else {
        CPy_TypeError("int", cpy_r_r143); cpy_r_r144 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 256, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL206;
    }
    cpy_r_r145 = CPyTagged_StealAsObject(cpy_r_r135);
    cpy_r_r146 = CPyTagged_StealAsObject(cpy_r_r144);
    cpy_r_r147 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(cpy_r_r126, cpy_r_r145, cpy_r_r146);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 253, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = cpy_r_r147;
    cpy_r_r148 = 1;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r149 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__13", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF_NO_IMM(cpy_r_r149);
CPyL104: ;
    cpy_r_r150 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r151 = NULL;
    cpy_r_r7 = cpy_r_r151;
    cpy_r_r152 = (PyObject **)&cpy_r_r7;
    cpy_r_r153 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(cpy_r_r149, cpy_r_r150, cpy_r_r150, cpy_r_r150, cpy_r_r150, cpy_r_r152);
    CPy_DECREF_NO_IMM(cpy_r_r149);
    if (cpy_r_r153 != NULL) goto CPyL208;
    cpy_r_r154 = cpy_r_r7 != 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL209;
    }
    cpy_r_r155 = cpy_r_r7;
    cpy_r_r156 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = cpy_r_r156;
    cpy_r_r157 = 1;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 253, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL210;
    } else
        goto CPyL129;
CPyL107: ;
    cpy_r_r158 = cpy_r_r153;
CPyL108: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 3;
    return cpy_r_r158;
CPyL109: ;
    cpy_r_r160 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r161 = cpy_r_type != cpy_r_r160;
    if (!cpy_r_r161) goto CPyL211;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 253, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL113;
    } else
        goto CPyL212;
CPyL111: ;
    CPy_Unreachable();
CPyL112: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL124;
CPyL113: ;
    cpy_r_r162 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14 = cpy_r_r162;
    cpy_r_r163 = 1;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL213;
    }
    cpy_r_r164 = (PyObject **)&cpy_r_r9;
    cpy_r_r165 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__13", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL213;
    }
    CPy_INCREF_NO_IMM(cpy_r_r165);
CPyL115: ;
    cpy_r_r166 = CPy_YieldFromErrorHandle(cpy_r_r165, cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    if (unlikely(cpy_r_r166 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 253, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL213;
    }
    if (cpy_r_r166) goto CPyL119;
    cpy_r_r158 = cpy_r_r9;
    cpy_r_r167 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r167.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__14", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL214;
    }
    CPy_INCREF(cpy_r_r167.f0);
    CPy_INCREF(cpy_r_r167.f1);
    CPy_INCREF(cpy_r_r167.f2);
CPyL118: ;
    CPy_RestoreExcInfo(cpy_r_r167);
    CPy_DecRef(cpy_r_r167.f0);
    CPy_DecRef(cpy_r_r167.f1);
    CPy_DecRef(cpy_r_r167.f2);
    goto CPyL108;
CPyL119: ;
    cpy_r_r155 = cpy_r_r9;
    cpy_r_r168 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r168.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__14", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL215;
    }
    CPy_INCREF(cpy_r_r168.f0);
    CPy_INCREF(cpy_r_r168.f1);
    CPy_INCREF(cpy_r_r168.f2);
CPyL120: ;
    CPy_RestoreExcInfo(cpy_r_r168);
    CPy_DecRef(cpy_r_r168.f0);
    CPy_DecRef(cpy_r_r168.f1);
    CPy_DecRef(cpy_r_r168.f2);
    goto CPyL129;
CPyL121: ;
    cpy_r_r169 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r169.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__14", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r169.f0);
    CPy_INCREF(cpy_r_r169.f1);
    CPy_INCREF(cpy_r_r169.f2);
CPyL122: ;
    CPy_RestoreExcInfo(cpy_r_r169);
    CPy_DecRef(cpy_r_r169.f0);
    CPy_DecRef(cpy_r_r169.f1);
    CPy_DecRef(cpy_r_r169.f2);
    cpy_r_r170 = CPy_KeepPropagating();
    if (!cpy_r_r170) goto CPyL136;
    CPy_Unreachable();
CPyL124: ;
    cpy_r_r171 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__13", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL216;
    }
    CPy_INCREF_NO_IMM(cpy_r_r171);
CPyL125: ;
    cpy_r_r172 = CPyIter_Send(cpy_r_r171, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r171);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r172 == NULL) goto CPyL127;
    cpy_r_r158 = cpy_r_r172;
    goto CPyL108;
CPyL127: ;
    cpy_r_r173 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 253, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r155 = cpy_r_r173;
CPyL129: ;
    if (unlikely(!PyBool_Check(cpy_r_r155))) {
        CPy_TypeError("bool", cpy_r_r155); cpy_r_r174 = 2;
    } else
        cpy_r_r174 = cpy_r_r155 == Py_True;
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r174 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 253, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r175 = cpy_r_r174 ? Py_True : Py_False;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r175;
    cpy_r_r176 = 1;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 253, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    } else
        goto CPyL150;
CPyL131: ;
    cpy_r_r177 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 259, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r177);
CPyL132: ;
    cpy_r_r178 = CPyStatics[3]; /* 'logger' */
    cpy_r_r179 = CPyObject_GetAttr(cpy_r_r177, cpy_r_r178);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 259, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r180 = CPyStatics[21]; /* ('Could not find block number in result. This should not '
                                    'have happened. Request not cached.\n'
                                    '    result: %s') */
    cpy_r_r181 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "result", 262, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL217;
    }
    CPy_INCREF(cpy_r_r181);
CPyL134: ;
    cpy_r_r182 = CPyStatics[5]; /* 'error' */
    PyObject *cpy_r_r183[3] = {cpy_r_r179, cpy_r_r180, cpy_r_r181};
    cpy_r_r184 = (PyObject **)&cpy_r_r183;
    cpy_r_r185 = PyObject_VectorcallMethod(cpy_r_r182, cpy_r_r184, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 259, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL218;
    } else
        goto CPyL219;
CPyL135: ;
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r181);
    cpy_r_r186 = 0 ? Py_True : Py_False;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r186;
    cpy_r_r187 = 1;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 264, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    } else
        goto CPyL150;
CPyL136: ;
    cpy_r_r188 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15 = cpy_r_r188;
    cpy_r_r189 = 1;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL147;
    }
    cpy_r_r190 = CPyModule_builtins;
    cpy_r_r191 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r192 = CPyObject_GetAttr(cpy_r_r190, cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 265, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL147;
    }
    cpy_r_r193 = CPy_ExceptionMatches(cpy_r_r192);
    CPy_DecRef(cpy_r_r192);
    if (!cpy_r_r193) goto CPyL145;
    cpy_r_r194 = CPy_GetExcValue();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e = cpy_r_r194;
    cpy_r_r195 = 1;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 265, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL147;
    }
    cpy_r_r196 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 266, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r196);
CPyL141: ;
    cpy_r_r197 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e;
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "e", 266, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL220;
    }
    CPy_INCREF(cpy_r_r197);
CPyL142: ;
    cpy_r_r198 = CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(cpy_r_r196, cpy_r_r197);
    CPy_DecRef(cpy_r_r196);
    CPy_DecRef(cpy_r_r197);
    if (unlikely(cpy_r_r198 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 266, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL147;
    }
    cpy_r_r199 = 0 ? Py_True : Py_False;
    cpy_r_r200 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15;
    if (unlikely(cpy_r_r200.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__15", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r200.f0);
    CPy_INCREF(cpy_r_r200.f1);
    CPy_INCREF(cpy_r_r200.f2);
CPyL144: ;
    CPy_RestoreExcInfo(cpy_r_r200);
    CPy_DecRef(cpy_r_r200.f0);
    CPy_DecRef(cpy_r_r200.f1);
    CPy_DecRef(cpy_r_r200.f2);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r199;
    cpy_r_r201 = 1;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 267, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL147;
    } else
        goto CPyL150;
CPyL145: ;
    CPy_Reraise();
    if (!0) goto CPyL147;
    CPy_Unreachable();
CPyL147: ;
    cpy_r_r202 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15;
    if (unlikely(cpy_r_r202.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "__mypyc_temp__15", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r202.f0);
    CPy_INCREF(cpy_r_r202.f1);
    CPy_INCREF(cpy_r_r202.f2);
CPyL148: ;
    CPy_RestoreExcInfo(cpy_r_r202);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r202.f2);
    cpy_r_r203 = CPy_KeepPropagating();
    if (!cpy_r_r203) goto CPyL151;
    CPy_Unreachable();
CPyL150: ;
    tuple_T3OOO __tmp13 = { NULL, NULL, NULL };
    cpy_r_r204 = __tmp13;
    cpy_r_r205 = cpy_r_r204;
    goto CPyL153;
CPyL151: ;
    cpy_r_r206 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r206;
    cpy_r_r207 = 1;
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    cpy_r_r208 = CPy_CatchError();
    cpy_r_r205 = cpy_r_r208;
CPyL153: ;
    cpy_r_r209 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests;
    if (unlikely(cpy_r_r209 == 2)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "cache_allowed_requests", 269, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL165;
    }
CPyL154: ;
    cpy_r_r210 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", "async_validate_from_blocknum_in_result_gen", "provider", 269, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL165;
    }
    CPy_INCREF(cpy_r_r210);
CPyL155: ;
    cpy_r_r211 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r212 = cpy_r_r209 ? Py_True : Py_False;
    cpy_r_r213 = PyObject_SetAttr(cpy_r_r210, cpy_r_r211, cpy_r_r212);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 269, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL165;
    }
    if (cpy_r_r205.f0 == NULL) goto CPyL159;
    CPy_Reraise();
    if (!0) {
        goto CPyL165;
    } else
        goto CPyL221;
CPyL158: ;
    CPy_Unreachable();
CPyL159: ;
    cpy_r_r215 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (cpy_r_r215 != NULL) {
        CPy_INCREF(cpy_r_r215);
    }
    if (cpy_r_r215 == NULL) goto CPyL169;
CPyL160: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL164;
    CPyGen_SetStopIterationValue(cpy_r_r215);
    CPy_DECREF(cpy_r_r215);
    if (!0) goto CPyL180;
    CPy_Unreachable();
CPyL164: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r215;
    return 0;
CPyL165: ;
    if (cpy_r_r205.f0 == NULL) goto CPyL167;
    CPy_RestoreExcInfo(cpy_r_r205);
    CPy_XDECREF(cpy_r_r205.f0);
    CPy_XDECREF(cpy_r_r205.f1);
    CPy_XDECREF(cpy_r_r205.f2);
CPyL167: ;
    cpy_r_r217 = CPy_KeepPropagating();
    if (!cpy_r_r217) goto CPyL180;
    CPy_Unreachable();
CPyL169: ;
    cpy_r_r218 = Py_None;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL173;
    CPyGen_SetStopIterationValue(cpy_r_r218);
    if (!0) goto CPyL180;
    CPy_Unreachable();
CPyL173: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r218;
    return 0;
CPyL174: ;
    cpy_r_r220 = cpy_r_r10 == 0;
    if (cpy_r_r220) goto CPyL222;
    cpy_r_r221 = cpy_r_r10 == 1;
    if (cpy_r_r221) {
        goto CPyL223;
    } else
        goto CPyL224;
CPyL176: ;
    cpy_r_r222 = cpy_r_r10 == 2;
    if (cpy_r_r222) {
        goto CPyL225;
    } else
        goto CPyL226;
CPyL177: ;
    cpy_r_r223 = cpy_r_r10 == 3;
    if (cpy_r_r223) {
        goto CPyL109;
    } else
        goto CPyL227;
CPyL178: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r224 = 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 230, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL180: ;
    cpy_r_r225 = NULL;
    return cpy_r_r225;
CPyL181: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL136;
CPyL182: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    goto CPyL136;
CPyL183: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL136;
CPyL184: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL136;
CPyL185: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL31;
CPyL186: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL30;
CPyL187: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL40;
CPyL188: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL40;
CPyL189: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL40;
CPyL190: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL136;
CPyL191: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL136;
CPyL192: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    goto CPyL136;
CPyL193: ;
    CPy_DecRef(cpy_r_r70);
    CPyTagged_DecRef(cpy_r_r77);
    goto CPyL136;
CPyL194: ;
    CPy_DecRef(cpy_r_r70);
    CPyTagged_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r82);
    goto CPyL136;
CPyL195: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL65;
CPyL196: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL136;
CPyL197: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL136;
CPyL198: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL70;
CPyL199: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL69;
CPyL200: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL79;
CPyL201: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL79;
CPyL202: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL79;
CPyL203: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL136;
CPyL204: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL136;
CPyL205: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r129);
    goto CPyL136;
CPyL206: ;
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r135);
    goto CPyL136;
CPyL207: ;
    CPy_DecRef(cpy_r_r126);
    CPyTagged_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r138);
    goto CPyL136;
CPyL208: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL107;
CPyL209: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL136;
CPyL210: ;
    CPy_DecRef(cpy_r_r155);
    goto CPyL136;
CPyL211: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL112;
CPyL212: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL111;
CPyL213: ;
    CPy_XDecRef(cpy_r_r9);
    goto CPyL121;
CPyL214: ;
    CPy_DecRef(cpy_r_r158);
    goto CPyL121;
CPyL215: ;
    CPy_DecRef(cpy_r_r155);
    goto CPyL121;
CPyL216: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL136;
CPyL217: ;
    CPy_DecRef(cpy_r_r179);
    goto CPyL136;
CPyL218: ;
    CPy_DecRef(cpy_r_r179);
    CPy_DecRef(cpy_r_r181);
    goto CPyL136;
CPyL219: ;
    CPy_DECREF(cpy_r_r185);
    goto CPyL135;
CPyL220: ;
    CPy_DecRef(cpy_r_r196);
    goto CPyL147;
CPyL221: ;
    CPy_XDECREF(cpy_r_r205.f0);
    CPy_XDECREF(cpy_r_r205.f1);
    CPy_XDECREF(cpy_r_r205.f2);
    goto CPyL158;
CPyL222: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r9);
    goto CPyL1;
CPyL223: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r9);
    goto CPyL28;
CPyL224: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL176;
CPyL225: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL67;
CPyL226: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL177;
CPyL227: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL178;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "send", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "throw", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[23]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[24]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp14 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp14);
    PyObject *__tmp15 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp15);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "close", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blocknum_in_result_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result(PyObject *cpy_r_provider, PyObject *cpy_r__params, PyObject *cpy_r_result) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 230, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL5;
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 230, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r__params);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute___params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute___params);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute___params = cpy_r__params;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 230, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_result);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute__result != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute__result);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *)cpy_r_r0)->___mypyc_generator_attribute__result = cpy_r_result;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 230, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "_params", "result", 0};
    static CPyArg_Parser parser = {"OOO:async_validate_from_blocknum_in_result", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj__params;
    PyObject *obj_result;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj__params, &obj_result)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg__params = obj__params;
    PyObject *arg_result;
    if (likely(PyDict_Check(obj_result)))
        arg_result = obj_result;
    else {
        CPy_TypeError("dict", obj_result); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result(arg_provider, arg__params, arg_result);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blocknum_in_result", 230, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    char cpy_r_r46;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject **cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    tuple_T3OOO cpy_r_r99;
    char cpy_r_r100;
    PyObject **cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    tuple_T3OOO cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    tuple_T3OOO cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    tuple_T3OOO cpy_r_r126;
    char cpy_r_r127;
    tuple_T3OOO cpy_r_r128;
    char cpy_r_r129;
    tuple_T3OOO cpy_r_r130;
    tuple_T3OOO cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    tuple_T3OOO cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    CPy_XDECREF(cpy_r_r3);
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL124;
CPyL1: ;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_type != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 272, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL129;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r9 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "provider", 275, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL129;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 275, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL129;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 275, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL129;
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 275, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL129;
    }
    cpy_r_r14 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "provider", 278, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r14);
CPyL9: ;
    cpy_r_r15 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r16 = 0 ? Py_True : Py_False;
    cpy_r_r17 = PyObject_SetAttr(cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 278, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r19 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "provider", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r19);
CPyL11: ;
    cpy_r_r20 = CPyStatics[22]; /* 'eth_getBlockByHash' */
    cpy_r_r21 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "params", 282, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_r21);
CPyL12: ;
    cpy_r_r22 = CPyStatics[52]; /* 0 */
    cpy_r_r23 = PyObject_GetItem(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 282, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL130;
    }
    cpy_r_r24 = PyList_New(2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 282, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL131;
    }
    cpy_r_r25 = 0 ? Py_True : Py_False;
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    *(PyObject * *)cpy_r_r27 = cpy_r_r23;
    cpy_r_r28 = cpy_r_r27 + 8;
    *(PyObject * *)cpy_r_r28 = cpy_r_r25;
    cpy_r_r29 = CPyStatics[11]; /* 'make_request' */
    PyObject *cpy_r_r30[3] = {cpy_r_r19, cpy_r_r20, cpy_r_r24};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r29, cpy_r_r31, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL132;
    }
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF_NO_IMM(cpy_r_r24);
    cpy_r_r33 = CPy_GetCoro(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16 = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r35 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__16", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r35);
CPyL18: ;
    cpy_r_r36 = CPyIter_Next(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (cpy_r_r36 != NULL) goto CPyL21;
    cpy_r_r37 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r38 = cpy_r_r37;
    cpy_r_r39 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16 = cpy_r_r39;
    cpy_r_r40 = 1;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL133;
    } else
        goto CPyL43;
CPyL21: ;
    cpy_r_r41 = cpy_r_r36;
CPyL22: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r41;
CPyL23: ;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_type != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL134;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL27;
    } else
        goto CPyL135;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL38;
CPyL27: ;
    cpy_r_r45 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17 = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    cpy_r_r47 = (PyObject **)&cpy_r_r1;
    cpy_r_r48 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__16", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r48);
CPyL29: ;
    cpy_r_r49 = CPy_YieldFromErrorHandle(cpy_r_r48, cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL136;
    }
    if (cpy_r_r49) goto CPyL33;
    cpy_r_r41 = cpy_r_r1;
    cpy_r_r50 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r50.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__17", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r50.f0);
    CPy_INCREF(cpy_r_r50.f1);
    CPy_INCREF(cpy_r_r50.f2);
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r50);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    goto CPyL22;
CPyL33: ;
    cpy_r_r38 = cpy_r_r1;
    cpy_r_r51 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r51.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__17", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r51.f0);
    CPy_INCREF(cpy_r_r51.f1);
    CPy_INCREF(cpy_r_r51.f2);
CPyL34: ;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    goto CPyL43;
CPyL35: ;
    cpy_r_r52 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r52.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__17", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r52.f0);
    CPy_INCREF(cpy_r_r52.f1);
    CPy_INCREF(cpy_r_r52.f2);
CPyL36: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    cpy_r_r53 = CPy_KeepPropagating();
    if (!cpy_r_r53) goto CPyL86;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r54 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__16", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL139;
    }
    CPy_INCREF(cpy_r_r54);
CPyL39: ;
    cpy_r_r55 = CPyIter_Send(cpy_r_r54, cpy_r_arg);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r55 == NULL) goto CPyL41;
    cpy_r_r41 = cpy_r_r55;
    goto CPyL22;
CPyL41: ;
    cpy_r_r56 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r38 = cpy_r_r56;
CPyL43: ;
    if (likely(PyDict_Check(cpy_r_r38)))
        cpy_r_r57 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals, "dict", cpy_r_r38);
        goto CPyL86;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response = cpy_r_r57;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 281, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r59 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "provider", 285, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r59);
CPyL46: ;
    cpy_r_r60 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "response", 286, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL140;
    }
    CPy_INCREF(cpy_r_r60);
CPyL47: ;
    cpy_r_r61 = CPyStatics[12]; /* 'result' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 286, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL140;
    }
    cpy_r_r63 = CPyStatics[13]; /* 'number' */
    cpy_r_r64 = PyObject_GetItem(cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 286, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL140;
    }
    cpy_r_r65 = (PyObject *)&PyLong_Type;
    cpy_r_r66 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r67[2] = {cpy_r_r64, cpy_r_r66};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_Vectorcall(cpy_r_r65, cpy_r_r68, 2, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 286, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL141;
    }
    CPy_DECREF(cpy_r_r64);
    if (likely(PyLong_Check(cpy_r_r69)))
        cpy_r_r70 = CPyTagged_FromObject(cpy_r_r69);
    else {
        CPy_TypeError("int", cpy_r_r69); cpy_r_r70 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 286, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL140;
    }
    cpy_r_r71 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "response", 287, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r71);
CPyL52: ;
    cpy_r_r72 = CPyStatics[12]; /* 'result' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 287, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL142;
    }
    cpy_r_r74 = CPyStatics[15]; /* 'timestamp' */
    cpy_r_r75 = PyObject_GetItem(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 287, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL142;
    }
    cpy_r_r76 = (PyObject *)&PyLong_Type;
    cpy_r_r77 = CPyStatics[51]; /* 16 */
    PyObject *cpy_r_r78[2] = {cpy_r_r75, cpy_r_r77};
    cpy_r_r79 = (PyObject **)&cpy_r_r78;
    cpy_r_r80 = PyObject_Vectorcall(cpy_r_r76, cpy_r_r79, 2, 0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 287, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL143;
    }
    CPy_DECREF(cpy_r_r75);
    if (likely(PyLong_Check(cpy_r_r80)))
        cpy_r_r81 = CPyTagged_FromObject(cpy_r_r80);
    else {
        CPy_TypeError("int", cpy_r_r80); cpy_r_r81 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 287, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL142;
    }
    cpy_r_r82 = CPyTagged_StealAsObject(cpy_r_r70);
    cpy_r_r83 = CPyTagged_StealAsObject(cpy_r_r81);
    cpy_r_r84 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(cpy_r_r59, cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 284, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 = cpy_r_r84;
    cpy_r_r85 = 1;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r86 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__18", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    CPy_INCREF_NO_IMM(cpy_r_r86);
CPyL59: ;
    cpy_r_r87 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r88 = NULL;
    cpy_r_r3 = cpy_r_r88;
    cpy_r_r89 = (PyObject **)&cpy_r_r3;
    cpy_r_r90 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(cpy_r_r86, cpy_r_r87, cpy_r_r87, cpy_r_r87, cpy_r_r87, cpy_r_r89);
    CPy_DECREF_NO_IMM(cpy_r_r86);
    if (cpy_r_r90 != NULL) goto CPyL144;
    cpy_r_r91 = cpy_r_r3 != 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL145;
    }
    cpy_r_r92 = cpy_r_r3;
    cpy_r_r93 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 = cpy_r_r93;
    cpy_r_r94 = 1;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 284, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL146;
    } else
        goto CPyL84;
CPyL62: ;
    cpy_r_r95 = cpy_r_r90;
CPyL63: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r95;
CPyL64: ;
    cpy_r_r97 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r98 = cpy_r_type != cpy_r_r97;
    if (!cpy_r_r98) goto CPyL147;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 284, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL68;
    } else
        goto CPyL148;
CPyL66: ;
    CPy_Unreachable();
CPyL67: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL79;
CPyL68: ;
    cpy_r_r99 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19 = cpy_r_r99;
    cpy_r_r100 = 1;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL149;
    }
    cpy_r_r101 = (PyObject **)&cpy_r_r5;
    cpy_r_r102 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__18", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL149;
    }
    CPy_INCREF_NO_IMM(cpy_r_r102);
CPyL70: ;
    cpy_r_r103 = CPy_YieldFromErrorHandle(cpy_r_r102, cpy_r_r101);
    CPy_DecRef(cpy_r_r102);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 284, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL149;
    }
    if (cpy_r_r103) goto CPyL74;
    cpy_r_r95 = cpy_r_r5;
    cpy_r_r104 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19;
    if (unlikely(cpy_r_r104.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__19", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL150;
    }
    CPy_INCREF(cpy_r_r104.f0);
    CPy_INCREF(cpy_r_r104.f1);
    CPy_INCREF(cpy_r_r104.f2);
CPyL73: ;
    CPy_RestoreExcInfo(cpy_r_r104);
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL63;
CPyL74: ;
    cpy_r_r92 = cpy_r_r5;
    cpy_r_r105 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19;
    if (unlikely(cpy_r_r105.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__19", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_INCREF(cpy_r_r105.f2);
CPyL75: ;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_DecRef(cpy_r_r105.f0);
    CPy_DecRef(cpy_r_r105.f1);
    CPy_DecRef(cpy_r_r105.f2);
    goto CPyL84;
CPyL76: ;
    cpy_r_r106 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19;
    if (unlikely(cpy_r_r106.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__19", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r106.f0);
    CPy_INCREF(cpy_r_r106.f1);
    CPy_INCREF(cpy_r_r106.f2);
CPyL77: ;
    CPy_RestoreExcInfo(cpy_r_r106);
    CPy_DecRef(cpy_r_r106.f0);
    CPy_DecRef(cpy_r_r106.f1);
    CPy_DecRef(cpy_r_r106.f2);
    cpy_r_r107 = CPy_KeepPropagating();
    if (!cpy_r_r107) goto CPyL86;
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r108 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__18", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL152;
    }
    CPy_INCREF_NO_IMM(cpy_r_r108);
CPyL80: ;
    cpy_r_r109 = CPyIter_Send(cpy_r_r108, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r108);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r109 == NULL) goto CPyL82;
    cpy_r_r95 = cpy_r_r109;
    goto CPyL63;
CPyL82: ;
    cpy_r_r110 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 284, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r92 = cpy_r_r110;
CPyL84: ;
    if (unlikely(!PyBool_Check(cpy_r_r92))) {
        CPy_TypeError("bool", cpy_r_r92); cpy_r_r111 = 2;
    } else
        cpy_r_r111 = cpy_r_r92 == Py_True;
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 284, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL86;
    }
    cpy_r_r112 = cpy_r_r111 ? Py_True : Py_False;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r112;
    cpy_r_r113 = 1;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 284, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    } else
        goto CPyL100;
CPyL86: ;
    cpy_r_r114 = CPy_CatchError();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f0);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f1);
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f2);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21 = cpy_r_r114;
    cpy_r_r115 = 1;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL97;
    }
    cpy_r_r116 = CPyModule_builtins;
    cpy_r_r117 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r118 = CPyObject_GetAttr(cpy_r_r116, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 289, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL97;
    }
    cpy_r_r119 = CPy_ExceptionMatches(cpy_r_r118);
    CPy_DecRef(cpy_r_r118);
    if (!cpy_r_r119) goto CPyL95;
    cpy_r_r120 = CPy_GetExcValue();
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e = cpy_r_r120;
    cpy_r_r121 = 1;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 289, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL97;
    }
    cpy_r_r122 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "provider", 290, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r122);
CPyL91: ;
    cpy_r_r123 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "e", 290, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL153;
    }
    CPy_INCREF(cpy_r_r123);
CPyL92: ;
    cpy_r_r124 = CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(cpy_r_r122, cpy_r_r123);
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r123);
    if (unlikely(cpy_r_r124 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 290, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL97;
    }
    cpy_r_r125 = 0 ? Py_True : Py_False;
    cpy_r_r126 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21;
    if (unlikely(cpy_r_r126.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__21", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r126.f0);
    CPy_INCREF(cpy_r_r126.f1);
    CPy_INCREF(cpy_r_r126.f2);
CPyL94: ;
    CPy_RestoreExcInfo(cpy_r_r126);
    CPy_DecRef(cpy_r_r126.f0);
    CPy_DecRef(cpy_r_r126.f1);
    CPy_DecRef(cpy_r_r126.f2);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r125;
    cpy_r_r127 = 1;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 291, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL97;
    } else
        goto CPyL100;
CPyL95: ;
    CPy_Reraise();
    if (!0) goto CPyL97;
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r128 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21;
    if (unlikely(cpy_r_r128.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "__mypyc_temp__21", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r128.f0);
    CPy_INCREF(cpy_r_r128.f1);
    CPy_INCREF(cpy_r_r128.f2);
CPyL98: ;
    CPy_RestoreExcInfo(cpy_r_r128);
    CPy_DecRef(cpy_r_r128.f0);
    CPy_DecRef(cpy_r_r128.f1);
    CPy_DecRef(cpy_r_r128.f2);
    cpy_r_r129 = CPy_KeepPropagating();
    if (!cpy_r_r129) goto CPyL101;
    CPy_Unreachable();
CPyL100: ;
    tuple_T3OOO __tmp16 = { NULL, NULL, NULL };
    cpy_r_r130 = __tmp16;
    cpy_r_r131 = cpy_r_r130;
    goto CPyL103;
CPyL101: ;
    cpy_r_r132 = NULL;
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r132;
    cpy_r_r133 = 1;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL129;
    }
    cpy_r_r134 = CPy_CatchError();
    cpy_r_r131 = cpy_r_r134;
CPyL103: ;
    cpy_r_r135 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests;
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "cache_allowed_requests", 293, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL115;
    }
CPyL104: ;
    cpy_r_r136 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", "async_validate_from_blockhash_in_params_gen", "provider", 293, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r136);
CPyL105: ;
    cpy_r_r137 = CPyStatics[7]; /* 'cache_allowed_requests' */
    cpy_r_r138 = cpy_r_r135 ? Py_True : Py_False;
    cpy_r_r139 = PyObject_SetAttr(cpy_r_r136, cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 293, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL115;
    }
    if (cpy_r_r131.f0 == NULL) goto CPyL109;
    CPy_Reraise();
    if (!0) {
        goto CPyL115;
    } else
        goto CPyL154;
CPyL108: ;
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r141 = ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20;
    if (cpy_r_r141 != NULL) {
        CPy_INCREF(cpy_r_r141);
    }
    if (cpy_r_r141 == NULL) goto CPyL119;
CPyL110: ;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL114;
    CPyGen_SetStopIterationValue(cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    if (!0) goto CPyL129;
    CPy_Unreachable();
CPyL114: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r141;
    return 0;
CPyL115: ;
    if (cpy_r_r131.f0 == NULL) goto CPyL117;
    CPy_RestoreExcInfo(cpy_r_r131);
    CPy_XDECREF(cpy_r_r131.f0);
    CPy_XDECREF(cpy_r_r131.f1);
    CPy_XDECREF(cpy_r_r131.f2);
CPyL117: ;
    cpy_r_r143 = CPy_KeepPropagating();
    if (!cpy_r_r143) goto CPyL129;
    CPy_Unreachable();
CPyL119: ;
    cpy_r_r144 = Py_None;
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL123;
    CPyGen_SetStopIterationValue(cpy_r_r144);
    if (!0) goto CPyL129;
    CPy_Unreachable();
CPyL123: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r144;
    return 0;
CPyL124: ;
    cpy_r_r146 = cpy_r_r6 == 0;
    if (cpy_r_r146) goto CPyL155;
    cpy_r_r147 = cpy_r_r6 == 1;
    if (cpy_r_r147) {
        goto CPyL156;
    } else
        goto CPyL157;
CPyL126: ;
    cpy_r_r148 = cpy_r_r6 == 2;
    if (cpy_r_r148) {
        goto CPyL64;
    } else
        goto CPyL158;
CPyL127: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r149 = 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 272, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL129;
    }
    CPy_Unreachable();
CPyL129: ;
    cpy_r_r150 = NULL;
    return cpy_r_r150;
CPyL130: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL86;
CPyL131: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r23);
    goto CPyL86;
CPyL132: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    goto CPyL86;
CPyL133: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL86;
CPyL134: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL26;
CPyL135: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL25;
CPyL136: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL35;
CPyL137: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL35;
CPyL138: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL35;
CPyL139: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL86;
CPyL140: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL86;
CPyL141: ;
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r64);
    goto CPyL86;
CPyL142: ;
    CPy_DecRef(cpy_r_r59);
    CPyTagged_DecRef(cpy_r_r70);
    goto CPyL86;
CPyL143: ;
    CPy_DecRef(cpy_r_r59);
    CPyTagged_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r75);
    goto CPyL86;
CPyL144: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL62;
CPyL145: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL86;
CPyL146: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL86;
CPyL147: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL67;
CPyL148: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL66;
CPyL149: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL76;
CPyL150: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL76;
CPyL151: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL76;
CPyL152: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL86;
CPyL153: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL97;
CPyL154: ;
    CPy_XDECREF(cpy_r_r131.f0);
    CPy_XDECREF(cpy_r_r131.f1);
    CPy_XDECREF(cpy_r_r131.f2);
    goto CPyL108;
CPyL155: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r5);
    goto CPyL1;
CPyL156: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL23;
CPyL157: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL126;
CPyL158: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL127;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "send", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "throw", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[23]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[24]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp17 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp17);
    PyObject *__tmp18 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp18);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "close", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.request_caching_validation.async_validate_from_blockhash_in_params_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 272, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL5;
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 272, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params = cpy_r_params;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 272, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r__result);
    if (((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute___result != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute___result);
    }
    ((faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *)cpy_r_r0)->___mypyc_generator_attribute___result = cpy_r__result;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 272, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
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

PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "params", "_result", 0};
    static CPyArg_Parser parser = {"OOO:async_validate_from_blockhash_in_params", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_params;
    PyObject *obj__result;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_params, &obj__result)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_params = obj_params;
    PyObject *arg__result;
    if (likely(PyDict_Check(obj__result)))
        arg__result = obj__result;
    else {
        CPy_TypeError("dict", obj__result); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params(arg_provider, arg_params, arg__result);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "async_validate_from_blockhash_in_params", 272, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___request_caching_validation_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
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
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[25]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", -1, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[55]; /* (('time', 'time', 'time'),) */
    cpy_r_r11 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r12 = CPyStatics[26]; /* 'faster_web3/_utils/caching/request_caching_validation.py' */
    cpy_r_r13 = CPyStatics[27]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL22;
    cpy_r_r15 = CPyStatics[56]; /* ('TYPE_CHECKING', 'Any', 'Dict', 'Final', 'Optional',
                                   'Sequence', 'TypeVar', 'Union') */
    cpy_r_r16 = CPyStatics[36]; /* 'typing' */
    cpy_r_r17 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 2, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[57]; /* ('RPCEndpoint',) */
    cpy_r_r20 = CPyStatics[38]; /* 'faster_web3.types' */
    cpy_r_r21 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 13, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    CPyModule_faster_web3___types = cpy_r_r22;
    CPy_INCREF(CPyModule_faster_web3___types);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[58]; /* ('RequestCacheValidationThreshold',) */
    cpy_r_r24 = CPyStatics[40]; /* 'faster_web3.utils' */
    cpy_r_r25 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 16, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    CPyModule_faster_web3___utils = cpy_r_r26;
    CPy_INCREF(CPyModule_faster_web3___utils);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[41]; /* 'finalized' */
    cpy_r_r28 = CPyStatics[42]; /* 'safe' */
    cpy_r_r29 = CPyStatics[43]; /* 'latest' */
    cpy_r_r30 = CPyStatics[44]; /* 'pending' */
    cpy_r_r31 = PySet_New(NULL);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 27, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    cpy_r_r32 = PySet_Add(cpy_r_r31, cpy_r_r27);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 27, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL23;
    }
    cpy_r_r34 = PySet_Add(cpy_r_r31, cpy_r_r28);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 27, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL23;
    }
    cpy_r_r36 = PySet_Add(cpy_r_r31, cpy_r_r29);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 27, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL23;
    }
    cpy_r_r38 = PySet_Add(cpy_r_r31, cpy_r_r30);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 27, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL23;
    }
    cpy_r_r40 = PyFrozenSet_New(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 27, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS = cpy_r_r40;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS);
    cpy_r_r41 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r42 = CPyStatics[45]; /* 'UNCACHEABLE_BLOCK_IDS' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r41, cpy_r_r42, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 27, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    cpy_r_r45 = CPyStatics[46]; /* 'ASYNC_PROVIDER_TYPE' */
    cpy_r_r46 = CPyStatics[47]; /* 'AsyncBaseProvider' */
    cpy_r_r47 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r48 = CPyStatics[34]; /* 'TypeVar' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 29, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    PyObject *cpy_r_r50[2] = {cpy_r_r45, cpy_r_r46};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = CPyStatics[59]; /* ('bound',) */
    cpy_r_r53 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, cpy_r_r52);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 29, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    cpy_r_r54 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r55 = CPyStatics[46]; /* 'ASYNC_PROVIDER_TYPE' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 29, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    cpy_r_r58 = CPyStatics[49]; /* 'SYNC_PROVIDER_TYPE' */
    cpy_r_r59 = CPyStatics[50]; /* 'BaseProvider' */
    cpy_r_r60 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r61 = CPyStatics[34]; /* 'TypeVar' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 30, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    PyObject *cpy_r_r63[2] = {cpy_r_r58, cpy_r_r59};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = CPyStatics[59]; /* ('bound',) */
    cpy_r_r66 = PyObject_Vectorcall(cpy_r_r62, cpy_r_r64, 1, cpy_r_r65);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 30, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    cpy_r_r67 = CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
    cpy_r_r68 = CPyStatics[49]; /* 'SYNC_PROVIDER_TYPE' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("faster_web3/_utils/caching/request_caching_validation.py", "<module>", 30, CPyStatic_faster_web3____utils___caching___request_caching_validation___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r71 = 2;
    return cpy_r_r71;
CPyL23: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL22;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3____utils___caching___request_caching_validation = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_time = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_web3___types = Py_None;
    CPyModule_faster_web3___utils = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[60];
const char * const CPyLit_Str[] = {
    "\003\006logger1There was an exception while caching the request.\005error",
    "\003\bexc_info\026cache_allowed_requests\"request_cache_validation_threshold",
    "\a\024eth_getBlockByNumber\005value\fmake_request\006result\006number\003hex\ttimestamp",
    "\001\004time",
    "\001vInvalid request_cache_validation_threshold value. This should not have happened. Request not cached.\n    threshold: %s",
    "\003\tException\bearliest\vblockNumber",
    "\001hCould not find block number in result. This should not have happened. Request not cached.\n    result: %s",
    "\004\022eth_getBlockByHash\rGeneratorExit\rStopIteration\bbuiltins",
    "\0028faster_web3/_utils/caching/request_caching_validation.py\b<module>",
    "\t\rTYPE_CHECKING\003Any\004Dict\005Final\bOptional\bSequence\aTypeVar\005Union\006typing",
    "\003\vRPCEndpoint\021faster_web3.types\037RequestCacheValidationThreshold",
    "\006\021faster_web3.utils\tfinalized\004safe\006latest\apending\025UNCACHEABLE_BLOCK_IDS",
    "\004\023ASYNC_PROVIDER_TYPE\021AsyncBaseProvider\005bound\022SYNC_PROVIDER_TYPE",
    "\001\fBaseProvider",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\00216\0000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    7, 1, 6, 3, 16, 16, 16, 1, 54, 8, 28, 29, 30, 31, 32, 33, 34, 35, 1,
    37, 1, 39, 1, 48
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3____utils___caching___request_caching_validation__internal = NULL;
CPyModule *CPyModule_faster_web3____utils___caching___request_caching_validation;
PyObject *CPyStatic_faster_web3____utils___caching___request_caching_validation___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_time;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_web3___types;
CPyModule *CPyModule_faster_web3___utils;
PyObject *CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS = NULL;
PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen;
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen(void);
CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_genObject *faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen;
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen(void);
CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_genObject *faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen;
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen(void);
CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_genObject *faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen;
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen(void);
CPyThreadLocal faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_genObject *faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance;
char CPyDef_faster_web3____utils___caching___request_caching_validation____error_log(PyObject *cpy_r_provider, PyObject *cpy_r_e);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation____error_log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___request_caching_validation___always_cache_request(PyObject *cpy_r__args, PyObject *cpy_r__kwargs);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___always_cache_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(PyObject *cpy_r_provider, PyObject *cpy_r_blocknum, PyObject *cpy_r_block_timestamp);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result(PyObject *cpy_r_provider, PyObject *cpy_r__params, PyObject *cpy_r_result);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(PyObject *cpy_r_provider, PyObject *cpy_r_blocknum, PyObject *cpy_r_block_timestamp);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result(PyObject *cpy_r_provider, PyObject *cpy_r__params, PyObject *cpy_r_result);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params(PyObject *cpy_r_provider, PyObject *cpy_r_params, PyObject *cpy_r__result);
PyObject *CPyPy_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___request_caching_validation_____top_level__(void);

static struct export_table_faster_web3____utils___caching___request_caching_validation exports = {
    &CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS,
    &CPyType_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen,
    &faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_free_instance,
    &CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen,
    &faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_free_instance,
    &CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen,
    &faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_free_instance,
    &CPyType_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen,
    &faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_free_instance,
    &CPyDef_faster_web3____utils___caching___request_caching_validation____error_log,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___always_cache_request,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___is_beyond_validation_threshold,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_block_id_in_params,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blocknum_in_result,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___validate_from_blockhash_in_params,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____next__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___send,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____iter__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___throw,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen___close,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold_gen_____await__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_is_beyond_validation_threshold,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____next__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___send,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____iter__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___throw,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen___close,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params_gen_____await__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_block_id_in_params,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____next__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___send,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____iter__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___throw,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen___close,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result_gen_____await__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blocknum_in_result,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____next__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___send,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____iter__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___throw,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen___close,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params_gen_____await__,
    &CPyDef_faster_web3____utils___caching___request_caching_validation___async_validate_from_blockhash_in_params,
    &CPyDef_faster_web3____utils___caching___request_caching_validation_____top_level__,
};

static int exec_request_caching_validation__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3._utils.caching.request_caching_validation__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3____utils___caching___request_caching_validation(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3____utils___caching___request_caching_validation, "faster_web3._utils.caching.request_caching_validation__mypyc.init_faster_web3____utils___caching___request_caching_validation", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3____utils___caching___request_caching_validation", capsule);
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
static PyModuleDef module_def_request_caching_validation__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3._utils.caching.request_caching_validation__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_request_caching_validation__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_request_caching_validation__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_request_caching_validation__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
