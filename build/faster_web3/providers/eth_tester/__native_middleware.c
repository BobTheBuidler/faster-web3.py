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
#include "__native_middleware.h"
#include "__native_internal_middleware.h"

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__DefaultTransactionFieldsMiddleware_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__DefaultTransactionFieldsMiddleware_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_traverse(faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddlewareObject *self, visitproc visit, void *arg)
{
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_clear(faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddlewareObject *self)
{
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_dealloc(faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddlewareObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_dealloc)
    faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_vtable[2];
static bool
CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor,
    };
    memcpy(faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_vtable, faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_vtable_scratch, sizeof(faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_vtable));
    return 1;
}


static PyGetSetDef faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_methods[] = {
    {"request_processor",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("request_processor($self, method, params)\n--\n\n")},
    {"async_request_processor",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_request_processor($self, method, params)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DefaultTransactionFieldsMiddleware",
    .tp_new = faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_clear,
    .tp_getset = faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_getseters,
    .tp_methods = faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_methods,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddlewareObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("DefaultTransactionFieldsMiddleware()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_template = &CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__DefaultTransactionFieldsMiddleware_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddlewareObject *self;
    self = (faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddlewareObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__DefaultTransactionFieldsMiddleware_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware);
    if (self == NULL)
        return NULL;
    int res = CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


static PyAsyncMethods faster_web3___providers___eth_tester___middleware___async_guess_from_gen_as_async = {
    .am_await = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__,
};
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_guess_from_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen(void);

static PyObject *
faster_web3___providers___eth_tester___middleware___async_guess_from_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_guess_from_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___middleware___async_guess_from_gen_traverse(faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__async_w3);
    Py_VISIT(self->___mypyc_generator_attribute___);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1.f0);
    Py_VISIT(self->___mypyc_temp__1.f1);
    Py_VISIT(self->___mypyc_temp__1.f2);
    Py_VISIT(self->___mypyc_generator_attribute__accounts);
    return 0;
}

static int
faster_web3___providers___eth_tester___middleware___async_guess_from_gen_clear(faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__async_w3);
    Py_CLEAR(self->___mypyc_generator_attribute___);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1.f0);
    Py_CLEAR(self->___mypyc_temp__1.f1);
    Py_CLEAR(self->___mypyc_temp__1.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__accounts);
    return 0;
}

static void
faster_web3___providers___eth_tester___middleware___async_guess_from_gen_dealloc(faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance == NULL) {
        faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__async_w3);
        Py_CLEAR(self->___mypyc_generator_attribute___);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1.f0);
        Py_CLEAR(self->___mypyc_temp__1.f1);
        Py_CLEAR(self->___mypyc_temp__1.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__accounts);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___middleware___async_guess_from_gen_dealloc)
    faster_web3___providers___eth_tester___middleware___async_guess_from_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___middleware___async_guess_from_gen_vtable[7];
static bool
CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___middleware___async_guess_from_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__,
    };
    memcpy(faster_web3___providers___eth_tester___middleware___async_guess_from_gen_vtable, faster_web3___providers___eth_tester___middleware___async_guess_from_gen_vtable_scratch, sizeof(faster_web3___providers___eth_tester___middleware___async_guess_from_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___middleware___async_guess_from_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_guess_from_gen",
    .tp_new = faster_web3___providers___eth_tester___middleware___async_guess_from_gen_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___middleware___async_guess_from_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___middleware___async_guess_from_gen_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___middleware___async_guess_from_gen_clear,
    .tp_methods = faster_web3___providers___eth_tester___middleware___async_guess_from_gen_methods,
    .tp_iter = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__,
    .tp_as_async = &faster_web3___providers___eth_tester___middleware___async_guess_from_gen_as_async,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___middleware___async_guess_from_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_guess_from_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_template = &CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_guess_from_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *self;
    if (faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance;
        faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___middleware___async_guess_from_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__1 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_guess_from_gen_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3___providers___eth_tester___middleware___async_fill_default_gen_as_async = {
    .am_await = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__,
};
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_fill_default_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen(void);

static PyObject *
faster_web3___providers___eth_tester___middleware___async_fill_default_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_fill_default_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___middleware___async_fill_default_gen_traverse(faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__field);
    Py_VISIT(self->___mypyc_generator_attribute__guess_func);
    Py_VISIT(self->___mypyc_generator_attribute__async_w3);
    Py_VISIT(self->___mypyc_generator_attribute__transaction);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    Py_VISIT(self->___mypyc_generator_attribute__guess_val);
    return 0;
}

static int
faster_web3___providers___eth_tester___middleware___async_fill_default_gen_clear(faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__field);
    Py_CLEAR(self->___mypyc_generator_attribute__guess_func);
    Py_CLEAR(self->___mypyc_generator_attribute__async_w3);
    Py_CLEAR(self->___mypyc_generator_attribute__transaction);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__guess_val);
    return 0;
}

static void
faster_web3___providers___eth_tester___middleware___async_fill_default_gen_dealloc(faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance == NULL) {
        faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__field);
        Py_CLEAR(self->___mypyc_generator_attribute__guess_func);
        Py_CLEAR(self->___mypyc_generator_attribute__async_w3);
        Py_CLEAR(self->___mypyc_generator_attribute__transaction);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__2);
        Py_CLEAR(self->___mypyc_temp__3.f0);
        Py_CLEAR(self->___mypyc_temp__3.f1);
        Py_CLEAR(self->___mypyc_temp__3.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__guess_val);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___middleware___async_fill_default_gen_dealloc)
    faster_web3___providers___eth_tester___middleware___async_fill_default_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___middleware___async_fill_default_gen_vtable[7];
static bool
CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___middleware___async_fill_default_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__,
    };
    memcpy(faster_web3___providers___eth_tester___middleware___async_fill_default_gen_vtable, faster_web3___providers___eth_tester___middleware___async_fill_default_gen_vtable_scratch, sizeof(faster_web3___providers___eth_tester___middleware___async_fill_default_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___middleware___async_fill_default_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_fill_default_gen",
    .tp_new = faster_web3___providers___eth_tester___middleware___async_fill_default_gen_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___middleware___async_fill_default_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___middleware___async_fill_default_gen_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___middleware___async_fill_default_gen_clear,
    .tp_methods = faster_web3___providers___eth_tester___middleware___async_fill_default_gen_methods,
    .tp_iter = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__,
    .tp_as_async = &faster_web3___providers___eth_tester___middleware___async_fill_default_gen_as_async,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___middleware___async_fill_default_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_fill_default_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_template = &CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_fill_default_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *self;
    if (faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance;
        faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___middleware___async_fill_default_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_fill_default_gen_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_as_async = {
    .am_await = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__,
};
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_request_processor_DefaultTransactionFieldsMiddleware_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen(void);

static PyObject *
faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_request_processor_DefaultTransactionFieldsMiddleware_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_traverse(faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__method);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5.f0);
    Py_VISIT(self->___mypyc_temp__5.f1);
    Py_VISIT(self->___mypyc_temp__5.f2);
    Py_VISIT(self->___mypyc_generator_attribute__filled_transaction);
    return 0;
}

static int
faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_clear(faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__method);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5.f0);
    Py_CLEAR(self->___mypyc_temp__5.f1);
    Py_CLEAR(self->___mypyc_temp__5.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__filled_transaction);
    return 0;
}

static void
faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_dealloc(faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance == NULL) {
        faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__method);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__4);
        Py_CLEAR(self->___mypyc_temp__5.f0);
        Py_CLEAR(self->___mypyc_temp__5.f1);
        Py_CLEAR(self->___mypyc_temp__5.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__filled_transaction);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_dealloc)
    faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_vtable[7];
static bool
CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__,
    };
    memcpy(faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_vtable, faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_vtable_scratch, sizeof(faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_request_processor_DefaultTransactionFieldsMiddleware_gen",
    .tp_new = faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_clear,
    .tp_methods = faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_methods,
    .tp_iter = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__,
    .tp_as_async = &faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_as_async,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_request_processor_DefaultTransactionFieldsMiddleware_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_template = &CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_request_processor_DefaultTransactionFieldsMiddleware_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *self;
    if (faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance;
        faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__5 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___middleware_____mypyc__async_request_processor_DefaultTransactionFieldsMiddleware_gen_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef faster_web3___providers___eth_tester___middlewaremodule_methods[] = {
    {"is_named_block", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___is_named_block, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("is_named_block(value)\n--\n\n") /* docstring */},
    {"is_hexstr", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___is_hexstr, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("is_hexstr(value)\n--\n\n") /* docstring */},
    {"guess_from", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___guess_from, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("guess_from(w3, _)\n--\n\n") /* docstring */},
    {"fill_default", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___fill_default, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("fill_default(field, guess_func, w3, transaction)\n--\n\n") /* docstring */},
    {"async_guess_from", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_guess_from(async_w3, _)\n--\n\n") /* docstring */},
    {"async_fill_default", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_fill_default(field, guess_func, async_w3, transaction)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___providers___eth_tester___middleware(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___providers___eth_tester___middleware__internal, "__name__");
    CPyStatic_faster_web3___providers___eth_tester___middleware___globals = PyModule_GetDict(CPyModule_faster_web3___providers___eth_tester___middleware__internal);
    if (unlikely(CPyStatic_faster_web3___providers___eth_tester___middleware___globals == NULL))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___providers___eth_tester___middleware_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___providers___eth_tester___middleware__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex);
    CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block);
    CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING);
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper);
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS);
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter);
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer);
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING);
    CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper);
    CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS);
    CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter);
    CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer);
    CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING);
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper);
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS);
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter);
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING);
    CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING);
    CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper);
    CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING);
    CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper);
    CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS);
    CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter);
    CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS);
    CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter);
    CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper);
    CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters);
    CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters);
    CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware);
    CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware);
    CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware = NULL;
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen);
    return -1;
}
static struct PyModuleDef faster_web3___providers___eth_tester___middlewaremodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.providers.eth_tester.middleware",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___providers___eth_tester___middlewaremodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___providers___eth_tester___middleware(void)
{
    if (CPyModule_faster_web3___providers___eth_tester___middleware__internal) {
        Py_INCREF(CPyModule_faster_web3___providers___eth_tester___middleware__internal);
        return CPyModule_faster_web3___providers___eth_tester___middleware__internal;
    }
    CPyModule_faster_web3___providers___eth_tester___middleware__internal = PyModule_Create(&faster_web3___providers___eth_tester___middlewaremodule);
    if (unlikely(CPyModule_faster_web3___providers___eth_tester___middleware__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___providers___eth_tester___middleware(CPyModule_faster_web3___providers___eth_tester___middleware__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___providers___eth_tester___middleware__internal;
    fail:
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___middleware___is_named_block(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyStatics[237]; /* frozenset({'earliest', 'finalized', 'safe', 'latest'}) */
    cpy_r_r1 = PySet_Contains(cpy_r_r0, cpy_r_value);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_named_block", 64, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL2;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___is_named_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_named_block", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_faster_web3___providers___eth_tester___middleware___is_named_block(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_named_block", 63, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___middleware___is_hexstr(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r1 = CPyStatics[7]; /* 'is_string' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_hexstr", 68, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_value};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_hexstr", 68, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    if (unlikely(!PyBool_Check(cpy_r_r5))) {
        CPy_TypeError("bool", cpy_r_r5); cpy_r_r6 = 2;
    } else
        cpy_r_r6 = cpy_r_r5 == Py_True;
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_hexstr", 68, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    if (cpy_r_r6) goto CPyL5;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL9;
CPyL5: ;
    cpy_r_r8 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r9 = CPyStatics[8]; /* 'is_hex' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_hexstr", 68, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_value};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_hexstr", 68, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_hexstr", 68, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    cpy_r_r7 = cpy_r_r14;
CPyL9: ;
    return cpy_r_r7;
CPyL10: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___is_hexstr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_hexstr", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_faster_web3___providers___eth_tester___middleware___is_hexstr(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "is_hexstr", 67, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___guess_from(PyObject *cpy_r_w3, PyObject *cpy_r__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatics[9]; /* 'eth' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_w3, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "guess_from", 359, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL14;
    }
    cpy_r_r2 = CPyStatics[10]; /* 'accounts' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "guess_from", 359, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyObject_Size(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "guess_from", 360, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL15;
    }
    cpy_r_r5 = cpy_r_r4 & 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (cpy_r_r6) goto CPyL5;
    cpy_r_r7 = 0 & 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL6;
CPyL5: ;
    cpy_r_r9 = CPyTagged_IsLt_(0, cpy_r_r4);
    cpy_r_r10 = cpy_r_r9;
    goto CPyL7;
CPyL6: ;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r4 > (Py_ssize_t)0;
    cpy_r_r10 = cpy_r_r11;
CPyL7: ;
    CPyTagged_DECREF(cpy_r_r4);
    if (!cpy_r_r10) goto CPyL16;
    cpy_r_r12 = CPyStatics[223]; /* 0 */
    cpy_r_r13 = PyObject_GetItem(cpy_r_r3, cpy_r_r12);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "guess_from", 360, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/middleware.py", "guess_from", 360, CPyStatic_faster_web3___providers___eth_tester___middleware___globals, "str", cpy_r_r13);
        goto CPyL14;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL12;
CPyL11: ;
    cpy_r_r16 = Py_None;
    cpy_r_r15 = cpy_r_r16;
CPyL12: ;
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r17 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/middleware.py", "guess_from", 360, CPyStatic_faster_web3___providers___eth_tester___middleware___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    return cpy_r_r17;
CPyL14: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL15: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL11;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___guess_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"w3", "_", 0};
    static CPyArg_Parser parser = {"OO:guess_from", kwlist, 0};
    PyObject *obj_w3;
    PyObject *obj__;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_w3, &obj__)) {
        return NULL;
    }
    PyObject *arg_w3 = obj_w3;
    PyObject *arg__;
    if (likely(PyDict_Check(obj__)))
        arg__ = obj__;
    else {
        CPy_TypeError("dict", obj__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___guess_from(arg_w3, arg__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "guess_from", 358, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___fill_default(PyObject *cpy_r_field, PyObject *cpy_r_guess_func, PyObject *cpy_r_w3, PyObject *cpy_r_transaction) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = PyDict_Contains(cpy_r_transaction, cpy_r_field);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "fill_default", 368, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    cpy_r_r2 = cpy_r_r0;
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_transaction, cpy_r_field);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "fill_default", 368, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r5) goto CPyL5;
    CPy_INCREF(cpy_r_transaction);
    return cpy_r_transaction;
CPyL5: ;
    PyObject *cpy_r_r6[2] = {cpy_r_w3, cpy_r_transaction};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_guess_func, cpy_r_r7, 2, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "fill_default", 371, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL10;
    }
    cpy_r_r9 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r10 = CPyStatics[11]; /* 'assoc' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "fill_default", 372, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r12[3] = {cpy_r_transaction, cpy_r_field, cpy_r_r8};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 3, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "fill_default", 372, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r8);
    if (likely(PyDict_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/middleware.py", "fill_default", 372, CPyStatic_faster_web3___providers___eth_tester___middleware___globals, "dict", cpy_r_r14);
        goto CPyL10;
    }
    return cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL11: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL10;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___fill_default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"field", "guess_func", "w3", "transaction", 0};
    static CPyArg_Parser parser = {"OOOO:fill_default", kwlist, 0};
    PyObject *obj_field;
    PyObject *obj_guess_func;
    PyObject *obj_w3;
    PyObject *obj_transaction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_field, &obj_guess_func, &obj_w3, &obj_transaction)) {
        return NULL;
    }
    PyObject *arg_field;
    if (likely(PyUnicode_Check(obj_field)))
        arg_field = obj_field;
    else {
        CPy_TypeError("str", obj_field); 
        goto fail;
    }
    PyObject *arg_guess_func = obj_guess_func;
    PyObject *arg_w3 = obj_w3;
    PyObject *arg_transaction;
    if (likely(PyDict_Check(obj_transaction)))
        arg_transaction = obj_transaction;
    else {
        CPy_TypeError("dict", obj_transaction); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___fill_default(arg_field, arg_guess_func, arg_w3, arg_transaction);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "fill_default", 364, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    char cpy_r_r23;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    int64_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL58;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 378, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__async_w3;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "async_w3", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyStatics[9]; /* 'eth' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r8 = CPyStatics[10]; /* 'accounts' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r10 = CPy_GetCoro(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    if (((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r12 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r12);
CPyL10: ;
    cpy_r_r13 = CPyIter_Next(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13 != NULL) goto CPyL13;
    cpy_r_r14 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r15 = cpy_r_r14;
    cpy_r_r16 = NULL;
    if (((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL63;
    } else
        goto CPyL35;
CPyL13: ;
    cpy_r_r18 = cpy_r_r13;
CPyL14: ;
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r18;
CPyL15: ;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_type != cpy_r_r20;
    if (!cpy_r_r21) goto CPyL64;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL19;
    } else
        goto CPyL65;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL30;
CPyL19: ;
    cpy_r_r22 = CPy_CatchError();
    if (((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0);
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f1);
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f2);
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r22;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL66;
    }
    cpy_r_r24 = (PyObject **)&cpy_r_r1;
    cpy_r_r25 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r25);
CPyL21: ;
    cpy_r_r26 = CPy_YieldFromErrorHandle(cpy_r_r25, cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL66;
    }
    if (cpy_r_r26) goto CPyL25;
    cpy_r_r18 = cpy_r_r1;
    cpy_r_r27 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r27.f0);
    CPy_INCREF(cpy_r_r27.f1);
    CPy_INCREF(cpy_r_r27.f2);
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_DecRef(cpy_r_r27.f0);
    CPy_DecRef(cpy_r_r27.f1);
    CPy_DecRef(cpy_r_r27.f2);
    goto CPyL14;
CPyL25: ;
    cpy_r_r15 = cpy_r_r1;
    cpy_r_r28 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r28.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r28.f0);
    CPy_INCREF(cpy_r_r28.f1);
    CPy_INCREF(cpy_r_r28.f2);
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r28);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    goto CPyL35;
CPyL27: ;
    cpy_r_r29 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r29.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r29.f0);
    CPy_INCREF(cpy_r_r29.f1);
    CPy_INCREF(cpy_r_r29.f2);
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r29);
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    cpy_r_r30 = CPy_KeepPropagating();
    if (!cpy_r_r30) goto CPyL62;
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r31 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r31);
CPyL31: ;
    cpy_r_r32 = CPyIter_Send(cpy_r_r31, cpy_r_arg);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r32 == NULL) goto CPyL33;
    cpy_r_r18 = cpy_r_r32;
    goto CPyL14;
CPyL33: ;
    cpy_r_r33 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r15 = cpy_r_r33;
CPyL35: ;
    if (((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__accounts != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__accounts);
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__accounts = cpy_r_r15;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 381, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r35 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__accounts;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "accounts", 382, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r35);
CPyL37: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    CPy_DECREF(cpy_r_r35);
    if (!cpy_r_r37) goto CPyL53;
    cpy_r_r38 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__accounts;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "accounts", 382, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r38);
CPyL39: ;
    cpy_r_r39 = CPyObject_Size(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 382, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r40 = cpy_r_r39 & 1;
    cpy_r_r41 = cpy_r_r40 != 0;
    if (cpy_r_r41) goto CPyL42;
    cpy_r_r42 = 0 & 1;
    cpy_r_r43 = cpy_r_r42 != 0;
    if (!cpy_r_r43) goto CPyL43;
CPyL42: ;
    cpy_r_r44 = CPyTagged_IsLt_(0, cpy_r_r39);
    cpy_r_r45 = cpy_r_r44;
    goto CPyL44;
CPyL43: ;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r39 > (Py_ssize_t)0;
    cpy_r_r45 = cpy_r_r46;
CPyL44: ;
    CPyTagged_DECREF(cpy_r_r39);
    if (!cpy_r_r45) goto CPyL53;
    cpy_r_r47 = ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__accounts;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", "async_guess_from_gen", "accounts", 383, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r47);
CPyL46: ;
    cpy_r_r48 = CPyStatics[223]; /* 0 */
    cpy_r_r49 = PyObject_GetItem(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 383, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 383, CPyStatic_faster_web3___providers___eth_tester___middleware___globals, "str", cpy_r_r49);
        goto CPyL62;
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL52;
    CPyGen_SetStopIterationValue(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (!0) goto CPyL62;
    CPy_Unreachable();
CPyL52: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r50;
    return 0;
CPyL53: ;
    cpy_r_r52 = Py_None;
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL57;
    CPyGen_SetStopIterationValue(cpy_r_r52);
    if (!0) goto CPyL62;
    CPy_Unreachable();
CPyL57: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r52;
    return 0;
CPyL58: ;
    cpy_r_r54 = cpy_r_r2 == 0;
    if (cpy_r_r54) goto CPyL70;
    cpy_r_r55 = cpy_r_r2 == 1;
    if (cpy_r_r55) {
        goto CPyL15;
    } else
        goto CPyL71;
CPyL60: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 378, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL63: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL62;
CPyL64: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL18;
CPyL65: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL17;
CPyL66: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL27;
CPyL67: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL27;
CPyL68: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL27;
CPyL69: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL62;
CPyL70: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL71: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL60;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_guess_from_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__next__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_guess_from_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "send", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_guess_from_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__iter__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_guess_from_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "throw", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[12]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[13]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp2);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_guess_from_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "close", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_guess_from_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__await__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from(PyObject *cpy_r_async_w3, PyObject *cpy_r__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 378, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL4;
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_async_w3);
    if (((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3);
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3 = cpy_r_async_w3;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 378, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r__);
    if (((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r_r0)->___mypyc_generator_attribute___ != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r_r0)->___mypyc_generator_attribute___);
    }
    ((faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *)cpy_r_r0)->___mypyc_generator_attribute___ = cpy_r__;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 378, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"async_w3", "_", 0};
    static CPyArg_Parser parser = {"OO:async_guess_from", kwlist, 0};
    PyObject *obj_async_w3;
    PyObject *obj__;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_async_w3, &obj__)) {
        return NULL;
    }
    PyObject *arg_async_w3 = obj_async_w3;
    PyObject *arg__;
    if (likely(PyDict_Check(obj__)))
        arg__ = obj__;
    else {
        CPy_TypeError("dict", obj__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from(arg_async_w3, arg__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_guess_from", 378, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    char cpy_r_r36;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    tuple_T3OOO cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL61;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__field;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "field", 395, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "transaction", 395, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = PyDict_Contains(cpy_r_r6, cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 395, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL18;
    cpy_r_r10 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "transaction", 395, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__field;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "field", 395, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r11);
CPyL10: ;
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 395, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r14) goto CPyL18;
    cpy_r_r15 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "transaction", 396, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r15);
