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
#include "__native_main.h"
#include "__native_internal_main.h"

static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__AsyncEthereumTesterProvider_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider(void);

static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__AsyncEthereumTesterProvider_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_traverse(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->__middleware.f0);
    Py_VISIT(self->__middleware.f1);
    Py_VISIT(self->_ethereum_tester);
    Py_VISIT(self->_api_endpoints);
    if (CPyTagged_CheckLong(self->__current_request_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->__current_request_id));
    }
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_clear(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self)
{
    Py_CLEAR(self->__middleware.f0);
    Py_CLEAR(self->__middleware.f1);
    Py_CLEAR(self->_ethereum_tester);
    Py_CLEAR(self->_api_endpoints);
    if (CPyTagged_CheckLong(self->__current_request_id)) {
        CPyTagged __tmp = self->__current_request_id;
        self->__current_request_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_dealloc(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_dealloc)
    faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_vtable[5];
static bool
CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup,
    };
    memcpy(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_vtable, faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get__middleware(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set__middleware(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get_ethereum_tester(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set_ethereum_tester(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get_api_endpoints(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set_api_endpoints(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get__current_request_id(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set__current_request_id(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_getseters[] = {
    {"_middleware",
     (getter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get__middleware, (setter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set__middleware,
     NULL, NULL},
    {"ethereum_tester",
     (getter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get_ethereum_tester, (setter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set_ethereum_tester,
     NULL, NULL},
    {"api_endpoints",
     (getter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get_api_endpoints, (setter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set_api_endpoints,
     NULL, NULL},
    {"_current_request_id",
     (getter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get__current_request_id, (setter)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set__current_request_id,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self)\n--\n\n")},
    {"request_func",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("request_func($self, async_w3, middleware_onion)\n--\n\n")},
    {"make_request",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("make_request($self, method, params)\n--\n\n")},
    {"is_connected",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("is_connected($self, show_traceback=False)\n--\n\n")},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__mypyc_defaults_setup()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AsyncEthereumTesterProvider",
    .tp_new = faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_clear,
    .tp_getset = faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_getseters,
    .tp_methods = faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_methods,
    .tp_init = faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_init,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("AsyncEthereumTesterProvider()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_template = &CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__AsyncEthereumTesterProvider_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self;
    self = (faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_vtable;
    self->__middleware = (tuple_T2OO) { NULL, NULL };
    self->__current_request_id = CPY_INT_TAG;
    if (CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__AsyncEthereumTesterProvider_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider);
    if (self == NULL)
        return NULL;
    char res = CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get__middleware(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->__middleware.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_middleware' of 'AsyncEthereumTesterProvider' undefined");
        return NULL;
    }
    CPy_INCREF(self->__middleware.f0);
    CPy_INCREF(self->__middleware.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = self->__middleware.f0;
    PyTuple_SET_ITEM(retval, 0, __tmp1);
    PyObject *__tmp2 = self->__middleware.f1;
    PyTuple_SET_ITEM(retval, 1, __tmp2);
    return retval;
}

static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set__middleware(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AsyncEthereumTesterProvider' object attribute '_middleware' cannot be deleted");
        return -1;
    }
    if (self->__middleware.f0 != NULL) {
        CPy_DECREF(self->__middleware.f0);
        CPy_DECREF(self->__middleware.f1);
    }
    tuple_T2OO tmp;
    PyObject *__tmp3;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp3 = NULL;
        goto __LL4;
    }
    __tmp3 = PyTuple_GET_ITEM(value, 0);
    if (__tmp3 == NULL) goto __LL4;
    __tmp3 = PyTuple_GET_ITEM(value, 1);
    if (__tmp3 == NULL) goto __LL4;
    __tmp3 = value;
__LL4: ;
    if (unlikely(__tmp3 == NULL)) {
        CPy_TypeError("tuple[object, object]", value); return -1;
    } else {
        PyObject *__tmp5 = PyTuple_GET_ITEM(value, 0);
        CPy_INCREF(__tmp5);
        PyObject *__tmp6;
        __tmp6 = __tmp5;
        tmp.f0 = __tmp6;
        PyObject *__tmp7 = PyTuple_GET_ITEM(value, 1);
        CPy_INCREF(__tmp7);
        PyObject *__tmp8;
        __tmp8 = __tmp7;
        tmp.f1 = __tmp8;
    }
    CPy_INCREF(tmp.f0);
    CPy_INCREF(tmp.f1);
    self->__middleware = tmp;
    return 0;
}

static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get_ethereum_tester(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->_ethereum_tester == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ethereum_tester' of 'AsyncEthereumTesterProvider' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ethereum_tester);
    PyObject *retval = self->_ethereum_tester;
    return retval;
}

static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set_ethereum_tester(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AsyncEthereumTesterProvider' object attribute 'ethereum_tester' cannot be deleted");
        return -1;
    }
    if (self->_ethereum_tester != NULL) {
        CPy_DECREF(self->_ethereum_tester);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_ethereum_tester = tmp;
    return 0;
}

static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get_api_endpoints(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->_api_endpoints == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'api_endpoints' of 'AsyncEthereumTesterProvider' undefined");
        return NULL;
    }
    CPy_INCREF(self->_api_endpoints);
    PyObject *retval = self->_api_endpoints;
    return retval;
}

static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set_api_endpoints(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AsyncEthereumTesterProvider' object attribute 'api_endpoints' cannot be deleted");
        return -1;
    }
    if (self->_api_endpoints != NULL) {
        CPy_DECREF(self->_api_endpoints);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_api_endpoints = tmp;
    return 0;
}

static PyObject *
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_get__current_request_id(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->__current_request_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_current_request_id' of 'AsyncEthereumTesterProvider' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->__current_request_id);
    PyObject *retval = CPyTagged_StealAsObject(self->__current_request_id);
    return retval;
}

static int
faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_set__current_request_id(faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AsyncEthereumTesterProvider' object attribute '_current_request_id' cannot be deleted");
        return -1;
    }
    if (self->__current_request_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->__current_request_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->__current_request_id = tmp;
    return 0;
}

static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__EthereumTesterProvider_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider(PyObject *cpy_r_ethereum_tester, PyObject *cpy_r_api_endpoints);

static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__EthereumTesterProvider_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_traverse(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->__middleware.f0);
    Py_VISIT(self->__middleware.f1);
    Py_VISIT(self->_ethereum_tester);
    Py_VISIT(self->_api_endpoints);
    if (CPyTagged_CheckLong(self->__current_request_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->__current_request_id));
    }
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_clear(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self)
{
    Py_CLEAR(self->__middleware.f0);
    Py_CLEAR(self->__middleware.f1);
    Py_CLEAR(self->_ethereum_tester);
    Py_CLEAR(self->_api_endpoints);
    if (CPyTagged_CheckLong(self->__current_request_id)) {
        CPyTagged __tmp = self->__current_request_id;
        self->__current_request_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___main___EthereumTesterProvider_dealloc(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main___EthereumTesterProvider_dealloc)
    faster_web3___providers___eth_tester___main___EthereumTesterProvider_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main___EthereumTesterProvider_vtable[5];
static bool
CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main___EthereumTesterProvider_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup,
    };
    memcpy(faster_web3___providers___eth_tester___main___EthereumTesterProvider_vtable, faster_web3___providers___eth_tester___main___EthereumTesterProvider_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main___EthereumTesterProvider_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get__middleware(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set__middleware(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get_ethereum_tester(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set_ethereum_tester(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get_api_endpoints(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set_api_endpoints(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get__current_request_id(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set__current_request_id(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___main___EthereumTesterProvider_getseters[] = {
    {"_middleware",
     (getter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_get__middleware, (setter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_set__middleware,
     NULL, NULL},
    {"ethereum_tester",
     (getter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_get_ethereum_tester, (setter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_set_ethereum_tester,
     NULL, NULL},
    {"api_endpoints",
     (getter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_get_api_endpoints, (setter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_set_api_endpoints,
     NULL, NULL},
    {"_current_request_id",
     (getter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_get__current_request_id, (setter)faster_web3___providers___eth_tester___main___EthereumTesterProvider_set__current_request_id,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___main___EthereumTesterProvider_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, ethereum_tester=None, api_endpoints=None)\n--\n\n")},
    {"request_func",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("request_func($self, w3, middleware_onion)\n--\n\n")},
    {"make_request",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("make_request($self, method, params)\n--\n\n")},
    {"is_connected",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("is_connected($self, show_traceback=False)\n--\n\n")},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__mypyc_defaults_setup()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "EthereumTesterProvider",
    .tp_new = faster_web3___providers___eth_tester___main___EthereumTesterProvider_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main___EthereumTesterProvider_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main___EthereumTesterProvider_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main___EthereumTesterProvider_clear,
    .tp_getset = faster_web3___providers___eth_tester___main___EthereumTesterProvider_getseters,
    .tp_methods = faster_web3___providers___eth_tester___main___EthereumTesterProvider_methods,
    .tp_init = faster_web3___providers___eth_tester___main___EthereumTesterProvider_init,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("EthereumTesterProvider(ethereum_tester=None, api_endpoints=None)\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider_template = &CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__EthereumTesterProvider_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self;
    self = (faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main___EthereumTesterProvider_vtable;
    self->__middleware = (tuple_T2OO) { NULL, NULL };
    self->__current_request_id = CPY_INT_TAG;
    if (CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider(PyObject *cpy_r_ethereum_tester, PyObject *cpy_r_api_endpoints)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__EthereumTesterProvider_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider);
    if (self == NULL)
        return NULL;
    char res = CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__(self, cpy_r_ethereum_tester, cpy_r_api_endpoints);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get__middleware(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->__middleware.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_middleware' of 'EthereumTesterProvider' undefined");
        return NULL;
    }
    CPy_INCREF(self->__middleware.f0);
    CPy_INCREF(self->__middleware.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = self->__middleware.f0;
    PyTuple_SET_ITEM(retval, 0, __tmp9);
    PyObject *__tmp10 = self->__middleware.f1;
    PyTuple_SET_ITEM(retval, 1, __tmp10);
    return retval;
}

static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set__middleware(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EthereumTesterProvider' object attribute '_middleware' cannot be deleted");
        return -1;
    }
    if (self->__middleware.f0 != NULL) {
        CPy_DECREF(self->__middleware.f0);
        CPy_DECREF(self->__middleware.f1);
    }
    tuple_T2OO tmp;
    PyObject *__tmp11;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp11 = NULL;
        goto __LL12;
    }
    __tmp11 = PyTuple_GET_ITEM(value, 0);
    if (__tmp11 == NULL) goto __LL12;
    __tmp11 = PyTuple_GET_ITEM(value, 1);
    if (__tmp11 == NULL) goto __LL12;
    __tmp11 = value;
__LL12: ;
    if (unlikely(__tmp11 == NULL)) {
        CPy_TypeError("tuple[object, object]", value); return -1;
    } else {
        PyObject *__tmp13 = PyTuple_GET_ITEM(value, 0);
        CPy_INCREF(__tmp13);
        PyObject *__tmp14;
        __tmp14 = __tmp13;
        tmp.f0 = __tmp14;
        PyObject *__tmp15 = PyTuple_GET_ITEM(value, 1);
        CPy_INCREF(__tmp15);
        PyObject *__tmp16;
        __tmp16 = __tmp15;
        tmp.f1 = __tmp16;
    }
    CPy_INCREF(tmp.f0);
    CPy_INCREF(tmp.f1);
    self->__middleware = tmp;
    return 0;
}

static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get_ethereum_tester(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->_ethereum_tester == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ethereum_tester' of 'EthereumTesterProvider' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ethereum_tester);
    PyObject *retval = self->_ethereum_tester;
    return retval;
}

static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set_ethereum_tester(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EthereumTesterProvider' object attribute 'ethereum_tester' cannot be deleted");
        return -1;
    }
    if (self->_ethereum_tester != NULL) {
        CPy_DECREF(self->_ethereum_tester);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_ethereum_tester = tmp;
    return 0;
}

static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get_api_endpoints(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->_api_endpoints == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'api_endpoints' of 'EthereumTesterProvider' undefined");
        return NULL;
    }
    CPy_INCREF(self->_api_endpoints);
    PyObject *retval = self->_api_endpoints;
    return retval;
}

static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set_api_endpoints(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EthereumTesterProvider' object attribute 'api_endpoints' cannot be deleted");
        return -1;
    }
    if (self->_api_endpoints != NULL) {
        CPy_DECREF(self->_api_endpoints);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_api_endpoints = tmp;
    return 0;
}

static PyObject *
faster_web3___providers___eth_tester___main___EthereumTesterProvider_get__current_request_id(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, void *closure)
{
    if (unlikely(self->__current_request_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_current_request_id' of 'EthereumTesterProvider' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->__current_request_id);
    PyObject *retval = CPyTagged_StealAsObject(self->__current_request_id);
    return retval;
}

static int
faster_web3___providers___eth_tester___main___EthereumTesterProvider_set__current_request_id(faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'EthereumTesterProvider' object attribute '_current_request_id' cannot be deleted");
        return -1;
    }
    if (self->__current_request_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->__current_request_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->__current_request_id = tmp;
    return 0;
}

static PyAsyncMethods faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_as_async = {
    .am_await = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__,
};
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__request_func_AsyncEthereumTesterProvider_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen(void);

static PyObject *
faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__request_func_AsyncEthereumTesterProvider_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_traverse(faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__async_w3);
    Py_VISIT(self->___mypyc_generator_attribute__middleware_onion);
    Py_VISIT(self->___mypyc_generator_attribute__middleware);
    Py_VISIT(self->___mypyc_generator_attribute__cache_key);
    Py_VISIT(self->___mypyc_generator_attribute__func);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1.f0);
    Py_VISIT(self->___mypyc_temp__1.f1);
    Py_VISIT(self->___mypyc_temp__1.f2);
    return 0;
}

static int
faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_clear(faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__async_w3);
    Py_CLEAR(self->___mypyc_generator_attribute__middleware_onion);
    Py_CLEAR(self->___mypyc_generator_attribute__middleware);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
    Py_CLEAR(self->___mypyc_generator_attribute__func);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1.f0);
    Py_CLEAR(self->___mypyc_temp__1.f1);
    Py_CLEAR(self->___mypyc_temp__1.f2);
    return 0;
}

static void
faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_dealloc(faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance == NULL) {
        faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__async_w3);
        Py_CLEAR(self->___mypyc_generator_attribute__middleware_onion);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__middleware);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
        Py_CLEAR(self->___mypyc_generator_attribute__func);
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1.f0);
        Py_CLEAR(self->___mypyc_temp__1.f1);
        Py_CLEAR(self->___mypyc_temp__1.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_dealloc)
    faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_vtable[7];
static bool
CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__,
    };
    memcpy(faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_vtable, faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "request_func_AsyncEthereumTesterProvider_gen",
    .tp_new = faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_clear,
    .tp_methods = faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_methods,
    .tp_iter = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__,
    .tp_as_async = &faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_as_async,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("request_func_AsyncEthereumTesterProvider_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_template = &CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__request_func_AsyncEthereumTesterProvider_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *self;
    if (faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance;
        faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__1 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__request_func_AsyncEthereumTesterProvider_gen_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_as_async = {
    .am_await = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__,
};
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_request_AsyncEthereumTesterProvider_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen(void);

static PyObject *
faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_request_AsyncEthereumTesterProvider_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_traverse(faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__method);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->___mypyc_generator_attribute__response);
    return 0;
}

static int
faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_clear(faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__method);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->___mypyc_generator_attribute__response);
    return 0;
}

static void
faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_dealloc(faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance == NULL) {
        faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__method);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__response);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_dealloc)
    faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_vtable[7];
static bool
CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__,
    };
    memcpy(faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_vtable, faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "make_request_AsyncEthereumTesterProvider_gen",
    .tp_new = faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_clear,
    .tp_methods = faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_methods,
    .tp_iter = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__,
    .tp_as_async = &faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_as_async,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("make_request_AsyncEthereumTesterProvider_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_template = &CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_request_AsyncEthereumTesterProvider_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *self;
    if (faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance;
        faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_vtable;
    self->___mypyc_next_label__ = -113;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_request_AsyncEthereumTesterProvider_gen_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_as_async = {
    .am_await = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__,
};
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__is_connected_AsyncEthereumTesterProvider_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen(void);

static PyObject *
faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__is_connected_AsyncEthereumTesterProvider_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_traverse(faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    return 0;
}

static int
faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_clear(faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    return 0;
}

static void
faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_dealloc(faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance == NULL) {
        faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        self->___mypyc_generator_attribute__show_traceback = 2;
        self->___mypyc_next_label__ = -113;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_dealloc)
    faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_vtable[7];
static bool
CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__,
    };
    memcpy(faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_vtable, faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "is_connected_AsyncEthereumTesterProvider_gen",
    .tp_new = faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_clear,
    .tp_methods = faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_methods,
    .tp_iter = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__,
    .tp_as_async = &faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_as_async,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("is_connected_AsyncEthereumTesterProvider_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_template = &CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__is_connected_AsyncEthereumTesterProvider_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *self;
    if (faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance;
        faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_vtable;
    self->___mypyc_generator_attribute__show_traceback = 2;
    self->___mypyc_next_label__ = -113;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__is_connected_AsyncEthereumTesterProvider_gen_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc___3__init___3_EthereumTesterProvider_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env(void);

static PyObject *
faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc___3__init___3_EthereumTesterProvider_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_traverse(faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_ethereum_tester);
    Py_VISIT(self->_make_tester);
    Py_VISIT(self->_import_endpoints);
    Py_VISIT(self->_self);
    Py_VISIT(self->_api_endpoints);
    return 0;
}

static int
faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_clear(faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_ethereum_tester);
    Py_CLEAR(self->_make_tester);
    Py_CLEAR(self->_import_endpoints);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_api_endpoints);
    return 0;
}

static void
faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_dealloc(faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance == NULL) {
        faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_ethereum_tester);
        self->_None = 2;
        Py_CLEAR(self->_make_tester);
        Py_CLEAR(self->_import_endpoints);
        Py_CLEAR(self->_self);
        Py_CLEAR(self->_api_endpoints);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_dealloc)
    faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_vtable[1];
static bool
CPyDef_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_vtable, faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__init___EthereumTesterProvider_env",
    .tp_new = faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_clear,
    .tp_methods = faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_methods,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("__init___EthereumTesterProvider_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_template = &CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc___3__init___3_EthereumTesterProvider_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *self;
    if (faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance;
        faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_vtable;
    self->_None = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc___3__init___3_EthereumTesterProvider_env_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_tester___3_init___3_EthereumTesterProvider_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj(void);

static PyObject *
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_tester___3_init___3_EthereumTesterProvider_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_traverse(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_clear(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_dealloc(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance == NULL) {
        faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_dealloc)
    faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_vtable[2];
static bool
CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__,
    };
    memcpy(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_vtable, faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_get___3_mypyc_env__, (setter)faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__()\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "make_tester___init___EthereumTesterProvider_obj",
    .tp_new = faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_clear,
    .tp_getset = faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_getseters,
    .tp_methods = faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("make_tester___init___EthereumTesterProvider_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_template = &CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_tester___3_init___3_EthereumTesterProvider_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self;
    if (faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance;
        faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_vtable;
    self->vectorcall = CPyPy_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__make_tester___3_init___3_EthereumTesterProvider_obj_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'make_tester___init___EthereumTesterProvider_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'make_tester___init___EthereumTesterProvider_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.__init___EthereumTesterProvider_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *CPyDunder___get__faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__import_endpoints___3_init___3_EthereumTesterProvider_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj(void);

static PyObject *
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__import_endpoints___3_init___3_EthereumTesterProvider_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_traverse(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_clear(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_dealloc(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance == NULL) {
        faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_dealloc)
    faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_vtable[2];
static bool
CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__,
    };
    memcpy(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_vtable, faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_vtable_scratch, sizeof(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self, void *closure);
static int
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_get___3_mypyc_env__, (setter)faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__()\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "import_endpoints___init___EthereumTesterProvider_obj",
    .tp_new = faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_clear,
    .tp_getset = faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_getseters,
    .tp_methods = faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("import_endpoints___init___EthereumTesterProvider_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_template = &CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___main_____mypyc__import_endpoints___3_init___3_EthereumTesterProvider_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self;
    if (faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance;
        faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_vtable;
    self->vectorcall = CPyPy_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___main_____mypyc__import_endpoints___3_init___3_EthereumTesterProvider_obj_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'import_endpoints___init___EthereumTesterProvider_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'import_endpoints___init___EthereumTesterProvider_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.__init___EthereumTesterProvider_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}
static PyMethodDef faster_web3___providers___eth_tester___mainmodule_methods[] = {
    {"_make_response", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main____make_response, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_make_response(result, response_id, message=\'\')\n--\n\n") /* docstring */},
    {"_make_request", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___main____make_request, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_make_request(method, params, api_endpoints, ethereum_tester_instance, request_id)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___providers___eth_tester___main(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___providers___eth_tester___main__internal, "__name__");
    CPyStatic_faster_web3___providers___eth_tester___main___globals = PyModule_GetDict(CPyModule_faster_web3___providers___eth_tester___main__internal);
    if (unlikely(CPyStatic_faster_web3___providers___eth_tester___main___globals == NULL))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___providers___eth_tester___main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___providers___eth_tester___main__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware.f0);
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware.f1);
    CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware = (tuple_T2OO) { NULL, NULL };
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware.f0);
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware.f1);
    CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware = (tuple_T2OO) { NULL, NULL };
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj);
    return -1;
}
static struct PyModuleDef faster_web3___providers___eth_tester___mainmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.providers.eth_tester.main",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___providers___eth_tester___mainmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___providers___eth_tester___main(void)
{
    if (CPyModule_faster_web3___providers___eth_tester___main__internal) {
        Py_INCREF(CPyModule_faster_web3___providers___eth_tester___main__internal);
        return CPyModule_faster_web3___providers___eth_tester___main__internal;
    }
    CPyModule_faster_web3___providers___eth_tester___main__internal = PyModule_Create(&faster_web3___providers___eth_tester___mainmodule);
    if (unlikely(CPyModule_faster_web3___providers___eth_tester___main__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___providers___eth_tester___main(CPyModule_faster_web3___providers___eth_tester___main__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___providers___eth_tester___main__internal;
    fail:
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
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
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[3]; /* 'super' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 70, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    cpy_r_r3 = (PyObject *)CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider;
    PyObject *cpy_r_r4[2] = {cpy_r_r3, cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 70, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    cpy_r_r7 = CPyStatics[4]; /* '__init__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 70, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r8, 0, 0, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 70, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL4: ;
    cpy_r_r10 = CPyStatics[88]; /* ('EthereumTester',) */
    cpy_r_r11 = CPyStatics[6]; /* 'eth_tester' */
    cpy_r_r12 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r13 = CPyImport_ImportFromMany(cpy_r_r11, cpy_r_r10, cpy_r_r10, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 73, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    CPyModule_eth_tester = cpy_r_r13;
    CPy_INCREF(CPyModule_eth_tester);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[89]; /* ('API_ENDPOINTS',) */
    cpy_r_r15 = CPyStatics[8]; /* 'faster_web3.providers.eth_tester.defaults' */
    cpy_r_r16 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r14, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 77, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    CPyModule_faster_web3___providers___eth_tester___defaults = cpy_r_r17;
    CPy_INCREF(CPyModule_faster_web3___providers___eth_tester___defaults);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r19 = CPyStatics[5]; /* 'EthereumTester' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 81, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r20, 0, 0, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 81, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    if (((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->_ethereum_tester != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->_ethereum_tester);
    }
    ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->_ethereum_tester = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 81, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    cpy_r_r23 = *exports_faster_web3___providers___eth_tester___defaults.CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS;
    if (likely(cpy_r_r23 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"API_ENDPOINTS\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 82, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r25 = CPyDict_Copy(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 82, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    if (((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->_api_endpoints != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->_api_endpoints);
    }
    ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->_api_endpoints = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 82, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    if (((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->__current_request_id != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->__current_request_id);
    }
    ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_self)->__current_request_id = 0;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 84, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL17: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL4;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.AsyncEthereumTesterProvider", obj_self); 
        goto fail;
    }
    char retval = CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 69, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T2OO cpy_r_r12;
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
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    char cpy_r_r60;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    tuple_T3OOO cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    tuple_T2OO cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL78;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 86, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__middleware_onion;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "middleware_onion", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyStatics[9]; /* 'as_tuple_of_middleware' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL83;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyTuple_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals, "tuple", cpy_r_r9);
        goto CPyL82;
    }
    cpy_r_r11 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "self", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL84;
    }
    CPy_INCREF_NO_IMM(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r11)->__middleware;
    if (unlikely(cpy_r_r12.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_middleware' of 'AsyncEthereumTesterProvider' undefined");
    } else {
        CPy_INCREF(cpy_r_r12.f0);
        CPy_INCREF(cpy_r_r12.f1);
    }
    CPy_DECREF_NO_IMM(cpy_r_r11);
    if (unlikely(cpy_r_r12.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL84;
    }
CPyL9: ;
    cpy_r_r13 = PyTuple_New(2);
    if (unlikely(cpy_r_r13 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp17 = cpy_r_r12.f0;
    PyTuple_SET_ITEM(cpy_r_r13, 0, __tmp17);
    PyObject *__tmp18 = cpy_r_r12.f1;
    PyTuple_SET_ITEM(cpy_r_r13, 1, __tmp18);
    cpy_r_r14 = PySequence_Tuple(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL84;
    }
    cpy_r_r15 = PySequence_Concat(cpy_r_r10, cpy_r_r14);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__middleware != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__middleware);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__middleware = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 91, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    cpy_r_r17 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "self", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF_NO_IMM(cpy_r_r17);
CPyL13: ;
    cpy_r_r18 = CPyStatics[10]; /* '_request_func_cache' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    CPy_DECREF_NO_IMM(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r19) && PyTuple_GET_SIZE(cpy_r_r19) == 2))) {
        cpy_r_r20 = NULL;
        goto __LL20;
    }
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_r19, 0))))
        cpy_r_r20 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 == NULL) goto __LL20;
    cpy_r_r20 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    if (cpy_r_r20 == NULL) goto __LL20;
    cpy_r_r20 = cpy_r_r19;
__LL20: ;
    if (cpy_r_r20 != NULL) goto __LL19;
    if (unlikely(!(PyTuple_Check(cpy_r_r19) && PyTuple_GET_SIZE(cpy_r_r19) == 2))) {
        cpy_r_r20 = NULL;
        goto __LL21;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r19, 0) == Py_None))
        cpy_r_r20 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 == NULL) goto __LL21;
    if (likely(PyTuple_GET_ITEM(cpy_r_r19, 1) == Py_None))
        cpy_r_r20 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 == NULL) goto __LL21;
    cpy_r_r20 = cpy_r_r19;
__LL21: ;
    if (cpy_r_r20 != NULL) goto __LL19;
    CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals, "union[tuple[tuple, object], tuple[None, None]]", cpy_r_r19);
    goto CPyL82;
__LL19: ;
    cpy_r_r21 = PyObject_GetIter(cpy_r_r20);
    CPy_DECREF_NO_IMM(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    cpy_r_r22 = PyIter_Next(cpy_r_r21);
    if (cpy_r_r22 == NULL) {
        goto CPyL85;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL19: ;
    if (PyTuple_Check(cpy_r_r22))
        cpy_r_r24 = cpy_r_r22;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL22;
    if (cpy_r_r22 == Py_None)
        cpy_r_r24 = cpy_r_r22;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL22;
    CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals, "tuple or None", cpy_r_r22);
    goto CPyL86;
__LL22: ;
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_key != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_key);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_key = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL86;
    }
    cpy_r_r26 = PyIter_Next(cpy_r_r21);
    if (cpy_r_r26 == NULL) {
        goto CPyL87;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL24: ;
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func = cpy_r_r26;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL86;
    }
    cpy_r_r29 = PyIter_Next(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (cpy_r_r29 == NULL) {
        goto CPyL28;
    } else
        goto CPyL88;
CPyL26: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 93, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r31 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_key;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "cache_key", 94, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r31);
CPyL29: ;
    cpy_r_r32 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__middleware;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "middleware", 94, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r32);
CPyL30: ;
    cpy_r_r33 = PyObject_RichCompare(cpy_r_r31, cpy_r_r32, 3);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 94, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    if (unlikely(!PyBool_Check(cpy_r_r33))) {
        CPy_TypeError("bool", cpy_r_r33); cpy_r_r34 = 2;
    } else
        cpy_r_r34 = cpy_r_r33 == Py_True;
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 94, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    if (!cpy_r_r34) goto CPyL72;
    cpy_r_r35 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__middleware;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "middleware", 96, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r35);
CPyL34: ;
    cpy_r_r36 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__async_w3;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "async_w3", 97, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r36);
CPyL35: ;
    cpy_r_r37 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "self", 98, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL91;
    }
    CPy_INCREF_NO_IMM(cpy_r_r37);
CPyL36: ;
    cpy_r_r38 = CPyStatics[11]; /* 'make_request' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    CPy_DECREF_NO_IMM(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 98, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL91;
    }
    cpy_r_r40 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r41 = CPyStatics[12]; /* 'async_combine_middleware' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL92;
    }
    PyObject *cpy_r_r43[3] = {cpy_r_r35, cpy_r_r36, cpy_r_r39};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = CPyStatics[90]; /* ('middleware', 'async_w3', 'provider_request_fn') */
    cpy_r_r46 = PyObject_Vectorcall(cpy_r_r42, cpy_r_r44, 0, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL92;
    }
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r47 = CPy_GetCoro(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    cpy_r_r49 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r49);
CPyL42: ;
    cpy_r_r50 = CPyIter_Next(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (cpy_r_r50 != NULL) goto CPyL45;
    cpy_r_r51 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    cpy_r_r52 = cpy_r_r51;
    cpy_r_r53 = NULL;
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r53;
    cpy_r_r54 = 1;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL93;
    } else
        goto CPyL67;
CPyL45: ;
    cpy_r_r55 = cpy_r_r50;
CPyL46: ;
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r55;
CPyL47: ;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = cpy_r_type != cpy_r_r57;
    if (!cpy_r_r58) goto CPyL94;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL51;
    } else
        goto CPyL95;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL62;
CPyL51: ;
    cpy_r_r59 = CPy_CatchError();
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0);
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f1);
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f2);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL96;
    }
    cpy_r_r61 = (PyObject **)&cpy_r_r1;
    cpy_r_r62 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r62);
CPyL53: ;
    cpy_r_r63 = CPy_YieldFromErrorHandle(cpy_r_r62, cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL96;
    }
    if (cpy_r_r63) goto CPyL57;
    cpy_r_r55 = cpy_r_r1;
    cpy_r_r64 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r64.f0);
    CPy_INCREF(cpy_r_r64.f1);
    CPy_INCREF(cpy_r_r64.f2);
CPyL56: ;
    CPy_RestoreExcInfo(cpy_r_r64);
    CPy_DecRef(cpy_r_r64.f0);
    CPy_DecRef(cpy_r_r64.f1);
    CPy_DecRef(cpy_r_r64.f2);
    goto CPyL46;
CPyL57: ;
    cpy_r_r52 = cpy_r_r1;
    cpy_r_r65 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r65.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r65.f0);
    CPy_INCREF(cpy_r_r65.f1);
    CPy_INCREF(cpy_r_r65.f2);
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r65);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    goto CPyL67;
CPyL59: ;
    cpy_r_r66 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r66.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r66.f0);
    CPy_INCREF(cpy_r_r66.f1);
    CPy_INCREF(cpy_r_r66.f2);
CPyL60: ;
    CPy_RestoreExcInfo(cpy_r_r66);
    CPy_DecRef(cpy_r_r66.f0);
    CPy_DecRef(cpy_r_r66.f1);
    CPy_DecRef(cpy_r_r66.f2);
    cpy_r_r67 = CPy_KeepPropagating();
    if (!cpy_r_r67) goto CPyL82;
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r68 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r68);
CPyL63: ;
    cpy_r_r69 = CPyIter_Send(cpy_r_r68, cpy_r_arg);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r69 == NULL) goto CPyL65;
    cpy_r_r55 = cpy_r_r69;
    goto CPyL46;
CPyL65: ;
    cpy_r_r70 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    cpy_r_r52 = cpy_r_r70;
CPyL67: ;
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func = cpy_r_r52;
    cpy_r_r71 = 1;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 95, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    cpy_r_r72 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__middleware;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "middleware", 100, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r72);
CPyL69: ;
    cpy_r_r73 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "func", 100, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r73);
CPyL70: ;
    cpy_r_r74.f0 = cpy_r_r72;
    cpy_r_r74.f1 = cpy_r_r73;
    cpy_r_r75 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "self", 100, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL101;
    }
    CPy_INCREF_NO_IMM(cpy_r_r75);
CPyL71: ;
    cpy_r_r76 = CPyStatics[10]; /* '_request_func_cache' */
    cpy_r_r77 = PyTuple_New(2);
    if (unlikely(cpy_r_r77 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp23 = cpy_r_r74.f0;
    PyTuple_SET_ITEM(cpy_r_r77, 0, __tmp23);
    PyObject *__tmp24 = cpy_r_r74.f1;
    PyTuple_SET_ITEM(cpy_r_r77, 1, __tmp24);
    cpy_r_r78 = PyObject_SetAttr(cpy_r_r75, cpy_r_r76, cpy_r_r77);
    CPy_DECREF_NO_IMM(cpy_r_r75);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 100, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
CPyL72: ;
    cpy_r_r80 = ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__func;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "request_func_AsyncEthereumTesterProvider_gen", "func", 101, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r80);
CPyL73: ;
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL77;
    CPyGen_SetStopIterationValue(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (!0) goto CPyL82;
    CPy_Unreachable();
CPyL77: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r80;
    return 0;
CPyL78: ;
    cpy_r_r82 = cpy_r_r2 == 0;
    if (cpy_r_r82) goto CPyL102;
    cpy_r_r83 = cpy_r_r2 == 1;
    if (cpy_r_r83) {
        goto CPyL47;
    } else
        goto CPyL103;
CPyL80: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r84 = 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 86, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r85 = NULL;
    return cpy_r_r85;
CPyL83: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL82;
CPyL84: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL82;
CPyL85: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL17;
CPyL86: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL82;
CPyL87: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL22;
CPyL88: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL26;
CPyL89: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL82;
CPyL90: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL82;
CPyL91: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    goto CPyL82;
CPyL92: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    goto CPyL82;
CPyL93: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL82;
CPyL94: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL50;
CPyL95: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL49;
CPyL96: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL59;
CPyL97: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL59;
CPyL98: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL59;
CPyL99: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL82;
CPyL100: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL82;
CPyL101: ;
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    goto CPyL82;
CPyL102: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL103: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL80;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.request_func_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__next__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.request_func_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "send", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.request_func_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__iter__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.request_func_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "throw", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp25 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp25);
    PyObject *__tmp26 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp26);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.request_func_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "close", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.request_func_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__await__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func(PyObject *cpy_r_self, PyObject *cpy_r_async_w3, PyObject *cpy_r_middleware_onion) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 86, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL5;
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 86, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_async_w3);
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3 != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__async_w3 = cpy_r_async_w3;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 86, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_middleware_onion);
    if (((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__middleware_onion != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__middleware_onion);
    }
    ((faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__middleware_onion = cpy_r_middleware_onion;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 86, CPyStatic_faster_web3___providers___eth_tester___main___globals);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"async_w3", "middleware_onion", 0};
    static CPyArg_Parser parser = {"OO:request_func", kwlist, 0};
    PyObject *obj_async_w3;
    PyObject *obj_middleware_onion;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_async_w3, &obj_middleware_onion)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.AsyncEthereumTesterProvider", obj_self); 
        goto fail;
    }
    PyObject *arg_async_w3 = obj_async_w3;
    PyObject *arg_middleware_onion = obj_middleware_onion;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func(arg_self, arg_async_w3, arg_middleware_onion);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 86, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    int32_t cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL24;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 103, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "make_request_AsyncEthereumTesterProvider_gen", "method", 105, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "make_request_AsyncEthereumTesterProvider_gen", "params", 106, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "make_request_AsyncEthereumTesterProvider_gen", "self", 107, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL29;
    }
    CPy_INCREF_NO_IMM(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r5)->_api_endpoints;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'api_endpoints' of 'AsyncEthereumTesterProvider' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF_NO_IMM(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 107, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL29;
    }
CPyL8: ;
    cpy_r_r7 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "make_request_AsyncEthereumTesterProvider_gen", "self", 108, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL30;
    }
    CPy_INCREF_NO_IMM(cpy_r_r7);
CPyL9: ;
    cpy_r_r8 = ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r7)->_ethereum_tester;
    if (unlikely(cpy_r_r8 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ethereum_tester' of 'AsyncEthereumTesterProvider' undefined");
    } else {
        CPy_INCREF(cpy_r_r8);
    }
    CPy_DECREF_NO_IMM(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 108, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL30;
    }
CPyL10: ;
    cpy_r_r9 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "make_request_AsyncEthereumTesterProvider_gen", "self", 109, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    CPy_INCREF_NO_IMM(cpy_r_r9);
CPyL11: ;
    cpy_r_r10 = ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r9)->__current_request_id;
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '_current_request_id' of 'AsyncEthereumTesterProvider' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r10);
    }
    CPy_DECREF_NO_IMM(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 109, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
CPyL12: ;
    cpy_r_r11 = CPyTagged_Str(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 109, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    cpy_r_r12 = CPyDef_faster_web3___providers___eth_tester___main____make_request(cpy_r_r3, cpy_r_r4, cpy_r_r6, cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 104, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    if (((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response);
    }
    ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 104, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    cpy_r_r14 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "make_request_AsyncEthereumTesterProvider_gen", "self", 111, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_INCREF_NO_IMM(cpy_r_r14);
CPyL16: ;
    cpy_r_r15 = ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r14)->__current_request_id;
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "AsyncEthereumTesterProvider", "_current_request_id", 111, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL32;
    }
CPyL17: ;
    cpy_r_r16 = CPyTagged_Add(cpy_r_r15, 2);
    if (((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r14)->__current_request_id != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r14)->__current_request_id);
    }
    ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r_r14)->__current_request_id = cpy_r_r16;
    cpy_r_r17 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r14);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 111, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    cpy_r_r18 = ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "make_request_AsyncEthereumTesterProvider_gen", "response", 112, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r18);
CPyL19: ;
    ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL23;
    CPyGen_SetStopIterationValue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (!0) goto CPyL27;
    CPy_Unreachable();
CPyL23: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r18;
    return 0;
CPyL24: ;
    cpy_r_r20 = cpy_r_r0 == 0;
    if (cpy_r_r20) goto CPyL1;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 103, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL27;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.make_request_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__next__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.make_request_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "send", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.make_request_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__iter__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.make_request_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "throw", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp27 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp27);
    PyObject *__tmp28 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp28);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.make_request_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "close", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.make_request_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__await__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 103, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL5;
    }
    ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 103, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_method);
    if (((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method);
    }
    ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method = cpy_r_method;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 103, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params);
    }
    ((faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params = cpy_r_params;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 103, CPyStatic_faster_web3___providers___eth_tester___main___globals);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"method", "params", 0};
    static CPyArg_Parser parser = {"OO:make_request", kwlist, 0};
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.AsyncEthereumTesterProvider", obj_self); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request(arg_self, arg_method, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 103, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    int32_t cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL9;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "is_connected", 114, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = 1 ? Py_True : Py_False;
    ((faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL8;
    CPyGen_SetStopIterationValue(cpy_r_r3);
    if (!0) goto CPyL12;
    CPy_Unreachable();
CPyL8: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r3;
    return 0;
CPyL9: ;
    cpy_r_r5 = cpy_r_r0 == 0;
    if (cpy_r_r5) goto CPyL1;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "is_connected", 114, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.is_connected_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__next__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.is_connected_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "send", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.is_connected_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__iter__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.is_connected_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "throw", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp29 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp29);
    PyObject *__tmp30 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp30);
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.is_connected_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "close", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.is_connected_AsyncEthereumTesterProvider_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__await__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected(PyObject *cpy_r_self, char cpy_r_show_traceback) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_show_traceback != 2) goto CPyL2;
    cpy_r_show_traceback = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "is_connected", 114, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL6;
    }
    ((faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "is_connected", 114, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL7;
    }
    ((faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *)cpy_r_r0)->___mypyc_generator_attribute__show_traceback = cpy_r_show_traceback;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "is_connected", 114, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL7;
    }
    return cpy_r_r0;
CPyL6: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"show_traceback", 0};
    static CPyArg_Parser parser = {"|O:is_connected", kwlist, 0};
    PyObject *obj_show_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_show_traceback)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.AsyncEthereumTesterProvider", obj_self); 
        goto fail;
    }
    char arg_show_traceback;
    if (obj_show_traceback == NULL) {
        arg_show_traceback = 2;
    } else if (unlikely(!PyBool_Check(obj_show_traceback))) {
        CPy_TypeError("bool", obj_show_traceback); goto fail;
    } else
        arg_show_traceback = obj_show_traceback == Py_True;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected(arg_self, arg_show_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "is_connected", 114, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"default_transaction_fields_middleware\" was not set");
    cpy_r_r1 = 0;
    if (!cpy_r_r1) goto CPyL7;
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware;
    if (likely(cpy_r_r2 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"ethereum_tester_middleware\" was not set");
    cpy_r_r3 = 0;
    if (!cpy_r_r3) goto CPyL7;
    CPy_Unreachable();
CPyL6: ;
    CPy_INCREF(cpy_r_r0);
    CPy_INCREF(cpy_r_r2);
    cpy_r_r4.f0 = cpy_r_r0;
    cpy_r_r4.f1 = cpy_r_r2;
    ((faster_web3___providers___eth_tester___main___AsyncEthereumTesterProviderObject *)cpy_r___mypyc_self__)->__middleware = cpy_r_r4;
    return 1;
CPyL7: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(PyObject_TypeCheck(obj___mypyc_self__, CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider)))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.AsyncEthereumTesterProvider", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__mypyc_defaults_setup", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__get__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
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
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_tester", "make_tester___init___EthereumTesterProvider_obj", "__mypyc_env__", 138, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r0)->_ethereum_tester;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_tester", "__init___EthereumTesterProvider_env", "ethereum_tester", 139, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 == cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    if (cpy_r_r3) {
        goto CPyL29;
    } else
        goto CPyL6;
CPyL3: ;
    cpy_r_r4 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r5 = CPyStatics[5]; /* 'EthereumTester' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 140, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r6, 0, 0, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 140, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = ((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r0)->_ethereum_tester;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_tester", "__init___EthereumTesterProvider_env", "ethereum_tester", 141, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r10 = CPyStatics[5]; /* 'EthereumTester' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 141, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL30;
    }
    cpy_r_r12 = PyObject_IsInstance(cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 141, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL12;
    cpy_r_r15 = ((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r0)->_ethereum_tester;
    if (unlikely(cpy_r_r15 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ethereum_tester' of '__init___EthereumTesterProvider_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r15);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 142, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
CPyL11: ;
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = ((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r0)->_ethereum_tester;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_tester", "__init___EthereumTesterProvider_env", "ethereum_tester", 143, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r16);
CPyL13: ;
    cpy_r_r17 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r18 = CPyStatics[18]; /* 'BaseChainBackend' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 143, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    cpy_r_r20 = PyObject_IsInstance(cpy_r_r16, cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 143, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL20;
    cpy_r_r23 = ((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r0)->_ethereum_tester;
    if (unlikely(cpy_r_r23 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ethereum_tester' of '__init___EthereumTesterProvider_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r23);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 144, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
CPyL17: ;
    cpy_r_r24 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r25 = CPyStatics[5]; /* 'EthereumTester' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 144, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 144, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r23);
    return cpy_r_r29;
CPyL20: ;
    cpy_r_r30 = CPyStatics[19]; /* ('Expected ethereum_tester to be of type '
                                   '`eth_tester.EthereumTester` or a subclass of '
                                   '`eth_tester.backends.base.BaseChainBackend`, instead '
                                   'received ') */
    cpy_r_r31 = ((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r0)->_ethereum_tester;
    if (unlikely(cpy_r_r31 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ethereum_tester' of '__init___EthereumTesterProvider_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r31);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 148, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
CPyL21: ;
    cpy_r_r32 = CPy_TYPE(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = PyObject_Str(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 146, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    cpy_r_r34 = CPyStatics[20]; /* ('. If you would like a custom eth-tester instance to '
                                   'test with, see the eth-tester documentation. '
                                   'https://github.com/ethereum/eth-tester.') */
    cpy_r_r35 = CPyStr_Build(3, cpy_r_r30, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 146, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    cpy_r_r36 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r37 = CPyStatics[21]; /* 'Web3TypeError' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 145, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_r35};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 145, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_r35);
    CPy_Raise(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 145, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL27;
CPyL29: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL3;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL27;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_tester", 138, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__get__", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "import_endpoints", "import_endpoints___init___EthereumTesterProvider_obj", "__mypyc_env__", 155, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    goto CPyL8;
CPyL1: ;
    cpy_r_r1 = CPyStatics[89]; /* ('API_ENDPOINTS',) */
    cpy_r_r2 = CPyStatics[8]; /* 'faster_web3.providers.eth_tester.defaults' */
    cpy_r_r3 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r4 = CPyImport_ImportFromMany(cpy_r_r2, cpy_r_r1, cpy_r_r1, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "import_endpoints", 158, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL7;
    }
    CPyModule_faster_web3___providers___eth_tester___defaults = cpy_r_r4;
    CPy_INCREF(CPyModule_faster_web3___providers___eth_tester___defaults);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r5 = *exports_faster_web3___providers___eth_tester___defaults.CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS;
    if (likely(cpy_r_r5 != NULL)) goto CPyL5;
    PyErr_SetString(PyExc_NameError, "value for final name \"API_ENDPOINTS\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "import_endpoints", 162, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r7 = CPyDict_Copy(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "import_endpoints", 162, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL8: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "import_endpoints", 155, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__(PyObject *cpy_r_self, PyObject *cpy_r_ethereum_tester, PyObject *cpy_r_api_endpoints) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
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
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_make_tester;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_import_endpoints;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    if (cpy_r_ethereum_tester != NULL) goto CPyL28;
    cpy_r_r0 = Py_None;
    cpy_r_ethereum_tester = cpy_r_r0;
CPyL2: ;
    if (cpy_r_api_endpoints != NULL) goto CPyL29;
    cpy_r_r1 = Py_None;
    cpy_r_api_endpoints = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyDef_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 124, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL30;
    }
    if (((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r2)->_ethereum_tester != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r2)->_ethereum_tester);
    }
    ((faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *)cpy_r_r2)->_ethereum_tester = cpy_r_ethereum_tester;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 124, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[3]; /* 'super' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 132, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    cpy_r_r7 = (PyObject *)CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider;
    PyObject *cpy_r_r8[2] = {cpy_r_r7, cpy_r_self};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r9, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 132, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    cpy_r_r11 = CPyStatics[4]; /* '__init__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 132, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    cpy_r_r13 = PyObject_Vectorcall(cpy_r_r12, 0, 0, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 132, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL10: ;
    cpy_r_r14 = CPyStatics[88]; /* ('EthereumTester',) */
    cpy_r_r15 = CPyStatics[6]; /* 'eth_tester' */
    cpy_r_r16 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r14, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 133, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    CPyModule_eth_tester = cpy_r_r17;
    CPy_INCREF(CPyModule_eth_tester);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[91]; /* ('BaseChainBackend',) */
    cpy_r_r19 = CPyStatics[22]; /* 'eth_tester.backends.base' */
    cpy_r_r20 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 134, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    CPyModule_eth_tester___backends___base = cpy_r_r21;
    CPy_INCREF(CPyModule_eth_tester___backends___base);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj();
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 138, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
    if (((faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *)cpy_r_r22)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *)cpy_r_r22)->___mypyc_env__);
    }
    ((faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *)cpy_r_r22)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 138, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL33;
    }
    cpy_r_make_tester = cpy_r_r22;
    cpy_r_r24 = PyObject_Vectorcall(cpy_r_make_tester, 0, 0, 0);
    CPy_DECREF(cpy_r_make_tester);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 153, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    if (((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_ethereum_tester != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_ethereum_tester);
    }
    ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_ethereum_tester = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 153, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    cpy_r_r26 = CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj();
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 155, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL31;
    }
    if (((faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *)cpy_r_r26)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *)cpy_r_r26)->___mypyc_env__);
    }
    ((faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *)cpy_r_r26)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 155, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL34;
    }
    cpy_r_import_endpoints = cpy_r_r26;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_api_endpoints == cpy_r_r28;
    if (cpy_r_r29) {
        goto CPyL35;
    } else
        goto CPyL36;
CPyL19: ;
    cpy_r_r30 = PyObject_Vectorcall(cpy_r_import_endpoints, 0, 0, 0);
    CPy_DECREF(cpy_r_import_endpoints);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 165, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    if (likely(PyDict_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 165, CPyStatic_faster_web3___providers___eth_tester___main___globals, "dict", cpy_r_r30);
        goto CPyL27;
    }
    cpy_r_r32 = cpy_r_r31;
    goto CPyL24;
CPyL22: ;
    if (likely(cpy_r_api_endpoints != Py_None))
        cpy_r_r33 = cpy_r_api_endpoints;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 167, CPyStatic_faster_web3___providers___eth_tester___main___globals, "dict", cpy_r_api_endpoints);
        goto CPyL27;
    }
    cpy_r_r32 = cpy_r_r33;
CPyL24: ;
    if (((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_api_endpoints != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_api_endpoints);
    }
    ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_api_endpoints = cpy_r_r32;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 165, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    if (((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id);
    }
    ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id = 0;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 170, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL28: ;
    CPy_INCREF(cpy_r_ethereum_tester);
    goto CPyL2;
CPyL29: ;
    CPy_INCREF(cpy_r_api_endpoints);
    goto CPyL4;
CPyL30: ;
    CPy_DecRef(cpy_r_ethereum_tester);
    CPy_DecRef(cpy_r_api_endpoints);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_api_endpoints);
    CPy_DecRef(cpy_r_r2);
    goto CPyL27;
CPyL32: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL10;
CPyL33: ;
    CPy_DecRef(cpy_r_api_endpoints);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r22);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_api_endpoints);
    CPy_DecRef(cpy_r_r26);
    goto CPyL27;