CPyL13: ;
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL17;
    CPyGen_SetStopIterationValue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (!0) goto CPyL65;
    CPy_Unreachable();
CPyL17: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r15;
    return 0;
CPyL18: ;
    cpy_r_r17 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__async_w3;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "async_w3", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r17);
CPyL19: ;
    cpy_r_r18 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "transaction", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r18);
CPyL20: ;
    cpy_r_r19 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__guess_func;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "guess_func", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r19);
CPyL21: ;
    PyObject *cpy_r_r20[2] = {cpy_r_r17, cpy_r_r18};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 2, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r23 = CPy_GetCoro(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    cpy_r_r25 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "__mypyc_temp__2", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r25);
CPyL25: ;
    cpy_r_r26 = CPyIter_Next(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (cpy_r_r26 != NULL) goto CPyL28;
    cpy_r_r27 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    cpy_r_r28 = cpy_r_r27;
    cpy_r_r29 = NULL;
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r29;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL70;
    } else
        goto CPyL50;
CPyL28: ;
    cpy_r_r31 = cpy_r_r26;
CPyL29: ;
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r31;
CPyL30: ;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_type != cpy_r_r33;
    if (!cpy_r_r34) goto CPyL71;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL34;
    } else
        goto CPyL72;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL45;
CPyL34: ;
    cpy_r_r35 = CPy_CatchError();
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f0);
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f1);
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f2);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r35;
    cpy_r_r36 = 1;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL73;
    }
    cpy_r_r37 = (PyObject **)&cpy_r_r1;
    cpy_r_r38 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "__mypyc_temp__2", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r38);
CPyL36: ;
    cpy_r_r39 = CPy_YieldFromErrorHandle(cpy_r_r38, cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL73;
    }
    if (cpy_r_r39) goto CPyL40;
    cpy_r_r31 = cpy_r_r1;
    cpy_r_r40 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r40.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    CPy_INCREF(cpy_r_r40.f2);
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    goto CPyL29;
CPyL40: ;
    cpy_r_r28 = cpy_r_r1;
    cpy_r_r41 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r41.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPy_INCREF(cpy_r_r41.f2);
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r41);
    CPy_DecRef(cpy_r_r41.f0);
    CPy_DecRef(cpy_r_r41.f1);
    CPy_DecRef(cpy_r_r41.f2);
    goto CPyL50;
CPyL42: ;
    cpy_r_r42 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r42.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r42.f0);
    CPy_INCREF(cpy_r_r42.f1);
    CPy_INCREF(cpy_r_r42.f2);
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    cpy_r_r43 = CPy_KeepPropagating();
    if (!cpy_r_r43) goto CPyL65;
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r44 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "__mypyc_temp__2", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r44);
CPyL46: ;
    cpy_r_r45 = CPyIter_Send(cpy_r_r44, cpy_r_arg);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r45 == NULL) goto CPyL48;
    cpy_r_r31 = cpy_r_r45;
    goto CPyL29;
CPyL48: ;
    cpy_r_r46 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    cpy_r_r28 = cpy_r_r46;
CPyL50: ;
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__guess_val != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__guess_val);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__guess_val = cpy_r_r28;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 398, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    cpy_r_r48 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__transaction;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "transaction", 399, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r48);
CPyL52: ;
    cpy_r_r49 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__field;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "field", 399, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL77;
    }
    CPy_INCREF(cpy_r_r49);
CPyL53: ;
    cpy_r_r50 = ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__guess_val;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", "async_fill_default_gen", "guess_val", 399, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r50);
CPyL54: ;
    cpy_r_r51 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r52 = CPyStatics[11]; /* 'assoc' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 399, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r54[3] = {cpy_r_r48, cpy_r_r49, cpy_r_r50};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 3, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 399, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL79;
    }
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL60;
    CPyGen_SetStopIterationValue(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (!0) goto CPyL65;
    CPy_Unreachable();
CPyL60: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r56;
    return 0;
CPyL61: ;
    cpy_r_r58 = cpy_r_r2 == 0;
    if (cpy_r_r58) goto CPyL80;
    cpy_r_r59 = cpy_r_r2 == 1;
    if (cpy_r_r59) {
        goto CPyL30;
    } else
        goto CPyL81;
CPyL63: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r61 = NULL;
    return cpy_r_r61;
CPyL66: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL65;
CPyL68: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL65;
CPyL69: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL65;
CPyL71: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL33;
CPyL72: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL32;
CPyL73: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL42;
CPyL74: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL42;
CPyL75: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL42;
CPyL76: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL65;
CPyL77: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL65;
CPyL78: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    goto CPyL65;
CPyL79: ;
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    goto CPyL65;
CPyL80: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL81: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL63;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_fill_default_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__next__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_fill_default_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "send", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_fill_default_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__iter__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_fill_default_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "throw", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[12]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[13]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp4);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_fill_default_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "close", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_fill_default_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__await__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default(PyObject *cpy_r_field, PyObject *cpy_r_guess_func, PyObject *cpy_r_async_w3, PyObject *cpy_r_transaction) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL6;
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_field);
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__field != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__field);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__field = cpy_r_field;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_guess_func);
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__guess_func != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__guess_func);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__guess_func = cpy_r_guess_func;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_async_w3);
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3 = cpy_r_async_w3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_transaction);
    if (((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__transaction != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__transaction);
    }
    ((faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *)cpy_r_r0)->___mypyc_generator_attribute__transaction = cpy_r_transaction;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL7;
    }
    return cpy_r_r0;
CPyL6: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"field", "guess_func", "async_w3", "transaction", 0};
    static CPyArg_Parser parser = {"OOOO:async_fill_default", kwlist, 0};
    PyObject *obj_field;
    PyObject *obj_guess_func;
    PyObject *obj_async_w3;
    PyObject *obj_transaction;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_field, &obj_guess_func, &obj_async_w3, &obj_transaction)) {
        return NULL;
    }
    PyObject *arg_field;
    if (likely(PyUnicode_Check(obj_field)))
        arg_field = obj_field;
    else {
        CPy_TypeError("str", obj_field); 
        goto fail;
    }
    PyObject *arg_guess_func = obj_guess_func;
    PyObject *arg_async_w3 = obj_async_w3;
    PyObject *arg_transaction;
    if (likely(PyDict_Check(obj_transaction)))
        arg_transaction = obj_transaction;
    else {
        CPy_TypeError("dict", obj_transaction); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default(arg_field, arg_guess_func, arg_async_w3, arg_transaction);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_fill_default", 388, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = CPyStatics[238]; /* frozenset({'eth_call', 'eth_createAccessList',
                                             'eth_estimateGas', 'eth_sendTransaction'}) */
    cpy_r_r1 = PySet_Contains(cpy_r_r0, cpy_r_method);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 408, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL16;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL17;
    cpy_r_r4 = CPyStatics[18]; /* 'from' */
    cpy_r_r5 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r6 = CPyStatics[19]; /* 'guess_from' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 414, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL16;
    }
    cpy_r_r8 = CPyStatics[20]; /* '_w3' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_self, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 414, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL18;
    }
    cpy_r_r10 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r11 = CPyStatics[21]; /* 'fill_default' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 414, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r13[3] = {cpy_r_r4, cpy_r_r7, cpy_r_r9};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 3, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 414, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r16 = CPyStatics[223]; /* 0 */
    cpy_r_r17 = PyObject_GetItem(cpy_r_params, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 416, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL20;
    }
    cpy_r_r18 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r19 = CPyStatics[22]; /* 'pipe' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 415, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL21;
    }
    PyObject *cpy_r_r21[2] = {cpy_r_r17, cpy_r_r15};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 2, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 415, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 419, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL22;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = PySequence_List(cpy_r_params);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 419, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL23;
    }
    cpy_r_r28 = CPyList_GetSlice(cpy_r_r27, 2, 9223372036854775806LL);
    CPy_DECREF_NO_IMM(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 419, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL23;
    }
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 419, CPyStatic_faster_web3___providers___eth_tester___middleware___globals, "list", cpy_r_r28);
        goto CPyL23;
    }
    cpy_r_r30 = PySequence_Concat(cpy_r_r24, cpy_r_r29);
    CPy_DECREF_NO_IMM(cpy_r_r24);
    CPy_DECREF_NO_IMM(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 419, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL16;
    }
    cpy_r_params = cpy_r_r30;
CPyL15: ;
    CPy_INCREF(cpy_r_method);
    cpy_r_r31.f0 = cpy_r_method;
    cpy_r_r31.f1 = cpy_r_params;
    cpy_r_r32 = PyTuple_New(2);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp5);
    PyObject *__tmp6 = cpy_r_r31.f1;
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp6);
    return cpy_r_r32;
CPyL16: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL17: ;
    CPy_INCREF(cpy_r_params);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r17);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL16;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"method", "params", 0};
    static CPyArg_Parser parser = {"OO:request_processor", kwlist, 0};
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.DefaultTransactionFieldsMiddleware", obj_self); 
        goto fail;
    }
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor(arg_self, arg_method, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "request_processor", 407, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
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
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    char cpy_r_r39;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T2OO cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL58;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 424, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPyStatics[238]; /* frozenset({'eth_call', 'eth_createAccessList',
                                             'eth_estimateGas', 'eth_sendTransaction'}) */
    cpy_r_r6 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "method", 425, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = PySet_Contains(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 425, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL51;
    cpy_r_r10 = CPyStatics[18]; /* 'from' */
    cpy_r_r11 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r12 = CPyStatics[23]; /* 'async_guess_from' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 432, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r14 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "self", 432, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL63;
    }
    CPy_INCREF_NO_IMM(cpy_r_r14);
CPyL9: ;
    cpy_r_r15 = CPyStatics[20]; /* '_w3' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 432, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL63;
    }
    cpy_r_r17 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "params", 432, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r17);
CPyL11: ;
    cpy_r_r18 = CPyStatics[223]; /* 0 */
    cpy_r_r19 = PyObject_GetItem(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 432, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL64;
    }
    cpy_r_r20 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r21 = CPyStatics[24]; /* 'async_fill_default' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r23[4] = {cpy_r_r10, cpy_r_r13, cpy_r_r16, cpy_r_r19};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 4, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r26 = CPy_GetCoro(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r26;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r28 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r28);
CPyL17: ;
    cpy_r_r29 = CPyIter_Next(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (cpy_r_r29 != NULL) goto CPyL20;
    cpy_r_r30 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r31 = cpy_r_r30;
    cpy_r_r32 = NULL;
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r32;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL66;
    } else
        goto CPyL42;
CPyL20: ;
    cpy_r_r34 = cpy_r_r29;
CPyL21: ;
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r34;
CPyL22: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_type != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL67;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL26;
    } else
        goto CPyL68;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL37;
CPyL26: ;
    cpy_r_r38 = CPy_CatchError();
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0);
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f1);
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f2);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL69;
    }
    cpy_r_r40 = (PyObject **)&cpy_r_r1;
    cpy_r_r41 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r41);
CPyL28: ;
    cpy_r_r42 = CPy_YieldFromErrorHandle(cpy_r_r41, cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL69;
    }
    if (cpy_r_r42) goto CPyL32;
    cpy_r_r34 = cpy_r_r1;
    cpy_r_r43 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r43.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r43.f0);
    CPy_INCREF(cpy_r_r43.f1);
    CPy_INCREF(cpy_r_r43.f2);
CPyL31: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL21;
CPyL32: ;
    cpy_r_r31 = cpy_r_r1;
    cpy_r_r44 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r44.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r44.f0);
    CPy_INCREF(cpy_r_r44.f1);
    CPy_INCREF(cpy_r_r44.f2);
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    goto CPyL42;
CPyL34: ;
    cpy_r_r45 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r45.f0);
    CPy_INCREF(cpy_r_r45.f1);
    CPy_INCREF(cpy_r_r45.f2);
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    cpy_r_r46 = CPy_KeepPropagating();
    if (!cpy_r_r46) goto CPyL62;
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r47 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r47);
CPyL38: ;
    cpy_r_r48 = CPyIter_Send(cpy_r_r47, cpy_r_arg);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r48 == NULL) goto CPyL40;
    cpy_r_r34 = cpy_r_r48;
    goto CPyL21;
CPyL40: ;
    cpy_r_r49 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r31 = cpy_r_r49;
CPyL42: ;
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__filled_transaction != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__filled_transaction);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__filled_transaction = cpy_r_r31;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 431, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    cpy_r_r51 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__filled_transaction;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "filled_transaction", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r51);
CPyL44: ;
    cpy_r_r52 = PyList_New(1);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL73;
    }
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r52)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    *(PyObject * *)cpy_r_r54 = cpy_r_r51;
    cpy_r_r55 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "params", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r55);
CPyL46: ;
    cpy_r_r56 = PySequence_List(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL74;
    }
    cpy_r_r57 = CPyList_GetSlice(cpy_r_r56, 2, 9223372036854775806LL);
    CPy_DECREF_NO_IMM(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL74;
    }
    if (likely(PyList_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals, "list", cpy_r_r57);
        goto CPyL74;
    }
    cpy_r_r59 = PySequence_Concat(cpy_r_r52, cpy_r_r58);
    CPy_DECREF_NO_IMM(cpy_r_r52);
    CPy_DECREF_NO_IMM(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 434, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
CPyL51: ;
    cpy_r_r61 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "method", 436, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r61);
CPyL52: ;
    cpy_r_r62 = ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", "async_request_processor_DefaultTransactionFieldsMiddleware_gen", "params", 436, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r62);
CPyL53: ;
    cpy_r_r63.f0 = cpy_r_r61;
    cpy_r_r63.f1 = cpy_r_r62;
    cpy_r_r64 = PyTuple_New(2);
    if (unlikely(cpy_r_r64 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = cpy_r_r63.f0;
    PyTuple_SET_ITEM(cpy_r_r64, 0, __tmp7);
    PyObject *__tmp8 = cpy_r_r63.f1;
    PyTuple_SET_ITEM(cpy_r_r64, 1, __tmp8);
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL57;
    CPyGen_SetStopIterationValue(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (!0) goto CPyL62;
    CPy_Unreachable();
CPyL57: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r64;
    return 0;
CPyL58: ;
    cpy_r_r66 = cpy_r_r2 == 0;
    if (cpy_r_r66) goto CPyL76;
    cpy_r_r67 = cpy_r_r2 == 1;
    if (cpy_r_r67) {
        goto CPyL22;
    } else
        goto CPyL77;
CPyL60: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 424, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r69 = NULL;
    return cpy_r_r69;
CPyL63: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL62;
CPyL64: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL62;
CPyL65: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL62;
CPyL66: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL62;
CPyL67: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL25;
CPyL68: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL24;
CPyL69: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL34;
CPyL70: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL34;
CPyL71: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL34;
CPyL72: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL62;
CPyL73: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL62;
CPyL74: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL62;
CPyL75: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL62;
CPyL76: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL77: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL60;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_request_processor_DefaultTransactionFieldsMiddleware_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__next__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_request_processor_DefaultTransactionFieldsMiddleware_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "send", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_request_processor_DefaultTransactionFieldsMiddleware_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__iter__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_request_processor_DefaultTransactionFieldsMiddleware_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "throw", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[12]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[13]; /* 'StopIteration' */
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_request_processor_DefaultTransactionFieldsMiddleware_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "close", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.async_request_processor_DefaultTransactionFieldsMiddleware_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "__await__", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 424, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL5;
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 424, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_method);
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method = cpy_r_method;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 424, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params);
    }
    ((faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params = cpy_r_params;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 424, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"method", "params", 0};
    static CPyArg_Parser parser = {"OO:async_request_processor", kwlist, 0};
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.middleware.DefaultTransactionFieldsMiddleware", obj_self); 
        goto fail;
    }
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor(arg_self, arg_method, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "async_request_processor", 424, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___middleware_____top_level__(void) {
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
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject **cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject **cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject **cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    int32_t cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    int32_t cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject **cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    int32_t cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject **cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    int32_t cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject **cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject **cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    int32_t cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject **cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    int32_t cpy_r_r345;
    char cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    int32_t cpy_r_r360;
    char cpy_r_r361;
    PyObject *cpy_r_r362;
    char cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    int32_t cpy_r_r367;
    char cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    int32_t cpy_r_r392;
    char cpy_r_r393;
    PyObject *cpy_r_r394;
    char cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    int32_t cpy_r_r399;
    char cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    int32_t cpy_r_r440;
    char cpy_r_r441;
    PyObject *cpy_r_r442;
    char cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    int32_t cpy_r_r447;
    char cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    int32_t cpy_r_r458;
    char cpy_r_r459;
    PyObject *cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject **cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    int32_t cpy_r_r470;
    char cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    int32_t cpy_r_r480;
    char cpy_r_r481;
    PyObject *cpy_r_r482;
    char cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject **cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    int32_t cpy_r_r492;
    char cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    int32_t cpy_r_r504;
    char cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    char cpy_r_r508;
    PyObject *cpy_r_r509;
    char cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject **cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject *cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    char cpy_r_r536;
    PyObject *cpy_r_r537;
    char cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject **cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    char cpy_r_r549;
    PyObject *cpy_r_r550;
    char cpy_r_r551;
    PyObject *cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject **cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject *cpy_r_r561;
    char cpy_r_r562;
    PyObject *cpy_r_r563;
    char cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject **cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject *cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject *cpy_r_r575;
    PyObject *cpy_r_r576;
    PyObject *cpy_r_r577;
    char cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    char cpy_r_r583;
    PyObject *cpy_r_r584;
    char cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject **cpy_r_r590;
    PyObject *cpy_r_r591;
    PyObject *cpy_r_r592;
    char cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    char cpy_r_r598;
    PyObject *cpy_r_r599;
    char cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    PyObject **cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    char cpy_r_r608;
    PyObject *cpy_r_r609;
    PyObject *cpy_r_r610;
    PyObject *cpy_r_r611;
    PyObject *cpy_r_r612;
    char cpy_r_r613;
    PyObject *cpy_r_r614;
    PyObject *cpy_r_r615;
    PyObject *cpy_r_r616;
    PyObject *cpy_r_r617;
    char cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    PyObject *cpy_r_r622;
    char cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    char cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    PyObject *cpy_r_r632;
    char cpy_r_r633;
    PyObject *cpy_r_r634;
    char cpy_r_r635;
    PyObject *cpy_r_r636;
    char cpy_r_r637;
    PyObject *cpy_r_r638;
    PyObject *cpy_r_r639;
    PyObject *cpy_r_r640;
    PyObject **cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    char cpy_r_r648;
    PyObject *cpy_r_r649;
    char cpy_r_r650;
    PyObject *cpy_r_r651;
    char cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    PyObject *cpy_r_r655;
    PyObject **cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    PyObject *cpy_r_r661;
    PyObject *cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    PyObject *cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    PyObject *cpy_r_r670;
    PyObject *cpy_r_r671;
    char cpy_r_r672;
    PyObject *cpy_r_r673;
    char cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject **cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject *cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    char cpy_r_r688;
    PyObject *cpy_r_r689;
    char cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject **cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    char cpy_r_r701;
    PyObject *cpy_r_r702;
    char cpy_r_r703;
    PyObject *cpy_r_r704;
    char cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    PyObject *cpy_r_r708;
    PyObject **cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    PyObject *cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject *cpy_r_r717;
    PyObject *cpy_r_r718;
    PyObject *cpy_r_r719;
    PyObject *cpy_r_r720;
    PyObject *cpy_r_r721;
    PyObject *cpy_r_r722;
    int32_t cpy_r_r723;
    char cpy_r_r724;
    PyObject *cpy_r_r725;
    PyObject *cpy_r_r726;
    PyObject *cpy_r_r727;
    PyObject *cpy_r_r728;
    PyObject *cpy_r_r729;
    char cpy_r_r730;
    PyObject *cpy_r_r731;
    char cpy_r_r732;
    PyObject *cpy_r_r733;
    PyObject *cpy_r_r734;
    PyObject *cpy_r_r735;
    PyObject **cpy_r_r737;
    PyObject *cpy_r_r738;
    PyObject *cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    PyObject **cpy_r_r743;
    PyObject *cpy_r_r744;
    PyObject *cpy_r_r745;
    PyObject *cpy_r_r746;
    PyObject *cpy_r_r747;
    PyObject *cpy_r_r748;
    PyObject *cpy_r_r749;
    char cpy_r_r750;
    PyObject *cpy_r_r751;
    char cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject **cpy_r_r757;
    PyObject *cpy_r_r758;
    PyObject *cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject **cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    PyObject *cpy_r_r766;
    PyObject *cpy_r_r767;
    PyObject *cpy_r_r768;
    PyObject *cpy_r_r769;
    char cpy_r_r770;
    PyObject *cpy_r_r771;
    PyObject *cpy_r_r772;
    PyObject *cpy_r_r773;
    PyObject **cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject *cpy_r_r777;
    PyObject *cpy_r_r778;
    PyObject *cpy_r_r779;
    PyObject *cpy_r_r780;
    PyObject *cpy_r_r781;
    char cpy_r_r782;
    PyObject *cpy_r_r783;
    PyObject *cpy_r_r784;
    PyObject *cpy_r_r785;
    PyObject **cpy_r_r787;
    PyObject *cpy_r_r788;
    PyObject *cpy_r_r789;
    PyObject *cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject *cpy_r_r792;
    PyObject *cpy_r_r793;
    char cpy_r_r794;
    PyObject *cpy_r_r795;
    char cpy_r_r796;
    PyObject *cpy_r_r797;
    PyObject *cpy_r_r798;
    PyObject *cpy_r_r799;
    PyObject **cpy_r_r801;
    PyObject *cpy_r_r802;
    PyObject *cpy_r_r803;
    PyObject *cpy_r_r804;
    PyObject *cpy_r_r805;
    PyObject **cpy_r_r807;
    PyObject *cpy_r_r808;
    PyObject *cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_r812;
    PyObject *cpy_r_r813;
    char cpy_r_r814;
    PyObject *cpy_r_r815;
    char cpy_r_r816;
    PyObject *cpy_r_r817;
    PyObject *cpy_r_r818;
    PyObject *cpy_r_r819;
    PyObject **cpy_r_r821;
    PyObject *cpy_r_r822;
    PyObject *cpy_r_r823;
    PyObject *cpy_r_r824;
    PyObject *cpy_r_r825;
    PyObject **cpy_r_r827;
    PyObject *cpy_r_r828;
    PyObject *cpy_r_r829;
    PyObject *cpy_r_r830;
    PyObject *cpy_r_r831;
    PyObject *cpy_r_r832;
    PyObject *cpy_r_r833;
    PyObject *cpy_r_r834;
    PyObject *cpy_r_r835;
    PyObject *cpy_r_r836;
    PyObject *cpy_r_r837;
    PyObject *cpy_r_r838;
    PyObject *cpy_r_r839;
    PyObject *cpy_r_r840;
    PyObject *cpy_r_r841;
    PyObject *cpy_r_r842;
    PyObject *cpy_r_r843;
    PyObject *cpy_r_r844;
    PyObject *cpy_r_r845;
    PyObject *cpy_r_r846;
    PyObject *cpy_r_r847;
    PyObject *cpy_r_r848;
    PyObject *cpy_r_r849;
    PyObject *cpy_r_r850;
    PyObject *cpy_r_r851;
    PyObject **cpy_r_r853;
    PyObject *cpy_r_r854;
    PyObject *cpy_r_r855;
    PyObject *cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject *cpy_r_r858;
    PyObject *cpy_r_r859;
    PyObject *cpy_r_r860;
    PyObject *cpy_r_r861;
    PyObject *cpy_r_r862;
    PyObject *cpy_r_r863;
    PyObject *cpy_r_r864;
    PyObject *cpy_r_r865;
    PyObject **cpy_r_r867;
    PyObject *cpy_r_r868;
    PyObject *cpy_r_r869;
    PyObject *cpy_r_r870;
    PyObject *cpy_r_r871;
    PyObject *cpy_r_r872;
    PyObject *cpy_r_r873;
    PyObject *cpy_r_r874;
    PyObject *cpy_r_r875;
    PyObject *cpy_r_r876;
    PyObject *cpy_r_r877;
    PyObject *cpy_r_r878;
    PyObject *cpy_r_r879;
    PyObject **cpy_r_r881;
    PyObject *cpy_r_r882;
    PyObject *cpy_r_r883;
    PyObject *cpy_r_r884;
    PyObject *cpy_r_r885;
    PyObject *cpy_r_r886;
    PyObject *cpy_r_r887;
    char cpy_r_r888;
    PyObject *cpy_r_r889;
    PyObject *cpy_r_r890;
    PyObject *cpy_r_r891;
    PyObject **cpy_r_r893;
    PyObject *cpy_r_r894;
    PyObject *cpy_r_r895;
    PyObject *cpy_r_r896;
    PyObject *cpy_r_r897;
    PyObject *cpy_r_r898;
    PyObject *cpy_r_r899;
    PyObject *cpy_r_r900;
    PyObject *cpy_r_r901;
    int32_t cpy_r_r902;
    char cpy_r_r903;
    PyObject *cpy_r_r904;
    PyObject *cpy_r_r905;
    PyObject *cpy_r_r906;
    PyObject *cpy_r_r907;
    PyObject *cpy_r_r908;
    PyObject *cpy_r_r909;
    PyObject **cpy_r_r911;
    PyObject *cpy_r_r912;
    PyObject *cpy_r_r913;
    PyObject *cpy_r_r914;
    int32_t cpy_r_r915;
    char cpy_r_r916;
    PyObject *cpy_r_r917;
    PyObject *cpy_r_r918;
    PyObject *cpy_r_r919;
    PyObject *cpy_r_r920;
    PyObject *cpy_r_r921;
    PyObject *cpy_r_r922;
    PyObject **cpy_r_r924;
    PyObject *cpy_r_r925;
    PyObject *cpy_r_r926;
    PyObject *cpy_r_r927;
    int32_t cpy_r_r928;
    char cpy_r_r929;
    PyObject *cpy_r_r930;
    PyObject *cpy_r_r931;
    PyObject *cpy_r_r932;
    PyObject *cpy_r_r933;
    PyObject *cpy_r_r934;
    PyObject *cpy_r_r935;
    PyObject *cpy_r_r936;
    char cpy_r_r937;
    PyObject *cpy_r_r938;
    PyObject *cpy_r_r939;
    PyObject *cpy_r_r940;
    int32_t cpy_r_r941;
    char cpy_r_r942;
    PyObject *cpy_r_r943;
    PyObject *cpy_r_r944;
    int32_t cpy_r_r945;
    char cpy_r_r946;
    PyObject *cpy_r_r947;
    PyObject *cpy_r_r948;
    PyObject *cpy_r_r949;
    PyObject *cpy_r_r950;
    char cpy_r_r951;
    PyObject *cpy_r_r952;
    char cpy_r_r953;
    PyObject *cpy_r_r954;
    PyObject **cpy_r_r956;
    PyObject *cpy_r_r957;
    PyObject *cpy_r_r958;
    PyObject *cpy_r_r959;
    PyObject *cpy_r_r960;
    int32_t cpy_r_r961;
    char cpy_r_r962;
    PyObject *cpy_r_r963;
    PyObject *cpy_r_r964;
    PyObject *cpy_r_r965;
    int32_t cpy_r_r966;
    char cpy_r_r967;
    char cpy_r_r968;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[25]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_operator;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[225]; /* (('operator', 'operator', 'operator'),) */
    cpy_r_r11 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r12 = CPyStatics[27]; /* 'faster_web3/providers/eth_tester/middleware.py' */
    cpy_r_r13 = CPyStatics[28]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL474;
    cpy_r_r15 = CPyStatics[226]; /* ('TYPE_CHECKING', 'Any', 'Callable', 'Dict', 'Final',
                                    'Optional', 'final') */
    cpy_r_r16 = CPyStatics[36]; /* 'typing' */
    cpy_r_r17 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 2, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[227]; /* ('ChecksumAddress',) */
    cpy_r_r20 = CPyStatics[38]; /* 'eth_typing' */
    cpy_r_r21 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 12, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_eth_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[228]; /* ('is_dict', 'is_hex', 'is_string') */
    cpy_r_r24 = CPyStatics[40]; /* 'faster_eth_utils' */
    cpy_r_r25 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 15, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_eth_utils = cpy_r_r26;
    CPy_INCREF(CPyModule_faster_eth_utils);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[229]; /* ('apply_formatter_if', 'apply_formatters_to_dict') */
    cpy_r_r28 = CPyStatics[43]; /* 'faster_eth_utils.curried' */
    cpy_r_r29 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 20, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_eth_utils___curried = cpy_r_r30;
    CPy_INCREF(CPyModule_faster_eth_utils___curried);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[230]; /* ('assoc', 'complement', 'compose', 'curry', 'identity',
                                    'partial', 'pipe') */
    cpy_r_r32 = CPyStatics[49]; /* 'faster_eth_utils.toolz' */
    cpy_r_r33 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 24, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_eth_utils___toolz = cpy_r_r34;
    CPy_INCREF(CPyModule_faster_eth_utils___toolz);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[231]; /* ('apply_formatters_to_args', 'apply_key_map',
                                    'hex_to_integer', 'integer_to_hex', 'is_array_of_dicts',
                                    'static_return') */
    cpy_r_r36 = CPyStatics[56]; /* 'faster_web3._utils.formatters' */
    cpy_r_r37 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 34, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_web3____utils___formatters = cpy_r_r38;
    CPy_INCREF(CPyModule_faster_web3____utils___formatters);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[232]; /* ('apply_list_to_array_formatter',) */
    cpy_r_r40 = CPyStatics[58]; /* 'faster_web3._utils.method_formatters' */
    cpy_r_r41 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 42, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_web3____utils___method_formatters = cpy_r_r42;
    CPy_INCREF(CPyModule_faster_web3____utils___method_formatters);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[233]; /* ('Web3Middleware',) */
    cpy_r_r44 = CPyStatics[60]; /* 'faster_web3.middleware.base' */
    cpy_r_r45 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 45, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_web3___middleware___base = cpy_r_r46;
    CPy_INCREF(CPyModule_faster_web3___middleware___base);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[234]; /* ('FormattingMiddlewareBuilder',) */
    cpy_r_r48 = CPyStatics[62]; /* 'faster_web3.middleware.formatting' */
    cpy_r_r49 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 48, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_web3___middleware___formatting = cpy_r_r50;
    CPy_INCREF(CPyModule_faster_web3___middleware___formatting);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[235]; /* ('RPCEndpoint', 'TxParams') */
    cpy_r_r52 = CPyStatics[65]; /* 'faster_web3.types' */
    cpy_r_r53 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 51, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyModule_faster_web3___types = cpy_r_r54;
    CPy_INCREF(CPyModule_faster_web3___types);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r56 = CPyStatics[66]; /* 'is_hexstr' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 71, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r58 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r59 = CPyStatics[52]; /* 'hex_to_integer' */
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 71, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL475;
    }
    cpy_r_r61 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r62 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 71, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL476;
    }
    PyObject *cpy_r_r64[2] = {cpy_r_r57, cpy_r_r60};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 2, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 71, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL476;
    }
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r60);
    CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex = cpy_r_r66;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex);
    cpy_r_r67 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r68 = CPyStatics[67]; /* 'to_integer_if_hex' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 71, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r71 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r72 = CPyStatics[68]; /* 'is_named_block' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 72, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r74 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r75 = CPyStatics[44]; /* 'complement' */
    cpy_r_r76 = CPyDict_GetItem(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 72, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL477;
    }
    PyObject *cpy_r_r77[1] = {cpy_r_r73};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = PyObject_Vectorcall(cpy_r_r76, cpy_r_r78, 1, 0);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 72, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL477;
    }
    CPy_DECREF(cpy_r_r73);
    CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block = cpy_r_r79;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block);
    cpy_r_r80 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r81 = CPyStatics[69]; /* 'is_not_named_block' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 72, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r84 = CPyStatics[70]; /* 'blobVersionedHashes' */
    cpy_r_r85 = CPyStatics[71]; /* 'blob_versioned_hashes' */
    cpy_r_r86 = CPyStatics[72]; /* 'gasPrice' */
    cpy_r_r87 = CPyStatics[73]; /* 'gas_price' */
    cpy_r_r88 = CPyStatics[74]; /* 'maxFeePerBlobGas' */
    cpy_r_r89 = CPyStatics[75]; /* 'max_fee_per_blob_gas' */
    cpy_r_r90 = CPyStatics[76]; /* 'maxFeePerGas' */
    cpy_r_r91 = CPyStatics[77]; /* 'max_fee_per_gas' */
    cpy_r_r92 = CPyStatics[78]; /* 'maxPriorityFeePerGas' */
    cpy_r_r93 = CPyStatics[79]; /* 'max_priority_fee_per_gas' */
    cpy_r_r94 = CPyStatics[80]; /* 'accessList' */
    cpy_r_r95 = CPyStatics[81]; /* 'access_list' */
    cpy_r_r96 = CPyStatics[82]; /* 'authorizationList' */
    cpy_r_r97 = CPyStatics[83]; /* 'authorization_list' */
    cpy_r_r98 = CPyStatics[84]; /* 'chainId' */
    cpy_r_r99 = CPyStatics[85]; /* 'chain_id' */
    cpy_r_r100 = CPyDict_Build(8, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 76, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING = cpy_r_r100;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING);
    cpy_r_r101 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r102 = CPyStatics[86]; /* 'TRANSACTION_REQUEST_KEY_MAPPING' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r101, cpy_r_r102, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 76, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r105 = CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING;
    if (likely(cpy_r_r105 != NULL)) goto CPyL29;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRANSACTION_REQUEST_KEY_MAPPING\" was not set");
    cpy_r_r106 = 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 86, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r107 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r105);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 86, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper = cpy_r_r107;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper);
    cpy_r_r108 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r109 = CPyStatics[87]; /* 'transaction_request_remapper' */
    cpy_r_r110 = CPyDict_SetItem(cpy_r_r108, cpy_r_r109, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 86, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r112 = CPyStatics[84]; /* 'chainId' */
    cpy_r_r113 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r113 != NULL)) goto CPyL34;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r114 = 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 90, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r115 = CPyStatics[88]; /* 'gas' */
    cpy_r_r116 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r116 != NULL)) goto CPyL37;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r117 = 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 91, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r118 = CPyStatics[72]; /* 'gasPrice' */
    cpy_r_r119 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r119 != NULL)) goto CPyL40;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 92, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r121 = CPyStatics[89]; /* 'value' */
    cpy_r_r122 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r122 != NULL)) goto CPyL43;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r123 = 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 93, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r124 = CPyStatics[90]; /* 'nonce' */
    cpy_r_r125 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r125 != NULL)) goto CPyL46;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r126 = 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 94, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r127 = CPyStatics[76]; /* 'maxFeePerGas' */
    cpy_r_r128 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r128 != NULL)) goto CPyL49;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r129 = 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 95, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r130 = CPyStatics[78]; /* 'maxPriorityFeePerGas' */
    cpy_r_r131 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r131 != NULL)) goto CPyL52;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 96, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r133 = CPyStatics[80]; /* 'accessList' */
    cpy_r_r134 = CPyStatics[91]; /* 'storageKeys' */
    cpy_r_r135 = CPyStatics[92]; /* 'storage_keys' */
    cpy_r_r136 = CPyDict_Build(1, cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 98, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r137 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 98, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r138 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 97, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r139 = CPyStatics[82]; /* 'authorizationList' */
    cpy_r_r140 = CPyStatics[85]; /* 'chain_id' */
    cpy_r_r141 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r141 == NULL)) {
        goto CPyL478;
    } else
        goto CPyL58;