CPyL35: ;
    CPy_DECREF(cpy_r_api_endpoints);
    goto CPyL19;
CPyL36: ;
    CPy_DECREF(cpy_r_import_endpoints);
    goto CPyL22;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ethereum_tester", "api_endpoints", 0};
    PyObject *obj_ethereum_tester = NULL;
    PyObject *obj_api_endpoints = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|OO", "__init__", kwlist, &obj_ethereum_tester, &obj_api_endpoints)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.EthereumTesterProvider", obj_self); 
        goto fail;
    }
    PyObject *arg_ethereum_tester;
    if (obj_ethereum_tester == NULL) {
        arg_ethereum_tester = NULL;
        goto __LL31;
    }
    arg_ethereum_tester = obj_ethereum_tester;
    if (arg_ethereum_tester != NULL) goto __LL31;
    if (obj_ethereum_tester == Py_None)
        arg_ethereum_tester = obj_ethereum_tester;
    else {
        arg_ethereum_tester = NULL;
    }
    if (arg_ethereum_tester != NULL) goto __LL31;
    CPy_TypeError("object or None", obj_ethereum_tester); 
    goto fail;
__LL31: ;
    PyObject *arg_api_endpoints;
    if (obj_api_endpoints == NULL) {
        arg_api_endpoints = NULL;
        goto __LL32;
    }
    if (PyDict_Check(obj_api_endpoints))
        arg_api_endpoints = obj_api_endpoints;
    else {
        arg_api_endpoints = NULL;
    }
    if (arg_api_endpoints != NULL) goto __LL32;
    if (obj_api_endpoints == Py_None)
        arg_api_endpoints = obj_api_endpoints;
    else {
        arg_api_endpoints = NULL;
    }
    if (arg_api_endpoints != NULL) goto __LL32;
    CPy_TypeError("dict or None", obj_api_endpoints); 
    goto fail;
__LL32: ;
    char retval = CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__(arg_self, arg_ethereum_tester, arg_api_endpoints);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__init__", 124, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func(PyObject *cpy_r_self, PyObject *cpy_r_w3, PyObject *cpy_r_middleware_onion) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = CPyStatics[9]; /* 'as_tuple_of_middleware' */
    PyObject *cpy_r_r1[1] = {cpy_r_middleware_onion};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 177, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL26;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 177, CPyStatic_faster_web3___providers___eth_tester___main___globals, "tuple", cpy_r_r3);
        goto CPyL26;
    }
    cpy_r_r5 = ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__middleware;
    if (unlikely(cpy_r_r5.f0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "request_func", "EthereumTesterProvider", "_middleware", 177, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r5.f0);
    CPy_INCREF(cpy_r_r5.f1);
CPyL3: ;
    cpy_r_r6 = PyTuple_New(2);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp33 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp33);
    PyObject *__tmp34 = cpy_r_r5.f1;
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp34);
    cpy_r_r7 = PySequence_Tuple(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 177, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL27;
    }
    cpy_r_r8 = PySequence_Concat(cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 177, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL26;
    }
    cpy_r_r9 = CPyStatics[10]; /* '_request_func_cache' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_self, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 179, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r10) && PyTuple_GET_SIZE(cpy_r_r10) == 2))) {
        cpy_r_r11 = NULL;
        goto __LL36;
    }
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_r10, 0))))
        cpy_r_r11 = PyTuple_GET_ITEM(cpy_r_r10, 0);
    else {
        cpy_r_r11 = NULL;
    }
    if (cpy_r_r11 == NULL) goto __LL36;
    cpy_r_r11 = PyTuple_GET_ITEM(cpy_r_r10, 1);
    if (cpy_r_r11 == NULL) goto __LL36;
    cpy_r_r11 = cpy_r_r10;
__LL36: ;
    if (cpy_r_r11 != NULL) goto __LL35;
    if (unlikely(!(PyTuple_Check(cpy_r_r10) && PyTuple_GET_SIZE(cpy_r_r10) == 2))) {
        cpy_r_r11 = NULL;
        goto __LL37;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r10, 0) == Py_None))
        cpy_r_r11 = PyTuple_GET_ITEM(cpy_r_r10, 0);
    else {
        cpy_r_r11 = NULL;
    }
    if (cpy_r_r11 == NULL) goto __LL37;
    if (likely(PyTuple_GET_ITEM(cpy_r_r10, 1) == Py_None))
        cpy_r_r11 = PyTuple_GET_ITEM(cpy_r_r10, 1);
    else {
        cpy_r_r11 = NULL;
    }
    if (cpy_r_r11 == NULL) goto __LL37;
    cpy_r_r11 = cpy_r_r10;
__LL37: ;
    if (cpy_r_r11 != NULL) goto __LL35;
    CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 179, CPyStatic_faster_web3___providers___eth_tester___main___globals, "union[tuple[tuple, object], tuple[None, None]]", cpy_r_r10);
    goto CPyL28;
__LL35: ;
    cpy_r_r12 = PyObject_GetIter(cpy_r_r11);
    CPy_DECREF_NO_IMM(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 179, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    cpy_r_r13 = PyIter_Next(cpy_r_r12);
    if (cpy_r_r13 == NULL) {
        goto CPyL29;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 179, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL11: ;
    if (PyTuple_Check(cpy_r_r13))
        cpy_r_r15 = cpy_r_r13;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL38;
    if (cpy_r_r13 == Py_None)
        cpy_r_r15 = cpy_r_r13;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL38;
    CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 179, CPyStatic_faster_web3___providers___eth_tester___main___globals, "tuple or None", cpy_r_r13);
    goto CPyL30;
__LL38: ;
    cpy_r_r16 = PyIter_Next(cpy_r_r12);
    if (cpy_r_r16 == NULL) {
        goto CPyL31;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 179, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_func = cpy_r_r16;
    cpy_r_r18 = PyIter_Next(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r18 == NULL) {
        goto CPyL18;
    } else
        goto CPyL32;
CPyL16: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 179, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r20 = PyObject_RichCompare(cpy_r_r15, cpy_r_r8, 3);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 180, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL33;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 180, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL33;
    }
    if (cpy_r_r21) {
        goto CPyL34;
    } else
        goto CPyL35;
CPyL21: ;
    cpy_r_r22 = CPyStatics[11]; /* 'make_request' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_self, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 184, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL28;
    }
    cpy_r_r24 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r25 = CPyStatics[23]; /* 'combine_middleware' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 181, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r27[3] = {cpy_r_r8, cpy_r_w3, cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = CPyStatics[92]; /* ('middleware', 'w3', 'provider_request_fn') */
    cpy_r_r30 = PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 0, cpy_r_r29);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 181, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r23);
    cpy_r_func = cpy_r_r30;
    CPy_INCREF(cpy_r_func);
    cpy_r_r31.f0 = cpy_r_r8;
    cpy_r_r31.f1 = cpy_r_func;
    cpy_r_r32 = CPyStatics[10]; /* '_request_func_cache' */
    cpy_r_r33 = PyTuple_New(2);
    if (unlikely(cpy_r_r33 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp39 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r33, 0, __tmp39);
    PyObject *__tmp40 = cpy_r_r31.f1;
    PyTuple_SET_ITEM(cpy_r_r33, 1, __tmp40);
    cpy_r_r34 = PyObject_SetAttr(cpy_r_self, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 186, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL37;
    }
CPyL25: ;
    return cpy_r_func;
CPyL26: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL27: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL26;
CPyL29: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r12);
    goto CPyL9;