CPyL56: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r142 = 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 104, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r143 = CPyStatics[90]; /* 'nonce' */
    cpy_r_r144 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r144 == NULL)) {
        goto CPyL479;
    } else
        goto CPyL61;
CPyL59: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r145 = 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 105, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r146 = CPyStatics[93]; /* 'y_parity' */
    cpy_r_r147 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r147 == NULL)) {
        goto CPyL480;
    } else
        goto CPyL64;
CPyL62: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r148 = 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 106, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r149 = CPyStatics[94]; /* 'r' */
    cpy_r_r150 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r150 == NULL)) {
        goto CPyL481;
    } else
        goto CPyL67;
CPyL65: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r151 = 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 107, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r152 = CPyStatics[95]; /* 's' */
    cpy_r_r153 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r153 == NULL)) {
        goto CPyL482;
    } else
        goto CPyL70;
CPyL68: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r154 = 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 108, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r155 = CPyDict_Build(5, cpy_r_r140, cpy_r_r141, cpy_r_r143, cpy_r_r144, cpy_r_r146, cpy_r_r147, cpy_r_r149, cpy_r_r150, cpy_r_r152, cpy_r_r153);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 103, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL483;
    }
    cpy_r_r156 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r157 = CPyStatics[42]; /* 'apply_formatters_to_dict' */
    cpy_r_r158 = CPyDict_GetItem(cpy_r_r156, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 102, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL484;
    }
    PyObject *cpy_r_r159[1] = {cpy_r_r155};
    cpy_r_r160 = (PyObject **)&cpy_r_r159;
    cpy_r_r161 = PyObject_Vectorcall(cpy_r_r158, cpy_r_r160, 1, 0);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 102, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL484;
    }
    CPy_DECREF(cpy_r_r155);
    cpy_r_r162 = CPyStatics[84]; /* 'chainId' */
    cpy_r_r163 = CPyStatics[85]; /* 'chain_id' */
    cpy_r_r164 = CPyStatics[96]; /* 'yParity' */
    cpy_r_r165 = CPyStatics[93]; /* 'y_parity' */
    cpy_r_r166 = CPyDict_Build(2, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 111, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL485;
    }
    cpy_r_r167 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r166);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 111, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL485;
    }
    cpy_r_r168 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r169 = CPyStatics[45]; /* 'compose' */
    cpy_r_r170 = CPyDict_GetItem(cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 101, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL486;
    }
    PyObject *cpy_r_r171[2] = {cpy_r_r161, cpy_r_r167};
    cpy_r_r172 = (PyObject **)&cpy_r_r171;
    cpy_r_r173 = PyObject_Vectorcall(cpy_r_r170, cpy_r_r172, 2, 0);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 101, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL486;
    }
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_r167);
    cpy_r_r174 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r173);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 100, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL483;
    }
    cpy_r_r175 = CPyDict_Build(9, cpy_r_r112, cpy_r_r113, cpy_r_r115, cpy_r_r116, cpy_r_r118, cpy_r_r119, cpy_r_r121, cpy_r_r122, cpy_r_r124, cpy_r_r125, cpy_r_r127, cpy_r_r128, cpy_r_r130, cpy_r_r131, cpy_r_r133, cpy_r_r138, cpy_r_r139, cpy_r_r174);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 89, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS = cpy_r_r175;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS);
    cpy_r_r176 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r177 = CPyStatics[97]; /* 'TRANSACTION_REQUEST_FORMATTERS' */
    cpy_r_r178 = CPyDict_SetItem(cpy_r_r176, cpy_r_r177, cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 89, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r180 = CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS;
    if (likely(cpy_r_r180 != NULL)) goto CPyL83;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRANSACTION_REQUEST_FORMATTERS\" was not set");
    cpy_r_r181 = 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 115, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r182 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r183 = CPyStatics[42]; /* 'apply_formatters_to_dict' */
    cpy_r_r184 = CPyDict_GetItem(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 115, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r185[1] = {cpy_r_r180};
    cpy_r_r186 = (PyObject **)&cpy_r_r185;
    cpy_r_r187 = PyObject_Vectorcall(cpy_r_r184, cpy_r_r186, 1, 0);
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 115, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter = cpy_r_r187;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter);
    cpy_r_r188 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r189 = CPyStatics[98]; /* 'transaction_request_formatter' */
    cpy_r_r190 = CPyDict_SetItem(cpy_r_r188, cpy_r_r189, cpy_r_r187);
    CPy_DECREF(cpy_r_r187);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 115, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r192 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper;
    if (likely(cpy_r_r192 != NULL)) goto CPyL89;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_request_remapper\" was not set");
    cpy_r_r193 = 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 118, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r194 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter;
    if (likely(cpy_r_r194 != NULL)) goto CPyL92;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_request_formatter\" was not set");
    cpy_r_r195 = 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 119, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL92: ;
    cpy_r_r196 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r197 = CPyStatics[45]; /* 'compose' */
    cpy_r_r198 = CPyDict_GetItem(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 117, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r199[2] = {cpy_r_r192, cpy_r_r194};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = PyObject_Vectorcall(cpy_r_r198, cpy_r_r200, 2, 0);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 117, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer = cpy_r_r201;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer);
    cpy_r_r202 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r203 = CPyStatics[99]; /* 'transaction_request_transformer' */
    cpy_r_r204 = CPyDict_SetItem(cpy_r_r202, cpy_r_r203, cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 117, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r206 = CPyStatics[100]; /* 'fromBlock' */
    cpy_r_r207 = CPyStatics[101]; /* 'from_block' */
    cpy_r_r208 = CPyStatics[102]; /* 'toBlock' */
    cpy_r_r209 = CPyStatics[103]; /* 'to_block' */
    cpy_r_r210 = CPyDict_Build(2, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 122, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING = cpy_r_r210;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING);
    cpy_r_r211 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r212 = CPyStatics[104]; /* 'FILTER_REQUEST_KEY_MAPPING' */
    cpy_r_r213 = CPyDict_SetItem(cpy_r_r211, cpy_r_r212, cpy_r_r210);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 122, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r215 = CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING;
    if (likely(cpy_r_r215 != NULL)) goto CPyL100;
    PyErr_SetString(PyExc_NameError, "value for final name \"FILTER_REQUEST_KEY_MAPPING\" was not set");
    cpy_r_r216 = 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 126, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r217 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r215);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 126, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper = cpy_r_r217;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper);
    cpy_r_r218 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r219 = CPyStatics[105]; /* 'filter_request_remapper' */
    cpy_r_r220 = CPyDict_SetItem(cpy_r_r218, cpy_r_r219, cpy_r_r217);
    CPy_DECREF(cpy_r_r217);
    cpy_r_r221 = cpy_r_r220 >= 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 126, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r222 = CPyStatics[101]; /* 'from_block' */
    cpy_r_r223 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r223 != NULL)) goto CPyL105;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r224 = 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 130, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL105: ;
    cpy_r_r225 = CPyStatics[103]; /* 'to_block' */
    cpy_r_r226 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r226 != NULL)) goto CPyL108;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r227 = 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 131, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL108: ;
    cpy_r_r228 = CPyDict_Build(2, cpy_r_r222, cpy_r_r223, cpy_r_r225, cpy_r_r226);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 129, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS = cpy_r_r228;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS);
    cpy_r_r229 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r230 = CPyStatics[106]; /* 'FILTER_REQUEST_FORMATTERS' */
    cpy_r_r231 = CPyDict_SetItem(cpy_r_r229, cpy_r_r230, cpy_r_r228);
    CPy_DECREF(cpy_r_r228);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 129, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r233 = CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS;
    if (likely(cpy_r_r233 != NULL)) goto CPyL113;
    PyErr_SetString(PyExc_NameError, "value for final name \"FILTER_REQUEST_FORMATTERS\" was not set");
    cpy_r_r234 = 0;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 133, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL113: ;
    cpy_r_r235 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r236 = CPyStatics[42]; /* 'apply_formatters_to_dict' */
    cpy_r_r237 = CPyDict_GetItem(cpy_r_r235, cpy_r_r236);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 133, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r238[1] = {cpy_r_r233};
    cpy_r_r239 = (PyObject **)&cpy_r_r238;
    cpy_r_r240 = PyObject_Vectorcall(cpy_r_r237, cpy_r_r239, 1, 0);
    CPy_DECREF(cpy_r_r237);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 133, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter = cpy_r_r240;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter);
    cpy_r_r241 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r242 = CPyStatics[107]; /* 'filter_request_formatter' */
    cpy_r_r243 = CPyDict_SetItem(cpy_r_r241, cpy_r_r242, cpy_r_r240);
    CPy_DECREF(cpy_r_r240);
    cpy_r_r244 = cpy_r_r243 >= 0;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 133, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r245 = CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter;
    if (likely(cpy_r_r245 != NULL)) goto CPyL119;
    PyErr_SetString(PyExc_NameError, "value for final name \"filter_request_formatter\" was not set");
    cpy_r_r246 = 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 136, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL119: ;
    cpy_r_r247 = CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper;
    if (likely(cpy_r_r247 != NULL)) goto CPyL122;
    PyErr_SetString(PyExc_NameError, "value for final name \"filter_request_remapper\" was not set");
    cpy_r_r248 = 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 137, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r249 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r250 = CPyStatics[45]; /* 'compose' */
    cpy_r_r251 = CPyDict_GetItem(cpy_r_r249, cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 135, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r252[2] = {cpy_r_r245, cpy_r_r247};
    cpy_r_r253 = (PyObject **)&cpy_r_r252;
    cpy_r_r254 = PyObject_Vectorcall(cpy_r_r251, cpy_r_r253, 2, 0);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 135, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer = cpy_r_r254;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer);
    cpy_r_r255 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r256 = CPyStatics[108]; /* 'filter_request_transformer' */
    cpy_r_r257 = CPyDict_SetItem(cpy_r_r255, cpy_r_r256, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    cpy_r_r258 = cpy_r_r257 >= 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 135, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r259 = CPyStatics[81]; /* 'access_list' */
    cpy_r_r260 = CPyStatics[80]; /* 'accessList' */
    cpy_r_r261 = CPyStatics[83]; /* 'authorization_list' */
    cpy_r_r262 = CPyStatics[82]; /* 'authorizationList' */
    cpy_r_r263 = CPyStatics[71]; /* 'blob_versioned_hashes' */
    cpy_r_r264 = CPyStatics[70]; /* 'blobVersionedHashes' */
    cpy_r_r265 = CPyStatics[109]; /* 'block_hash' */
    cpy_r_r266 = CPyStatics[110]; /* 'blockHash' */
    cpy_r_r267 = CPyStatics[111]; /* 'block_number' */
    cpy_r_r268 = CPyStatics[112]; /* 'blockNumber' */
    cpy_r_r269 = CPyStatics[85]; /* 'chain_id' */
    cpy_r_r270 = CPyStatics[84]; /* 'chainId' */
    cpy_r_r271 = CPyStatics[73]; /* 'gas_price' */
    cpy_r_r272 = CPyStatics[72]; /* 'gasPrice' */
    cpy_r_r273 = CPyStatics[75]; /* 'max_fee_per_blob_gas' */
    cpy_r_r274 = CPyStatics[74]; /* 'maxFeePerBlobGas' */
    cpy_r_r275 = CPyStatics[77]; /* 'max_fee_per_gas' */
    cpy_r_r276 = CPyStatics[76]; /* 'maxFeePerGas' */
    cpy_r_r277 = CPyStatics[79]; /* 'max_priority_fee_per_gas' */
    cpy_r_r278 = CPyStatics[78]; /* 'maxPriorityFeePerGas' */
    cpy_r_r279 = CPyStatics[113]; /* 'transaction_hash' */
    cpy_r_r280 = CPyStatics[114]; /* 'transactionHash' */
    cpy_r_r281 = CPyStatics[115]; /* 'transaction_index' */
    cpy_r_r282 = CPyStatics[116]; /* 'transactionIndex' */
    cpy_r_r283 = CPyStatics[117]; /* 'data' */
    cpy_r_r284 = CPyStatics[118]; /* 'input' */
    cpy_r_r285 = CPyDict_Build(13, cpy_r_r259, cpy_r_r260, cpy_r_r261, cpy_r_r262, cpy_r_r263, cpy_r_r264, cpy_r_r265, cpy_r_r266, cpy_r_r267, cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272, cpy_r_r273, cpy_r_r274, cpy_r_r275, cpy_r_r276, cpy_r_r277, cpy_r_r278, cpy_r_r279, cpy_r_r280, cpy_r_r281, cpy_r_r282, cpy_r_r283, cpy_r_r284);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 143, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING = cpy_r_r285;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING);
    cpy_r_r286 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r287 = CPyStatics[119]; /* 'TRANSACTION_RESULT_KEY_MAPPING' */
    cpy_r_r288 = CPyDict_SetItem(cpy_r_r286, cpy_r_r287, cpy_r_r285);
    CPy_DECREF(cpy_r_r285);
    cpy_r_r289 = cpy_r_r288 >= 0;
    if (unlikely(!cpy_r_r289)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 143, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r290 = CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING;
    if (likely(cpy_r_r290 != NULL)) goto CPyL130;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRANSACTION_RESULT_KEY_MAPPING\" was not set");
    cpy_r_r291 = 0;
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 158, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r292 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r290);
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 158, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper = cpy_r_r292;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper);
    cpy_r_r293 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r294 = CPyStatics[120]; /* 'transaction_result_remapper' */
    cpy_r_r295 = CPyDict_SetItem(cpy_r_r293, cpy_r_r294, cpy_r_r292);
    CPy_DECREF(cpy_r_r292);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 158, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r297 = CPyStatics[121]; /* 'to' */
    cpy_r_r298 = CPyModule_operator;
    cpy_r_r299 = CPyStatics[122]; /* 'eq' */
    cpy_r_r300 = CPyObject_GetAttr(cpy_r_r298, cpy_r_r299);
    if (unlikely(cpy_r_r300 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 162, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r301 = CPyStatics[123]; /* '' */
    cpy_r_r302 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r303 = CPyStatics[48]; /* 'partial' */
    cpy_r_r304 = CPyDict_GetItem(cpy_r_r302, cpy_r_r303);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 162, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL487;
    }
    PyObject *cpy_r_r305[2] = {cpy_r_r300, cpy_r_r301};
    cpy_r_r306 = (PyObject **)&cpy_r_r305;
    cpy_r_r307 = PyObject_Vectorcall(cpy_r_r304, cpy_r_r306, 2, 0);
    CPy_DECREF(cpy_r_r304);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 162, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL487;
    }
    CPy_DECREF(cpy_r_r300);
    cpy_r_r308 = Py_None;
    cpy_r_r309 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___static_return(cpy_r_r308);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 162, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL488;
    }
    cpy_r_r310 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r311 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r312 = CPyDict_GetItem(cpy_r_r310, cpy_r_r311);
    if (unlikely(cpy_r_r312 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 162, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL489;
    }
    PyObject *cpy_r_r313[2] = {cpy_r_r307, cpy_r_r309};
    cpy_r_r314 = (PyObject **)&cpy_r_r313;
    cpy_r_r315 = PyObject_Vectorcall(cpy_r_r312, cpy_r_r314, 2, 0);
    CPy_DECREF(cpy_r_r312);
    if (unlikely(cpy_r_r315 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 162, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL489;
    }
    CPy_DECREF(cpy_r_r307);
    CPy_DECREF(cpy_r_r309);
    cpy_r_r316 = CPyStatics[81]; /* 'access_list' */
    cpy_r_r317 = CPyStatics[92]; /* 'storage_keys' */
    cpy_r_r318 = CPyStatics[91]; /* 'storageKeys' */
    cpy_r_r319 = CPyDict_Build(1, cpy_r_r317, cpy_r_r318);
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 164, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL490;
    }
    cpy_r_r320 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r319);
    CPy_DECREF(cpy_r_r319);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 164, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL490;
    }
    cpy_r_r321 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r320);
    CPy_DECREF(cpy_r_r320);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 163, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL490;
    }
    cpy_r_r322 = CPyStatics[83]; /* 'authorization_list' */
    cpy_r_r323 = CPyStatics[85]; /* 'chain_id' */
    cpy_r_r324 = CPyStatics[84]; /* 'chainId' */
    cpy_r_r325 = CPyStatics[93]; /* 'y_parity' */
    cpy_r_r326 = CPyStatics[96]; /* 'yParity' */
    cpy_r_r327 = CPyDict_Build(2, cpy_r_r323, cpy_r_r324, cpy_r_r325, cpy_r_r326);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 167, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL491;
    }
    cpy_r_r328 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r327);
    CPy_DECREF(cpy_r_r327);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 167, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL491;
    }
    cpy_r_r329 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r328);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 166, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL491;
    }
    cpy_r_r330 = CPyDict_Build(3, cpy_r_r297, cpy_r_r315, cpy_r_r316, cpy_r_r321, cpy_r_r322, cpy_r_r329);
    CPy_DECREF(cpy_r_r315);
    CPy_DECREF(cpy_r_r321);
    CPy_DECREF(cpy_r_r329);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 161, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS = cpy_r_r330;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS);
    cpy_r_r331 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r332 = CPyStatics[124]; /* 'TRANSACTION_RESULT_FORMATTERS' */
    cpy_r_r333 = CPyDict_SetItem(cpy_r_r331, cpy_r_r332, cpy_r_r330);
    CPy_DECREF(cpy_r_r330);
    cpy_r_r334 = cpy_r_r333 >= 0;
    if (unlikely(!cpy_r_r334)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 161, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r335 = CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS;
    if (likely(cpy_r_r335 != NULL)) goto CPyL149;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRANSACTION_RESULT_FORMATTERS\" was not set");
    cpy_r_r336 = 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 170, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL149: ;
    cpy_r_r337 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r338 = CPyStatics[42]; /* 'apply_formatters_to_dict' */
    cpy_r_r339 = CPyDict_GetItem(cpy_r_r337, cpy_r_r338);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 170, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r340[1] = {cpy_r_r335};
    cpy_r_r341 = (PyObject **)&cpy_r_r340;
    cpy_r_r342 = PyObject_Vectorcall(cpy_r_r339, cpy_r_r341, 1, 0);
    CPy_DECREF(cpy_r_r339);
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 170, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter = cpy_r_r342;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter);
    cpy_r_r343 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r344 = CPyStatics[125]; /* 'transaction_result_formatter' */
    cpy_r_r345 = CPyDict_SetItem(cpy_r_r343, cpy_r_r344, cpy_r_r342);
    CPy_DECREF(cpy_r_r342);
    cpy_r_r346 = cpy_r_r345 >= 0;
    if (unlikely(!cpy_r_r346)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 170, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r347 = CPyStatics[126]; /* 'log_index' */
    cpy_r_r348 = CPyStatics[127]; /* 'logIndex' */
    cpy_r_r349 = CPyStatics[115]; /* 'transaction_index' */
    cpy_r_r350 = CPyStatics[116]; /* 'transactionIndex' */
    cpy_r_r351 = CPyStatics[113]; /* 'transaction_hash' */
    cpy_r_r352 = CPyStatics[114]; /* 'transactionHash' */
    cpy_r_r353 = CPyStatics[109]; /* 'block_hash' */
    cpy_r_r354 = CPyStatics[110]; /* 'blockHash' */
    cpy_r_r355 = CPyStatics[111]; /* 'block_number' */
    cpy_r_r356 = CPyStatics[112]; /* 'blockNumber' */
    cpy_r_r357 = CPyDict_Build(5, cpy_r_r347, cpy_r_r348, cpy_r_r349, cpy_r_r350, cpy_r_r351, cpy_r_r352, cpy_r_r353, cpy_r_r354, cpy_r_r355, cpy_r_r356);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 173, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING = cpy_r_r357;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING);
    cpy_r_r358 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r359 = CPyStatics[128]; /* 'LOG_RESULT_KEY_MAPPING' */
    cpy_r_r360 = CPyDict_SetItem(cpy_r_r358, cpy_r_r359, cpy_r_r357);
    CPy_DECREF(cpy_r_r357);
    cpy_r_r361 = cpy_r_r360 >= 0;
    if (unlikely(!cpy_r_r361)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 173, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r362 = CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING;
    if (likely(cpy_r_r362 != NULL)) goto CPyL157;
    PyErr_SetString(PyExc_NameError, "value for final name \"LOG_RESULT_KEY_MAPPING\" was not set");
    cpy_r_r363 = 0;
    if (unlikely(!cpy_r_r363)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 180, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL157: ;
    cpy_r_r364 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r362);
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 180, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r365 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r366 = CPyStatics[129]; /* 'log_result_remapper' */
    cpy_r_r367 = CPyDict_SetItem(cpy_r_r365, cpy_r_r366, cpy_r_r364);
    CPy_DECREF(cpy_r_r364);
    cpy_r_r368 = cpy_r_r367 >= 0;
    if (unlikely(!cpy_r_r368)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 180, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r369 = CPyStatics[109]; /* 'block_hash' */
    cpy_r_r370 = CPyStatics[110]; /* 'blockHash' */
    cpy_r_r371 = CPyStatics[111]; /* 'block_number' */
    cpy_r_r372 = CPyStatics[112]; /* 'blockNumber' */
    cpy_r_r373 = CPyStatics[130]; /* 'contract_address' */
    cpy_r_r374 = CPyStatics[131]; /* 'contractAddress' */
    cpy_r_r375 = CPyStatics[132]; /* 'gas_used' */
    cpy_r_r376 = CPyStatics[133]; /* 'gasUsed' */
    cpy_r_r377 = CPyStatics[134]; /* 'cumulative_gas_used' */
    cpy_r_r378 = CPyStatics[135]; /* 'cumulativeGasUsed' */
    cpy_r_r379 = CPyStatics[136]; /* 'effective_gas_price' */
    cpy_r_r380 = CPyStatics[137]; /* 'effectiveGasPrice' */
    cpy_r_r381 = CPyStatics[113]; /* 'transaction_hash' */
    cpy_r_r382 = CPyStatics[114]; /* 'transactionHash' */
    cpy_r_r383 = CPyStatics[115]; /* 'transaction_index' */
    cpy_r_r384 = CPyStatics[116]; /* 'transactionIndex' */
    cpy_r_r385 = CPyStatics[138]; /* 'blob_gas_used' */
    cpy_r_r386 = CPyStatics[139]; /* 'blobGasUsed' */
    cpy_r_r387 = CPyStatics[140]; /* 'blob_gas_price' */
    cpy_r_r388 = CPyStatics[141]; /* 'blobGasPrice' */
    cpy_r_r389 = CPyDict_Build(10, cpy_r_r369, cpy_r_r370, cpy_r_r371, cpy_r_r372, cpy_r_r373, cpy_r_r374, cpy_r_r375, cpy_r_r376, cpy_r_r377, cpy_r_r378, cpy_r_r379, cpy_r_r380, cpy_r_r381, cpy_r_r382, cpy_r_r383, cpy_r_r384, cpy_r_r385, cpy_r_r386, cpy_r_r387, cpy_r_r388);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 183, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING = cpy_r_r389;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING);
    cpy_r_r390 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r391 = CPyStatics[142]; /* 'RECEIPT_RESULT_KEY_MAPPING' */
    cpy_r_r392 = CPyDict_SetItem(cpy_r_r390, cpy_r_r391, cpy_r_r389);
    CPy_DECREF(cpy_r_r389);
    cpy_r_r393 = cpy_r_r392 >= 0;
    if (unlikely(!cpy_r_r393)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 183, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r394 = CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING;
    if (likely(cpy_r_r394 != NULL)) goto CPyL164;
    PyErr_SetString(PyExc_NameError, "value for final name \"RECEIPT_RESULT_KEY_MAPPING\" was not set");
    cpy_r_r395 = 0;
    if (unlikely(!cpy_r_r395)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 195, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL164: ;
    cpy_r_r396 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r394);
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 195, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper = cpy_r_r396;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper);
    cpy_r_r397 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r398 = CPyStatics[143]; /* 'receipt_result_remapper' */
    cpy_r_r399 = CPyDict_SetItem(cpy_r_r397, cpy_r_r398, cpy_r_r396);
    CPy_DECREF(cpy_r_r396);
    cpy_r_r400 = cpy_r_r399 >= 0;
    if (unlikely(!cpy_r_r400)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 195, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r401 = CPyStatics[144]; /* 'gas_limit' */
    cpy_r_r402 = CPyStatics[145]; /* 'gasLimit' */
    cpy_r_r403 = CPyStatics[146]; /* 'sha3_uncles' */
    cpy_r_r404 = CPyStatics[147]; /* 'sha3Uncles' */
    cpy_r_r405 = CPyStatics[148]; /* 'transactions_root' */
    cpy_r_r406 = CPyStatics[149]; /* 'transactionsRoot' */
    cpy_r_r407 = CPyStatics[150]; /* 'parent_hash' */
    cpy_r_r408 = CPyStatics[151]; /* 'parentHash' */
    cpy_r_r409 = CPyStatics[152]; /* 'logs_bloom' */
    cpy_r_r410 = CPyStatics[153]; /* 'logsBloom' */
    cpy_r_r411 = CPyStatics[154]; /* 'state_root' */
    cpy_r_r412 = CPyStatics[155]; /* 'stateRoot' */
    cpy_r_r413 = CPyStatics[156]; /* 'receipts_root' */
    cpy_r_r414 = CPyStatics[157]; /* 'receiptsRoot' */
    cpy_r_r415 = CPyStatics[158]; /* 'total_difficulty' */
    cpy_r_r416 = CPyStatics[159]; /* 'totalDifficulty' */
    cpy_r_r417 = CPyStatics[160]; /* 'extra_data' */
    cpy_r_r418 = CPyStatics[161]; /* 'extraData' */
    cpy_r_r419 = CPyStatics[132]; /* 'gas_used' */
    cpy_r_r420 = CPyStatics[133]; /* 'gasUsed' */
    cpy_r_r421 = CPyStatics[162]; /* 'base_fee_per_gas' */
    cpy_r_r422 = CPyStatics[163]; /* 'baseFeePerGas' */
    cpy_r_r423 = CPyStatics[164]; /* 'mix_hash' */
    cpy_r_r424 = CPyStatics[165]; /* 'mixHash' */
    cpy_r_r425 = CPyStatics[166]; /* 'coinbase' */
    cpy_r_r426 = CPyStatics[167]; /* 'miner' */
    cpy_r_r427 = CPyStatics[168]; /* 'withdrawals_root' */
    cpy_r_r428 = CPyStatics[169]; /* 'withdrawalsRoot' */
    cpy_r_r429 = CPyStatics[170]; /* 'parent_beacon_block_root' */
    cpy_r_r430 = CPyStatics[171]; /* 'parentBeaconBlockRoot' */
    cpy_r_r431 = CPyStatics[138]; /* 'blob_gas_used' */
    cpy_r_r432 = CPyStatics[139]; /* 'blobGasUsed' */
    cpy_r_r433 = CPyStatics[172]; /* 'excess_blob_gas' */
    cpy_r_r434 = CPyStatics[173]; /* 'excessBlobGas' */
    cpy_r_r435 = CPyStatics[174]; /* 'requests_hash' */
    cpy_r_r436 = CPyStatics[175]; /* 'requestsHash' */
    cpy_r_r437 = CPyDict_Build(18, cpy_r_r401, cpy_r_r402, cpy_r_r403, cpy_r_r404, cpy_r_r405, cpy_r_r406, cpy_r_r407, cpy_r_r408, cpy_r_r409, cpy_r_r410, cpy_r_r411, cpy_r_r412, cpy_r_r413, cpy_r_r414, cpy_r_r415, cpy_r_r416, cpy_r_r417, cpy_r_r418, cpy_r_r419, cpy_r_r420, cpy_r_r421, cpy_r_r422, cpy_r_r423, cpy_r_r424, cpy_r_r425, cpy_r_r426, cpy_r_r427, cpy_r_r428, cpy_r_r429, cpy_r_r430, cpy_r_r431, cpy_r_r432, cpy_r_r433, cpy_r_r434, cpy_r_r435, cpy_r_r436);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 198, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING = cpy_r_r437;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING);
    cpy_r_r438 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r439 = CPyStatics[176]; /* 'BLOCK_RESULT_KEY_MAPPING' */
    cpy_r_r440 = CPyDict_SetItem(cpy_r_r438, cpy_r_r439, cpy_r_r437);
    CPy_DECREF(cpy_r_r437);
    cpy_r_r441 = cpy_r_r440 >= 0;
    if (unlikely(!cpy_r_r441)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 198, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r442 = CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING;
    if (likely(cpy_r_r442 != NULL)) goto CPyL171;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCK_RESULT_KEY_MAPPING\" was not set");
    cpy_r_r443 = 0;
    if (unlikely(!cpy_r_r443)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 221, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL171: ;
    cpy_r_r444 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r442);
    if (unlikely(cpy_r_r444 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 221, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper = cpy_r_r444;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper);
    cpy_r_r445 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r446 = CPyStatics[177]; /* 'block_result_remapper' */
    cpy_r_r447 = CPyDict_SetItem(cpy_r_r445, cpy_r_r446, cpy_r_r444);
    CPy_DECREF(cpy_r_r444);
    cpy_r_r448 = cpy_r_r447 >= 0;
    if (unlikely(!cpy_r_r448)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 221, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r449 = CPyStatics[178]; /* 'withdrawals' */
    cpy_r_r450 = CPyStatics[179]; /* 'validator_index' */
    cpy_r_r451 = CPyStatics[180]; /* 'validatorIndex' */
    cpy_r_r452 = CPyDict_Build(1, cpy_r_r450, cpy_r_r451);
    if (unlikely(cpy_r_r452 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 225, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r453 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r452);
    CPy_DECREF(cpy_r_r452);
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 225, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r454 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r453);
    CPy_DECREF(cpy_r_r453);
    if (unlikely(cpy_r_r454 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 224, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r455 = CPyDict_Build(1, cpy_r_r449, cpy_r_r454);
    CPy_DECREF(cpy_r_r454);
    if (unlikely(cpy_r_r455 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 223, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS = cpy_r_r455;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS);
    cpy_r_r456 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r457 = CPyStatics[181]; /* 'BLOCK_RESULT_FORMATTERS' */
    cpy_r_r458 = CPyDict_SetItem(cpy_r_r456, cpy_r_r457, cpy_r_r455);
    CPy_DECREF(cpy_r_r455);
    cpy_r_r459 = cpy_r_r458 >= 0;
    if (unlikely(!cpy_r_r459)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 223, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r460 = CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS;
    if (likely(cpy_r_r460 != NULL)) goto CPyL181;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCK_RESULT_FORMATTERS\" was not set");
    cpy_r_r461 = 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 228, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL181: ;
    cpy_r_r462 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r463 = CPyStatics[42]; /* 'apply_formatters_to_dict' */
    cpy_r_r464 = CPyDict_GetItem(cpy_r_r462, cpy_r_r463);
    if (unlikely(cpy_r_r464 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 228, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r465[1] = {cpy_r_r460};
    cpy_r_r466 = (PyObject **)&cpy_r_r465;
    cpy_r_r467 = PyObject_Vectorcall(cpy_r_r464, cpy_r_r466, 1, 0);
    CPy_DECREF(cpy_r_r464);
    if (unlikely(cpy_r_r467 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 228, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter = cpy_r_r467;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter);
    cpy_r_r468 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r469 = CPyStatics[182]; /* 'block_result_formatter' */
    cpy_r_r470 = CPyDict_SetItem(cpy_r_r468, cpy_r_r469, cpy_r_r467);
    CPy_DECREF(cpy_r_r467);
    cpy_r_r471 = cpy_r_r470 >= 0;
    if (unlikely(!cpy_r_r471)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 228, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r472 = CPyStatics[183]; /* 'logs' */
    cpy_r_r473 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r474 = CPyStatics[129]; /* 'log_result_remapper' */
    cpy_r_r475 = CPyDict_GetItem(cpy_r_r473, cpy_r_r474);
    if (unlikely(cpy_r_r475 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 232, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r476 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r475);
    CPy_DECREF(cpy_r_r475);
    if (unlikely(cpy_r_r476 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 232, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r477 = CPyDict_Build(1, cpy_r_r472, cpy_r_r476);
    CPy_DECREF(cpy_r_r476);
    if (unlikely(cpy_r_r477 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 231, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS = cpy_r_r477;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS);
    cpy_r_r478 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r479 = CPyStatics[184]; /* 'RECEIPT_RESULT_FORMATTERS' */
    cpy_r_r480 = CPyDict_SetItem(cpy_r_r478, cpy_r_r479, cpy_r_r477);
    CPy_DECREF(cpy_r_r477);
    cpy_r_r481 = cpy_r_r480 >= 0;
    if (unlikely(!cpy_r_r481)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 231, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r482 = CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS;
    if (likely(cpy_r_r482 != NULL)) goto CPyL191;
    PyErr_SetString(PyExc_NameError, "value for final name \"RECEIPT_RESULT_FORMATTERS\" was not set");
    cpy_r_r483 = 0;
    if (unlikely(!cpy_r_r483)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 234, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL191: ;
    cpy_r_r484 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r485 = CPyStatics[42]; /* 'apply_formatters_to_dict' */
    cpy_r_r486 = CPyDict_GetItem(cpy_r_r484, cpy_r_r485);
    if (unlikely(cpy_r_r486 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 234, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r487[1] = {cpy_r_r482};
    cpy_r_r488 = (PyObject **)&cpy_r_r487;
    cpy_r_r489 = PyObject_Vectorcall(cpy_r_r486, cpy_r_r488, 1, 0);
    CPy_DECREF(cpy_r_r486);
    if (unlikely(cpy_r_r489 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 234, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter = cpy_r_r489;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter);
    cpy_r_r490 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r491 = CPyStatics[185]; /* 'receipt_result_formatter' */
    cpy_r_r492 = CPyDict_SetItem(cpy_r_r490, cpy_r_r491, cpy_r_r489);
    CPy_DECREF(cpy_r_r489);
    cpy_r_r493 = cpy_r_r492 >= 0;
    if (unlikely(!cpy_r_r493)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 234, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r494 = CPyStatics[186]; /* 'oldest_block' */
    cpy_r_r495 = CPyStatics[187]; /* 'oldestBlock' */
    cpy_r_r496 = CPyStatics[162]; /* 'base_fee_per_gas' */
    cpy_r_r497 = CPyStatics[163]; /* 'baseFeePerGas' */
    cpy_r_r498 = CPyStatics[188]; /* 'gas_used_ratio' */
    cpy_r_r499 = CPyStatics[189]; /* 'gasUsedRatio' */
    cpy_r_r500 = CPyDict_Build(3, cpy_r_r494, cpy_r_r495, cpy_r_r496, cpy_r_r497, cpy_r_r498, cpy_r_r499);
    if (unlikely(cpy_r_r500 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 238, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r501 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_key_map(cpy_r_r500);
    CPy_DECREF(cpy_r_r500);
    if (unlikely(cpy_r_r501 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 237, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper = cpy_r_r501;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper);
    cpy_r_r502 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r503 = CPyStatics[190]; /* 'fee_history_result_remapper' */
    cpy_r_r504 = CPyDict_SetItem(cpy_r_r502, cpy_r_r503, cpy_r_r501);
    CPy_DECREF(cpy_r_r501);
    cpy_r_r505 = cpy_r_r504 >= 0;
    if (unlikely(!cpy_r_r505)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 237, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r506 = CPyStatics[191]; /* 'eth_getBlockByNumber' */
    cpy_r_r507 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (likely(cpy_r_r507 != NULL)) goto CPyL200;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r508 = 0;
    if (unlikely(!cpy_r_r508)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 249, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL200: ;
    cpy_r_r509 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (likely(cpy_r_r509 != NULL)) goto CPyL203;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r510 = 0;
    if (unlikely(!cpy_r_r510)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 249, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL203: ;
    cpy_r_r511 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r512 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r513 = CPyDict_GetItem(cpy_r_r511, cpy_r_r512);
    if (unlikely(cpy_r_r513 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 249, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    PyObject *cpy_r_r514[2] = {cpy_r_r507, cpy_r_r509};
    cpy_r_r515 = (PyObject **)&cpy_r_r514;
    cpy_r_r516 = PyObject_Vectorcall(cpy_r_r513, cpy_r_r515, 2, 0);
    CPy_DECREF(cpy_r_r513);
    if (unlikely(cpy_r_r516 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 249, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r517 = PyTuple_Pack(1, cpy_r_r516);
    CPy_DECREF(cpy_r_r516);
    if (unlikely(cpy_r_r517 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 248, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r518 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r517);
    CPy_DECREF(cpy_r_r517);
    if (unlikely(cpy_r_r518 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 248, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r519 = CPyStatics[192]; /* 'eth_getFilterChanges' */
    cpy_r_r520 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r521 = CPyStatics[52]; /* 'hex_to_integer' */
    cpy_r_r522 = CPyDict_GetItem(cpy_r_r520, cpy_r_r521);
    if (unlikely(cpy_r_r522 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 251, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL492;
    }
    cpy_r_r523 = PyTuple_Pack(1, cpy_r_r522);
    CPy_DECREF(cpy_r_r522);
    if (unlikely(cpy_r_r523 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 251, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL492;
    }
    cpy_r_r524 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r523);
    CPy_DECREF(cpy_r_r523);
    if (unlikely(cpy_r_r524 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 251, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL492;
    }
    cpy_r_r525 = CPyStatics[193]; /* 'eth_getFilterLogs' */
    cpy_r_r526 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r527 = CPyStatics[52]; /* 'hex_to_integer' */
    cpy_r_r528 = CPyDict_GetItem(cpy_r_r526, cpy_r_r527);
    if (unlikely(cpy_r_r528 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 252, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL493;
    }
    cpy_r_r529 = PyTuple_Pack(1, cpy_r_r528);
    CPy_DECREF(cpy_r_r528);
    if (unlikely(cpy_r_r529 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 252, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL493;
    }
    cpy_r_r530 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r529);
    CPy_DECREF(cpy_r_r529);
    if (unlikely(cpy_r_r530 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 252, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL493;
    }
    cpy_r_r531 = CPyStatics[194]; /* 'eth_getTransactionCount' */
    cpy_r_r532 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r533 = CPyStatics[47]; /* 'identity' */
    cpy_r_r534 = CPyDict_GetItem(cpy_r_r532, cpy_r_r533);
    if (unlikely(cpy_r_r534 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 254, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL494;
    }
    cpy_r_r535 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r535 == NULL)) {
        goto CPyL495;
    } else
        goto CPyL217;
CPyL215: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r536 = 0;
    if (unlikely(!cpy_r_r536)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 255, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL217: ;
    cpy_r_r537 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r537 == NULL)) {
        goto CPyL496;
    } else
        goto CPyL220;
CPyL218: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r538 = 0;
    if (unlikely(!cpy_r_r538)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 255, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL220: ;
    cpy_r_r539 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r540 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r541 = CPyDict_GetItem(cpy_r_r539, cpy_r_r540);
    if (unlikely(cpy_r_r541 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 255, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL497;
    }
    PyObject *cpy_r_r542[2] = {cpy_r_r535, cpy_r_r537};
    cpy_r_r543 = (PyObject **)&cpy_r_r542;
    cpy_r_r544 = PyObject_Vectorcall(cpy_r_r541, cpy_r_r543, 2, 0);
    CPy_DECREF(cpy_r_r541);
    if (unlikely(cpy_r_r544 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 255, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL497;
    }
    cpy_r_r545 = PyTuple_Pack(2, cpy_r_r534, cpy_r_r544);
    CPy_DECREF(cpy_r_r534);
    CPy_DECREF(cpy_r_r544);
    if (unlikely(cpy_r_r545 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 253, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL494;
    }
    cpy_r_r546 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r545);
    CPy_DECREF(cpy_r_r545);
    if (unlikely(cpy_r_r546 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 253, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL494;
    }
    cpy_r_r547 = CPyStatics[195]; /* 'eth_getBlockTransactionCountByNumber' */
    cpy_r_r548 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r548 == NULL)) {
        goto CPyL498;
    } else
        goto CPyL227;
CPyL225: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r549 = 0;
    if (unlikely(!cpy_r_r549)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 258, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL227: ;
    cpy_r_r550 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r550 == NULL)) {
        goto CPyL499;
    } else
        goto CPyL230;
CPyL228: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r551 = 0;
    if (unlikely(!cpy_r_r551)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 258, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL230: ;
    cpy_r_r552 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r553 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r554 = CPyDict_GetItem(cpy_r_r552, cpy_r_r553);
    if (unlikely(cpy_r_r554 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 258, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL500;
    }
    PyObject *cpy_r_r555[2] = {cpy_r_r548, cpy_r_r550};
    cpy_r_r556 = (PyObject **)&cpy_r_r555;
    cpy_r_r557 = PyObject_Vectorcall(cpy_r_r554, cpy_r_r556, 2, 0);
    CPy_DECREF(cpy_r_r554);
    if (unlikely(cpy_r_r557 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 258, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL500;
    }
    cpy_r_r558 = PyTuple_Pack(1, cpy_r_r557);
    CPy_DECREF(cpy_r_r557);
    if (unlikely(cpy_r_r558 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 257, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL500;
    }
    cpy_r_r559 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r558);
    CPy_DECREF(cpy_r_r558);
    if (unlikely(cpy_r_r559 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 257, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL500;
    }
    cpy_r_r560 = CPyStatics[196]; /* 'eth_getUncleCountByBlockNumber' */
    cpy_r_r561 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r561 == NULL)) {
        goto CPyL501;
    } else
        goto CPyL237;
CPyL235: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r562 = 0;
    if (unlikely(!cpy_r_r562)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 261, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL237: ;
    cpy_r_r563 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r563 == NULL)) {
        goto CPyL502;
    } else
        goto CPyL240;
CPyL238: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r564 = 0;
    if (unlikely(!cpy_r_r564)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 261, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL240: ;
    cpy_r_r565 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r566 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r567 = CPyDict_GetItem(cpy_r_r565, cpy_r_r566);
    if (unlikely(cpy_r_r567 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 261, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL503;
    }
    PyObject *cpy_r_r568[2] = {cpy_r_r561, cpy_r_r563};
    cpy_r_r569 = (PyObject **)&cpy_r_r568;
    cpy_r_r570 = PyObject_Vectorcall(cpy_r_r567, cpy_r_r569, 2, 0);
    CPy_DECREF(cpy_r_r567);
    if (unlikely(cpy_r_r570 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 261, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL503;
    }
    cpy_r_r571 = PyTuple_Pack(1, cpy_r_r570);
    CPy_DECREF(cpy_r_r570);
    if (unlikely(cpy_r_r571 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 260, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL503;
    }
    cpy_r_r572 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r571);
    CPy_DECREF(cpy_r_r571);
    if (unlikely(cpy_r_r572 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 260, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL503;
    }
    cpy_r_r573 = CPyStatics[197]; /* 'eth_getTransactionByBlockHashAndIndex' */
    cpy_r_r574 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r575 = CPyStatics[47]; /* 'identity' */
    cpy_r_r576 = CPyDict_GetItem(cpy_r_r574, cpy_r_r575);
    if (unlikely(cpy_r_r576 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 264, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL504;
    }
    cpy_r_r577 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r577 == NULL)) {
        goto CPyL505;
    } else
        goto CPyL248;
CPyL246: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r578 = 0;
    if (unlikely(!cpy_r_r578)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 265, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL248: ;
    cpy_r_r579 = PyTuple_Pack(2, cpy_r_r576, cpy_r_r577);
    CPy_DECREF(cpy_r_r576);
    if (unlikely(cpy_r_r579 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 263, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL504;
    }
    cpy_r_r580 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r579);
    CPy_DECREF(cpy_r_r579);
    if (unlikely(cpy_r_r580 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 263, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL504;
    }
    cpy_r_r581 = CPyStatics[198]; /* 'eth_getTransactionByBlockNumberAndIndex' */
    cpy_r_r582 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r582 == NULL)) {
        goto CPyL506;
    } else
        goto CPyL253;
CPyL251: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r583 = 0;
    if (unlikely(!cpy_r_r583)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 268, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL253: ;
    cpy_r_r584 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r584 == NULL)) {
        goto CPyL507;
    } else
        goto CPyL256;
CPyL254: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r585 = 0;
    if (unlikely(!cpy_r_r585)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 268, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL256: ;
    cpy_r_r586 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r587 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r588 = CPyDict_GetItem(cpy_r_r586, cpy_r_r587);
    if (unlikely(cpy_r_r588 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 268, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL508;
    }
    PyObject *cpy_r_r589[2] = {cpy_r_r582, cpy_r_r584};
    cpy_r_r590 = (PyObject **)&cpy_r_r589;
    cpy_r_r591 = PyObject_Vectorcall(cpy_r_r588, cpy_r_r590, 2, 0);
    CPy_DECREF(cpy_r_r588);
    if (unlikely(cpy_r_r591 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 268, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL508;
    }
    cpy_r_r592 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r592 == NULL)) {
        goto CPyL509;
    } else
        goto CPyL261;
CPyL259: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r593 = 0;
    if (unlikely(!cpy_r_r593)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 269, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL261: ;
    cpy_r_r594 = PyTuple_Pack(2, cpy_r_r591, cpy_r_r592);
    CPy_DECREF(cpy_r_r591);
    if (unlikely(cpy_r_r594 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 267, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL508;
    }
    cpy_r_r595 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r594);
    CPy_DECREF(cpy_r_r594);
    if (unlikely(cpy_r_r595 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 267, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL508;
    }
    cpy_r_r596 = CPyStatics[199]; /* 'eth_getUncleByBlockNumberAndIndex' */
    cpy_r_r597 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r597 == NULL)) {
        goto CPyL510;
    } else
        goto CPyL266;
CPyL264: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r598 = 0;
    if (unlikely(!cpy_r_r598)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 272, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL266: ;
    cpy_r_r599 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r599 == NULL)) {
        goto CPyL511;
    } else
        goto CPyL269;
CPyL267: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r600 = 0;
    if (unlikely(!cpy_r_r600)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 272, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL269: ;
    cpy_r_r601 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r602 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r603 = CPyDict_GetItem(cpy_r_r601, cpy_r_r602);
    if (unlikely(cpy_r_r603 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 272, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL512;
    }
    PyObject *cpy_r_r604[2] = {cpy_r_r597, cpy_r_r599};
    cpy_r_r605 = (PyObject **)&cpy_r_r604;
    cpy_r_r606 = PyObject_Vectorcall(cpy_r_r603, cpy_r_r605, 2, 0);
    CPy_DECREF(cpy_r_r603);
    if (unlikely(cpy_r_r606 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 272, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL512;
    }
    cpy_r_r607 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r607 == NULL)) {
        goto CPyL513;
    } else
        goto CPyL274;
CPyL272: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r608 = 0;
    if (unlikely(!cpy_r_r608)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 273, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL274: ;
    cpy_r_r609 = PyTuple_Pack(2, cpy_r_r606, cpy_r_r607);
    CPy_DECREF(cpy_r_r606);
    if (unlikely(cpy_r_r609 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 271, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL512;
    }
    cpy_r_r610 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r609);
    CPy_DECREF(cpy_r_r609);
    if (unlikely(cpy_r_r610 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 271, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL512;
    }
    cpy_r_r611 = CPyStatics[200]; /* 'eth_newFilter' */
    cpy_r_r612 = CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer;
    if (unlikely(cpy_r_r612 == NULL)) {
        goto CPyL514;
    } else
        goto CPyL279;
CPyL277: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"filter_request_transformer\" was not set");
    cpy_r_r613 = 0;
    if (unlikely(!cpy_r_r613)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 276, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL279: ;
    cpy_r_r614 = PyTuple_Pack(1, cpy_r_r612);
    if (unlikely(cpy_r_r614 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 275, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL515;
    }
    cpy_r_r615 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r614);
    CPy_DECREF(cpy_r_r614);
    if (unlikely(cpy_r_r615 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 275, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL515;
    }
    cpy_r_r616 = CPyStatics[201]; /* 'eth_getLogs' */
    cpy_r_r617 = CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer;
    if (unlikely(cpy_r_r617 == NULL)) {
        goto CPyL516;
    } else
        goto CPyL284;
CPyL282: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"filter_request_transformer\" was not set");
    cpy_r_r618 = 0;
    if (unlikely(!cpy_r_r618)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 279, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL284: ;
    cpy_r_r619 = PyTuple_Pack(1, cpy_r_r617);
    if (unlikely(cpy_r_r619 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 278, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL517;
    }
    cpy_r_r620 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r619);
    CPy_DECREF(cpy_r_r619);
    if (unlikely(cpy_r_r620 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 278, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL517;
    }
    cpy_r_r621 = CPyStatics[15]; /* 'eth_sendTransaction' */
    cpy_r_r622 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer;
    if (unlikely(cpy_r_r622 == NULL)) {
        goto CPyL518;
    } else
        goto CPyL289;
CPyL287: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_request_transformer\" was not set");
    cpy_r_r623 = 0;
    if (unlikely(!cpy_r_r623)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 282, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL289: ;
    cpy_r_r624 = PyTuple_Pack(1, cpy_r_r622);
    if (unlikely(cpy_r_r624 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 281, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL519;
    }
    cpy_r_r625 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r624);
    CPy_DECREF(cpy_r_r624);
    if (unlikely(cpy_r_r625 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 281, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL519;
    }
    cpy_r_r626 = CPyStatics[16]; /* 'eth_estimateGas' */
    cpy_r_r627 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer;
    if (unlikely(cpy_r_r627 == NULL)) {
        goto CPyL520;
    } else
        goto CPyL294;
CPyL292: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_request_transformer\" was not set");
    cpy_r_r628 = 0;
    if (unlikely(!cpy_r_r628)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 285, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL294: ;
    cpy_r_r629 = PyTuple_Pack(1, cpy_r_r627);
    if (unlikely(cpy_r_r629 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 284, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL521;
    }
    cpy_r_r630 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r629);
    CPy_DECREF(cpy_r_r629);
    if (unlikely(cpy_r_r630 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 284, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL521;
    }
    cpy_r_r631 = CPyStatics[14]; /* 'eth_call' */
    cpy_r_r632 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer;
    if (unlikely(cpy_r_r632 == NULL)) {
        goto CPyL522;
    } else
        goto CPyL299;
CPyL297: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_request_transformer\" was not set");
    cpy_r_r633 = 0;
    if (unlikely(!cpy_r_r633)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 288, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL299: ;
    cpy_r_r634 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r634 == NULL)) {
        goto CPyL523;
    } else
        goto CPyL302;
CPyL300: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r635 = 0;
    if (unlikely(!cpy_r_r635)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 289, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL302: ;
    cpy_r_r636 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r636 == NULL)) {
        goto CPyL524;
    } else
        goto CPyL305;
CPyL303: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r637 = 0;
    if (unlikely(!cpy_r_r637)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 289, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL305: ;
    cpy_r_r638 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r639 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r640 = CPyDict_GetItem(cpy_r_r638, cpy_r_r639);
    if (unlikely(cpy_r_r640 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 289, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL525;
    }
    PyObject *cpy_r_r641[2] = {cpy_r_r634, cpy_r_r636};
    cpy_r_r642 = (PyObject **)&cpy_r_r641;
    cpy_r_r643 = PyObject_Vectorcall(cpy_r_r640, cpy_r_r642, 2, 0);
    CPy_DECREF(cpy_r_r640);
    if (unlikely(cpy_r_r643 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 289, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL525;
    }
    cpy_r_r644 = PyTuple_Pack(2, cpy_r_r632, cpy_r_r643);
    CPy_DECREF(cpy_r_r643);
    if (unlikely(cpy_r_r644 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 287, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL525;
    }
    cpy_r_r645 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r644);
    CPy_DECREF(cpy_r_r644);
    if (unlikely(cpy_r_r645 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 287, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL525;
    }
    cpy_r_r646 = CPyStatics[17]; /* 'eth_createAccessList' */
    cpy_r_r647 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer;
    if (unlikely(cpy_r_r647 == NULL)) {
        goto CPyL526;
    } else
        goto CPyL312;
CPyL310: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_request_transformer\" was not set");
    cpy_r_r648 = 0;
    if (unlikely(!cpy_r_r648)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 292, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL312: ;
    cpy_r_r649 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r649 == NULL)) {
        goto CPyL527;
    } else
        goto CPyL315;
CPyL313: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r650 = 0;
    if (unlikely(!cpy_r_r650)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 293, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL315: ;
    cpy_r_r651 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r651 == NULL)) {
        goto CPyL528;
    } else
        goto CPyL318;
CPyL316: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r652 = 0;
    if (unlikely(!cpy_r_r652)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 293, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL318: ;
    cpy_r_r653 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r654 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r655 = CPyDict_GetItem(cpy_r_r653, cpy_r_r654);
    if (unlikely(cpy_r_r655 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 293, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL529;
    }
    PyObject *cpy_r_r656[2] = {cpy_r_r649, cpy_r_r651};
    cpy_r_r657 = (PyObject **)&cpy_r_r656;
    cpy_r_r658 = PyObject_Vectorcall(cpy_r_r655, cpy_r_r657, 2, 0);
    CPy_DECREF(cpy_r_r655);
    if (unlikely(cpy_r_r658 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 293, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL529;
    }
    cpy_r_r659 = PyTuple_Pack(2, cpy_r_r647, cpy_r_r658);
    CPy_DECREF(cpy_r_r658);
    if (unlikely(cpy_r_r659 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 291, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL529;
    }
    cpy_r_r660 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r659);
    CPy_DECREF(cpy_r_r659);
    if (unlikely(cpy_r_r660 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 291, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL529;
    }
    cpy_r_r661 = CPyStatics[202]; /* 'eth_uninstallFilter' */
    cpy_r_r662 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r663 = CPyStatics[52]; /* 'hex_to_integer' */
    cpy_r_r664 = CPyDict_GetItem(cpy_r_r662, cpy_r_r663);
    if (unlikely(cpy_r_r664 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 295, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL530;
    }
    cpy_r_r665 = PyTuple_Pack(1, cpy_r_r664);
    CPy_DECREF(cpy_r_r664);
    if (unlikely(cpy_r_r665 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 295, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL530;
    }
    cpy_r_r666 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r665);
    CPy_DECREF(cpy_r_r665);
    if (unlikely(cpy_r_r666 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 295, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL530;
    }
    cpy_r_r667 = CPyStatics[203]; /* 'eth_getCode' */
    cpy_r_r668 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r669 = CPyStatics[47]; /* 'identity' */
    cpy_r_r670 = CPyDict_GetItem(cpy_r_r668, cpy_r_r669);
    if (unlikely(cpy_r_r670 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 297, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL531;
    }
    cpy_r_r671 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r671 == NULL)) {
        goto CPyL532;
    } else
        goto CPyL329;
CPyL327: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r672 = 0;
    if (unlikely(!cpy_r_r672)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 298, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL329: ;
    cpy_r_r673 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r673 == NULL)) {
        goto CPyL533;
    } else
        goto CPyL332;
CPyL330: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r674 = 0;
    if (unlikely(!cpy_r_r674)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 298, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL332: ;
    cpy_r_r675 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r676 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r677 = CPyDict_GetItem(cpy_r_r675, cpy_r_r676);
    if (unlikely(cpy_r_r677 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 298, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL534;
    }
    PyObject *cpy_r_r678[2] = {cpy_r_r671, cpy_r_r673};
    cpy_r_r679 = (PyObject **)&cpy_r_r678;
    cpy_r_r680 = PyObject_Vectorcall(cpy_r_r677, cpy_r_r679, 2, 0);
    CPy_DECREF(cpy_r_r677);
    if (unlikely(cpy_r_r680 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 298, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL534;
    }
    cpy_r_r681 = PyTuple_Pack(2, cpy_r_r670, cpy_r_r680);
    CPy_DECREF(cpy_r_r670);
    CPy_DECREF(cpy_r_r680);
    if (unlikely(cpy_r_r681 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 296, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL531;
    }
    cpy_r_r682 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r681);
    CPy_DECREF(cpy_r_r681);
    if (unlikely(cpy_r_r682 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 296, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL531;
    }
    cpy_r_r683 = CPyStatics[204]; /* 'eth_getBalance' */
    cpy_r_r684 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r685 = CPyStatics[47]; /* 'identity' */
    cpy_r_r686 = CPyDict_GetItem(cpy_r_r684, cpy_r_r685);
    if (unlikely(cpy_r_r686 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 301, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL535;
    }
    cpy_r_r687 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r687 == NULL)) {
        goto CPyL536;
    } else
        goto CPyL340;
CPyL338: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r688 = 0;
    if (unlikely(!cpy_r_r688)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL340: ;
    cpy_r_r689 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r689 == NULL)) {
        goto CPyL537;
    } else
        goto CPyL343;
CPyL341: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r690 = 0;
    if (unlikely(!cpy_r_r690)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL343: ;
    cpy_r_r691 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r692 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r693 = CPyDict_GetItem(cpy_r_r691, cpy_r_r692);
    if (unlikely(cpy_r_r693 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL538;
    }
    PyObject *cpy_r_r694[2] = {cpy_r_r687, cpy_r_r689};
    cpy_r_r695 = (PyObject **)&cpy_r_r694;
    cpy_r_r696 = PyObject_Vectorcall(cpy_r_r693, cpy_r_r695, 2, 0);
    CPy_DECREF(cpy_r_r693);
    if (unlikely(cpy_r_r696 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL538;
    }
    cpy_r_r697 = PyTuple_Pack(2, cpy_r_r686, cpy_r_r696);
    CPy_DECREF(cpy_r_r686);
    CPy_DECREF(cpy_r_r696);
    if (unlikely(cpy_r_r697 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 300, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL535;
    }
    cpy_r_r698 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r697);
    CPy_DECREF(cpy_r_r697);
    if (unlikely(cpy_r_r698 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 300, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL535;
    }
    cpy_r_r699 = CPyStatics[205]; /* 'eth_feeHistory' */
    cpy_r_r700 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r700 == NULL)) {
        goto CPyL539;
    } else
        goto CPyL350;
CPyL348: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r701 = 0;
    if (unlikely(!cpy_r_r701)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 305, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL350: ;
    cpy_r_r702 = CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block;
    if (unlikely(cpy_r_r702 == NULL)) {
        goto CPyL540;
    } else
        goto CPyL353;
CPyL351: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_not_named_block\" was not set");
    cpy_r_r703 = 0;
    if (unlikely(!cpy_r_r703)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 306, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL353: ;
    cpy_r_r704 = CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex;
    if (unlikely(cpy_r_r704 == NULL)) {
        goto CPyL541;
    } else
        goto CPyL356;
CPyL354: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_integer_if_hex\" was not set");
    cpy_r_r705 = 0;
    if (unlikely(!cpy_r_r705)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 306, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL356: ;
    cpy_r_r706 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r707 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r708 = CPyDict_GetItem(cpy_r_r706, cpy_r_r707);
    if (unlikely(cpy_r_r708 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 306, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL542;
    }
    PyObject *cpy_r_r709[2] = {cpy_r_r702, cpy_r_r704};
    cpy_r_r710 = (PyObject **)&cpy_r_r709;
    cpy_r_r711 = PyObject_Vectorcall(cpy_r_r708, cpy_r_r710, 2, 0);
    CPy_DECREF(cpy_r_r708);
    if (unlikely(cpy_r_r711 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 306, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL542;
    }
    cpy_r_r712 = PyTuple_Pack(2, cpy_r_r700, cpy_r_r711);
    CPy_DECREF(cpy_r_r711);
    if (unlikely(cpy_r_r712 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 304, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL542;
    }
    cpy_r_r713 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r712);
    CPy_DECREF(cpy_r_r712);
    if (unlikely(cpy_r_r713 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 304, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL542;
    }
    cpy_r_r714 = CPyStatics[206]; /* 'evm_revert' */
    cpy_r_r715 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r716 = CPyStatics[52]; /* 'hex_to_integer' */
    cpy_r_r717 = CPyDict_GetItem(cpy_r_r715, cpy_r_r716);
    if (unlikely(cpy_r_r717 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 309, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL543;
    }
    cpy_r_r718 = PyTuple_Pack(1, cpy_r_r717);
    CPy_DECREF(cpy_r_r717);
    if (unlikely(cpy_r_r718 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 309, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL543;
    }
    cpy_r_r719 = exports_faster_web3.CPyDef_faster_web3____utils___formatters___apply_formatters_to_args(cpy_r_r718);
    CPy_DECREF(cpy_r_r718);
    if (unlikely(cpy_r_r719 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 309, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL543;
    }
    cpy_r_r720 = CPyDict_Build(20, cpy_r_r506, cpy_r_r518, cpy_r_r519, cpy_r_r524, cpy_r_r525, cpy_r_r530, cpy_r_r531, cpy_r_r546, cpy_r_r547, cpy_r_r559, cpy_r_r560, cpy_r_r572, cpy_r_r573, cpy_r_r580, cpy_r_r581, cpy_r_r595, cpy_r_r596, cpy_r_r610, cpy_r_r611, cpy_r_r615, cpy_r_r616, cpy_r_r620, cpy_r_r621, cpy_r_r625, cpy_r_r626, cpy_r_r630, cpy_r_r631, cpy_r_r645, cpy_r_r646, cpy_r_r660, cpy_r_r661, cpy_r_r666, cpy_r_r667, cpy_r_r682, cpy_r_r683, cpy_r_r698, cpy_r_r699, cpy_r_r713, cpy_r_r714, cpy_r_r719);
    CPy_DECREF(cpy_r_r518);
    CPy_DECREF(cpy_r_r524);
    CPy_DECREF(cpy_r_r530);
    CPy_DECREF(cpy_r_r546);
    CPy_DECREF(cpy_r_r559);
    CPy_DECREF(cpy_r_r572);
    CPy_DECREF(cpy_r_r580);
    CPy_DECREF(cpy_r_r595);
    CPy_DECREF(cpy_r_r610);
    CPy_DECREF(cpy_r_r615);
    CPy_DECREF(cpy_r_r620);
    CPy_DECREF(cpy_r_r625);
    CPy_DECREF(cpy_r_r630);
    CPy_DECREF(cpy_r_r645);
    CPy_DECREF(cpy_r_r660);
    CPy_DECREF(cpy_r_r666);
    CPy_DECREF(cpy_r_r682);
    CPy_DECREF(cpy_r_r698);
    CPy_DECREF(cpy_r_r713);
    CPy_DECREF(cpy_r_r719);
    if (unlikely(cpy_r_r720 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 246, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters = cpy_r_r720;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters);
    cpy_r_r721 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r722 = CPyStatics[207]; /* 'request_formatters' */
    cpy_r_r723 = CPyDict_SetItem(cpy_r_r721, cpy_r_r722, cpy_r_r720);
    CPy_DECREF(cpy_r_r720);
    cpy_r_r724 = cpy_r_r723 >= 0;
    if (unlikely(!cpy_r_r724)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 246, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r725 = CPyStatics[208]; /* 'eth_getBlockByHash' */
    cpy_r_r726 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r727 = CPyStatics[39]; /* 'is_dict' */
    cpy_r_r728 = CPyDict_GetItem(cpy_r_r726, cpy_r_r727);
    if (unlikely(cpy_r_r728 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r729 = CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper;
    if (unlikely(cpy_r_r729 == NULL)) {
        goto CPyL544;
    } else
        goto CPyL369;
CPyL367: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"block_result_remapper\" was not set");
    cpy_r_r730 = 0;
    if (unlikely(!cpy_r_r730)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL369: ;
    cpy_r_r731 = CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter;
    if (unlikely(cpy_r_r731 == NULL)) {
        goto CPyL545;
    } else
        goto CPyL372;
CPyL370: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"block_result_formatter\" was not set");
    cpy_r_r732 = 0;
    if (unlikely(!cpy_r_r732)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL372: ;
    cpy_r_r733 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r734 = CPyStatics[45]; /* 'compose' */
    cpy_r_r735 = CPyDict_GetItem(cpy_r_r733, cpy_r_r734);
    if (unlikely(cpy_r_r735 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL546;
    }
    PyObject *cpy_r_r736[2] = {cpy_r_r729, cpy_r_r731};
    cpy_r_r737 = (PyObject **)&cpy_r_r736;
    cpy_r_r738 = PyObject_Vectorcall(cpy_r_r735, cpy_r_r737, 2, 0);
    CPy_DECREF(cpy_r_r735);
    if (unlikely(cpy_r_r738 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL546;
    }
    cpy_r_r739 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r740 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r741 = CPyDict_GetItem(cpy_r_r739, cpy_r_r740);
    if (unlikely(cpy_r_r741 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 313, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL547;
    }
    PyObject *cpy_r_r742[2] = {cpy_r_r728, cpy_r_r738};
    cpy_r_r743 = (PyObject **)&cpy_r_r742;
    cpy_r_r744 = PyObject_Vectorcall(cpy_r_r741, cpy_r_r743, 2, 0);
    CPy_DECREF(cpy_r_r741);
    if (unlikely(cpy_r_r744 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 313, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL547;
    }
    CPy_DECREF(cpy_r_r728);
    CPy_DECREF(cpy_r_r738);
    cpy_r_r745 = CPyStatics[191]; /* 'eth_getBlockByNumber' */
    cpy_r_r746 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r747 = CPyStatics[39]; /* 'is_dict' */
    cpy_r_r748 = CPyDict_GetItem(cpy_r_r746, cpy_r_r747);
    if (unlikely(cpy_r_r748 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 317, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL548;
    }
    cpy_r_r749 = CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper;
    if (unlikely(cpy_r_r749 == NULL)) {
        goto CPyL549;
    } else
        goto CPyL380;
CPyL378: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"block_result_remapper\" was not set");
    cpy_r_r750 = 0;
    if (unlikely(!cpy_r_r750)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 317, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL380: ;
    cpy_r_r751 = CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter;
    if (unlikely(cpy_r_r751 == NULL)) {
        goto CPyL550;
    } else
        goto CPyL383;
CPyL381: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"block_result_formatter\" was not set");
    cpy_r_r752 = 0;
    if (unlikely(!cpy_r_r752)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 317, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL383: ;
    cpy_r_r753 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r754 = CPyStatics[45]; /* 'compose' */
    cpy_r_r755 = CPyDict_GetItem(cpy_r_r753, cpy_r_r754);
    if (unlikely(cpy_r_r755 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 317, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL551;
    }
    PyObject *cpy_r_r756[2] = {cpy_r_r749, cpy_r_r751};
    cpy_r_r757 = (PyObject **)&cpy_r_r756;
    cpy_r_r758 = PyObject_Vectorcall(cpy_r_r755, cpy_r_r757, 2, 0);
    CPy_DECREF(cpy_r_r755);
    if (unlikely(cpy_r_r758 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 317, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL551;
    }
    cpy_r_r759 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r760 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r761 = CPyDict_GetItem(cpy_r_r759, cpy_r_r760);
    if (unlikely(cpy_r_r761 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 316, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL552;
    }
    PyObject *cpy_r_r762[2] = {cpy_r_r748, cpy_r_r758};
    cpy_r_r763 = (PyObject **)&cpy_r_r762;
    cpy_r_r764 = PyObject_Vectorcall(cpy_r_r761, cpy_r_r763, 2, 0);
    CPy_DECREF(cpy_r_r761);
    if (unlikely(cpy_r_r764 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 316, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL552;
    }
    CPy_DECREF(cpy_r_r748);
    CPy_DECREF(cpy_r_r758);
    cpy_r_r765 = CPyStatics[209]; /* 'eth_getBlockTransactionCountByHash' */
    cpy_r_r766 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r767 = CPyStatics[39]; /* 'is_dict' */
    cpy_r_r768 = CPyDict_GetItem(cpy_r_r766, cpy_r_r767);
    if (unlikely(cpy_r_r768 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 320, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL553;
    }
    cpy_r_r769 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper;
    if (unlikely(cpy_r_r769 == NULL)) {
        goto CPyL554;
    } else
        goto CPyL391;
CPyL389: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_result_remapper\" was not set");
    cpy_r_r770 = 0;
    if (unlikely(!cpy_r_r770)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 321, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL391: ;
    cpy_r_r771 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r772 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r773 = CPyDict_GetItem(cpy_r_r771, cpy_r_r772);
    if (unlikely(cpy_r_r773 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 319, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL555;
    }
    PyObject *cpy_r_r774[2] = {cpy_r_r768, cpy_r_r769};
    cpy_r_r775 = (PyObject **)&cpy_r_r774;
    cpy_r_r776 = PyObject_Vectorcall(cpy_r_r773, cpy_r_r775, 2, 0);
    CPy_DECREF(cpy_r_r773);
    if (unlikely(cpy_r_r776 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 319, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL555;
    }
    CPy_DECREF(cpy_r_r768);
    cpy_r_r777 = CPyStatics[195]; /* 'eth_getBlockTransactionCountByNumber' */
    cpy_r_r778 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r779 = CPyStatics[39]; /* 'is_dict' */
    cpy_r_r780 = CPyDict_GetItem(cpy_r_r778, cpy_r_r779);
    if (unlikely(cpy_r_r780 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 324, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL556;
    }
    cpy_r_r781 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper;
    if (unlikely(cpy_r_r781 == NULL)) {
        goto CPyL557;
    } else
        goto CPyL397;
CPyL395: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_result_remapper\" was not set");
    cpy_r_r782 = 0;
    if (unlikely(!cpy_r_r782)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 325, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL397: ;
    cpy_r_r783 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r784 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r785 = CPyDict_GetItem(cpy_r_r783, cpy_r_r784);
    if (unlikely(cpy_r_r785 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 323, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL558;
    }
    PyObject *cpy_r_r786[2] = {cpy_r_r780, cpy_r_r781};
    cpy_r_r787 = (PyObject **)&cpy_r_r786;
    cpy_r_r788 = PyObject_Vectorcall(cpy_r_r785, cpy_r_r787, 2, 0);
    CPy_DECREF(cpy_r_r785);
    if (unlikely(cpy_r_r788 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 323, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL558;
    }
    CPy_DECREF(cpy_r_r780);
    cpy_r_r789 = CPyStatics[210]; /* 'eth_getTransactionByHash' */
    cpy_r_r790 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r791 = CPyStatics[39]; /* 'is_dict' */
    cpy_r_r792 = CPyDict_GetItem(cpy_r_r790, cpy_r_r791);
    if (unlikely(cpy_r_r792 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 328, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL559;
    }
    cpy_r_r793 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper;
    if (unlikely(cpy_r_r793 == NULL)) {
        goto CPyL560;
    } else
        goto CPyL403;
CPyL401: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_result_remapper\" was not set");
    cpy_r_r794 = 0;
    if (unlikely(!cpy_r_r794)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 329, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL403: ;
    cpy_r_r795 = CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter;
    if (unlikely(cpy_r_r795 == NULL)) {
        goto CPyL561;
    } else
        goto CPyL406;
CPyL404: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"transaction_result_formatter\" was not set");
    cpy_r_r796 = 0;
    if (unlikely(!cpy_r_r796)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 329, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL406: ;
    cpy_r_r797 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r798 = CPyStatics[45]; /* 'compose' */
    cpy_r_r799 = CPyDict_GetItem(cpy_r_r797, cpy_r_r798);
    if (unlikely(cpy_r_r799 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 329, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL562;
    }
    PyObject *cpy_r_r800[2] = {cpy_r_r793, cpy_r_r795};
    cpy_r_r801 = (PyObject **)&cpy_r_r800;
    cpy_r_r802 = PyObject_Vectorcall(cpy_r_r799, cpy_r_r801, 2, 0);
    CPy_DECREF(cpy_r_r799);
    if (unlikely(cpy_r_r802 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 329, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL562;
    }
    cpy_r_r803 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r804 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r805 = CPyDict_GetItem(cpy_r_r803, cpy_r_r804);
    if (unlikely(cpy_r_r805 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 327, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL563;
    }
    PyObject *cpy_r_r806[2] = {cpy_r_r792, cpy_r_r802};
    cpy_r_r807 = (PyObject **)&cpy_r_r806;
    cpy_r_r808 = PyObject_Vectorcall(cpy_r_r805, cpy_r_r807, 2, 0);
    CPy_DECREF(cpy_r_r805);
    if (unlikely(cpy_r_r808 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 327, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL563;
    }
    CPy_DECREF(cpy_r_r792);
    CPy_DECREF(cpy_r_r802);
    cpy_r_r809 = CPyStatics[211]; /* 'eth_getTransactionReceipt' */
    cpy_r_r810 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r811 = CPyStatics[39]; /* 'is_dict' */
    cpy_r_r812 = CPyDict_GetItem(cpy_r_r810, cpy_r_r811);
    if (unlikely(cpy_r_r812 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 332, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL564;
    }
    cpy_r_r813 = CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper;
    if (unlikely(cpy_r_r813 == NULL)) {
        goto CPyL565;
    } else
        goto CPyL414;
CPyL412: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"receipt_result_remapper\" was not set");
    cpy_r_r814 = 0;
    if (unlikely(!cpy_r_r814)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 333, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL414: ;
    cpy_r_r815 = CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter;
    if (unlikely(cpy_r_r815 == NULL)) {
        goto CPyL566;
    } else
        goto CPyL417;
CPyL415: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"receipt_result_formatter\" was not set");
    cpy_r_r816 = 0;
    if (unlikely(!cpy_r_r816)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 333, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL417: ;
    cpy_r_r817 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r818 = CPyStatics[45]; /* 'compose' */
    cpy_r_r819 = CPyDict_GetItem(cpy_r_r817, cpy_r_r818);
    if (unlikely(cpy_r_r819 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 333, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL567;
    }
    PyObject *cpy_r_r820[2] = {cpy_r_r813, cpy_r_r815};
    cpy_r_r821 = (PyObject **)&cpy_r_r820;
    cpy_r_r822 = PyObject_Vectorcall(cpy_r_r819, cpy_r_r821, 2, 0);
    CPy_DECREF(cpy_r_r819);
    if (unlikely(cpy_r_r822 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 333, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL567;
    }
    cpy_r_r823 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r824 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r825 = CPyDict_GetItem(cpy_r_r823, cpy_r_r824);
    if (unlikely(cpy_r_r825 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 331, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL568;
    }
    PyObject *cpy_r_r826[2] = {cpy_r_r812, cpy_r_r822};
    cpy_r_r827 = (PyObject **)&cpy_r_r826;
    cpy_r_r828 = PyObject_Vectorcall(cpy_r_r825, cpy_r_r827, 2, 0);
    CPy_DECREF(cpy_r_r825);
    if (unlikely(cpy_r_r828 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 331, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL568;
    }
    CPy_DECREF(cpy_r_r812);
    CPy_DECREF(cpy_r_r822);
    cpy_r_r829 = CPyStatics[200]; /* 'eth_newFilter' */
    cpy_r_r830 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r831 = CPyStatics[53]; /* 'integer_to_hex' */
    cpy_r_r832 = CPyDict_GetItem(cpy_r_r830, cpy_r_r831);
    if (unlikely(cpy_r_r832 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 335, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL569;
    }
    cpy_r_r833 = CPyStatics[212]; /* 'eth_newBlockFilter' */
    cpy_r_r834 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r835 = CPyStatics[53]; /* 'integer_to_hex' */
    cpy_r_r836 = CPyDict_GetItem(cpy_r_r834, cpy_r_r835);
    if (unlikely(cpy_r_r836 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 336, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL570;
    }
    cpy_r_r837 = CPyStatics[213]; /* 'eth_newPendingTransactionFilter' */
    cpy_r_r838 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r839 = CPyStatics[53]; /* 'integer_to_hex' */
    cpy_r_r840 = CPyDict_GetItem(cpy_r_r838, cpy_r_r839);
    if (unlikely(cpy_r_r840 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 337, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL571;
    }
    cpy_r_r841 = CPyStatics[201]; /* 'eth_getLogs' */
    cpy_r_r842 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r843 = CPyStatics[54]; /* 'is_array_of_dicts' */
    cpy_r_r844 = CPyDict_GetItem(cpy_r_r842, cpy_r_r843);
    if (unlikely(cpy_r_r844 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 339, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL572;
    }
    cpy_r_r845 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r846 = CPyStatics[129]; /* 'log_result_remapper' */
    cpy_r_r847 = CPyDict_GetItem(cpy_r_r845, cpy_r_r846);
    if (unlikely(cpy_r_r847 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 340, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL573;
    }
    cpy_r_r848 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r847);
    CPy_DECREF(cpy_r_r847);
    if (unlikely(cpy_r_r848 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 340, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL573;
    }
    cpy_r_r849 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r850 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r851 = CPyDict_GetItem(cpy_r_r849, cpy_r_r850);
    if (unlikely(cpy_r_r851 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 338, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL574;
    }
    PyObject *cpy_r_r852[2] = {cpy_r_r844, cpy_r_r848};
    cpy_r_r853 = (PyObject **)&cpy_r_r852;
    cpy_r_r854 = PyObject_Vectorcall(cpy_r_r851, cpy_r_r853, 2, 0);
    CPy_DECREF(cpy_r_r851);
    if (unlikely(cpy_r_r854 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 338, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL574;
    }
    CPy_DECREF(cpy_r_r844);
    CPy_DECREF(cpy_r_r848);
    cpy_r_r855 = CPyStatics[192]; /* 'eth_getFilterChanges' */
    cpy_r_r856 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r857 = CPyStatics[54]; /* 'is_array_of_dicts' */
    cpy_r_r858 = CPyDict_GetItem(cpy_r_r856, cpy_r_r857);
    if (unlikely(cpy_r_r858 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 343, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL575;
    }
    cpy_r_r859 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r860 = CPyStatics[129]; /* 'log_result_remapper' */
    cpy_r_r861 = CPyDict_GetItem(cpy_r_r859, cpy_r_r860);
    if (unlikely(cpy_r_r861 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 344, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL576;
    }
    cpy_r_r862 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r861);
    CPy_DECREF(cpy_r_r861);
    if (unlikely(cpy_r_r862 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 344, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL576;
    }
    cpy_r_r863 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r864 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r865 = CPyDict_GetItem(cpy_r_r863, cpy_r_r864);
    if (unlikely(cpy_r_r865 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 342, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL577;
    }
    PyObject *cpy_r_r866[2] = {cpy_r_r858, cpy_r_r862};
    cpy_r_r867 = (PyObject **)&cpy_r_r866;
    cpy_r_r868 = PyObject_Vectorcall(cpy_r_r865, cpy_r_r867, 2, 0);
    CPy_DECREF(cpy_r_r865);
    if (unlikely(cpy_r_r868 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 342, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL577;
    }
    CPy_DECREF(cpy_r_r858);
    CPy_DECREF(cpy_r_r862);
    cpy_r_r869 = CPyStatics[193]; /* 'eth_getFilterLogs' */
    cpy_r_r870 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r871 = CPyStatics[54]; /* 'is_array_of_dicts' */
    cpy_r_r872 = CPyDict_GetItem(cpy_r_r870, cpy_r_r871);
    if (unlikely(cpy_r_r872 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 347, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL578;
    }
    cpy_r_r873 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r874 = CPyStatics[129]; /* 'log_result_remapper' */
    cpy_r_r875 = CPyDict_GetItem(cpy_r_r873, cpy_r_r874);
    if (unlikely(cpy_r_r875 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 348, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL579;
    }
    cpy_r_r876 = exports_faster_web3.CPyDef_faster_web3____utils___method_formatters___apply_list_to_array_formatter(cpy_r_r875);
    CPy_DECREF(cpy_r_r875);
    if (unlikely(cpy_r_r876 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 348, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL579;
    }
    cpy_r_r877 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r878 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r879 = CPyDict_GetItem(cpy_r_r877, cpy_r_r878);
    if (unlikely(cpy_r_r879 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 346, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL580;
    }
    PyObject *cpy_r_r880[2] = {cpy_r_r872, cpy_r_r876};
    cpy_r_r881 = (PyObject **)&cpy_r_r880;
    cpy_r_r882 = PyObject_Vectorcall(cpy_r_r879, cpy_r_r881, 2, 0);
    CPy_DECREF(cpy_r_r879);
    if (unlikely(cpy_r_r882 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 346, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL580;
    }
    CPy_DECREF(cpy_r_r872);
    CPy_DECREF(cpy_r_r876);
    cpy_r_r883 = CPyStatics[205]; /* 'eth_feeHistory' */
    cpy_r_r884 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r885 = CPyStatics[39]; /* 'is_dict' */
    cpy_r_r886 = CPyDict_GetItem(cpy_r_r884, cpy_r_r885);
    if (unlikely(cpy_r_r886 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 351, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL581;
    }
    cpy_r_r887 = CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper;
    if (unlikely(cpy_r_r887 == NULL)) {
        goto CPyL582;
    } else
        goto CPyL443;
CPyL441: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"fee_history_result_remapper\" was not set");
    cpy_r_r888 = 0;
    if (unlikely(!cpy_r_r888)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 351, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL443: ;
    cpy_r_r889 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r890 = CPyStatics[41]; /* 'apply_formatter_if' */
    cpy_r_r891 = CPyDict_GetItem(cpy_r_r889, cpy_r_r890);
    if (unlikely(cpy_r_r891 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 350, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL583;
    }
    PyObject *cpy_r_r892[2] = {cpy_r_r886, cpy_r_r887};
    cpy_r_r893 = (PyObject **)&cpy_r_r892;
    cpy_r_r894 = PyObject_Vectorcall(cpy_r_r891, cpy_r_r893, 2, 0);
    CPy_DECREF(cpy_r_r891);
    if (unlikely(cpy_r_r894 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 350, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL583;
    }
    CPy_DECREF(cpy_r_r886);
    cpy_r_r895 = CPyStatics[214]; /* 'evm_snapshot' */
    cpy_r_r896 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r897 = CPyStatics[53]; /* 'integer_to_hex' */
    cpy_r_r898 = CPyDict_GetItem(cpy_r_r896, cpy_r_r897);
    if (unlikely(cpy_r_r898 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 354, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL584;
    }
    cpy_r_r899 = CPyDict_Build(14, cpy_r_r725, cpy_r_r744, cpy_r_r745, cpy_r_r764, cpy_r_r765, cpy_r_r776, cpy_r_r777, cpy_r_r788, cpy_r_r789, cpy_r_r808, cpy_r_r809, cpy_r_r828, cpy_r_r829, cpy_r_r832, cpy_r_r833, cpy_r_r836, cpy_r_r837, cpy_r_r840, cpy_r_r841, cpy_r_r854, cpy_r_r855, cpy_r_r868, cpy_r_r869, cpy_r_r882, cpy_r_r883, cpy_r_r894, cpy_r_r895, cpy_r_r898);
    CPy_DECREF(cpy_r_r744);
    CPy_DECREF(cpy_r_r764);
    CPy_DECREF(cpy_r_r776);
    CPy_DECREF(cpy_r_r788);
    CPy_DECREF(cpy_r_r808);
    CPy_DECREF(cpy_r_r828);
    CPy_DECREF(cpy_r_r832);
    CPy_DECREF(cpy_r_r836);
    CPy_DECREF(cpy_r_r840);
    CPy_DECREF(cpy_r_r854);
    CPy_DECREF(cpy_r_r868);
    CPy_DECREF(cpy_r_r882);
    CPy_DECREF(cpy_r_r894);
    CPy_DECREF(cpy_r_r898);
    if (unlikely(cpy_r_r899 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 312, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters = cpy_r_r899;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters);
    cpy_r_r900 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r901 = CPyStatics[215]; /* 'result_formatters' */
    cpy_r_r902 = CPyDict_SetItem(cpy_r_r900, cpy_r_r901, cpy_r_r899);
    CPy_DECREF(cpy_r_r899);
    cpy_r_r903 = cpy_r_r902 >= 0;
    if (unlikely(!cpy_r_r903)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 312, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r904 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r905 = CPyStatics[21]; /* 'fill_default' */
    cpy_r_r906 = CPyDict_GetItem(cpy_r_r904, cpy_r_r905);
    if (unlikely(cpy_r_r906 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 363, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r907 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r908 = CPyStatics[46]; /* 'curry' */
    cpy_r_r909 = CPyDict_GetItem(cpy_r_r907, cpy_r_r908);
    if (unlikely(cpy_r_r909 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 363, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL585;
    }
    PyObject *cpy_r_r910[1] = {cpy_r_r906};
    cpy_r_r911 = (PyObject **)&cpy_r_r910;
    cpy_r_r912 = PyObject_Vectorcall(cpy_r_r909, cpy_r_r911, 1, 0);
    CPy_DECREF(cpy_r_r909);
    if (unlikely(cpy_r_r912 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 363, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL585;
    }
    CPy_DECREF(cpy_r_r906);
    cpy_r_r913 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r914 = CPyStatics[21]; /* 'fill_default' */
    cpy_r_r915 = PyDict_SetItem(cpy_r_r913, cpy_r_r914, cpy_r_r912);
    CPy_DECREF(cpy_r_r912);
    cpy_r_r916 = cpy_r_r915 >= 0;
    if (unlikely(!cpy_r_r916)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 363, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r917 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r918 = CPyStatics[24]; /* 'async_fill_default' */
    cpy_r_r919 = CPyDict_GetItem(cpy_r_r917, cpy_r_r918);
    if (unlikely(cpy_r_r919 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 387, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r920 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r921 = CPyStatics[46]; /* 'curry' */
    cpy_r_r922 = CPyDict_GetItem(cpy_r_r920, cpy_r_r921);
    if (unlikely(cpy_r_r922 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 387, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL586;
    }
    PyObject *cpy_r_r923[1] = {cpy_r_r919};
    cpy_r_r924 = (PyObject **)&cpy_r_r923;
    cpy_r_r925 = PyObject_Vectorcall(cpy_r_r922, cpy_r_r924, 1, 0);
    CPy_DECREF(cpy_r_r922);
    if (unlikely(cpy_r_r925 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 387, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL586;
    }
    CPy_DECREF(cpy_r_r919);
    cpy_r_r926 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r927 = CPyStatics[24]; /* 'async_fill_default' */
    cpy_r_r928 = PyDict_SetItem(cpy_r_r926, cpy_r_r927, cpy_r_r925);
    CPy_DECREF(cpy_r_r925);
    cpy_r_r929 = cpy_r_r928 >= 0;
    if (unlikely(!cpy_r_r929)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 387, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r930 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r931 = CPyStatics[59]; /* 'Web3Middleware' */
    cpy_r_r932 = CPyDict_GetItem(cpy_r_r930, cpy_r_r931);
    if (unlikely(cpy_r_r932 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 406, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r933 = PyTuple_Pack(1, cpy_r_r932);
    CPy_DECREF(cpy_r_r932);
    if (unlikely(cpy_r_r933 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 406, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r934 = CPyStatics[216]; /* 'faster_web3.providers.eth_tester.middleware' */
    cpy_r_r935 = (PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_template;
    cpy_r_r936 = CPyType_FromTemplate(cpy_r_r935, cpy_r_r933, cpy_r_r934);
    CPy_DECREF(cpy_r_r933);
    if (unlikely(cpy_r_r936 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 406, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r937 = CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware_trait_vtable_setup();
    if (unlikely(cpy_r_r937 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", -1, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL587;
    }
    cpy_r_r938 = CPyStatics[217]; /* '__mypyc_attrs__' */
    cpy_r_r939 = CPyStatics[218]; /* '__dict__' */
    cpy_r_r940 = PyTuple_Pack(1, cpy_r_r939);
    if (unlikely(cpy_r_r940 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 406, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL587;
    }
    cpy_r_r941 = PyObject_SetAttr(cpy_r_r936, cpy_r_r938, cpy_r_r940);
    CPy_DECREF(cpy_r_r940);
    cpy_r_r942 = cpy_r_r941 >= 0;
    if (unlikely(!cpy_r_r942)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 406, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL587;
    }
    CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware = (PyTypeObject *)cpy_r_r936;
    CPy_INCREF(CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware);
    cpy_r_r943 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r944 = CPyStatics[219]; /* 'DefaultTransactionFieldsMiddleware' */
    cpy_r_r945 = PyDict_SetItem(cpy_r_r943, cpy_r_r944, cpy_r_r936);
    CPy_DECREF(cpy_r_r936);
    cpy_r_r946 = cpy_r_r945 >= 0;
    if (unlikely(!cpy_r_r946)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 406, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r947 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r948 = CPyStatics[61]; /* 'FormattingMiddlewareBuilder' */
    cpy_r_r949 = CPyDict_GetItem(cpy_r_r947, cpy_r_r948);
    if (unlikely(cpy_r_r949 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 439, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r950 = CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters;
    if (unlikely(cpy_r_r950 == NULL)) {
        goto CPyL588;
    } else
        goto CPyL467;
CPyL465: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"request_formatters\" was not set");
    cpy_r_r951 = 0;
    if (unlikely(!cpy_r_r951)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 440, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL467: ;
    cpy_r_r952 = CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters;
    if (unlikely(cpy_r_r952 == NULL)) {
        goto CPyL589;
    } else
        goto CPyL470;
CPyL468: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"result_formatters\" was not set");
    cpy_r_r953 = 0;
    if (unlikely(!cpy_r_r953)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 440, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    CPy_Unreachable();
CPyL470: ;
    cpy_r_r954 = CPyStatics[220]; /* 'build' */
    PyObject *cpy_r_r955[3] = {cpy_r_r949, cpy_r_r950, cpy_r_r952};
    cpy_r_r956 = (PyObject **)&cpy_r_r955;
    cpy_r_r957 = CPyStatics[236]; /* ('request_formatters', 'result_formatters') */
    cpy_r_r958 = PyObject_VectorcallMethod(cpy_r_r954, cpy_r_r956, 9223372036854775809ULL, cpy_r_r957);
    if (unlikely(cpy_r_r958 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 439, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL590;
    }
    CPy_DECREF(cpy_r_r949);
    CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware = cpy_r_r958;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware);
    cpy_r_r959 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r960 = CPyStatics[221]; /* 'ethereum_tester_middleware' */
    cpy_r_r961 = CPyDict_SetItem(cpy_r_r959, cpy_r_r960, cpy_r_r958);
    CPy_DECREF(cpy_r_r958);
    cpy_r_r962 = cpy_r_r961 >= 0;
    if (unlikely(!cpy_r_r962)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 439, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    cpy_r_r963 = (PyObject *)CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware;
    CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware = cpy_r_r963;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware);
    cpy_r_r964 = CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
    cpy_r_r965 = CPyStatics[222]; /* 'default_transaction_fields_middleware' */
    cpy_r_r966 = CPyDict_SetItem(cpy_r_r964, cpy_r_r965, cpy_r_r963);
    cpy_r_r967 = cpy_r_r966 >= 0;
    if (unlikely(!cpy_r_r967)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/middleware.py", "<module>", 442, CPyStatic_faster_web3___providers___eth_tester___middleware___globals);
        goto CPyL474;
    }
    return 1;
CPyL474: ;
    cpy_r_r968 = 2;
    return cpy_r_r968;
CPyL475: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL474;
CPyL476: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r60);
    goto CPyL474;
CPyL477: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL474;
CPyL478: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL56;
CPyL479: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL59;
CPyL480: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL62;
CPyL481: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL65;
CPyL482: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL68;
CPyL483: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL474;
CPyL484: ;
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_r155);
    goto CPyL474;
CPyL485: ;
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_r161);
    goto CPyL474;
CPyL486: ;
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r167);
    goto CPyL474;
CPyL487: ;
    CPy_DecRef(cpy_r_r300);
    goto CPyL474;
CPyL488: ;
    CPy_DecRef(cpy_r_r307);
    goto CPyL474;
CPyL489: ;
    CPy_DecRef(cpy_r_r307);
    CPy_DecRef(cpy_r_r309);
    goto CPyL474;
CPyL490: ;
    CPy_DecRef(cpy_r_r315);
    goto CPyL474;
CPyL491: ;
    CPy_DecRef(cpy_r_r315);
    CPy_DecRef(cpy_r_r321);
    goto CPyL474;
CPyL492: ;
    CPy_DecRef(cpy_r_r518);
    goto CPyL474;
CPyL493: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    goto CPyL474;
CPyL494: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    goto CPyL474;
CPyL495: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r534);
    goto CPyL215;
CPyL496: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r534);
    goto CPyL218;
CPyL497: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r534);
    goto CPyL474;
CPyL498: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    goto CPyL225;
CPyL499: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    goto CPyL228;
CPyL500: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    goto CPyL474;
CPyL501: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    goto CPyL235;
CPyL502: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    goto CPyL238;
CPyL503: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    goto CPyL474;
CPyL504: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    goto CPyL474;
CPyL505: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r576);
    goto CPyL246;
CPyL506: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    goto CPyL251;
CPyL507: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    goto CPyL254;
CPyL508: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    goto CPyL474;
CPyL509: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r591);
    goto CPyL259;
CPyL510: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    goto CPyL264;
CPyL511: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    goto CPyL267;
CPyL512: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    goto CPyL474;
CPyL513: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r606);
    goto CPyL272;
CPyL514: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    goto CPyL277;
CPyL515: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    goto CPyL474;
CPyL516: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    goto CPyL282;
CPyL517: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    goto CPyL474;
CPyL518: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    goto CPyL287;
CPyL519: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    goto CPyL474;
CPyL520: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    goto CPyL292;
CPyL521: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    goto CPyL474;
CPyL522: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    goto CPyL297;
CPyL523: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    goto CPyL300;
CPyL524: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    goto CPyL303;
CPyL525: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    goto CPyL474;
CPyL526: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    goto CPyL310;
CPyL527: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    goto CPyL313;
CPyL528: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    goto CPyL316;
CPyL529: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    goto CPyL474;
CPyL530: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    goto CPyL474;
CPyL531: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    goto CPyL474;
CPyL532: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r670);
    goto CPyL327;
CPyL533: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r670);
    goto CPyL330;
CPyL534: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r670);
    goto CPyL474;
CPyL535: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    goto CPyL474;
CPyL536: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r686);
    goto CPyL338;
CPyL537: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r686);
    goto CPyL341;
CPyL538: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r686);
    goto CPyL474;
CPyL539: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r698);
    goto CPyL348;
CPyL540: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r698);
    goto CPyL351;
CPyL541: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r698);
    goto CPyL354;
CPyL542: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r698);
    goto CPyL474;
CPyL543: ;
    CPy_DecRef(cpy_r_r518);
    CPy_DecRef(cpy_r_r524);
    CPy_DecRef(cpy_r_r530);
    CPy_DecRef(cpy_r_r546);
    CPy_DecRef(cpy_r_r559);
    CPy_DecRef(cpy_r_r572);
    CPy_DecRef(cpy_r_r580);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r610);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r620);
    CPy_DecRef(cpy_r_r625);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r645);
    CPy_DecRef(cpy_r_r660);
    CPy_DecRef(cpy_r_r666);
    CPy_DecRef(cpy_r_r682);
    CPy_DecRef(cpy_r_r698);
    CPy_DecRef(cpy_r_r713);
    goto CPyL474;
CPyL544: ;
    CPy_DecRef(cpy_r_r728);
    goto CPyL367;
CPyL545: ;
    CPy_DecRef(cpy_r_r728);
    goto CPyL370;
CPyL546: ;
    CPy_DecRef(cpy_r_r728);
    goto CPyL474;
CPyL547: ;
    CPy_DecRef(cpy_r_r728);
    CPy_DecRef(cpy_r_r738);
    goto CPyL474;
CPyL548: ;
    CPy_DecRef(cpy_r_r744);
    goto CPyL474;
CPyL549: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r748);
    goto CPyL378;
CPyL550: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r748);
    goto CPyL381;
CPyL551: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r748);
    goto CPyL474;
CPyL552: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r748);
    CPy_DecRef(cpy_r_r758);
    goto CPyL474;
CPyL553: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    goto CPyL474;
CPyL554: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r768);
    goto CPyL389;
CPyL555: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r768);
    goto CPyL474;
CPyL556: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    goto CPyL474;
CPyL557: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r780);
    goto CPyL395;
CPyL558: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r780);
    goto CPyL474;
CPyL559: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    goto CPyL474;
CPyL560: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r792);
    goto CPyL401;
CPyL561: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r792);
    goto CPyL404;
CPyL562: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r792);
    goto CPyL474;
CPyL563: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r792);
    CPy_DecRef(cpy_r_r802);
    goto CPyL474;
CPyL564: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    goto CPyL474;
CPyL565: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r812);
    goto CPyL412;
CPyL566: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r812);
    goto CPyL415;
CPyL567: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r812);
    goto CPyL474;
CPyL568: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r812);
    CPy_DecRef(cpy_r_r822);
    goto CPyL474;
CPyL569: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    goto CPyL474;
CPyL570: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    goto CPyL474;
CPyL571: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    goto CPyL474;
CPyL572: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    goto CPyL474;
CPyL573: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r844);
    goto CPyL474;
CPyL574: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r844);
    CPy_DecRef(cpy_r_r848);
    goto CPyL474;
CPyL575: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    goto CPyL474;
CPyL576: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r858);
    goto CPyL474;
CPyL577: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r858);
    CPy_DecRef(cpy_r_r862);
    goto CPyL474;
CPyL578: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r868);
    goto CPyL474;
CPyL579: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r868);
    CPy_DecRef(cpy_r_r872);
    goto CPyL474;
CPyL580: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r868);
    CPy_DecRef(cpy_r_r872);
    CPy_DecRef(cpy_r_r876);
    goto CPyL474;
CPyL581: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r868);
    CPy_DecRef(cpy_r_r882);
    goto CPyL474;
CPyL582: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r868);
    CPy_DecRef(cpy_r_r882);
    CPy_DecRef(cpy_r_r886);
    goto CPyL441;
CPyL583: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r868);
    CPy_DecRef(cpy_r_r882);
    CPy_DecRef(cpy_r_r886);
    goto CPyL474;
CPyL584: ;
    CPy_DecRef(cpy_r_r744);
    CPy_DecRef(cpy_r_r764);
    CPy_DecRef(cpy_r_r776);
    CPy_DecRef(cpy_r_r788);
    CPy_DecRef(cpy_r_r808);
    CPy_DecRef(cpy_r_r828);
    CPy_DecRef(cpy_r_r832);
    CPy_DecRef(cpy_r_r836);
    CPy_DecRef(cpy_r_r840);
    CPy_DecRef(cpy_r_r854);
    CPy_DecRef(cpy_r_r868);
    CPy_DecRef(cpy_r_r882);
    CPy_DecRef(cpy_r_r894);
    goto CPyL474;
CPyL585: ;
    CPy_DecRef(cpy_r_r906);
    goto CPyL474;
CPyL586: ;
    CPy_DecRef(cpy_r_r919);
    goto CPyL474;
CPyL587: ;
    CPy_DecRef(cpy_r_r936);
    goto CPyL474;
CPyL588: ;
    CPy_DecRef(cpy_r_r949);
    goto CPyL465;
CPyL589: ;
    CPy_DecRef(cpy_r_r949);
    goto CPyL468;
CPyL590: ;
    CPy_DecRef(cpy_r_r949);
    goto CPyL474;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___providers___eth_tester___middleware = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_operator = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_utils = Py_None;
    CPyModule_faster_eth_utils___curried = Py_None;
    CPyModule_faster_eth_utils___toolz = Py_None;
    CPyModule_faster_web3____utils___formatters = Py_None;
    CPyModule_faster_web3____utils___method_formatters = Py_None;
    CPyModule_faster_web3___middleware___base = Py_None;
    CPyModule_faster_web3___middleware___formatting = Py_None;
    CPyModule_faster_web3___types = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[239];
const char * const CPyLit_Str[] = {
    "\t\bearliest\tfinalized\004safe\006latest\tis_string\006is_hex\003eth\baccounts\005assoc",
    "\004\rGeneratorExit\rStopIteration\beth_call\023eth_sendTransaction",
    "\006\017eth_estimateGas\024eth_createAccessList\004from\nguess_from\003_w3\ffill_default",
    "\005\004pipe\020async_guess_from\022async_fill_default\bbuiltins\boperator",
    "\003.faster_web3/providers/eth_tester/middleware.py\b<module>\rTYPE_CHECKING",
    "\b\003Any\bCallable\004Dict\005Final\bOptional\005final\006typing\017ChecksumAddress",
    "\004\neth_typing\ais_dict\020faster_eth_utils\022apply_formatter_if",
    "\004\030apply_formatters_to_dict\030faster_eth_utils.curried\ncomplement\acompose",
    "\004\005curry\bidentity\apartial\026faster_eth_utils.toolz",
    "\004\030apply_formatters_to_args\rapply_key_map\016hex_to_integer\016integer_to_hex",
    "\003\021is_array_of_dicts\rstatic_return\035faster_web3._utils.formatters",
    "\002\035apply_list_to_array_formatter$faster_web3._utils.method_formatters",
    "\002\016Web3Middleware\033faster_web3.middleware.base",
    "\002\033FormattingMiddlewareBuilder!faster_web3.middleware.formatting",
    "\005\vRPCEndpoint\bTxParams\021faster_web3.types\tis_hexstr\021to_integer_if_hex",
    "\003\016is_named_block\022is_not_named_block\023blobVersionedHashes",
    "\004\025blob_versioned_hashes\bgasPrice\tgas_price\020maxFeePerBlobGas",
    "\003\024max_fee_per_blob_gas\fmaxFeePerGas\017max_fee_per_gas",
    "\004\024maxPriorityFeePerGas\030max_priority_fee_per_gas\naccessList\vaccess_list",
    "\004\021authorizationList\022authorization_list\achainId\bchain_id",
    "\003\037TRANSACTION_REQUEST_KEY_MAPPING\034transaction_request_remapper\003gas",
    "\b\005value\005nonce\vstorageKeys\fstorage_keys\by_parity\001r\001s\ayParity",
    "\002\036TRANSACTION_REQUEST_FORMATTERS\035transaction_request_formatter",
    "\005\037transaction_request_transformer\tfromBlock\nfrom_block\atoBlock\bto_block",
    "\002\032FILTER_REQUEST_KEY_MAPPING\027filter_request_remapper",
    "\002\031FILTER_REQUEST_FORMATTERS\030filter_request_formatter",
    "\004\032filter_request_transformer\nblock_hash\tblockHash\fblock_number",
    "\004\vblockNumber\020transaction_hash\017transactionHash\021transaction_index",
    "\004\020transactionIndex\004data\005input\036TRANSACTION_RESULT_KEY_MAPPING",
    "\005\033transaction_result_remapper\002to\002eq\000\035TRANSACTION_RESULT_FORMATTERS",
    "\003\034transaction_result_formatter\tlog_index\blogIndex",
    "\003\026LOG_RESULT_KEY_MAPPING\023log_result_remapper\020contract_address",
    "\004\017contractAddress\bgas_used\agasUsed\023cumulative_gas_used",
    "\004\021cumulativeGasUsed\023effective_gas_price\021effectiveGasPrice\rblob_gas_used",
    "\004\vblobGasUsed\016blob_gas_price\fblobGasPrice\032RECEIPT_RESULT_KEY_MAPPING",
    "\005\027receipt_result_remapper\tgas_limit\bgasLimit\vsha3_uncles\nsha3Uncles",
    "\005\021transactions_root\020transactionsRoot\vparent_hash\nparentHash\nlogs_bloom",
    "\005\tlogsBloom\nstate_root\tstateRoot\rreceipts_root\freceiptsRoot",
    "\004\020total_difficulty\017totalDifficulty\nextra_data\textraData",
    "\006\020base_fee_per_gas\rbaseFeePerGas\bmix_hash\amixHash\bcoinbase\005miner",
    "\003\020withdrawals_root\017withdrawalsRoot\030parent_beacon_block_root",
    "\004\025parentBeaconBlockRoot\017excess_blob_gas\rexcessBlobGas\rrequests_hash",
    "\003\frequestsHash\030BLOCK_RESULT_KEY_MAPPING\025block_result_remapper",
    "\004\vwithdrawals\017validator_index\016validatorIndex\027BLOCK_RESULT_FORMATTERS",
    "\003\026block_result_formatter\004logs\031RECEIPT_RESULT_FORMATTERS",
    "\004\030receipt_result_formatter\foldest_block\voldestBlock\016gas_used_ratio",
    "\003\fgasUsedRatio\033fee_history_result_remapper\024eth_getBlockByNumber",
    "\003\024eth_getFilterChanges\021eth_getFilterLogs\027eth_getTransactionCount",
    "\002$eth_getBlockTransactionCountByNumber\036eth_getUncleCountByBlockNumber",
    "\001%eth_getTransactionByBlockHashAndIndex",
    "\001\'eth_getTransactionByBlockNumberAndIndex",
    "\003!eth_getUncleByBlockNumberAndIndex\reth_newFilter\veth_getLogs",
    "\004\023eth_uninstallFilter\veth_getCode\016eth_getBalance\016eth_feeHistory",
    "\003\nevm_revert\022request_formatters\022eth_getBlockByHash",
    "\002\"eth_getBlockTransactionCountByHash\030eth_getTransactionByHash",
    "\002\031eth_getTransactionReceipt\022eth_newBlockFilter",
    "\003\037eth_newPendingTransactionFilter\fevm_snapshot\021result_formatters",
    "\003+faster_web3.providers.eth_tester.middleware\017__mypyc_attrs__\b__dict__",
    "\003\"DefaultTransactionFieldsMiddleware\005build\032ethereum_tester_middleware",
    "\001%default_transaction_fields_middleware",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0010",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    13, 3, 26, 26, 26, 1, 224, 7, 29, 30, 31, 32, 33, 34, 35, 1, 37, 3,
    39, 8, 7, 2, 41, 42, 7, 11, 44, 45, 46, 47, 48, 22, 6, 50, 51, 52, 53,
    54, 55, 1, 57, 1, 59, 1, 61, 2, 63, 64, 2, 207, 215
};
const int CPyLit_FrozenSet[] = {2, 4, 3, 4, 5, 6, 4, 14, 15, 16, 17};
CPyModule *CPyModule_faster_web3___providers___eth_tester___middleware__internal = NULL;
CPyModule *CPyModule_faster_web3___providers___eth_tester___middleware;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_operator;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_faster_eth_utils;
CPyModule *CPyModule_faster_eth_utils___curried;
CPyModule *CPyModule_faster_eth_utils___toolz;
CPyModule *CPyModule_faster_web3____utils___formatters;
CPyModule *CPyModule_faster_web3____utils___method_formatters;
CPyModule *CPyModule_faster_web3___middleware___base;
CPyModule *CPyModule_faster_web3___middleware___formatting;
CPyModule *CPyModule_faster_web3___types;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware = NULL;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware;
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen;
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen(void);
CPyThreadLocal faster_web3___providers___eth_tester___middleware___async_guess_from_genObject *faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen;
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen(void);
CPyThreadLocal faster_web3___providers___eth_tester___middleware___async_fill_default_genObject *faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen;
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen(void);
CPyThreadLocal faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_genObject *faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance;
char CPyDef_faster_web3___providers___eth_tester___middleware___is_named_block(PyObject *cpy_r_value);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___is_named_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___middleware___is_hexstr(PyObject *cpy_r_value);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___is_hexstr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___guess_from(PyObject *cpy_r_w3, PyObject *cpy_r__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___guess_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___fill_default(PyObject *cpy_r_field, PyObject *cpy_r_guess_func, PyObject *cpy_r_w3, PyObject *cpy_r_transaction);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___fill_default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from(PyObject *cpy_r_async_w3, PyObject *cpy_r__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_guess_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default(PyObject *cpy_r_field, PyObject *cpy_r_guess_func, PyObject *cpy_r_async_w3, PyObject *cpy_r_transaction);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_fill_default(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___middleware_____top_level__(void);

static struct export_table_faster_web3___providers___eth_tester___middleware exports = {
    &CPyStatic_faster_web3___providers___eth_tester___middleware___to_integer_if_hex,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___is_not_named_block,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_KEY_MAPPING,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_remapper,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_REQUEST_FORMATTERS,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_formatter,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_request_transformer,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_KEY_MAPPING,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_remapper,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___FILTER_REQUEST_FORMATTERS,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_formatter,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___filter_request_transformer,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_KEY_MAPPING,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_remapper,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___TRANSACTION_RESULT_FORMATTERS,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___transaction_result_formatter,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___LOG_RESULT_KEY_MAPPING,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_KEY_MAPPING,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_remapper,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_KEY_MAPPING,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_remapper,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___BLOCK_RESULT_FORMATTERS,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___block_result_formatter,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___RECEIPT_RESULT_FORMATTERS,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___receipt_result_formatter,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___fee_history_result_remapper,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___request_formatters,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___result_formatters,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware,
    &CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware,
    &CPyType_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware,
    &CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware,
    &CPyType_faster_web3___providers___eth_tester___middleware___async_guess_from_gen,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen,
    &faster_web3___providers___eth_tester___middleware___async_guess_from_gen_free_instance,
    &CPyType_faster_web3___providers___eth_tester___middleware___async_fill_default_gen,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen,
    &faster_web3___providers___eth_tester___middleware___async_fill_default_gen_free_instance,
    &CPyType_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen,
    &faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_free_instance,
    &CPyDef_faster_web3___providers___eth_tester___middleware___is_named_block,
    &CPyDef_faster_web3___providers___eth_tester___middleware___is_hexstr,
    &CPyDef_faster_web3___providers___eth_tester___middleware___guess_from,
    &CPyDef_faster_web3___providers___eth_tester___middleware___fill_default,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____next__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___send,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____iter__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___throw,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen___close,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from_gen_____await__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_guess_from,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____next__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___send,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____iter__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___throw,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen___close,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default_gen_____await__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_fill_default,
    &CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___request_processor,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____next__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___send,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____iter__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___throw,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen___close,
    &CPyDef_faster_web3___providers___eth_tester___middleware___async_request_processor_DefaultTransactionFieldsMiddleware_gen_____await__,
    &CPyDef_faster_web3___providers___eth_tester___middleware___DefaultTransactionFieldsMiddleware___async_request_processor,
    &CPyDef_faster_web3___providers___eth_tester___middleware_____top_level__,
};

static int exec_middleware__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.providers.eth_tester.middleware__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___providers___eth_tester___middleware(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___providers___eth_tester___middleware, "faster_web3.providers.eth_tester.middleware__mypyc.init_faster_web3___providers___eth_tester___middleware", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___providers___eth_tester___middleware", capsule);
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
static PyModuleDef module_def_middleware__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.providers.eth_tester.middleware__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_middleware__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_middleware__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_middleware__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