CPyL30: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    goto CPyL13;
CPyL32: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_r18);
    goto CPyL16;
CPyL33: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_func);
    goto CPyL26;
CPyL34: ;
    CPy_DECREF(cpy_r_func);
    goto CPyL21;
CPyL35: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL25;
CPyL36: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r23);
    goto CPyL26;
CPyL37: ;
    CPy_DecRef(cpy_r_func);
    goto CPyL26;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"w3", "middleware_onion", 0};
    static CPyArg_Parser parser = {"OO:request_func", kwlist, 0};
    PyObject *obj_w3;
    PyObject *obj_middleware_onion;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_w3, &obj_middleware_onion)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.EthereumTesterProvider", obj_self); 
        goto fail;
    }
    PyObject *arg_w3 = obj_w3;
    PyObject *arg_middleware_onion = obj_middleware_onion;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func(arg_self, arg_w3, arg_middleware_onion);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "request_func", 172, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_api_endpoints;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "EthereumTesterProvider", "api_endpoints", 193, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->_ethereum_tester;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "EthereumTesterProvider", "ethereum_tester", 194, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id;
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "EthereumTesterProvider", "_current_request_id", 195, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL10;
    }
    CPyTagged_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyTagged_Str(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 195, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL10;
    }
    cpy_r_r4 = CPyDef_faster_web3___providers___eth_tester___main____make_request(cpy_r_method, cpy_r_params, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 190, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL8;
    }
    cpy_r_r5 = ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/main.py", "make_request", "EthereumTesterProvider", "_current_request_id", 197, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL11;
    }
CPyL6: ;
    cpy_r_r6 = CPyTagged_Add(cpy_r_r5, 2);
    if (((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id);
    }
    ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r_self)->__current_request_id = cpy_r_r6;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 197, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL11;
    }
    return cpy_r_r4;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"method", "params", 0};
    static CPyArg_Parser parser = {"OO:make_request", kwlist, 0};
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.EthereumTesterProvider", obj_self); 
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request(arg_self, arg_method, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "make_request", 189, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected(PyObject *cpy_r_self, char cpy_r_show_traceback) {
    if (cpy_r_show_traceback != 2) goto CPyL2;
    cpy_r_show_traceback = 0;
CPyL2: ;
    return 1;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"show_traceback", 0};
    static CPyArg_Parser parser = {"|O:is_connected", kwlist, 0};
    PyObject *obj_show_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_show_traceback)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.EthereumTesterProvider", obj_self); 
        goto fail;
    }
    char arg_show_traceback;
    if (obj_show_traceback == NULL) {
        arg_show_traceback = 2;
    } else if (unlikely(!PyBool_Check(obj_show_traceback))) {
        CPy_TypeError("bool", obj_show_traceback); goto fail;
    } else
        arg_show_traceback = obj_show_traceback == Py_True;
    char retval = CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected(arg_self, arg_show_traceback);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "is_connected", 200, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"default_transaction_fields_middleware\" was not set");
    cpy_r_r1 = 0;
    if (!cpy_r_r1) goto CPyL7;
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware;
    if (likely(cpy_r_r2 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"ethereum_tester_middleware\" was not set");
    cpy_r_r3 = 0;
    if (!cpy_r_r3) goto CPyL7;
    CPy_Unreachable();
CPyL6: ;
    CPy_INCREF(cpy_r_r0);
    CPy_INCREF(cpy_r_r2);
    cpy_r_r4.f0 = cpy_r_r0;
    cpy_r_r4.f1 = cpy_r_r2;
    ((faster_web3___providers___eth_tester___main___EthereumTesterProviderObject *)cpy_r___mypyc_self__)->__middleware = cpy_r_r4;
    return 1;
CPyL7: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(PyObject_TypeCheck(obj___mypyc_self__, CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider)))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.main.EthereumTesterProvider", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "__mypyc_defaults_setup", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main____make_response(PyObject *cpy_r_result, PyObject *cpy_r_response_id, PyObject *cpy_r_message) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
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
    if (cpy_r_message != NULL) goto CPyL11;
    cpy_r_r0 = CPyStatics[25]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_message = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[26]; /* 'Exception' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_response", 205, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL12;
    }
    cpy_r_r4 = PyObject_IsInstance(cpy_r_result, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_response", 205, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL12;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyStatics[27]; /* 'id' */
    cpy_r_r8 = CPyStatics[28]; /* 'jsonrpc' */
    cpy_r_r9 = CPyStatics[29]; /* '2.0' */
    cpy_r_r10 = CPyStatics[30]; /* 'error' */
    cpy_r_r11 = CPyStatics[31]; /* 'code' */
    cpy_r_r12 = CPyStatics[32]; /* 'message' */
    cpy_r_r13 = CPyStatics[85]; /* -32601 */
    cpy_r_r14 = CPyDict_Build(2, cpy_r_r11, cpy_r_r13, cpy_r_r12, cpy_r_message);
    CPy_DECREF(cpy_r_message);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_response", 211, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL10;
    }
    cpy_r_r15 = CPyDict_Build(3, cpy_r_r7, cpy_r_response_id, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_response", 208, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL10;
    }
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = CPyStatics[27]; /* 'id' */
    cpy_r_r17 = CPyStatics[28]; /* 'jsonrpc' */
    cpy_r_r18 = CPyStatics[29]; /* '2.0' */
    cpy_r_r19 = CPyStatics[33]; /* 'result' */
    cpy_r_r20 = CPyDict_Build(3, cpy_r_r16, cpy_r_response_id, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_result);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_response", 215, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL10;
    }
    return cpy_r_r20;
CPyL10: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL11: ;
    CPy_INCREF(cpy_r_message);
    goto CPyL2;
CPyL12: ;
    CPy_DecRef(cpy_r_message);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_message);
    goto CPyL8;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main____make_response(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"result", "response_id", "message", 0};
    static CPyArg_Parser parser = {"OO|O:_make_response", kwlist, 0};
    PyObject *obj_result;
    PyObject *obj_response_id;
    PyObject *obj_message = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_result, &obj_response_id, &obj_message)) {
        return NULL;
    }
    PyObject *arg_result = obj_result;
    PyObject *arg_response_id;
    if (likely(PyUnicode_Check(obj_response_id)))
        arg_response_id = obj_response_id;
    else {
        CPy_TypeError("str", obj_response_id); 
        goto fail;
    }
    PyObject *arg_message;
    if (obj_message == NULL) {
        arg_message = NULL;
    } else if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main____make_response(arg_result, arg_response_id, arg_message);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_response", 204, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___main____make_request(PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_api_endpoints, PyObject *cpy_r_ethereum_tester_instance, PyObject *cpy_r_request_id) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r__;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T3OOO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
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
    PyObject *cpy_r_r57;
    PyObject *cpy_r_raw_error_msg;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
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
    PyObject **cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_reason;
    tuple_T3OOO cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    cpy_r_r0 = CPyStatics[93]; /* ('TransactionFailed',) */
    cpy_r_r1 = CPyStatics[35]; /* 'eth_tester.exceptions' */
    cpy_r_r2 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 227, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL72;
    }
    CPyModule_eth_tester___exceptions = cpy_r_r3;
    CPy_INCREF(CPyModule_eth_tester___exceptions);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[36]; /* '_' */
    cpy_r_r5 = PyUnicode_Partition(cpy_r_method, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 231, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL72;
    }
    PyObject *__tmp41;
    if (unlikely(!(PyTuple_Check(cpy_r_r5) && PyTuple_GET_SIZE(cpy_r_r5) == 3))) {
        __tmp41 = NULL;
        goto __LL42;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r5, 0))))
        __tmp41 = PyTuple_GET_ITEM(cpy_r_r5, 0);
    else {
        __tmp41 = NULL;
    }
    if (__tmp41 == NULL) goto __LL42;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r5, 1))))
        __tmp41 = PyTuple_GET_ITEM(cpy_r_r5, 1);
    else {
        __tmp41 = NULL;
    }
    if (__tmp41 == NULL) goto __LL42;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r5, 2))))
        __tmp41 = PyTuple_GET_ITEM(cpy_r_r5, 2);
    else {
        __tmp41 = NULL;
    }
    if (__tmp41 == NULL) goto __LL42;
    __tmp41 = cpy_r_r5;
__LL42: ;
    if (unlikely(__tmp41 == NULL)) {
        CPy_TypeError("tuple[str, str, str]", cpy_r_r5); cpy_r_r6 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp43 = PyTuple_GET_ITEM(cpy_r_r5, 0);
        CPy_INCREF(__tmp43);
        PyObject *__tmp44;
        if (likely(PyUnicode_Check(__tmp43)))
            __tmp44 = __tmp43;
        else {
            CPy_TypeError("str", __tmp43); 
            __tmp44 = NULL;
        }
        cpy_r_r6.f0 = __tmp44;
        PyObject *__tmp45 = PyTuple_GET_ITEM(cpy_r_r5, 1);
        CPy_INCREF(__tmp45);
        PyObject *__tmp46;
        if (likely(PyUnicode_Check(__tmp45)))
            __tmp46 = __tmp45;
        else {
            CPy_TypeError("str", __tmp45); 
            __tmp46 = NULL;
        }
        cpy_r_r6.f1 = __tmp46;
        PyObject *__tmp47 = PyTuple_GET_ITEM(cpy_r_r5, 2);
        CPy_INCREF(__tmp47);
        PyObject *__tmp48;
        if (likely(PyUnicode_Check(__tmp47)))
            __tmp48 = __tmp47;
        else {
            CPy_TypeError("str", __tmp47); 
            __tmp48 = NULL;
        }
        cpy_r_r6.f2 = __tmp48;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 231, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL72;
    }
    cpy_r_r7 = cpy_r_r6.f0;
    cpy_r_r8 = cpy_r_r6.f1;
    cpy_r_r9 = cpy_r_r6.f2;
    cpy_r_r10 = cpy_r_r7;
    cpy_r_r11 = cpy_r_r8;
    cpy_r__ = cpy_r_r11;
    CPy_DECREF(cpy_r__);
    cpy_r_r12 = cpy_r_r9;
    cpy_r_r13 = CPyDict_GetItem(cpy_r_api_endpoints, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 234, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL73;
    }
    if (likely(PyDict_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 234, CPyStatic_faster_web3___providers___eth_tester___main___globals, "dict", cpy_r_r13);
        goto CPyL73;
    }
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r14, cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 234, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL8;
    }
    goto CPyL17;
CPyL8: ;
    cpy_r_r16 = CPy_CatchError();
    cpy_r_r17 = CPyModule_builtins;
    cpy_r_r18 = CPyStatics[37]; /* 'KeyError' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 235, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL15;
    }
    cpy_r_r20 = CPy_ExceptionMatches(cpy_r_r19);
    CPy_DecRef(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r21;
    cpy_r_r22 = CPyStatics[38]; /* 'Unknown RPC Endpoint: ' */
    cpy_r_r23 = CPyStr_Build(2, cpy_r_r22, cpy_r_method);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 236, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL74;
    }
    cpy_r_r24 = CPyDef_faster_web3___providers___eth_tester___main____make_response(cpy_r_e, cpy_r_request_id, cpy_r_r23);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 236, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL15;
    }
    CPy_RestoreExcInfo(cpy_r_r16);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    return cpy_r_r24;
CPyL13: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL15;
    } else
        goto CPyL75;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r16);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) goto CPyL72;
    CPy_Unreachable();
CPyL17: ;
    PyObject *cpy_r_r26[2] = {cpy_r_ethereum_tester_instance, cpy_r_params};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r27, 2, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 238, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL19;
    }
    goto CPyL70;
CPyL19: ;
    cpy_r_r29 = CPy_CatchError();
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[39]; /* 'NotImplementedError' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 239, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    }
    cpy_r_r33 = CPy_ExceptionMatches(cpy_r_r32);
    CPy_DecRef(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL24;
    cpy_r_r34 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r34;
    cpy_r_r35 = CPyStatics[40]; /* 'RPC Endpoint has not been implemented: ' */
    cpy_r_r36 = CPyStr_Build(2, cpy_r_r35, cpy_r_method);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 243, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL76;
    }
    cpy_r_r37 = CPyDef_faster_web3___providers___eth_tester___main____make_response(cpy_r_e, cpy_r_request_id, cpy_r_r36);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 240, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    }
    CPy_RestoreExcInfo(cpy_r_r29);
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    return cpy_r_r37;
CPyL24: ;
    cpy_r_r38 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r39 = CPyStatics[34]; /* 'TransactionFailed' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 245, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    }
    cpy_r_r41 = CPy_ExceptionMatches(cpy_r_r40);
    CPy_DecRef(cpy_r_r40);
    if (!cpy_r_r41) goto CPyL66;
    cpy_r_r42 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r42;
    cpy_r_r43 = CPyStatics[41]; /* 'args' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_e, cpy_r_r43);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 246, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    }
    cpy_r_r45 = CPyStatics[86]; /* 0 */
    cpy_r_r46 = PyObject_GetItem(cpy_r_r44, cpy_r_r45);
    CPy_DecRef(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 246, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    }
    cpy_r_r47 = CPyModule_builtins;
    cpy_r_r48 = CPyStatics[26]; /* 'Exception' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 250, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL52;
    }
    cpy_r_r50 = PyObject_IsInstance(cpy_r_r46, cpy_r_r49);
    CPy_DecRef(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 250, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL52;
    }
    cpy_r_r52 = cpy_r_r50;
    if (cpy_r_r52) goto CPyL33;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r53 = cpy_r_r46;
    goto CPyL37;
CPyL33: ;
    cpy_r_r54 = CPyStatics[41]; /* 'args' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 250, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL52;
    }
    if (likely(PyTuple_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 250, CPyStatic_faster_web3___providers___eth_tester___main___globals, "tuple", cpy_r_r55);
        goto CPyL52;
    }
    cpy_r_r57 = CPySequenceTuple_GetItem(cpy_r_r56, 0);
    CPy_DecRef(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 250, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL52;
    }
    cpy_r_r53 = cpy_r_r57;
CPyL37: ;
    cpy_r_raw_error_msg = cpy_r_r53;
    cpy_r_r58 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r59 = CPyStatics[42]; /* 'is_bytes' */
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 254, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r61[1] = {cpy_r_raw_error_msg};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_Vectorcall(cpy_r_r60, cpy_r_r62, 1, 0);
    CPy_DecRef(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 254, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL77;
    }
    if (unlikely(!PyBool_Check(cpy_r_r63))) {
        CPy_TypeError("bool", cpy_r_r63); cpy_r_r64 = 2;
    } else
        cpy_r_r64 = cpy_r_r63 == Py_True;
    CPy_DecRef(cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 254, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL77;
    }
    if (!cpy_r_r64) goto CPyL78;
    cpy_r_r65 = CPyStatics[43]; /* 'string' */
    cpy_r_r66 = PyList_New(1);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL77;
    }
    cpy_r_r67 = (CPyPtr)&((PyListObject *)cpy_r_r66)->ob_item;
    cpy_r_r68 = *(CPyPtr *)cpy_r_r67;
    CPy_INCREF(cpy_r_r65);
    *(PyObject * *)cpy_r_r68 = cpy_r_r65;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r71 = CPyStatics[87]; /* 4 */
    cpy_r_r72 = PySlice_New(cpy_r_r71, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL79;
    }
    cpy_r_r73 = PyObject_GetItem(cpy_r_raw_error_msg, cpy_r_r72);
    CPy_DecRef(cpy_r_raw_error_msg);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL80;
    }
    cpy_r_r74 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r75 = CPyStatics[44]; /* 'abi' */
    cpy_r_r76 = CPyDict_GetItem(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL81;
    }
    cpy_r_r77 = CPyStatics[45]; /* 'decode' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    CPy_DecRef(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL81;
    }
    PyObject *cpy_r_r79[2] = {cpy_r_r66, cpy_r_r73};
    cpy_r_r80 = (PyObject **)&cpy_r_r79;
    cpy_r_r81 = PyObject_Vectorcall(cpy_r_r78, cpy_r_r80, 2, 0);
    CPy_DecRef(cpy_r_r78);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL81;
    }
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r73);
    if (likely(PyTuple_Check(cpy_r_r81)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals, "tuple", cpy_r_r81);
        goto CPyL52;
    }
    cpy_r_r83 = CPySequenceTuple_GetItem(cpy_r_r82, 0);
    CPy_DecRef(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 253, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL52;
    } else
        goto CPyL82;
CPyL49: ;
    cpy_r_r84 = cpy_r_r83;
    goto CPyL51;
CPyL50: ;
    cpy_r_r84 = cpy_r_raw_error_msg;
CPyL51: ;
    cpy_r_reason = cpy_r_r84;
    goto CPyL60;
CPyL52: ;
    cpy_r_r85 = CPy_CatchError();
    cpy_r_r86 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r87 = CPyStatics[46]; /* 'DecodingError' */
    cpy_r_r88 = CPyDict_GetItem(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 257, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL83;
    }
    cpy_r_r89 = CPy_ExceptionMatches(cpy_r_r88);
    CPy_DecRef(cpy_r_r88);
    if (!cpy_r_r89) goto CPyL84;
    cpy_r_reason = cpy_r_r46;
    goto CPyL57;
CPyL55: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL58;
    } else
        goto CPyL85;
CPyL56: ;
    CPy_Unreachable();
CPyL57: ;
    CPy_RestoreExcInfo(cpy_r_r85);
    CPy_DecRef(cpy_r_r85.f0);
    CPy_DecRef(cpy_r_r85.f1);
    CPy_DecRef(cpy_r_r85.f2);
    goto CPyL60;
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r85);
    CPy_DecRef(cpy_r_r85.f0);
    CPy_DecRef(cpy_r_r85.f1);
    CPy_DecRef(cpy_r_r85.f2);
    cpy_r_r90 = CPy_KeepPropagating();
    if (!cpy_r_r90) {
        goto CPyL68;
    } else
        goto CPyL86;
CPyL59: ;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r91 = CPyStatics[47]; /* 'execution reverted: ' */
    cpy_r_r92 = PyObject_Str(cpy_r_reason);
    CPy_DecRef(cpy_r_reason);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 259, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    }
    cpy_r_r93 = CPyStr_Build(2, cpy_r_r91, cpy_r_r92);
    CPy_DecRef(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 259, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    }
    cpy_r_r94 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r95 = CPyStatics[34]; /* 'TransactionFailed' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 259, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL87;
    }
    PyObject *cpy_r_r97[1] = {cpy_r_r93};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = PyObject_Vectorcall(cpy_r_r96, cpy_r_r98, 1, 0);
    CPy_DecRef(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 259, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL87;
    }
    CPy_DecRef(cpy_r_r93);
    CPy_Raise(cpy_r_r99);
    CPy_DecRef(cpy_r_r99);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 259, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL68;
    } else
        goto CPyL88;
CPyL65: ;
    CPy_Unreachable();
CPyL66: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL68;
    } else
        goto CPyL89;
CPyL67: ;
    CPy_Unreachable();
CPyL68: ;
    CPy_RestoreExcInfo(cpy_r_r29);
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    cpy_r_r100 = CPy_KeepPropagating();
    if (!cpy_r_r100) goto CPyL72;
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r101 = NULL;
    cpy_r_r102 = CPyDef_faster_web3___providers___eth_tester___main____make_response(cpy_r_r28, cpy_r_request_id, cpy_r_r101);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 261, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL72;
    }
    return cpy_r_r102;
CPyL72: ;
    cpy_r_r103 = NULL;
    return cpy_r_r103;
CPyL73: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL8;
CPyL74: ;
    CPy_DecRef(cpy_r_e);
    goto CPyL15;
CPyL75: ;
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL14;
CPyL76: ;
    CPy_DecRef(cpy_r_e);
    goto CPyL68;
CPyL77: ;
    CPy_DecRef(cpy_r_raw_error_msg);
    goto CPyL52;
CPyL78: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL50;
CPyL79: ;
    CPy_DecRef(cpy_r_raw_error_msg);
    CPy_DecRef(cpy_r_r66);
    goto CPyL52;
CPyL80: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL52;
CPyL81: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r73);
    goto CPyL52;
CPyL82: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL49;
CPyL83: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL58;
CPyL84: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL55;
CPyL85: ;
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    CPy_DecRef(cpy_r_r85.f0);
    CPy_DecRef(cpy_r_r85.f1);
    CPy_DecRef(cpy_r_r85.f2);
    goto CPyL56;
CPyL86: ;
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    goto CPyL59;
CPyL87: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL68;
CPyL88: ;
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    goto CPyL65;
CPyL89: ;
    CPy_DecRef(cpy_r_r29.f0);
    CPy_DecRef(cpy_r_r29.f1);
    CPy_DecRef(cpy_r_r29.f2);
    goto CPyL67;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___main____make_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"method", "params", "api_endpoints", "ethereum_tester_instance", "request_id", 0};
    static CPyArg_Parser parser = {"OOOOO:_make_request", kwlist, 0};
    PyObject *obj_method;
    PyObject *obj_params;
    PyObject *obj_api_endpoints;
    PyObject *obj_ethereum_tester_instance;
    PyObject *obj_request_id;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_method, &obj_params, &obj_api_endpoints, &obj_ethereum_tester_instance, &obj_request_id)) {
        return NULL;
    }
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *arg_api_endpoints;
    if (likely(PyDict_Check(obj_api_endpoints)))
        arg_api_endpoints = obj_api_endpoints;
    else {
        CPy_TypeError("dict", obj_api_endpoints); 
        goto fail;
    }
    PyObject *arg_ethereum_tester_instance = obj_ethereum_tester_instance;
    PyObject *arg_request_id;
    if (likely(PyUnicode_Check(obj_request_id)))
        arg_request_id = obj_request_id;
    else {
        CPy_TypeError("str", obj_request_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___main____make_request(arg_method, arg_params, arg_api_endpoints, arg_ethereum_tester_instance, arg_request_id);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "_make_request", 218, CPyStatic_faster_web3___providers___eth_tester___main___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___main_____top_level__(void) {
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
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    tuple_T2OO cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    tuple_T2OO cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[48]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[94]; /* ('TYPE_CHECKING', 'Any', 'Callable', 'Coroutine', 'Dict',
                                  'Final', 'Literal', 'Optional', 'Union', 'cast') */
    cpy_r_r6 = CPyStatics[59]; /* 'typing' */
    cpy_r_r7 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[95]; /* ('abi',) */
    cpy_r_r10 = CPyStatics[60]; /* 'faster_eth_abi' */
    cpy_r_r11 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 14, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_eth_abi = cpy_r_r12;
    CPy_INCREF(CPyModule_faster_eth_abi);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[96]; /* ('DecodingError',) */
    cpy_r_r14 = CPyStatics[61]; /* 'faster_eth_abi.exceptions' */
    cpy_r_r15 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 17, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_eth_abi___exceptions = cpy_r_r16;
    CPy_INCREF(CPyModule_faster_eth_abi___exceptions);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[97]; /* ('is_bytes',) */
    cpy_r_r18 = CPyStatics[62]; /* 'faster_eth_utils' */
    cpy_r_r19 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 20, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_eth_utils = cpy_r_r20;
    CPy_INCREF(CPyModule_faster_eth_utils);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[98]; /* ('BaseProvider',) */
    cpy_r_r22 = CPyStatics[64]; /* 'faster_web3.providers' */
    cpy_r_r23 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 24, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_web3___providers = cpy_r_r24;
    CPy_INCREF(CPyModule_faster_web3___providers);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[99]; /* ('AsyncBaseProvider',) */
    cpy_r_r26 = CPyStatics[66]; /* 'faster_web3.providers.async_base' */
    cpy_r_r27 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 27, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_web3___providers___async_base = cpy_r_r28;
    CPy_INCREF(CPyModule_faster_web3___providers___async_base);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[100]; /* ('RPCEndpoint', 'RPCError', 'RPCResponse') */
    cpy_r_r30 = CPyStatics[70]; /* 'faster_web3.types' */
    cpy_r_r31 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 30, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_web3___types = cpy_r_r32;
    CPy_INCREF(CPyModule_faster_web3___types);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[101]; /* ('Web3TypeError',) */
    cpy_r_r34 = CPyStatics[71]; /* 'faster_web3.exceptions' */
    cpy_r_r35 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 36, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_web3___exceptions = cpy_r_r36;
    CPy_INCREF(CPyModule_faster_web3___exceptions);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[102]; /* ('async_combine_middleware', 'combine_middleware') */
    cpy_r_r38 = CPyStatics[72]; /* 'faster_web3.middleware' */
    cpy_r_r39 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 39, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_web3___middleware = cpy_r_r40;
    CPy_INCREF(CPyModule_faster_web3___middleware);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[103]; /* ('default_transaction_fields_middleware',
                                    'ethereum_tester_middleware') */
    cpy_r_r42 = CPyStatics[75]; /* 'faster_web3.providers.eth_tester.middleware' */
    cpy_r_r43 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 43, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPyModule_faster_web3___providers___eth_tester___middleware = cpy_r_r44;
    CPy_INCREF(CPyModule_faster_web3___providers___eth_tester___middleware);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r46 = CPyStatics[65]; /* 'AsyncBaseProvider' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 63, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r48 = PyTuple_Pack(1, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 63, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r49 = CPyStatics[76]; /* 'faster_web3.providers.eth_tester.main' */
    cpy_r_r50 = (PyObject *)CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_template;
    cpy_r_r51 = CPyType_FromTemplate(cpy_r_r50, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 63, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r52 = CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_trait_vtable_setup();
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL44;
    }
    cpy_r_r53 = CPyStatics[77]; /* '__mypyc_attrs__' */
    cpy_r_r54 = CPyStatics[78]; /* '_middleware' */
    cpy_r_r55 = CPyStatics[79]; /* 'ethereum_tester' */
    cpy_r_r56 = CPyStatics[80]; /* 'api_endpoints' */
    cpy_r_r57 = CPyStatics[81]; /* '_current_request_id' */
    cpy_r_r58 = CPyStatics[82]; /* '__dict__' */
    cpy_r_r59 = PyTuple_Pack(5, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 63, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL44;
    }
    cpy_r_r60 = PyObject_SetAttr(cpy_r_r51, cpy_r_r53, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 63, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL44;
    }
    CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider = (PyTypeObject *)cpy_r_r51;
    CPy_INCREF(CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider);
    cpy_r_r62 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r63 = CPyStatics[83]; /* 'AsyncEthereumTesterProvider' */
    cpy_r_r64 = PyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 63, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r66 = (PyObject *)CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider;
    cpy_r_r67 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware;
    if (likely(cpy_r_r67 != NULL)) goto CPyL24;
    PyErr_SetString(PyExc_NameError, "value for final name \"default_transaction_fields_middleware\" was not set");
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 65, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r69 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware;
    if (likely(cpy_r_r69 != NULL)) goto CPyL27;
    PyErr_SetString(PyExc_NameError, "value for final name \"ethereum_tester_middleware\" was not set");
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 66, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL27: ;
    CPy_INCREF(cpy_r_r67);
    CPy_INCREF(cpy_r_r69);
    cpy_r_r71.f0 = cpy_r_r67;
    cpy_r_r71.f1 = cpy_r_r69;
    cpy_r_r72 = CPyStatics[78]; /* '_middleware' */
    CPy_INCREF(cpy_r_r71.f0);
    CPy_INCREF(cpy_r_r71.f1);
    cpy_r_r73 = PyTuple_New(2);
    if (unlikely(cpy_r_r73 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp49 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r73, 0, __tmp49);
    PyObject *__tmp50 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r73, 1, __tmp50);
    cpy_r_r74 = PyObject_SetAttr(cpy_r_r66, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 64, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL45;
    }
    CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware = cpy_r_r71;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware.f0);
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware.f1);
    CPy_DECREF(cpy_r_r71.f0);
    CPy_DECREF(cpy_r_r71.f1);
    cpy_r_r76 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r77 = CPyStatics[63]; /* 'BaseProvider' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 118, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r79 = PyTuple_Pack(1, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 118, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r80 = CPyStatics[76]; /* 'faster_web3.providers.eth_tester.main' */
    cpy_r_r81 = (PyObject *)CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider_template;
    cpy_r_r82 = CPyType_FromTemplate(cpy_r_r81, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 118, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r83 = CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_trait_vtable_setup();
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", -1, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL46;
    }
    cpy_r_r84 = CPyStatics[77]; /* '__mypyc_attrs__' */
    cpy_r_r85 = CPyStatics[78]; /* '_middleware' */
    cpy_r_r86 = CPyStatics[79]; /* 'ethereum_tester' */
    cpy_r_r87 = CPyStatics[80]; /* 'api_endpoints' */
    cpy_r_r88 = CPyStatics[81]; /* '_current_request_id' */
    cpy_r_r89 = CPyStatics[82]; /* '__dict__' */
    cpy_r_r90 = PyTuple_Pack(5, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 118, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL46;
    }
    cpy_r_r91 = PyObject_SetAttr(cpy_r_r82, cpy_r_r84, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 118, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL46;
    }
    CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider = (PyTypeObject *)cpy_r_r82;
    CPy_INCREF(CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider);
    cpy_r_r93 = CPyStatic_faster_web3___providers___eth_tester___main___globals;
    cpy_r_r94 = CPyStatics[84]; /* 'EthereumTesterProvider' */
    cpy_r_r95 = PyDict_SetItem(cpy_r_r93, cpy_r_r94, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 118, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    cpy_r_r97 = (PyObject *)CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider;
    cpy_r_r98 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___default_transaction_fields_middleware;
    if (likely(cpy_r_r98 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"default_transaction_fields_middleware\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 120, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r100 = *exports_faster_web3___providers___eth_tester___middleware.CPyStatic_faster_web3___providers___eth_tester___middleware___ethereum_tester_middleware;
    if (likely(cpy_r_r100 != NULL)) goto CPyL41;
    PyErr_SetString(PyExc_NameError, "value for final name \"ethereum_tester_middleware\" was not set");
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 121, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL41: ;
    CPy_INCREF(cpy_r_r98);
    CPy_INCREF(cpy_r_r100);
    cpy_r_r102.f0 = cpy_r_r98;
    cpy_r_r102.f1 = cpy_r_r100;
    cpy_r_r103 = CPyStatics[78]; /* '_middleware' */
    CPy_INCREF(cpy_r_r102.f0);
    CPy_INCREF(cpy_r_r102.f1);
    cpy_r_r104 = PyTuple_New(2);
    if (unlikely(cpy_r_r104 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp51 = cpy_r_r102.f0;
    PyTuple_SET_ITEM(cpy_r_r104, 0, __tmp51);
    PyObject *__tmp52 = cpy_r_r102.f1;
    PyTuple_SET_ITEM(cpy_r_r104, 1, __tmp52);
    cpy_r_r105 = PyObject_SetAttr(cpy_r_r97, cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/main.py", "<module>", 119, CPyStatic_faster_web3___providers___eth_tester___main___globals);
        goto CPyL47;
    }
    CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware = cpy_r_r102;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware.f0);
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware.f1);
    CPy_DECREF(cpy_r_r102.f0);
    CPy_DECREF(cpy_r_r102.f1);
    return 1;
CPyL43: ;
    cpy_r_r107 = 2;
    return cpy_r_r107;
CPyL44: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL43;
CPyL45: ;
    CPy_DecRef(cpy_r_r71.f0);
    CPy_DecRef(cpy_r_r71.f1);
    goto CPyL43;
CPyL46: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL43;
CPyL47: ;
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    goto CPyL43;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___providers___eth_tester___main = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_abi = Py_None;
    CPyModule_faster_eth_abi___exceptions = Py_None;
    CPyModule_faster_eth_utils = Py_None;
    CPyModule_faster_web3___providers = Py_None;
    CPyModule_faster_web3___providers___async_base = Py_None;
    CPyModule_faster_web3___types = Py_None;
    CPyModule_faster_web3___exceptions = Py_None;
    CPyModule_faster_web3___middleware = Py_None;
    CPyModule_faster_web3___providers___eth_tester___middleware = Py_None;
    CPyModule_eth_tester = Py_None;
    CPyModule_faster_web3___providers___eth_tester___defaults = Py_None;
    CPyModule_eth_tester___backends___base = Py_None;
    CPyModule_eth_tester___exceptions = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[104];
const char * const CPyLit_Str[] = {
    "\005\005super\b__init__\016EthereumTester\neth_tester\rAPI_ENDPOINTS",
    "\002)faster_web3.providers.eth_tester.defaults\026as_tuple_of_middleware",
    "\004\023_request_func_cache\fmake_request\030async_combine_middleware\nmiddleware",
    "\004\basync_w3\023provider_request_fn\rGeneratorExit\rStopIteration",
    "\001\020BaseChainBackend",
    "\001\201\022Expected ethereum_tester to be of type `eth_tester.EthereumTester` or a subclass of `eth_tester.backends.base.BaseChainBackend`, instead received ",
    "\001\201\b. If you would like a custom eth-tester instance to test with, see the eth-tester documentation. https://github.com/ethereum/eth-tester.",
    "\005\rWeb3TypeError\030eth_tester.backends.base\022combine_middleware\002w3\000",
    "\t\tException\002id\ajsonrpc\0032.0\005error\004code\amessage\006result\021TransactionFailed",
    "\004\025eth_tester.exceptions\001_\bKeyError\026Unknown RPC Endpoint: ",
    "\003\023NotImplementedError\'RPC Endpoint has not been implemented: \004args",
    "\006\bis_bytes\006string\003abi\006decode\rDecodingError\024execution reverted: ",
    "\b\bbuiltins\rTYPE_CHECKING\003Any\bCallable\tCoroutine\004Dict\005Final\aLiteral",
    "\006\bOptional\005Union\004cast\006typing\016faster_eth_abi\031faster_eth_abi.exceptions",
    "\004\020faster_eth_utils\fBaseProvider\025faster_web3.providers\021AsyncBaseProvider",
    "\004 faster_web3.providers.async_base\vRPCEndpoint\bRPCError\vRPCResponse",
    "\003\021faster_web3.types\026faster_web3.exceptions\026faster_web3.middleware",
    "\002%default_transaction_fields_middleware\032ethereum_tester_middleware",
    "\001+faster_web3.providers.eth_tester.middleware",
    "\003%faster_web3.providers.eth_tester.main\017__mypyc_attrs__\v_middleware",
    "\004\017ethereum_tester\rapi_endpoints\023_current_request_id\b__dict__",
    "\002\033AsyncEthereumTesterProvider\026EthereumTesterProvider",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\003-32601\0000\0004",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    16, 1, 5, 1, 7, 3, 13, 14, 15, 1, 18, 3, 13, 24, 15, 1, 34, 10, 49,
    50, 51, 52, 53, 54, 55, 56, 57, 58, 1, 44, 1, 46, 1, 42, 1, 63, 1, 65,
    3, 67, 68, 69, 1, 21, 2, 12, 23, 2, 73, 74
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___providers___eth_tester___main__internal = NULL;
CPyModule *CPyModule_faster_web3___providers___eth_tester___main;
PyObject *CPyStatic_faster_web3___providers___eth_tester___main___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_eth_abi;
CPyModule *CPyModule_faster_eth_abi___exceptions;
CPyModule *CPyModule_faster_eth_utils;
CPyModule *CPyModule_faster_web3___providers;
CPyModule *CPyModule_faster_web3___providers___async_base;
CPyModule *CPyModule_faster_web3___types;
CPyModule *CPyModule_faster_web3___exceptions;
CPyModule *CPyModule_faster_web3___middleware;
CPyModule *CPyModule_faster_web3___providers___eth_tester___middleware;
CPyModule *CPyModule_eth_tester;
CPyModule *CPyModule_faster_web3___providers___eth_tester___defaults;
CPyModule *CPyModule_eth_tester___backends___base;
CPyModule *CPyModule_eth_tester___exceptions;
tuple_T2OO CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware = { NULL, NULL };
tuple_T2OO CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware = { NULL, NULL };
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider;
PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider(void);
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider;
PyObject *CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider(PyObject *cpy_r_ethereum_tester, PyObject *cpy_r_api_endpoints);
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen;
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen(void);
CPyThreadLocal faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_genObject *faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen;
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen(void);
CPyThreadLocal faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_genObject *faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen;
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen(void);
CPyThreadLocal faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_genObject *faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env;
PyObject *CPyDef_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env(void);
CPyThreadLocal faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_envObject *faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj;
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj(void);
CPyThreadLocal faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_objObject *faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj;
PyObject *CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj(void);
CPyThreadLocal faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_objObject *faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance;
char CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__(PyObject *cpy_r_self);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func(PyObject *cpy_r_self, PyObject *cpy_r_async_w3, PyObject *cpy_r_middleware_onion);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected(PyObject *cpy_r_self, char cpy_r_show_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__(PyObject *cpy_r_self, PyObject *cpy_r_ethereum_tester, PyObject *cpy_r_api_endpoints);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func(PyObject *cpy_r_self, PyObject *cpy_r_w3, PyObject *cpy_r_middleware_onion);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected(PyObject *cpy_r_self, char cpy_r_show_traceback);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main____make_response(PyObject *cpy_r_result, PyObject *cpy_r_response_id, PyObject *cpy_r_message);
PyObject *CPyPy_faster_web3___providers___eth_tester___main____make_response(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___main____make_request(PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_api_endpoints, PyObject *cpy_r_ethereum_tester_instance, PyObject *cpy_r_request_id);
PyObject *CPyPy_faster_web3___providers___eth_tester___main____make_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___main_____top_level__(void);

static struct export_table_faster_web3___providers___eth_tester___main exports = {
    &CPyStatic_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider____middleware,
    &CPyStatic_faster_web3___providers___eth_tester___main___EthereumTesterProvider____middleware,
    &CPyType_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider,
    &CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider,
    &CPyType_faster_web3___providers___eth_tester___main___EthereumTesterProvider,
    &CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider,
    &CPyType_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen,
    &faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_free_instance,
    &CPyType_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen,
    &faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_free_instance,
    &CPyType_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen,
    &faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_free_instance,
    &CPyType_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env,
    &CPyDef_faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env,
    &faster_web3___providers___eth_tester___main_____init___3_EthereumTesterProvider_env_free_instance,
    &CPyType_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj,
    &CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj,
    &faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_free_instance,
    &CPyType_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj,
    &CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj,
    &faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_free_instance,
    &CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____init__,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____next__,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___send,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____iter__,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___throw,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen___close,
    &CPyDef_faster_web3___providers___eth_tester___main___request_func_AsyncEthereumTesterProvider_gen_____await__,
    &CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___request_func,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____next__,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___send,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____iter__,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___throw,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen___close,
    &CPyDef_faster_web3___providers___eth_tester___main___make_request_AsyncEthereumTesterProvider_gen_____await__,
    &CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___make_request,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____next__,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___send,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____iter__,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___throw,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen___close,
    &CPyDef_faster_web3___providers___eth_tester___main___is_connected_AsyncEthereumTesterProvider_gen_____await__,
    &CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider___is_connected,
    &CPyDef_faster_web3___providers___eth_tester___main___AsyncEthereumTesterProvider_____mypyc_defaults_setup,
    &CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____get__,
    &CPyDef_faster_web3___providers___eth_tester___main___make_tester___3_init___3_EthereumTesterProvider_obj_____call__,
    &CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____get__,
    &CPyDef_faster_web3___providers___eth_tester___main___import_endpoints___3_init___3_EthereumTesterProvider_obj_____call__,
    &CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____init__,
    &CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___request_func,
    &CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___make_request,
    &CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider___is_connected,
    &CPyDef_faster_web3___providers___eth_tester___main___EthereumTesterProvider_____mypyc_defaults_setup,
    &CPyDef_faster_web3___providers___eth_tester___main____make_response,
    &CPyDef_faster_web3___providers___eth_tester___main____make_request,
    &CPyDef_faster_web3___providers___eth_tester___main_____top_level__,
};

static int exec_main__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.providers.eth_tester.main__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___providers___eth_tester___main(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___providers___eth_tester___main, "faster_web3.providers.eth_tester.main__mypyc.init_faster_web3___providers___eth_tester___main", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___providers___eth_tester___main", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    tmp = PyImport_ImportModule("faster_web3.providers.eth_tester.defaults__mypyc"); if (!tmp) goto fail; Py_DECREF(tmp);
    struct export_table_faster_web3___providers___eth_tester___defaults *pexports_faster_web3___providers___eth_tester___defaults = PyCapsule_Import("faster_web3.providers.eth_tester.defaults__mypyc.exports", 0);
    if (!pexports_faster_web3___providers___eth_tester___defaults) {
        goto fail;
    }
    memcpy(&exports_faster_web3___providers___eth_tester___defaults, pexports_faster_web3___providers___eth_tester___defaults, sizeof(exports_faster_web3___providers___eth_tester___defaults));
    
    tmp = PyImport_ImportModule("faster_web3.providers.eth_tester.middleware__mypyc"); if (!tmp) goto fail; Py_DECREF(tmp);
    struct export_table_faster_web3___providers___eth_tester___middleware *pexports_faster_web3___providers___eth_tester___middleware = PyCapsule_Import("faster_web3.providers.eth_tester.middleware__mypyc.exports", 0);
    if (!pexports_faster_web3___providers___eth_tester___middleware) {
        goto fail;
    }
    memcpy(&exports_faster_web3___providers___eth_tester___middleware, pexports_faster_web3___providers___eth_tester___middleware, sizeof(exports_faster_web3___providers___eth_tester___middleware));
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_main__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.providers.eth_tester.main__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_main__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_main__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_main__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
