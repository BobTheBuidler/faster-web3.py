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
#include "__native_caching_utils.h"
#include "__native_internal_caching_utils.h"

static int
faster_web3____utils___caching___caching_utils___RequestInformation_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__RequestInformation_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation(PyObject *cpy_r_method, PyObject *cpy_r_params, tuple_T3OOO cpy_r_response_formatters, PyObject *cpy_r_subscription_id);

static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___RequestInformation) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__RequestInformation_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_faster_web3____utils___caching___caching_utils___RequestInformation_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___RequestInformation_traverse(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_method);
    Py_VISIT(self->_params);
    Py_VISIT(self->_response_formatters.f0);
    Py_VISIT(self->_response_formatters.f1);
    Py_VISIT(self->_response_formatters.f2);
    Py_VISIT(self->_subscription_id);
    Py_VISIT(self->_middleware_response_processors);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___RequestInformation_clear(faster_web3____utils___caching___caching_utils___RequestInformationObject *self)
{
    Py_CLEAR(self->_method);
    Py_CLEAR(self->_params);
    Py_CLEAR(self->_response_formatters.f0);
    Py_CLEAR(self->_response_formatters.f1);
    Py_CLEAR(self->_response_formatters.f2);
    Py_CLEAR(self->_subscription_id);
    Py_CLEAR(self->_middleware_response_processors);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___RequestInformation_dealloc(faster_web3____utils___caching___caching_utils___RequestInformationObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___RequestInformation_dealloc)
    faster_web3____utils___caching___caching_utils___RequestInformation_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___RequestInformation_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___RequestInformation_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_____init__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___RequestInformation_vtable, faster_web3____utils___caching___caching_utils___RequestInformation_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___RequestInformation_vtable));
    return 1;
}

static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_method(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_method(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_params(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_params(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_response_formatters(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_response_formatters(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_subscription_id(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_subscription_id(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure);
static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_middleware_response_processors(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_middleware_response_processors(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3____utils___caching___caching_utils___RequestInformation_getseters[] = {
    {"method",
     (getter)faster_web3____utils___caching___caching_utils___RequestInformation_get_method, (setter)faster_web3____utils___caching___caching_utils___RequestInformation_set_method,
     NULL, NULL},
    {"params",
     (getter)faster_web3____utils___caching___caching_utils___RequestInformation_get_params, (setter)faster_web3____utils___caching___caching_utils___RequestInformation_set_params,
     NULL, NULL},
    {"response_formatters",
     (getter)faster_web3____utils___caching___caching_utils___RequestInformation_get_response_formatters, (setter)faster_web3____utils___caching___caching_utils___RequestInformation_set_response_formatters,
     NULL, NULL},
    {"subscription_id",
     (getter)faster_web3____utils___caching___caching_utils___RequestInformation_get_subscription_id, (setter)faster_web3____utils___caching___caching_utils___RequestInformation_set_subscription_id,
     NULL, NULL},
    {"middleware_response_processors",
     (getter)faster_web3____utils___caching___caching_utils___RequestInformation_get_middleware_response_processors, (setter)faster_web3____utils___caching___caching_utils___RequestInformation_set_middleware_response_processors,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3____utils___caching___caching_utils___RequestInformation_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___RequestInformation_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, method, params, response_formatters, subscription_id=None)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___RequestInformation_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "RequestInformation",
    .tp_new = faster_web3____utils___caching___caching_utils___RequestInformation_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___RequestInformation_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___RequestInformation_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___RequestInformation_clear,
    .tp_getset = faster_web3____utils___caching___caching_utils___RequestInformation_getseters,
    .tp_methods = faster_web3____utils___caching___caching_utils___RequestInformation_methods,
    .tp_init = faster_web3____utils___caching___caching_utils___RequestInformation_init,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___RequestInformationObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("RequestInformation(method, params, response_formatters, subscription_id=None)\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___RequestInformation_template = &CPyType_faster_web3____utils___caching___caching_utils___RequestInformation_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__RequestInformation_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___RequestInformationObject *self;
    self = (faster_web3____utils___caching___caching_utils___RequestInformationObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___RequestInformation_vtable;
    self->_response_formatters = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation(PyObject *cpy_r_method, PyObject *cpy_r_params, tuple_T3OOO cpy_r_response_formatters, PyObject *cpy_r_subscription_id)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__RequestInformation_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___RequestInformation);
    if (self == NULL)
        return NULL;
    char res = CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_____init__(self, cpy_r_method, cpy_r_params, cpy_r_response_formatters, cpy_r_subscription_id);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_method(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure)
{
    if (unlikely(self->_method == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'method' of 'RequestInformation' undefined");
        return NULL;
    }
    CPy_INCREF(self->_method);
    PyObject *retval = self->_method;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_method(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RequestInformation' object attribute 'method' cannot be deleted");
        return -1;
    }
    if (self->_method != NULL) {
        CPy_DECREF(self->_method);
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
    self->_method = tmp;
    return 0;
}

static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_params(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure)
{
    if (unlikely(self->_params == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'params' of 'RequestInformation' undefined");
        return NULL;
    }
    CPy_INCREF(self->_params);
    PyObject *retval = self->_params;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_params(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RequestInformation' object attribute 'params' cannot be deleted");
        return -1;
    }
    if (self->_params != NULL) {
        CPy_DECREF(self->_params);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_params = tmp;
    return 0;
}

static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_response_formatters(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure)
{
    if (unlikely(self->_response_formatters.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'response_formatters' of 'RequestInformation' undefined");
        return NULL;
    }
    CPy_INCREF(self->_response_formatters.f0);
    CPy_INCREF(self->_response_formatters.f1);
    CPy_INCREF(self->_response_formatters.f2);
    PyObject *retval = PyTuple_New(3);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = self->_response_formatters.f0;
    PyTuple_SET_ITEM(retval, 0, __tmp1);
    PyObject *__tmp2 = self->_response_formatters.f1;
    PyTuple_SET_ITEM(retval, 1, __tmp2);
    PyObject *__tmp3 = self->_response_formatters.f2;
    PyTuple_SET_ITEM(retval, 2, __tmp3);
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_response_formatters(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RequestInformation' object attribute 'response_formatters' cannot be deleted");
        return -1;
    }
    if (self->_response_formatters.f0 != NULL) {
        CPy_DECREF(self->_response_formatters.f0);
        CPy_DECREF(self->_response_formatters.f1);
        CPy_DECREF(self->_response_formatters.f2);
    }
    tuple_T3OOO tmp;
    PyObject *__tmp4;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 3))) {
        __tmp4 = NULL;
        goto __LL5;
    }
    if (PyDict_Check(PyTuple_GET_ITEM(value, 0)))
        __tmp4 = PyTuple_GET_ITEM(value, 0);
    else {
        __tmp4 = NULL;
    }
    if (__tmp4 != NULL) goto __LL6;
    __tmp4 = PyTuple_GET_ITEM(value, 0);
    if (__tmp4 != NULL) goto __LL6;
    __tmp4 = NULL;
__LL6: ;
    if (__tmp4 == NULL) goto __LL5;
    __tmp4 = PyTuple_GET_ITEM(value, 1);
    if (__tmp4 == NULL) goto __LL5;
    __tmp4 = PyTuple_GET_ITEM(value, 2);
    if (__tmp4 == NULL) goto __LL5;
    __tmp4 = value;
__LL5: ;
    if (unlikely(__tmp4 == NULL)) {
        CPy_TypeError("tuple[union[dict, object], object, object]", value); return -1;
    } else {
        PyObject *__tmp7 = PyTuple_GET_ITEM(value, 0);
        CPy_INCREF(__tmp7);
        PyObject *__tmp8;
        if (PyDict_Check(__tmp7))
            __tmp8 = __tmp7;
        else {
            __tmp8 = NULL;
        }
        if (__tmp8 != NULL) goto __LL9;
        __tmp8 = __tmp7;
        if (__tmp8 != NULL) goto __LL9;
        CPy_TypeError("union[dict, object]", __tmp7); 
        __tmp8 = NULL;
__LL9: ;
        tmp.f0 = __tmp8;
        PyObject *__tmp10 = PyTuple_GET_ITEM(value, 1);
        CPy_INCREF(__tmp10);
        PyObject *__tmp11;
        __tmp11 = __tmp10;
        tmp.f1 = __tmp11;
        PyObject *__tmp12 = PyTuple_GET_ITEM(value, 2);
        CPy_INCREF(__tmp12);
        PyObject *__tmp13;
        __tmp13 = __tmp12;
        tmp.f2 = __tmp13;
    }
    CPy_INCREF(tmp.f0);
    CPy_INCREF(tmp.f1);
    CPy_INCREF(tmp.f2);
    self->_response_formatters = tmp;
    return 0;
}

static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_subscription_id(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure)
{
    if (unlikely(self->_subscription_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'subscription_id' of 'RequestInformation' undefined");
        return NULL;
    }
    CPy_INCREF(self->_subscription_id);
    PyObject *retval = self->_subscription_id;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_subscription_id(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RequestInformation' object attribute 'subscription_id' cannot be deleted");
        return -1;
    }
    if (self->_subscription_id != NULL) {
        CPy_DECREF(self->_subscription_id);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL14;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL14;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL14: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_subscription_id = tmp;
    return 0;
}

static PyObject *
faster_web3____utils___caching___caching_utils___RequestInformation_get_middleware_response_processors(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, void *closure)
{
    if (unlikely(self->_middleware_response_processors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'middleware_response_processors' of 'RequestInformation' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->_middleware_response_processors);
    PyObject *retval = self->_middleware_response_processors;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___RequestInformation_set_middleware_response_processors(faster_web3____utils___caching___caching_utils___RequestInformationObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'RequestInformation' object attribute 'middleware_response_processors' cannot be deleted");
        return -1;
    }
    if (self->_middleware_response_processors != NULL) {
        CPy_DECREF_NO_IMM(self->_middleware_response_processors);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->_middleware_response_processors = tmp;
    return 0;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__handle_request_caching_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching_env(void);

static PyObject *
faster_web3____utils___caching___caching_utils___handle_request_caching_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__handle_request_caching_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___handle_request_caching_env_traverse(faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_func);
    Py_VISIT(self->_wrapper);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___handle_request_caching_env_clear(faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_func);
    Py_CLEAR(self->_wrapper);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___handle_request_caching_env_dealloc(faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_func);
        Py_CLEAR(self->_wrapper);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___handle_request_caching_env_dealloc)
    faster_web3____utils___caching___caching_utils___handle_request_caching_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___handle_request_caching_env_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___handle_request_caching_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3____utils___caching___caching_utils___handle_request_caching_env_vtable, faster_web3____utils___caching___caching_utils___handle_request_caching_env_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___handle_request_caching_env_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___handle_request_caching_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "handle_request_caching_env",
    .tp_new = faster_web3____utils___caching___caching_utils___handle_request_caching_env_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___handle_request_caching_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___handle_request_caching_env_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___handle_request_caching_env_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___handle_request_caching_env_methods,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___handle_request_caching_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("handle_request_caching_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env_template = &CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__handle_request_caching_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *self;
    if (faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance;
        faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___handle_request_caching_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching_env(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__handle_request_caching_env_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_handle_request_caching_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_handle_request_caching_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_traverse(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_clear(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_dealloc(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_vtable[2];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_vtable, faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_vtable));
    return 1;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_get___3_mypyc_env__, (setter)faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($provider, method, params)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_handle_request_caching_obj",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_clear,
    .tp_getset = faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_getseters,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("wrapper_handle_request_caching_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_handle_request_caching_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_vtable;
    self->vectorcall = CPyPy_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_handle_request_caching_obj_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'wrapper_handle_request_caching_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'wrapper_handle_request_caching_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.handle_request_caching_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyAsyncMethods faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_set_threshold_if_empty_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen(void);

static PyObject *
faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_set_threshold_if_empty_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_traverse(faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__current_threshold);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1.f0);
    Py_VISIT(self->___mypyc_temp__1.f1);
    Py_VISIT(self->___mypyc_temp__1.f2);
    Py_VISIT(self->___mypyc_generator_attribute__chain_id_result);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__chain_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__chain_id));
    }
    Py_VISIT(self->___mypyc_temp__2.f0);
    Py_VISIT(self->___mypyc_temp__2.f1);
    Py_VISIT(self->___mypyc_temp__2.f2);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_clear(faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__current_threshold);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1.f0);
    Py_CLEAR(self->___mypyc_temp__1.f1);
    Py_CLEAR(self->___mypyc_temp__1.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__chain_id_result);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__chain_id)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__chain_id;
        self->___mypyc_generator_attribute__chain_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__2.f0);
    Py_CLEAR(self->___mypyc_temp__2.f1);
    Py_CLEAR(self->___mypyc_temp__2.f2);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_dealloc(faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__current_threshold);
        self->___mypyc_generator_attribute__cache_allowed_requests = 2;
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1.f0);
        Py_CLEAR(self->___mypyc_temp__1.f1);
        Py_CLEAR(self->___mypyc_temp__1.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__chain_id_result);
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__chain_id)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__chain_id;
            self->___mypyc_generator_attribute__chain_id = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__chain_id = CPY_INT_TAG;
        }
        Py_CLEAR(self->___mypyc_temp__2.f0);
        Py_CLEAR(self->___mypyc_temp__2.f1);
        Py_CLEAR(self->___mypyc_temp__2.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_dealloc)
    faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_vtable, faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_set_threshold_if_empty_gen",
    .tp_new = faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__,
    .tp_as_async = &faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_set_threshold_if_empty_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_template = &CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_set_threshold_if_empty_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *self;
    if (faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance;
        faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__cache_allowed_requests = 2;
    self->___mypyc_temp__1 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_generator_attribute__chain_id = CPY_INT_TAG;
    self->___mypyc_temp__2 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_set_threshold_if_empty_gen_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc___3_async_should_cache_response_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen(void);

static PyObject *
faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc___3_async_should_cache_response_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_traverse(faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__method);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->___mypyc_generator_attribute__response);
    Py_VISIT(self->___mypyc_generator_attribute__result);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4.f0);
    Py_VISIT(self->___mypyc_temp__4.f1);
    Py_VISIT(self->___mypyc_temp__4.f2);
    Py_VISIT(self->___mypyc_generator_attribute__cache_validator);
    Py_VISIT(self->___mypyc_temp__5);
    Py_VISIT(self->___mypyc_temp__6.f0);
    Py_VISIT(self->___mypyc_temp__6.f1);
    Py_VISIT(self->___mypyc_temp__6.f2);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_clear(faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__method);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->___mypyc_generator_attribute__response);
    Py_CLEAR(self->___mypyc_generator_attribute__result);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4.f0);
    Py_CLEAR(self->___mypyc_temp__4.f1);
    Py_CLEAR(self->___mypyc_temp__4.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_validator);
    Py_CLEAR(self->___mypyc_temp__5);
    Py_CLEAR(self->___mypyc_temp__6.f0);
    Py_CLEAR(self->___mypyc_temp__6.f1);
    Py_CLEAR(self->___mypyc_temp__6.f2);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_dealloc(faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute__method);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        Py_CLEAR(self->___mypyc_generator_attribute__response);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__result);
        Py_CLEAR(self->___mypyc_temp__3);
        Py_CLEAR(self->___mypyc_temp__4.f0);
        Py_CLEAR(self->___mypyc_temp__4.f1);
        Py_CLEAR(self->___mypyc_temp__4.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_validator);
        Py_CLEAR(self->___mypyc_temp__5);
        Py_CLEAR(self->___mypyc_temp__6.f0);
        Py_CLEAR(self->___mypyc_temp__6.f1);
        Py_CLEAR(self->___mypyc_temp__6.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_dealloc)
    faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__,
    };
    memcpy(faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_vtable, faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_async_should_cache_response_gen",
    .tp_new = faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__,
    .tp_as_async = &faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("_async_should_cache_response_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_template = &CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc___3_async_should_cache_response_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *self;
    if (faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance;
        faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__4 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__6 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc___3_async_should_cache_response_gen_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_request_caching_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env(void);

static PyObject *
faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_request_caching_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_traverse(faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_func);
    Py_VISIT(self->_wrapper);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_clear(faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_func);
    Py_CLEAR(self->_wrapper);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_dealloc(faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_func);
        Py_CLEAR(self->_wrapper);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_dealloc)
    faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_vtable, faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_handle_request_caching_env",
    .tp_new = faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_methods,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_handle_request_caching_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_template = &CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_request_caching_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *self;
    if (faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance;
        faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_request_caching_env_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_traverse(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__method);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    Py_VISIT(self->___mypyc_generator_attribute__request_cache);
    Py_VISIT(self->___mypyc_generator_attribute__cache_key);
    Py_VISIT(self->___mypyc_generator_attribute__cache_result);
    Py_VISIT(self->___mypyc_temp__7);
    Py_VISIT(self->___mypyc_temp__8.f0);
    Py_VISIT(self->___mypyc_temp__8.f1);
    Py_VISIT(self->___mypyc_temp__8.f2);
    Py_VISIT(self->___mypyc_generator_attribute__response);
    Py_VISIT(self->___mypyc_temp__9);
    Py_VISIT(self->___mypyc_temp__10.f0);
    Py_VISIT(self->___mypyc_temp__10.f1);
    Py_VISIT(self->___mypyc_temp__10.f2);
    Py_VISIT(self->___mypyc_temp__11);
    Py_VISIT(self->___mypyc_temp__12);
    Py_VISIT(self->___mypyc_temp__14);
    Py_VISIT(self->___mypyc_temp__15.f0);
    Py_VISIT(self->___mypyc_temp__15.f1);
    Py_VISIT(self->___mypyc_temp__15.f2);
    Py_VISIT(self->___mypyc_temp__16.f0);
    Py_VISIT(self->___mypyc_temp__16.f1);
    Py_VISIT(self->___mypyc_temp__16.f2);
    Py_VISIT(self->___mypyc_temp__17);
    Py_VISIT(self->___mypyc_temp__18.f0);
    Py_VISIT(self->___mypyc_temp__18.f1);
    Py_VISIT(self->___mypyc_temp__18.f2);
    Py_VISIT(self->___mypyc_temp__19);
    Py_VISIT(self->___mypyc_temp__20.f0);
    Py_VISIT(self->___mypyc_temp__20.f1);
    Py_VISIT(self->___mypyc_temp__20.f2);
    Py_VISIT(self->___mypyc_temp__21);
    Py_VISIT(self->___mypyc_temp__22.f0);
    Py_VISIT(self->___mypyc_temp__22.f1);
    Py_VISIT(self->___mypyc_temp__22.f2);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_clear(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__method);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    Py_CLEAR(self->___mypyc_generator_attribute__request_cache);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_result);
    Py_CLEAR(self->___mypyc_temp__7);
    Py_CLEAR(self->___mypyc_temp__8.f0);
    Py_CLEAR(self->___mypyc_temp__8.f1);
    Py_CLEAR(self->___mypyc_temp__8.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__response);
    Py_CLEAR(self->___mypyc_temp__9);
    Py_CLEAR(self->___mypyc_temp__10.f0);
    Py_CLEAR(self->___mypyc_temp__10.f1);
    Py_CLEAR(self->___mypyc_temp__10.f2);
    Py_CLEAR(self->___mypyc_temp__11);
    Py_CLEAR(self->___mypyc_temp__12);
    Py_CLEAR(self->___mypyc_temp__14);
    Py_CLEAR(self->___mypyc_temp__15.f0);
    Py_CLEAR(self->___mypyc_temp__15.f1);
    Py_CLEAR(self->___mypyc_temp__15.f2);
    Py_CLEAR(self->___mypyc_temp__16.f0);
    Py_CLEAR(self->___mypyc_temp__16.f1);
    Py_CLEAR(self->___mypyc_temp__16.f2);
    Py_CLEAR(self->___mypyc_temp__17);
    Py_CLEAR(self->___mypyc_temp__18.f0);
    Py_CLEAR(self->___mypyc_temp__18.f1);
    Py_CLEAR(self->___mypyc_temp__18.f2);
    Py_CLEAR(self->___mypyc_temp__19);
    Py_CLEAR(self->___mypyc_temp__20.f0);
    Py_CLEAR(self->___mypyc_temp__20.f1);
    Py_CLEAR(self->___mypyc_temp__20.f2);
    Py_CLEAR(self->___mypyc_temp__21);
    Py_CLEAR(self->___mypyc_temp__22.f0);
    Py_CLEAR(self->___mypyc_temp__22.f1);
    Py_CLEAR(self->___mypyc_temp__22.f2);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_dealloc(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->___mypyc_env__);
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute__method);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        Py_CLEAR(self->_type);
        Py_CLEAR(self->_value);
        Py_CLEAR(self->_traceback);
        Py_CLEAR(self->_arg);
        self->_stop_iter_ptr = NULL;
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__request_cache);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_result);
        Py_CLEAR(self->___mypyc_temp__7);
        Py_CLEAR(self->___mypyc_temp__8.f0);
        Py_CLEAR(self->___mypyc_temp__8.f1);
        Py_CLEAR(self->___mypyc_temp__8.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__response);
        Py_CLEAR(self->___mypyc_temp__9);
        Py_CLEAR(self->___mypyc_temp__10.f0);
        Py_CLEAR(self->___mypyc_temp__10.f1);
        Py_CLEAR(self->___mypyc_temp__10.f2);
        Py_CLEAR(self->___mypyc_temp__11);
        Py_CLEAR(self->___mypyc_temp__12);
        self->___mypyc_temp__13 = 2;
        Py_CLEAR(self->___mypyc_temp__14);
        Py_CLEAR(self->___mypyc_temp__15.f0);
        Py_CLEAR(self->___mypyc_temp__15.f1);
        Py_CLEAR(self->___mypyc_temp__15.f2);
        Py_CLEAR(self->___mypyc_temp__16.f0);
        Py_CLEAR(self->___mypyc_temp__16.f1);
        Py_CLEAR(self->___mypyc_temp__16.f2);
        Py_CLEAR(self->___mypyc_temp__17);
        Py_CLEAR(self->___mypyc_temp__18.f0);
        Py_CLEAR(self->___mypyc_temp__18.f1);
        Py_CLEAR(self->___mypyc_temp__18.f2);
        Py_CLEAR(self->___mypyc_temp__19);
        Py_CLEAR(self->___mypyc_temp__20.f0);
        Py_CLEAR(self->___mypyc_temp__20.f1);
        Py_CLEAR(self->___mypyc_temp__20.f2);
        Py_CLEAR(self->___mypyc_temp__21);
        Py_CLEAR(self->___mypyc_temp__22.f0);
        Py_CLEAR(self->___mypyc_temp__22.f1);
        Py_CLEAR(self->___mypyc_temp__22.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_vtable, faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_async_handle_request_caching_env",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_methods,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("wrapper_async_handle_request_caching_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__8 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__10 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__13 = 2;
    self->___mypyc_temp__15 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__16 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__18 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__20 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__22 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_env_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_traverse(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_clear(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_dealloc(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_vtable[2];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_vtable, faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_vtable));
    return 1;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_get___3_mypyc_env__, (setter)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($provider, method, params)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_async_handle_request_caching_obj",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_clear,
    .tp_getset = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_getseters,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("wrapper_async_handle_request_caching_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_vtable;
    self->vectorcall = CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_request_caching_obj_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'wrapper_async_handle_request_caching_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'wrapper_async_handle_request_caching_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_handle_request_caching_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyAsyncMethods faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_363_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_363_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_traverse(faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_clear(faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_dealloc(faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_vtable, faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_gen___363",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__,
    .tp_as_async = &faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("wrapper_gen___363()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_363_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_363_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_send_caching_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env(void);

static PyObject *
faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_send_caching_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_traverse(faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_func);
    Py_VISIT(self->_wrapper);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_clear(faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_func);
    Py_CLEAR(self->_wrapper);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_dealloc(faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_func);
        Py_CLEAR(self->_wrapper);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_dealloc)
    faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_vtable, faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_handle_send_caching_env",
    .tp_new = faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_methods,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_handle_send_caching_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_template = &CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_send_caching_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *self;
    if (faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance;
        faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_send_caching_env_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_traverse(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__method);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    Py_VISIT(self->___mypyc_generator_attribute__request_cache);
    Py_VISIT(self->___mypyc_generator_attribute__cache_key);
    Py_VISIT(self->___mypyc_generator_attribute__cached_response);
    Py_VISIT(self->___mypyc_temp__23);
    Py_VISIT(self->___mypyc_temp__24.f0);
    Py_VISIT(self->___mypyc_temp__24.f1);
    Py_VISIT(self->___mypyc_temp__24.f2);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_clear(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__method);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    Py_CLEAR(self->___mypyc_generator_attribute__request_cache);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
    Py_CLEAR(self->___mypyc_generator_attribute__cached_response);
    Py_CLEAR(self->___mypyc_temp__23);
    Py_CLEAR(self->___mypyc_temp__24.f0);
    Py_CLEAR(self->___mypyc_temp__24.f1);
    Py_CLEAR(self->___mypyc_temp__24.f2);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_dealloc(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->___mypyc_env__);
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute__method);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        Py_CLEAR(self->_type);
        Py_CLEAR(self->_value);
        Py_CLEAR(self->_traceback);
        Py_CLEAR(self->_arg);
        self->_stop_iter_ptr = NULL;
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__request_cache);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
        Py_CLEAR(self->___mypyc_generator_attribute__cached_response);
        Py_CLEAR(self->___mypyc_temp__23);
        Py_CLEAR(self->___mypyc_temp__24.f0);
        Py_CLEAR(self->___mypyc_temp__24.f1);
        Py_CLEAR(self->___mypyc_temp__24.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_vtable, faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_async_handle_send_caching_env",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_methods,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("wrapper_async_handle_send_caching_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__24 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_env_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_traverse(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_clear(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_dealloc(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_vtable[2];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_vtable, faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_vtable));
    return 1;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_get___3_mypyc_env__, (setter)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($provider, method, params)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_async_handle_send_caching_obj",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_clear,
    .tp_getset = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_getseters,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("wrapper_async_handle_send_caching_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_vtable;
    self->vectorcall = CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_send_caching_obj_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'wrapper_async_handle_send_caching_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'wrapper_async_handle_send_caching_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_handle_send_caching_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyAsyncMethods faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_396_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_396_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_traverse(faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_clear(faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_dealloc(faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_vtable, faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_gen___396",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__,
    .tp_as_async = &faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("wrapper_gen___396()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_396_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_396_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_recv_caching_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env(void);

static PyObject *
faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_recv_caching_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_traverse(faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_func);
    Py_VISIT(self->_wrapper);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_clear(faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_func);
    Py_CLEAR(self->_wrapper);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_dealloc(faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_func);
        Py_CLEAR(self->_wrapper);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_dealloc)
    faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_vtable, faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "async_handle_recv_caching_env",
    .tp_new = faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_methods,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("async_handle_recv_caching_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_template = &CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_recv_caching_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *self;
    if (faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance;
        faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__async_handle_recv_caching_env_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_traverse(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->___mypyc_generator_attribute__provider);
    Py_VISIT(self->___mypyc_generator_attribute__rpc_request);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    Py_VISIT(self->___mypyc_generator_attribute__method);
    Py_VISIT(self->___mypyc_generator_attribute__params);
    Py_VISIT(self->___mypyc_generator_attribute__request_cache);
    Py_VISIT(self->___mypyc_generator_attribute__cache_key);
    Py_VISIT(self->___mypyc_generator_attribute__cache_result);
    Py_VISIT(self->___mypyc_temp__25);
    Py_VISIT(self->___mypyc_temp__26.f0);
    Py_VISIT(self->___mypyc_temp__26.f1);
    Py_VISIT(self->___mypyc_temp__26.f2);
    Py_VISIT(self->___mypyc_generator_attribute__response);
    Py_VISIT(self->___mypyc_temp__27);
    Py_VISIT(self->___mypyc_temp__28.f0);
    Py_VISIT(self->___mypyc_temp__28.f1);
    Py_VISIT(self->___mypyc_temp__28.f2);
    Py_VISIT(self->___mypyc_temp__29);
    Py_VISIT(self->___mypyc_temp__30);
    Py_VISIT(self->___mypyc_temp__32);
    Py_VISIT(self->___mypyc_temp__33.f0);
    Py_VISIT(self->___mypyc_temp__33.f1);
    Py_VISIT(self->___mypyc_temp__33.f2);
    Py_VISIT(self->___mypyc_temp__34.f0);
    Py_VISIT(self->___mypyc_temp__34.f1);
    Py_VISIT(self->___mypyc_temp__34.f2);
    Py_VISIT(self->___mypyc_temp__35);
    Py_VISIT(self->___mypyc_temp__36.f0);
    Py_VISIT(self->___mypyc_temp__36.f1);
    Py_VISIT(self->___mypyc_temp__36.f2);
    Py_VISIT(self->___mypyc_temp__37);
    Py_VISIT(self->___mypyc_temp__38.f0);
    Py_VISIT(self->___mypyc_temp__38.f1);
    Py_VISIT(self->___mypyc_temp__38.f2);
    Py_VISIT(self->___mypyc_temp__39);
    Py_VISIT(self->___mypyc_temp__40.f0);
    Py_VISIT(self->___mypyc_temp__40.f1);
    Py_VISIT(self->___mypyc_temp__40.f2);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_clear(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->___mypyc_generator_attribute__provider);
    Py_CLEAR(self->___mypyc_generator_attribute__rpc_request);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    Py_CLEAR(self->___mypyc_generator_attribute__method);
    Py_CLEAR(self->___mypyc_generator_attribute__params);
    Py_CLEAR(self->___mypyc_generator_attribute__request_cache);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_result);
    Py_CLEAR(self->___mypyc_temp__25);
    Py_CLEAR(self->___mypyc_temp__26.f0);
    Py_CLEAR(self->___mypyc_temp__26.f1);
    Py_CLEAR(self->___mypyc_temp__26.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__response);
    Py_CLEAR(self->___mypyc_temp__27);
    Py_CLEAR(self->___mypyc_temp__28.f0);
    Py_CLEAR(self->___mypyc_temp__28.f1);
    Py_CLEAR(self->___mypyc_temp__28.f2);
    Py_CLEAR(self->___mypyc_temp__29);
    Py_CLEAR(self->___mypyc_temp__30);
    Py_CLEAR(self->___mypyc_temp__32);
    Py_CLEAR(self->___mypyc_temp__33.f0);
    Py_CLEAR(self->___mypyc_temp__33.f1);
    Py_CLEAR(self->___mypyc_temp__33.f2);
    Py_CLEAR(self->___mypyc_temp__34.f0);
    Py_CLEAR(self->___mypyc_temp__34.f1);
    Py_CLEAR(self->___mypyc_temp__34.f2);
    Py_CLEAR(self->___mypyc_temp__35);
    Py_CLEAR(self->___mypyc_temp__36.f0);
    Py_CLEAR(self->___mypyc_temp__36.f1);
    Py_CLEAR(self->___mypyc_temp__36.f2);
    Py_CLEAR(self->___mypyc_temp__37);
    Py_CLEAR(self->___mypyc_temp__38.f0);
    Py_CLEAR(self->___mypyc_temp__38.f1);
    Py_CLEAR(self->___mypyc_temp__38.f2);
    Py_CLEAR(self->___mypyc_temp__39);
    Py_CLEAR(self->___mypyc_temp__40.f0);
    Py_CLEAR(self->___mypyc_temp__40.f1);
    Py_CLEAR(self->___mypyc_temp__40.f2);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_dealloc(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->___mypyc_env__);
        Py_CLEAR(self->___mypyc_generator_attribute__provider);
        Py_CLEAR(self->___mypyc_generator_attribute__rpc_request);
        Py_CLEAR(self->_type);
        Py_CLEAR(self->_value);
        Py_CLEAR(self->_traceback);
        Py_CLEAR(self->_arg);
        self->_stop_iter_ptr = NULL;
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__method);
        Py_CLEAR(self->___mypyc_generator_attribute__params);
        Py_CLEAR(self->___mypyc_generator_attribute__request_cache);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_key);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_result);
        Py_CLEAR(self->___mypyc_temp__25);
        Py_CLEAR(self->___mypyc_temp__26.f0);
        Py_CLEAR(self->___mypyc_temp__26.f1);
        Py_CLEAR(self->___mypyc_temp__26.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__response);
        Py_CLEAR(self->___mypyc_temp__27);
        Py_CLEAR(self->___mypyc_temp__28.f0);
        Py_CLEAR(self->___mypyc_temp__28.f1);
        Py_CLEAR(self->___mypyc_temp__28.f2);
        Py_CLEAR(self->___mypyc_temp__29);
        Py_CLEAR(self->___mypyc_temp__30);
        self->___mypyc_temp__31 = 2;
        Py_CLEAR(self->___mypyc_temp__32);
        Py_CLEAR(self->___mypyc_temp__33.f0);
        Py_CLEAR(self->___mypyc_temp__33.f1);
        Py_CLEAR(self->___mypyc_temp__33.f2);
        Py_CLEAR(self->___mypyc_temp__34.f0);
        Py_CLEAR(self->___mypyc_temp__34.f1);
        Py_CLEAR(self->___mypyc_temp__34.f2);
        Py_CLEAR(self->___mypyc_temp__35);
        Py_CLEAR(self->___mypyc_temp__36.f0);
        Py_CLEAR(self->___mypyc_temp__36.f1);
        Py_CLEAR(self->___mypyc_temp__36.f2);
        Py_CLEAR(self->___mypyc_temp__37);
        Py_CLEAR(self->___mypyc_temp__38.f0);
        Py_CLEAR(self->___mypyc_temp__38.f1);
        Py_CLEAR(self->___mypyc_temp__38.f2);
        Py_CLEAR(self->___mypyc_temp__39);
        Py_CLEAR(self->___mypyc_temp__40.f0);
        Py_CLEAR(self->___mypyc_temp__40.f1);
        Py_CLEAR(self->___mypyc_temp__40.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_vtable[1];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_vtable, faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_async_handle_recv_caching_env",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_methods,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("wrapper_async_handle_recv_caching_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__26 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__28 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__31 = 2;
    self->___mypyc_temp__33 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__34 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__36 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__38 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__40 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_env_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_traverse(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_clear(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_dealloc(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_vtable[2];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_vtable, faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_vtable));
    return 1;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self, void *closure);
static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_get___3_mypyc_env__, (setter)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($provider, rpc_request)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_async_handle_recv_caching_obj",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_clear,
    .tp_getset = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_getseters,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("wrapper_async_handle_recv_caching_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_vtable;
    self->vectorcall = CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_async_handle_recv_caching_obj_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_get___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'wrapper_async_handle_recv_caching_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_set___3_mypyc_env__(faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'wrapper_async_handle_recv_caching_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_handle_recv_caching_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyAsyncMethods faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_as_async = {
    .am_await = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__,
};
PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_422_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422(void);

static PyObject *
faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_422_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_traverse(faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_clear(faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_dealloc(faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance == NULL) {
        faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_dealloc)
    faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_vtable[7];
static bool
CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close,
        (CPyVTableItem)CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__,
    };
    memcpy(faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_vtable, faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_vtable_scratch, sizeof(faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_vtable));
    return 1;
}

static PyMethodDef faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_gen___422",
    .tp_new = faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_new,
    .tp_dealloc = (destructor)faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_dealloc,
    .tp_traverse = (traverseproc)faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_traverse,
    .tp_clear = (inquiry)faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_clear,
    .tp_methods = faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_methods,
    .tp_iter = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__,
    .tp_iternext = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__,
    .tp_as_async = &faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_as_async,
    .tp_basicsize = sizeof(faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("wrapper_gen___422()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_template = &CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_template_;

PyObject *CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_422_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *self;
    if (faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance != NULL) {
        self = faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance;
        faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422(void)
{
    PyObject *self = CPyDef_faster_web3____utils___caching___caching_utils_____mypyc__wrapper_gen___3_422_setup((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef faster_web3____utils___caching___caching_utilsmodule_methods[] = {
    {"generate_cache_key", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___generate_cache_key, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("generate_cache_key(value)\n--\n\n") /* docstring */},
    {"is_cacheable_request", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___is_cacheable_request, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("is_cacheable_request(provider, method, params)\n--\n\n") /* docstring */},
    {"set_threshold_if_empty", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___set_threshold_if_empty, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("set_threshold_if_empty(provider)\n--\n\n") /* docstring */},
    {"_should_cache_response", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____should_cache_response, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_should_cache_response(provider, method, params, response)\n--\n\n") /* docstring */},
    {"handle_request_caching", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___handle_request_caching, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("handle_request_caching(func)\n--\n\n") /* docstring */},
    {"async_set_threshold_if_empty", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_set_threshold_if_empty(provider)\n--\n\n") /* docstring */},
    {"_async_should_cache_response", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_async_should_cache_response(provider, method, params, response)\n--\n\n") /* docstring */},
    {"async_handle_request_caching", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_handle_request_caching, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_handle_request_caching(func)\n--\n\n") /* docstring */},
    {"async_handle_send_caching", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_handle_send_caching, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_handle_send_caching(func)\n--\n\n") /* docstring */},
    {"async_handle_recv_caching", (PyCFunction)CPyPy_faster_web3____utils___caching___caching_utils___async_handle_recv_caching, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("async_handle_recv_caching(func)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3____utils___caching___caching_utils(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3____utils___caching___caching_utils__internal, "__name__");
    CPyStatic_faster_web3____utils___caching___caching_utils___globals = PyModule_GetDict(CPyModule_faster_web3____utils___caching___caching_utils__internal);
    if (unlikely(CPyStatic_faster_web3____utils___caching___caching_utils___globals == NULL))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363 = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396 = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj))
        goto fail;
    CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422 = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3____utils___caching___caching_utils_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3____utils___caching___caching_utils__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction);
    CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___md5);
    CPyStatic_faster_web3____utils___caching___caching_utils___md5 = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___get_ident);
    CPyStatic_faster_web3____utils___caching___caching_utils___get_ident = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean);
    CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes);
    CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_dict);
    CPyStatic_faster_web3____utils___caching___caching_utils___is_dict = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like);
    CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_null);
    CPyStatic_faster_web3____utils___caching___caching_utils___is_null = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_number);
    CPyStatic_faster_web3____utils___caching___caching_utils___is_number = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_text);
    CPyStatic_faster_web3____utils___caching___caching_utils___is_text = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes);
    CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS);
    CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE);
    CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS);
    CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT);
    CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS);
    CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP);
    CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___CACHEABLE_REQUESTS);
    CPyStatic_faster_web3____utils___caching___caching_utils___CACHEABLE_REQUESTS = NULL;
    CPy_XDECREF(CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP);
    CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP = NULL;
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___RequestInformation);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj);
    Py_CLEAR(CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422);
    return -1;
}
static struct PyModuleDef faster_web3____utils___caching___caching_utilsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3._utils.caching.caching_utils",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3____utils___caching___caching_utilsmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3____utils___caching___caching_utils(void)
{
    if (CPyModule_faster_web3____utils___caching___caching_utils__internal) {
        Py_INCREF(CPyModule_faster_web3____utils___caching___caching_utils__internal);
        return CPyModule_faster_web3____utils___caching___caching_utils__internal;
    }
    CPyModule_faster_web3____utils___caching___caching_utils__internal = PyModule_Create(&faster_web3____utils___caching___caching_utilsmodule);
    if (unlikely(CPyModule_faster_web3____utils___caching___caching_utils__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3____utils___caching___caching_utils(CPyModule_faster_web3____utils___caching___caching_utils__internal) != 0)
        goto fail;
    return CPyModule_faster_web3____utils___caching___caching_utils__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    PyObject *cpy_r_r71;
    int64_t cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    char cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T2OO cpy_r_r82;
    PyObject *cpy_r_r83;
    int64_t cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject **cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    cpy_r_r0 = CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_bytes\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 89, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL3: ;
    PyObject *cpy_r_r2[1] = {cpy_r_value};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_r0, cpy_r_r3, 1, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 89, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 89, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyStatic_faster_web3____utils___caching___caching_utils___md5;
    if (likely(cpy_r_r6 != NULL)) goto CPyL9;
    PyErr_SetString(PyExc_NameError, "value for final name \"md5\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 90, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL9: ;
    PyObject *cpy_r_r8[1] = {cpy_r_value};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r9, 1, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 90, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r11 = CPyStatics[3]; /* 'hexdigest' */
    PyObject *cpy_r_r12[1] = {cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 90, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 90, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r14);
        goto CPyL97;
    }
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r16 = CPyStatic_faster_web3____utils___caching___caching_utils___is_text;
    if (likely(cpy_r_r16 != NULL)) goto CPyL16;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_text\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 91, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL16: ;
    PyObject *cpy_r_r18[1] = {cpy_r_value};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_Vectorcall(cpy_r_r16, cpy_r_r19, 1, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 91, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 91, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (!cpy_r_r21) goto CPyL27;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r22 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 92, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_value);
        goto CPyL97;
    }
    cpy_r_r23 = CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes;
    if (unlikely(cpy_r_r23 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_bytes\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 92, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL23: ;
    PyObject *cpy_r_r25[1] = {cpy_r_r22};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = CPyStatics[145]; /* ('text',) */
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r23, cpy_r_r26, 0, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 92, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_r22);
    if (likely(PyBytes_Check(cpy_r_r28) || PyByteArray_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 92, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "bytes", cpy_r_r28);
        goto CPyL97;
    }
    cpy_r_r30 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 92, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    return cpy_r_r30;
CPyL27: ;
    cpy_r_r31 = CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean;
    if (likely(cpy_r_r31 != NULL)) goto CPyL30;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_boolean\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 94, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL30: ;
    PyObject *cpy_r_r33[1] = {cpy_r_value};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r31, cpy_r_r34, 1, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 94, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r35))) {
        CPy_TypeError("bool", cpy_r_r35); cpy_r_r36 = 2;
    } else
        cpy_r_r36 = cpy_r_r35 == Py_True;
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 94, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (!cpy_r_r36) goto CPyL37;
    if (unlikely(!PyBool_Check(cpy_r_value))) {
        CPy_TypeError("bool", cpy_r_value); cpy_r_r37 = 2;
    } else
        cpy_r_r37 = cpy_r_value == Py_True;
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 95, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r38 = CPyBool_Str(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 95, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r39 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 95, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    return cpy_r_r39;
CPyL37: ;
    cpy_r_r40 = CPyStatic_faster_web3____utils___caching___caching_utils___is_null;
    if (likely(cpy_r_r40 != NULL)) goto CPyL40;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_null\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 96, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL40: ;
    PyObject *cpy_r_r42[1] = {cpy_r_value};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = PyObject_Vectorcall(cpy_r_r40, cpy_r_r43, 1, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 96, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r44))) {
        CPy_TypeError("bool", cpy_r_r44); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = cpy_r_r44 == Py_True;
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 96, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (!cpy_r_r45) goto CPyL47;
    if (unlikely(cpy_r_value != Py_None)) {
        CPy_TypeError("None", cpy_r_value); cpy_r_r46 = 2;
    } else
        cpy_r_r46 = 1;
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 97, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r47 = Py_None;
    cpy_r_r48 = PyObject_Repr(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 97, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r49 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 97, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    return cpy_r_r49;
CPyL47: ;
    cpy_r_r50 = CPyStatic_faster_web3____utils___caching___caching_utils___is_number;
    if (likely(cpy_r_r50 != NULL)) goto CPyL50;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_number\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 98, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL50: ;
    PyObject *cpy_r_r52[1] = {cpy_r_value};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r53, 1, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 98, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r54))) {
        CPy_TypeError("bool", cpy_r_r54); cpy_r_r55 = 2;
    } else
        cpy_r_r55 = cpy_r_r54 == Py_True;
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 98, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (!cpy_r_r55) goto CPyL56;
    cpy_r_r56 = PyObject_Repr(cpy_r_value);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 99, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r57 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 99, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    return cpy_r_r57;
CPyL56: ;
    cpy_r_r58 = CPyStatic_faster_web3____utils___caching___caching_utils___is_dict;
    if (likely(cpy_r_r58 != NULL)) goto CPyL59;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_dict\" was not set");
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 100, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL59: ;
    PyObject *cpy_r_r60[1] = {cpy_r_value};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = PyObject_Vectorcall(cpy_r_r58, cpy_r_r61, 1, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 100, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r62))) {
        CPy_TypeError("bool", cpy_r_r62); cpy_r_r63 = 2;
    } else
        cpy_r_r63 = cpy_r_r62 == Py_True;
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 100, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (!cpy_r_r63) goto CPyL72;
    cpy_r_r64 = CPyStatics[5]; /* 'keys' */
    PyObject *cpy_r_r65[1] = {cpy_r_value};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = PyObject_VectorcallMethod(cpy_r_r64, cpy_r_r66, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 101, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r68 = CPySequence_Sort(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 101, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = PyList_New(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 101, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL101;
    }
    cpy_r_r72 = 0;
CPyL66: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r72 < cpy_r_r74;
    if (!cpy_r_r75) goto CPyL102;
    cpy_r_r76 = (CPyPtr)&((PyListObject *)cpy_r_r68)->ob_item;
    cpy_r_r77 = *(CPyPtr *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r72 * 8;
    cpy_r_r79 = cpy_r_r77 + cpy_r_r78;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = PyObject_GetItem(cpy_r_value, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 101, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL103;
    }
    cpy_r_r82.f0 = cpy_r_r80;
    cpy_r_r82.f1 = cpy_r_r81;
    cpy_r_r83 = PyTuple_New(2);
    if (unlikely(cpy_r_r83 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp15 = cpy_r_r82.f0;
    PyTuple_SET_ITEM(cpy_r_r83, 0, __tmp15);
    PyObject *__tmp16 = cpy_r_r82.f1;
    PyTuple_SET_ITEM(cpy_r_r83, 1, __tmp16);
    CPyList_SetItemUnsafe(cpy_r_r71, cpy_r_r72, cpy_r_r83);
    cpy_r_r84 = cpy_r_r72 + 1;
    cpy_r_r72 = cpy_r_r84;
    goto CPyL66;
CPyL70: ;
    cpy_r_r85 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r71);
    CPy_DECREF_NO_IMM(cpy_r_r71);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 101, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    return cpy_r_r85;
CPyL72: ;
    cpy_r_r86 = CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like;
    if (likely(cpy_r_r86 != NULL)) goto CPyL75;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_list_like\" was not set");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 102, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL75: ;
    PyObject *cpy_r_r88[1] = {cpy_r_value};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = PyObject_Vectorcall(cpy_r_r86, cpy_r_r89, 1, 0);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 102, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (unlikely(!PyBool_Check(cpy_r_r90))) {
        CPy_TypeError("bool", cpy_r_r90); cpy_r_r91 = 2;
    } else
        cpy_r_r91 = cpy_r_r90 == Py_True;
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 102, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    if (cpy_r_r91) goto CPyL81;
    cpy_r_r92 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r93 = CPyStatics[6]; /* 'Generator' */
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 102, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r95 = PyObject_IsInstance(cpy_r_value, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 102, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r97 = cpy_r_r95;
    if (!cpy_r_r97) goto CPyL90;
CPyL81: ;
    cpy_r_r98 = CPyStatics[7]; /* '' */
    cpy_r_r99 = PyList_New(0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 103, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r100 = PyObject_GetIter(cpy_r_value);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 103, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL104;
    }
CPyL83: ;
    cpy_r_r101 = PyIter_Next(cpy_r_r100);
    if (cpy_r_r101 == NULL) goto CPyL105;
    cpy_r_r102 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 103, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL106;
    }
    cpy_r_r103 = PyList_Append(cpy_r_r99, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 103, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL106;
    } else
        goto CPyL83;
CPyL86: ;
    cpy_r_r105 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 103, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL104;
    }
    cpy_r_r106 = PyUnicode_Join(cpy_r_r98, cpy_r_r99);
    CPy_DECREF_NO_IMM(cpy_r_r99);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 103, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r107 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 103, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    return cpy_r_r107;
CPyL90: ;
    cpy_r_r108 = CPyStatics[8]; /* 'Cannot generate cache key for value ' */
    cpy_r_r109 = PyObject_Str(cpy_r_value);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 106, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r110 = CPyStatics[9]; /* ' of type ' */
    cpy_r_r111 = CPy_TYPE(cpy_r_value);
    cpy_r_r112 = PyObject_Str(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 106, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL107;
    }
    cpy_r_r113 = CPyStr_Build(4, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r112);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 106, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    cpy_r_r114 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r115 = CPyStatics[10]; /* 'Web3TypeError' */
    cpy_r_r116 = CPyDict_GetItem(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 105, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL108;
    }
    PyObject *cpy_r_r117[1] = {cpy_r_r113};
    cpy_r_r118 = (PyObject **)&cpy_r_r117;
    cpy_r_r119 = PyObject_Vectorcall(cpy_r_r116, cpy_r_r118, 1, 0);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 105, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL108;
    }
    CPy_DECREF(cpy_r_r113);
    CPy_Raise(cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 105, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r120 = NULL;
    return cpy_r_r120;
CPyL98: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL97;
CPyL99: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL21;
CPyL100: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL97;
CPyL101: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL97;
CPyL102: ;
    CPy_DECREF_NO_IMM(cpy_r_r68);
    goto CPyL70;
CPyL103: ;
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r80);
    goto CPyL97;
CPyL104: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL97;
CPyL105: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL86;
CPyL106: ;
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    goto CPyL97;
CPyL107: ;
    CPy_DecRef(cpy_r_r109);
    goto CPyL97;
CPyL108: ;
    CPy_DecRef(cpy_r_r113);
    goto CPyL97;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___generate_cache_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:generate_cache_key", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "generate_cache_key", 85, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_____init__(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params, tuple_T3OOO cpy_r_response_formatters, PyObject *cpy_r_subscription_id) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    if (cpy_r_subscription_id != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    cpy_r_subscription_id = cpy_r_r0;
CPyL2: ;
    CPy_INCREF(cpy_r_method);
    if (((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_method != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_method);
    }
    ((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_method = cpy_r_method;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__init__", 123, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_params);
    }
    ((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_params = cpy_r_params;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__init__", 124, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_response_formatters.f0);
    CPy_INCREF(cpy_r_response_formatters.f1);
    CPy_INCREF(cpy_r_response_formatters.f2);
    if (((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_response_formatters.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_response_formatters.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_response_formatters.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_response_formatters.f2);
    }
    ((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_response_formatters = cpy_r_response_formatters;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__init__", 125, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    if (((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_subscription_id != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_subscription_id);
    }
    ((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_subscription_id = cpy_r_subscription_id;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__init__", 126, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__init__", 127, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    if (((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_middleware_response_processors != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_middleware_response_processors);
    }
    ((faster_web3____utils___caching___caching_utils___RequestInformationObject *)cpy_r_self)->_middleware_response_processors = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__init__", 127, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL10: ;
    CPy_INCREF(cpy_r_subscription_id);
    goto CPyL2;
CPyL11: ;
    CPy_DecRef(cpy_r_subscription_id);
    goto CPyL9;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___RequestInformation_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"method", "params", "response_formatters", "subscription_id", 0};
    PyObject *obj_method;
    PyObject *obj_params;
    PyObject *obj_response_formatters;
    PyObject *obj_subscription_id = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO|O", "__init__", kwlist, &obj_method, &obj_params, &obj_response_formatters, &obj_subscription_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_faster_web3____utils___caching___caching_utils___RequestInformation)))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.RequestInformation", obj_self); 
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
    tuple_T3OOO arg_response_formatters;
    PyObject *__tmp17;
    if (unlikely(!(PyTuple_Check(obj_response_formatters) && PyTuple_GET_SIZE(obj_response_formatters) == 3))) {
        __tmp17 = NULL;
        goto __LL18;
    }
    if (PyDict_Check(PyTuple_GET_ITEM(obj_response_formatters, 0)))
        __tmp17 = PyTuple_GET_ITEM(obj_response_formatters, 0);
    else {
        __tmp17 = NULL;
    }
    if (__tmp17 != NULL) goto __LL19;
    __tmp17 = PyTuple_GET_ITEM(obj_response_formatters, 0);
    if (__tmp17 != NULL) goto __LL19;
    __tmp17 = NULL;
__LL19: ;
    if (__tmp17 == NULL) goto __LL18;
    __tmp17 = PyTuple_GET_ITEM(obj_response_formatters, 1);
    if (__tmp17 == NULL) goto __LL18;
    __tmp17 = PyTuple_GET_ITEM(obj_response_formatters, 2);
    if (__tmp17 == NULL) goto __LL18;
    __tmp17 = obj_response_formatters;
__LL18: ;
    if (unlikely(__tmp17 == NULL)) {
        CPy_TypeError("tuple[union[dict, object], object, object]", obj_response_formatters); goto fail;
    } else {
        PyObject *__tmp20 = PyTuple_GET_ITEM(obj_response_formatters, 0);
        PyObject *__tmp21;
        if (PyDict_Check(__tmp20))
            __tmp21 = __tmp20;
        else {
            __tmp21 = NULL;
        }
        if (__tmp21 != NULL) goto __LL22;
        __tmp21 = __tmp20;
        if (__tmp21 != NULL) goto __LL22;
        CPy_TypeError("union[dict, object]", __tmp20); 
        __tmp21 = NULL;
__LL22: ;
        arg_response_formatters.f0 = __tmp21;
        PyObject *__tmp23 = PyTuple_GET_ITEM(obj_response_formatters, 1);
        PyObject *__tmp24;
        __tmp24 = __tmp23;
        arg_response_formatters.f1 = __tmp24;
        PyObject *__tmp25 = PyTuple_GET_ITEM(obj_response_formatters, 2);
        PyObject *__tmp26;
        __tmp26 = __tmp25;
        arg_response_formatters.f2 = __tmp26;
    }
    PyObject *arg_subscription_id;
    if (obj_subscription_id == NULL) {
        arg_subscription_id = NULL;
        goto __LL27;
    }
    if (PyUnicode_Check(obj_subscription_id))
        arg_subscription_id = obj_subscription_id;
    else {
        arg_subscription_id = NULL;
    }
    if (arg_subscription_id != NULL) goto __LL27;
    if (obj_subscription_id == Py_None)
        arg_subscription_id = obj_subscription_id;
    else {
        arg_subscription_id = NULL;
    }
    if (arg_subscription_id != NULL) goto __LL27;
    CPy_TypeError("str or None", obj_subscription_id); 
    goto fail;
__LL27: ;
    char retval = CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_____init__(arg_self, arg_method, arg_params, arg_response_formatters, arg_subscription_id);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__init__", 112, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyStatics[11]; /* 'cache_allowed_requests' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 157, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r1))) {
        CPy_TypeError("bool", cpy_r_r1); cpy_r_r2 = 2;
    } else
        cpy_r_r2 = cpy_r_r1 == Py_True;
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 157, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    if (!cpy_r_r2) goto CPyL7;
    cpy_r_r3 = CPyStatics[12]; /* 'cacheable_requests' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 157, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    if (PySet_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL28;
    if (PyTuple_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL28;
    CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 157, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "union[set, tuple]", cpy_r_r4);
    goto CPyL21;
__LL28: ;
    cpy_r_r6 = PySequence_Contains(cpy_r_r5, cpy_r_method);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 157, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    cpy_r_r8 = cpy_r_r6;
    if (cpy_r_r8) goto CPyL8;
CPyL7: ;
    return 0;
CPyL8: ;
    cpy_r_r9 = CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS;
    if (likely(cpy_r_r9 != NULL)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCKNUM_IN_PARAMS\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 159, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r11 = PySet_Contains(cpy_r_r9, cpy_r_method);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 159, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL20;
    cpy_r_r14 = CPyStatics[135]; /* 0 */
    cpy_r_r15 = PyObject_GetItem(cpy_r_params, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 160, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    cpy_r_r16 = *exports_faster_web3____utils___caching___request_caching_validation.CPyStatic_faster_web3____utils___caching___request_caching_validation___UNCACHEABLE_BLOCK_IDS;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL22;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNCACHEABLE_BLOCK_IDS\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 161, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r18 = PySet_Contains(cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 161, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL21;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL20;
    return 0;
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL22: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL15;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___is_cacheable_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "method", "params", 0};
    static CPyArg_Parser parser = {"OOO:is_cacheable_request", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    char retval = CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request(arg_provider, arg_method, arg_params);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "is_cacheable_request", 152, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___caching_utils___set_threshold_if_empty(PyObject *cpy_r_provider) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_current_threshold;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
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
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 211, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL41;
    }
    cpy_r_current_threshold = cpy_r_r1;
    cpy_r_r2 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r3 = CPyStatics[14]; /* 'empty' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 213, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL42;
    }
    cpy_r_r5 = cpy_r_current_threshold == cpy_r_r4;
    CPy_DECREF(cpy_r_r4);
    if (cpy_r_r5) goto CPyL4;
    cpy_r_r6 = (PyObject *)*exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold;
    cpy_r_r7 = CPy_TypeCheck(cpy_r_current_threshold, cpy_r_r6);
    if (!cpy_r_r7) goto CPyL43;
CPyL4: ;
    cpy_r_r8 = CPyStatics[11]; /* 'cache_allowed_requests' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 216, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL42;
    }
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 216, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL42;
    }
    cpy_r_r11 = CPyStatics[11]; /* 'cache_allowed_requests' */
    cpy_r_r12 = 0 ? Py_True : Py_False;
    cpy_r_r13 = PyObject_SetAttr(cpy_r_provider, cpy_r_r11, cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 219, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL44;
    }
    cpy_r_r15 = CPyStatics[15]; /* 'eth_chainId' */
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 220, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL44;
    }
    cpy_r_r17 = CPyStatics[16]; /* 'make_request' */
    PyObject *cpy_r_r18[3] = {cpy_r_provider, cpy_r_r15, cpy_r_r16};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 220, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL45;
    }
    CPy_DECREF_NO_IMM(cpy_r_r16);
    if (likely(PyDict_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 220, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r20);
        goto CPyL44;
    }
    cpy_r_r22 = CPyStatics[17]; /* 'result' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 220, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL44;
    }
    cpy_r_r24 = (PyObject *)&PyLong_Type;
    cpy_r_r25 = CPyStatics[136]; /* 16 */
    PyObject *cpy_r_r26[2] = {cpy_r_r23, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r24, cpy_r_r27, 2, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 223, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r23);
    if (likely(PyLong_Check(cpy_r_r28)))
        cpy_r_r29 = CPyTagged_FromObject(cpy_r_r28);
    else {
        CPy_TypeError("int", cpy_r_r28); cpy_r_r29 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 223, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL44;
    }
    cpy_r_r30 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r31 = CPyStatics[14]; /* 'empty' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 225, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL47;
    }
    cpy_r_r33 = cpy_r_current_threshold == cpy_r_r32;
    CPy_DECREF(cpy_r_current_threshold);
    CPy_DECREF(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL48;
    cpy_r_r34 = CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAIN_VALIDATION_THRESHOLD_DEFAULTS\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 227, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_r29);
    cpy_r_r37 = CPyStatics[137]; /* 3600 */
    cpy_r_r38 = CPyDict_Get(cpy_r_r34, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 227, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL22;
    }
    if (PyObject_TypeCheck(cpy_r_r38, *exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold))
        cpy_r_r39 = cpy_r_r38;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL29;
    if (PyLong_Check(cpy_r_r38))
        cpy_r_r39 = cpy_r_r38;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL29;
    CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 227, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "union[faster_web3.utils.caching.RequestCacheValidationThreshold, int]", cpy_r_r38);
    goto CPyL22;
__LL29: ;
    cpy_r_r40 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r41 = PyObject_SetAttr(cpy_r_provider, cpy_r_r40, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 227, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    } else
        goto CPyL30;
CPyL22: ;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r44 = CPyModule_builtins;
    cpy_r_r45 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 231, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL28;
    }
    cpy_r_r47 = CPy_ExceptionMatches(cpy_r_r46);
    CPy_DecRef(cpy_r_r46);
    if (!cpy_r_r47) goto CPyL25;
    cpy_r_r48 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r49 = CPyStatics[137]; /* 3600 */
    cpy_r_r50 = PyObject_SetAttr(cpy_r_provider, cpy_r_r48, cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 232, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL28;
    } else
        goto CPyL27;
CPyL25: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL28;
    } else
        goto CPyL50;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL30;
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    cpy_r_r52 = CPy_KeepPropagating();
    if (!cpy_r_r52) goto CPyL31;
    CPy_Unreachable();
CPyL30: ;
    tuple_T3OOO __tmp30 = { NULL, NULL, NULL };
    cpy_r_r53 = __tmp30;
    cpy_r_r54 = cpy_r_r53;
    goto CPyL32;
CPyL31: ;
    cpy_r_r55 = CPy_CatchError();
    cpy_r_r54 = cpy_r_r55;
CPyL32: ;
    cpy_r_r56 = CPyStatics[11]; /* 'cache_allowed_requests' */
    cpy_r_r57 = cpy_r_r10 ? Py_True : Py_False;
    cpy_r_r58 = PyObject_SetAttr(cpy_r_provider, cpy_r_r56, cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 234, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL36;
    }
    if (cpy_r_r54.f0 == NULL) goto CPyL40;
    CPy_Reraise();
    if (!0) {
        goto CPyL36;
    } else
        goto CPyL51;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    if (cpy_r_r54.f0 == NULL) goto CPyL38;
    CPy_RestoreExcInfo(cpy_r_r54);
    CPy_XDECREF(cpy_r_r54.f0);
    CPy_XDECREF(cpy_r_r54.f1);
    CPy_XDECREF(cpy_r_r54.f2);
CPyL38: ;
    cpy_r_r60 = CPy_KeepPropagating();
    if (!cpy_r_r60) goto CPyL41;
    CPy_Unreachable();
CPyL40: ;
    return 1;
CPyL41: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL42: ;
    CPy_DecRef(cpy_r_current_threshold);
    goto CPyL41;
CPyL43: ;
    CPy_DECREF(cpy_r_current_threshold);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_current_threshold);
    goto CPyL22;
CPyL45: ;
    CPy_DecRef(cpy_r_current_threshold);
    CPy_DecRef(cpy_r_r16);
    goto CPyL22;
CPyL46: ;
    CPy_DecRef(cpy_r_current_threshold);
    CPy_DecRef(cpy_r_r23);
    goto CPyL22;
CPyL47: ;
    CPy_DecRef(cpy_r_current_threshold);
    CPyTagged_DecRef(cpy_r_r29);
    goto CPyL22;
CPyL48: ;
    CPyTagged_DECREF(cpy_r_r29);
    goto CPyL30;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_r29);
    goto CPyL17;
CPyL50: ;
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL26;
CPyL51: ;
    CPy_XDECREF(cpy_r_r54.f0);
    CPy_XDECREF(cpy_r_r54.f1);
    CPy_XDECREF(cpy_r_r54.f2);
    goto CPyL35;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___set_threshold_if_empty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", 0};
    static CPyArg_Parser parser = {"O:set_threshold_if_empty", kwlist, 0};
    PyObject *obj_provider;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_provider)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    char retval = CPyDef_faster_web3____utils___caching___caching_utils___set_threshold_if_empty(arg_provider);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "set_threshold_if_empty", 210, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___caching_utils____should_cache_response(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_response) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = CPyStatics[17]; /* 'result' */
    cpy_r_r1 = Py_None;
    cpy_r_r2 = CPyDict_Get(cpy_r_response, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 243, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL26;
    }
    cpy_r_result = cpy_r_r2;
    cpy_r_r3 = CPyStatics[19]; /* 'error' */
    cpy_r_r4 = PyDict_Contains(cpy_r_response, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 244, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) goto CPyL28;
    cpy_r_r7 = CPyStatic_faster_web3____utils___caching___caching_utils___is_null;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL29;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_null\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 244, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL6: ;
    PyObject *cpy_r_r9[1] = {cpy_r_result};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r10, 1, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 244, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 244, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    if (cpy_r_r12) {
        goto CPyL28;
    } else
        goto CPyL10;
CPyL9: ;
    return 0;
CPyL10: ;
    cpy_r_r13 = CPyDef_faster_web3____utils___caching___caching_utils___set_threshold_if_empty(cpy_r_provider);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 247, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    cpy_r_r14 = CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL30;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"INTERNAL_VALIDATION_MAP\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 249, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r16 = PyDict_Contains(cpy_r_r14, cpy_r_method);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 249, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL31;
    cpy_r_r19 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 250, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_r20 != cpy_r_r21;
    CPy_DECREF(cpy_r_r20);
    if (!cpy_r_r22) goto CPyL31;
    cpy_r_r23 = CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP;
    if (unlikely(cpy_r_r23 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"INTERNAL_VALIDATION_MAP\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 252, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_method);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 252, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r26[3] = {cpy_r_provider, cpy_r_params, cpy_r_result};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 3, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 252, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_result);
    if (unlikely(!PyBool_Check(cpy_r_r28))) {
        CPy_TypeError("bool", cpy_r_r28); cpy_r_r29 = 2;
    } else
        cpy_r_r29 = cpy_r_r28 == Py_True;
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 252, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL26;
    }
    return cpy_r_r29;
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL27: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL26;
CPyL28: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL9;
CPyL29: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL4;
CPyL30: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL12;
CPyL31: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL19;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____should_cache_response(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "method", "params", "response", 0};
    static CPyArg_Parser parser = {"OOOO:_should_cache_response", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_method;
    PyObject *obj_params;
    PyObject *obj_response;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_method, &obj_params, &obj_response)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *arg_response;
    if (likely(PyDict_Check(obj_response)))
        arg_response = obj_response;
    else {
        CPy_TypeError("dict", obj_response); 
        goto fail;
    }
    char retval = CPyDef_faster_web3____utils___caching___caching_utils____should_cache_response(arg_provider, arg_method, arg_params, arg_response);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_should_cache_response", 237, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__get__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    cpy_r_r0 = ((faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_handle_request_caching_obj", "__mypyc_env__", 259, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL54;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request(cpy_r_provider, cpy_r_method, cpy_r_params);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 262, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL55;
    }
    if (!cpy_r_r1) goto CPyL50;
    cpy_r_r2 = CPyStatics[20]; /* '_request_cache' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 263, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL55;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r3, *exports_faster_web3.CPyType_faster_web3___utils___caching___SimpleCache)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 263, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "faster_web3.utils.caching.SimpleCache", cpy_r_r3);
        goto CPyL55;
    }
    cpy_r_r5 = CPyStatic_faster_web3____utils___caching___caching_utils___get_ident;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"get_ident\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 265, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r5, 0, 0, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 265, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r7)))
        cpy_r_r8 = CPyTagged_FromObject(cpy_r_r7);
    else {
        CPy_TypeError("int", cpy_r_r7); cpy_r_r8 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 265, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL57;
    }
    cpy_r_r9 = CPyTagged_Str(cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 265, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL57;
    }
    cpy_r_r10 = CPyStatics[21]; /* ':' */
    CPy_INCREF(cpy_r_method);
    CPy_INCREF(cpy_r_params);
    cpy_r_r11.f0 = cpy_r_method;
    cpy_r_r11.f1 = cpy_r_params;
    cpy_r_r12 = PyTuple_New(2);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp31 = cpy_r_r11.f0;
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp31);
    PyObject *__tmp32 = cpy_r_r11.f1;
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp32);
    cpy_r_r13 = PyObject_Str(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 265, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL58;
    }
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r9, cpy_r_r10, cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 265, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL57;
    }
    cpy_r_r15 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 264, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL57;
    }
    cpy_r_r16 = exports_faster_web3.CPyDef_faster_web3___utils___caching___SimpleCache___get_cache_entry(cpy_r_r4, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 267, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL59;
    }
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL60;
    } else
        goto CPyL61;
CPyL16: ;
    if (likely(PyDict_Check(cpy_r_r16)))
        cpy_r_r19 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 269, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r16);
        goto CPyL54;
    }
    return cpy_r_r19;
CPyL18: ;
    cpy_r_r20 = ((faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *)cpy_r_r0)->_func;
    if (unlikely(cpy_r_r20 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'func' of 'handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r20);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 271, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL62;
    }
CPyL19: ;
    PyObject *cpy_r_r21[3] = {cpy_r_provider, cpy_r_method, cpy_r_params};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 3, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 271, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL62;
    }
    if (likely(PyDict_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 271, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r23);
        goto CPyL62;
    }
    cpy_r_r25 = CPyDef_faster_web3____utils___caching___caching_utils____should_cache_response(cpy_r_provider, cpy_r_method, cpy_r_params, cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 272, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL63;
    }
    if (!cpy_r_r25) goto CPyL64;
    cpy_r_r26 = CPyStatics[22]; /* '_request_cache_lock' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_provider, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 273, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL63;
    }
    cpy_r_r28 = CPy_TYPE(cpy_r_r27);
    cpy_r_r29 = CPyStatics[23]; /* '__exit__' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 273, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL65;
    }
    cpy_r_r31 = CPyStatics[24]; /* '__enter__' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r31);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 273, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r27};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 273, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL66;
    } else
        goto CPyL67;
CPyL27: ;
    cpy_r_r36 = 1;
    cpy_r_r37 = exports_faster_web3.CPyDef_faster_web3___utils___caching___SimpleCache___cache(cpy_r_r4, cpy_r_r15, cpy_r_r24);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r37.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 274, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    } else
        goto CPyL68;
    cpy_r_r38 = CPy_CatchError();
    cpy_r_r36 = 0;
    cpy_r_r39 = CPy_GetExcInfo();
    cpy_r_r40 = cpy_r_r39.f0;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = cpy_r_r39.f1;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = cpy_r_r39.f2;
    CPy_INCREF(cpy_r_r42);
    CPy_DecRef(cpy_r_r39.f0);
    CPy_DecRef(cpy_r_r39.f1);
    CPy_DecRef(cpy_r_r39.f2);
    PyObject *cpy_r_r43[4] = {cpy_r_r27, cpy_r_r40, cpy_r_r41, cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_Vectorcall(cpy_r_r30, cpy_r_r44, 4, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 273, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL69;
    }
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    CPy_DecRef(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 273, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL35;
    }
    cpy_r_r48 = cpy_r_r46;
    if (cpy_r_r48) goto CPyL34;
    CPy_Reraise();
    if (!0) {
        goto CPyL35;
    } else
        goto CPyL70;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL37;
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    cpy_r_r49 = CPy_KeepPropagating();
    if (!cpy_r_r49) {
        goto CPyL38;
    } else
        goto CPyL71;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    tuple_T3OOO __tmp33 = { NULL, NULL, NULL };
    cpy_r_r50 = __tmp33;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL39;
CPyL38: ;
    cpy_r_r52 = CPy_CatchError();
    cpy_r_r51 = cpy_r_r52;
CPyL39: ;
    if (!cpy_r_r36) goto CPyL72;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r54[4] = {cpy_r_r27, cpy_r_r53, cpy_r_r53, cpy_r_r53};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r30, cpy_r_r55, 4, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 273, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL73;
    } else
        goto CPyL74;
CPyL41: ;
    CPy_DECREF(cpy_r_r27);
CPyL42: ;
    if (cpy_r_r51.f0 == NULL) {
        goto CPyL49;
    } else
        goto CPyL75;
CPyL43: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL45;
    } else
        goto CPyL76;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    if (cpy_r_r51.f0 == NULL) goto CPyL47;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
CPyL47: ;
    cpy_r_r57 = CPy_KeepPropagating();
    if (!cpy_r_r57) goto CPyL54;
    CPy_Unreachable();
CPyL49: ;
    return cpy_r_r24;
CPyL50: ;
    cpy_r_r58 = ((faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *)cpy_r_r0)->_func;
    if (unlikely(cpy_r_r58 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'func' of 'handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r58);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 277, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL54;
    }
CPyL51: ;
    PyObject *cpy_r_r59[3] = {cpy_r_provider, cpy_r_method, cpy_r_params};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = PyObject_Vectorcall(cpy_r_r58, cpy_r_r60, 3, 0);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 277, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL54;
    }
    if (likely(PyDict_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 277, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r61);
        goto CPyL54;
    }
    return cpy_r_r62;
CPyL54: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL54;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL6;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL54;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL54;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r15);
    goto CPyL54;
CPyL60: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_r15);
    goto CPyL16;
CPyL61: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL18;
CPyL62: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r15);
    goto CPyL54;
CPyL63: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r24);
    goto CPyL54;
CPyL64: ;
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_r15);
    goto CPyL49;
CPyL65: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    goto CPyL54;
CPyL66: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL54;
CPyL67: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL27;
CPyL68: ;
    CPy_DECREF(cpy_r_r37.f0);
    CPy_DECREF(cpy_r_r37.f1);
    goto CPyL37;
CPyL69: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL35;
CPyL70: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL33;
CPyL71: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL36;
CPyL72: ;
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r30);
    goto CPyL42;
CPyL73: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    goto CPyL45;
CPyL74: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL41;
CPyL75: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL43;
CPyL76: ;
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
    goto CPyL44;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"provider", "method", "params", 0};
    static CPyArg_Parser parser = {"OOO:__call__", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_provider, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_provider = obj_provider;
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__(arg___mypyc_self__, arg_provider, arg_method, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 259, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching(PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_wrapper;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "handle_request_caching", 256, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_func);
    if (((faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *)cpy_r_r0)->_func != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *)cpy_r_r0)->_func);
    }
    ((faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *)cpy_r_r0)->_func = cpy_r_func;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "handle_request_caching", 256, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "handle_request_caching", 259, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "handle_request_caching", 259, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    cpy_r_wrapper = cpy_r_r2;
    cpy_r_r4 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r5 = CPyStatics[25]; /* 'handle_request_caching' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "handle_request_caching", 280, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    cpy_r_r7 = CPyStatics[26]; /* '_decorator' */
    cpy_r_r8 = PyObject_SetAttr(cpy_r_wrapper, cpy_r_r7, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "handle_request_caching", 280, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    return cpy_r_wrapper;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_wrapper);
    goto CPyL7;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___handle_request_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:handle_request_caching", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_func = obj_func;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching(arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "handle_request_caching", 256, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
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
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    tuple_T3OOO cpy_r_r97;
    tuple_T3OOO cpy_r_r98;
    char cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    tuple_T3OOO cpy_r_r101;
    tuple_T3OOO cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL96;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 307, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "provider", 308, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 308, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__current_threshold != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__current_threshold);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__current_threshold = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 308, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    cpy_r_r9 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__current_threshold;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "current_threshold", 310, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r11 = CPyStatics[14]; /* 'empty' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 310, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL101;
    }
    cpy_r_r13 = cpy_r_r9 == cpy_r_r12;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) goto CPyL12;
    cpy_r_r14 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__current_threshold;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "current_threshold", 311, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r14);
CPyL11: ;
    cpy_r_r15 = (PyObject *)*exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold;
    cpy_r_r16 = CPy_TypeCheck(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (!cpy_r_r16) goto CPyL91;
CPyL12: ;
    cpy_r_r17 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "provider", 313, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r17);
CPyL13: ;
    cpy_r_r18 = CPyStatics[11]; /* 'cache_allowed_requests' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 313, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r19))) {
        CPy_TypeError("bool", cpy_r_r19); cpy_r_r20 = 2;
    } else
        cpy_r_r20 = cpy_r_r19 == Py_True;
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 313, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests = cpy_r_r20;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 313, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    cpy_r_r22 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "provider", 316, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r22);
CPyL17: ;
    cpy_r_r23 = CPyStatics[11]; /* 'cache_allowed_requests' */
    cpy_r_r24 = 0 ? Py_True : Py_False;
    cpy_r_r25 = PyObject_SetAttr(cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 316, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    cpy_r_r27 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "provider", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r27);
CPyL19: ;
    cpy_r_r28 = CPyStatics[15]; /* 'eth_chainId' */
    cpy_r_r29 = PyList_New(0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 318, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL102;
    }
    cpy_r_r30 = CPyStatics[16]; /* 'make_request' */
    PyObject *cpy_r_r31[3] = {cpy_r_r27, cpy_r_r28, cpy_r_r29};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_VectorcallMethod(cpy_r_r30, cpy_r_r32, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF_NO_IMM(cpy_r_r29);
    cpy_r_r34 = CPy_GetCoro(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r34;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    cpy_r_r36 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r36);
CPyL24: ;
    cpy_r_r37 = CPyIter_Next(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (cpy_r_r37 != NULL) goto CPyL27;
    cpy_r_r38 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    cpy_r_r39 = cpy_r_r38;
    cpy_r_r40 = NULL;
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL104;
    } else
        goto CPyL49;
CPyL27: ;
    cpy_r_r42 = cpy_r_r37;
CPyL28: ;
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r42;
CPyL29: ;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_type != cpy_r_r44;
    if (!cpy_r_r45) goto CPyL105;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL33;
    } else
        goto CPyL106;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL44;
CPyL33: ;
    cpy_r_r46 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1.f2);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL107;
    }
    cpy_r_r48 = (PyObject **)&cpy_r_r1;
    cpy_r_r49 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_r49);
CPyL35: ;
    cpy_r_r50 = CPy_YieldFromErrorHandle(cpy_r_r49, cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL107;
    }
    if (cpy_r_r50) goto CPyL39;
    cpy_r_r42 = cpy_r_r1;
    cpy_r_r51 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r51.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r51.f0);
    CPy_INCREF(cpy_r_r51.f1);
    CPy_INCREF(cpy_r_r51.f2);
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    goto CPyL28;
CPyL39: ;
    cpy_r_r39 = cpy_r_r1;
    cpy_r_r52 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r52.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL109;
    }
    CPy_INCREF(cpy_r_r52.f0);
    CPy_INCREF(cpy_r_r52.f1);
    CPy_INCREF(cpy_r_r52.f2);
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    CPy_DecRef(cpy_r_r52.f2);
    goto CPyL49;
CPyL41: ;
    cpy_r_r53 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r53.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__1", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r53.f0);
    CPy_INCREF(cpy_r_r53.f1);
    CPy_INCREF(cpy_r_r53.f2);
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r53);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    cpy_r_r54 = CPy_KeepPropagating();
    if (!cpy_r_r54) goto CPyL67;
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r55 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__0", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r55);
CPyL45: ;
    cpy_r_r56 = CPyIter_Send(cpy_r_r55, cpy_r_arg);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r56 == NULL) goto CPyL47;
    cpy_r_r42 = cpy_r_r56;
    goto CPyL28;
CPyL47: ;
    cpy_r_r57 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    cpy_r_r39 = cpy_r_r57;
CPyL49: ;
    if (likely(PyDict_Check(cpy_r_r39)))
        cpy_r_r58 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r39);
        goto CPyL67;
    }
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id_result != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id_result);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id_result = cpy_r_r58;
    cpy_r_r59 = 1;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 317, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    cpy_r_r60 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id_result;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "chain_id_result", 320, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r60);
CPyL52: ;
    cpy_r_r61 = CPyStatics[17]; /* 'result' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 320, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    cpy_r_r63 = (PyObject *)&PyLong_Type;
    cpy_r_r64 = CPyStatics[136]; /* 16 */
    PyObject *cpy_r_r65[2] = {cpy_r_r62, cpy_r_r64};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r66, 2, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 320, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL111;
    }
    CPy_DECREF(cpy_r_r62);
    if (likely(PyLong_Check(cpy_r_r67)))
        cpy_r_r68 = CPyTagged_FromObject(cpy_r_r67);
    else {
        CPy_TypeError("int", cpy_r_r67); cpy_r_r68 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 320, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id = cpy_r_r68;
    cpy_r_r69 = 1;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 320, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    cpy_r_r70 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__current_threshold;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "current_threshold", 322, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r70);
CPyL57: ;
    cpy_r_r71 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r72 = CPyStatics[14]; /* 'empty' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 322, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL112;
    }
    cpy_r_r74 = cpy_r_r70 == cpy_r_r73;
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r73);
    if (!cpy_r_r74) goto CPyL79;
    cpy_r_r75 = CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS;
    if (likely(cpy_r_r75 != NULL)) goto CPyL62;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAIN_VALIDATION_THRESHOLD_DEFAULTS\" was not set");
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 324, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r77 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chain_id;
    if (unlikely(cpy_r_r77 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "chain_id", 325, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    CPyTagged_INCREF(cpy_r_r77);
CPyL63: ;
    cpy_r_r78 = CPyTagged_StealAsObject(cpy_r_r77);
    cpy_r_r79 = CPyStatics[137]; /* 3600 */
    cpy_r_r80 = CPyDict_Get(cpy_r_r75, cpy_r_r78, cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 324, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL67;
    }
    if (PyObject_TypeCheck(cpy_r_r80, *exports_faster_web3.CPyType_faster_web3___utils___caching___RequestCacheValidationThreshold))
        cpy_r_r81 = cpy_r_r80;
    else {
        cpy_r_r81 = NULL;
    }
    if (cpy_r_r81 != NULL) goto __LL34;
    if (PyLong_Check(cpy_r_r80))
        cpy_r_r81 = cpy_r_r80;
    else {
        cpy_r_r81 = NULL;
    }
    if (cpy_r_r81 != NULL) goto __LL34;
    CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 324, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "union[faster_web3.utils.caching.RequestCacheValidationThreshold, int]", cpy_r_r80);
    goto CPyL67;
__LL34: ;
    cpy_r_r82 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "provider", 323, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL113;
    }
    CPy_INCREF(cpy_r_r82);
CPyL66: ;
    cpy_r_r83 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r84 = PyObject_SetAttr(cpy_r_r82, cpy_r_r83, cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 324, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    } else
        goto CPyL79;
CPyL67: ;
    cpy_r_r86 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2.f2);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r86;
    cpy_r_r87 = 1;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL76;
    }
    cpy_r_r88 = CPyModule_builtins;
    cpy_r_r89 = CPyStatics[18]; /* 'Exception' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 328, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL76;
    }
    cpy_r_r91 = CPy_ExceptionMatches(cpy_r_r90);
    CPy_DecRef(cpy_r_r90);
    if (!cpy_r_r91) goto CPyL72;
    cpy_r_r92 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "provider", 329, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r92);
CPyL71: ;
    cpy_r_r93 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r94 = CPyStatics[137]; /* 3600 */
    cpy_r_r95 = PyObject_SetAttr(cpy_r_r92, cpy_r_r93, cpy_r_r94);
    CPy_DecRef(cpy_r_r92);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 329, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL76;
    } else
        goto CPyL74;
CPyL72: ;
    CPy_Reraise();
    if (!0) goto CPyL76;
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r97 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r97.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__2", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r97.f0);
    CPy_INCREF(cpy_r_r97.f1);
    CPy_INCREF(cpy_r_r97.f2);
CPyL75: ;
    CPy_RestoreExcInfo(cpy_r_r97);
    CPy_DecRef(cpy_r_r97.f0);
    CPy_DecRef(cpy_r_r97.f1);
    CPy_DecRef(cpy_r_r97.f2);
    goto CPyL79;
CPyL76: ;
    cpy_r_r98 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r98.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "__mypyc_temp__2", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r98.f0);
    CPy_INCREF(cpy_r_r98.f1);
    CPy_INCREF(cpy_r_r98.f2);
CPyL77: ;
    CPy_RestoreExcInfo(cpy_r_r98);
    CPy_DecRef(cpy_r_r98.f0);
    CPy_DecRef(cpy_r_r98.f1);
    CPy_DecRef(cpy_r_r98.f2);
    cpy_r_r99 = CPy_KeepPropagating();
    if (!cpy_r_r99) goto CPyL80;
    CPy_Unreachable();
CPyL79: ;
    tuple_T3OOO __tmp35 = { NULL, NULL, NULL };
    cpy_r_r100 = __tmp35;
    cpy_r_r101 = cpy_r_r100;
    goto CPyL81;
CPyL80: ;
    cpy_r_r102 = CPy_CatchError();
    cpy_r_r101 = cpy_r_r102;
CPyL81: ;
    cpy_r_r103 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_allowed_requests;
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "cache_allowed_requests", 331, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL87;
    }
CPyL82: ;
    cpy_r_r104 = ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", "async_set_threshold_if_empty_gen", "provider", 331, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r104);
CPyL83: ;
    cpy_r_r105 = CPyStatics[11]; /* 'cache_allowed_requests' */
    cpy_r_r106 = cpy_r_r103 ? Py_True : Py_False;
    cpy_r_r107 = PyObject_SetAttr(cpy_r_r104, cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 331, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL87;
    }
    if (cpy_r_r101.f0 == NULL) goto CPyL91;
    CPy_Reraise();
    if (!0) {
        goto CPyL87;
    } else
        goto CPyL114;
CPyL86: ;
    CPy_Unreachable();
CPyL87: ;
    if (cpy_r_r101.f0 == NULL) goto CPyL89;
    CPy_RestoreExcInfo(cpy_r_r101);
    CPy_XDECREF(cpy_r_r101.f0);
    CPy_XDECREF(cpy_r_r101.f1);
    CPy_XDECREF(cpy_r_r101.f2);
CPyL89: ;
    cpy_r_r109 = CPy_KeepPropagating();
    if (!cpy_r_r109) goto CPyL100;
    CPy_Unreachable();
CPyL91: ;
    cpy_r_r110 = Py_None;
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL95;
    CPyGen_SetStopIterationValue(cpy_r_r110);
    if (!0) goto CPyL100;
    CPy_Unreachable();
CPyL95: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r110;
    return 0;
CPyL96: ;
    cpy_r_r112 = cpy_r_r2 == 0;
    if (cpy_r_r112) goto CPyL115;
    cpy_r_r113 = cpy_r_r2 == 1;
    if (cpy_r_r113) {
        goto CPyL29;
    } else
        goto CPyL116;
CPyL98: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r114 = 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 307, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r115 = NULL;
    return cpy_r_r115;
CPyL101: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL100;
CPyL102: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL67;
CPyL103: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r29);
    goto CPyL67;
CPyL104: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL67;
CPyL105: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL32;
CPyL106: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL31;
CPyL107: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL41;
CPyL108: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL41;
CPyL109: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL41;
CPyL110: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL67;
CPyL111: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL67;
CPyL112: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL67;
CPyL113: ;
    CPy_DecRef(cpy_r_r81);
    goto CPyL67;
CPyL114: ;
    CPy_XDECREF(cpy_r_r101.f0);
    CPy_XDECREF(cpy_r_r101.f1);
    CPy_XDECREF(cpy_r_r101.f2);
    goto CPyL86;
CPyL115: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL116: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL98;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_set_threshold_if_empty_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_set_threshold_if_empty_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "send", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_set_threshold_if_empty_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_set_threshold_if_empty_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "throw", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[27]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[28]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp36 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp36);
    PyObject *__tmp37 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp37);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_set_threshold_if_empty_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "close", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.async_set_threshold_if_empty_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty(PyObject *cpy_r_provider) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 307, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL3;
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 307, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", 0};
    static CPyArg_Parser parser = {"O:async_set_threshold_if_empty", kwlist, 0};
    PyObject *obj_provider;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_provider)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty(arg_provider);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_set_threshold_if_empty", 307, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
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
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    char cpy_r_r45;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    tuple_T3OOO cpy_r_r98;
    char cpy_r_r99;
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    tuple_T3OOO cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject **cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    CPy_XDECREF(cpy_r_r1);
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL123;
CPyL1: ;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_type != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r9 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "response", 340, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = CPyStatics[17]; /* 'result' */
    cpy_r_r11 = Py_None;
    cpy_r_r12 = CPyDict_Get(cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 340, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 340, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r14 = CPyStatics[19]; /* 'error' */
    cpy_r_r15 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "response", 341, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r15);
CPyL8: ;
    cpy_r_r16 = PyDict_Contains(cpy_r_r15, cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 341, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r18 = cpy_r_r16;
    if (cpy_r_r18) goto CPyL17;
    cpy_r_r19 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "result", 341, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r19);
CPyL11: ;
    cpy_r_r20 = CPyStatic_faster_web3____utils___caching___caching_utils___is_null;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL129;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"is_null\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 341, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_Unreachable();
CPyL14: ;
    PyObject *cpy_r_r22[1] = {cpy_r_r19};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r23, 1, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 341, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL130;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 341, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    if (!cpy_r_r25) goto CPyL22;
CPyL17: ;
    cpy_r_r26 = 0 ? Py_True : Py_False;
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL21;
    CPyGen_SetStopIterationValue(cpy_r_r26);
    if (!0) goto CPyL128;
    CPy_Unreachable();
CPyL21: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r26;
    return 0;
CPyL22: ;
    cpy_r_r28 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "provider", 344, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r28);
CPyL23: ;
    cpy_r_r29 = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 344, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r29;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r31 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF_NO_IMM(cpy_r_r31);
CPyL26: ;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = NULL;
    cpy_r_r1 = cpy_r_r33;
    cpy_r_r34 = (PyObject **)&cpy_r_r1;
    cpy_r_r35 = CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__(cpy_r_r31, cpy_r_r32, cpy_r_r32, cpy_r_r32, cpy_r_r32, cpy_r_r34);
    CPy_DECREF_NO_IMM(cpy_r_r31);
    if (cpy_r_r35 != NULL) goto CPyL131;
    cpy_r_r36 = cpy_r_r1 != 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL132;
    }
    cpy_r_r37 = cpy_r_r1;
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = NULL;
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 344, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    } else
        goto CPyL51;
CPyL29: ;
    cpy_r_r40 = cpy_r_r35;
CPyL30: ;
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r40;
CPyL31: ;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_type != cpy_r_r42;
    if (!cpy_r_r43) goto CPyL133;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 344, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL35;
    } else
        goto CPyL134;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL46;
CPyL35: ;
    cpy_r_r44 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f2);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL135;
    }
    cpy_r_r46 = (PyObject **)&cpy_r_r3;
    cpy_r_r47 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL135;
    }
    CPy_INCREF_NO_IMM(cpy_r_r47);
CPyL37: ;
    cpy_r_r48 = CPy_YieldFromErrorHandle(cpy_r_r47, cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 344, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL135;
    }
    if (cpy_r_r48) goto CPyL41;
    cpy_r_r40 = cpy_r_r3;
    cpy_r_r49 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r49.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r49.f0);
    CPy_INCREF(cpy_r_r49.f1);
    CPy_INCREF(cpy_r_r49.f2);
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r49);
    CPy_DecRef(cpy_r_r49.f0);
    CPy_DecRef(cpy_r_r49.f1);
    CPy_DecRef(cpy_r_r49.f2);
    goto CPyL30;
CPyL41: ;
    cpy_r_r37 = cpy_r_r3;
    CPy_DecRef(cpy_r_r37);
    cpy_r_r50 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r50.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r50.f0);
    CPy_INCREF(cpy_r_r50.f1);
    CPy_INCREF(cpy_r_r50.f2);
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r50);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    goto CPyL51;
CPyL43: ;
    cpy_r_r51 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r51.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__4", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r51.f0);
    CPy_INCREF(cpy_r_r51.f1);
    CPy_INCREF(cpy_r_r51.f2);
CPyL44: ;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    cpy_r_r52 = CPy_KeepPropagating();
    if (!cpy_r_r52) goto CPyL128;
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r53 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__3", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL137;
    }
    CPy_INCREF_NO_IMM(cpy_r_r53);
CPyL47: ;
    cpy_r_r54 = CPyIter_Send(cpy_r_r53, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r53);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r54 == NULL) goto CPyL49;
    cpy_r_r40 = cpy_r_r54;
    goto CPyL30;
CPyL49: ;
    cpy_r_r55 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 344, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r37 = cpy_r_r55;
    CPy_DECREF(cpy_r_r37);
CPyL51: ;
    cpy_r_r56 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "method", 346, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r56);
CPyL52: ;
    cpy_r_r57 = CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP;
    if (unlikely(cpy_r_r57 == NULL)) {
        goto CPyL138;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ASYNC_INTERNAL_VALIDATION_MAP\" was not set");
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 346, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r59 = PyDict_Contains(cpy_r_r57, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 346, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r61 = cpy_r_r59;
    if (!cpy_r_r61) goto CPyL118;
    cpy_r_r62 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "provider", 347, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r62);
CPyL58: ;
    cpy_r_r63 = CPyStatics[13]; /* 'request_cache_validation_threshold' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 347, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_r64 != cpy_r_r65;
    CPy_DECREF(cpy_r_r64);
    if (!cpy_r_r66) goto CPyL118;
    cpy_r_r67 = CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP;
    if (likely(cpy_r_r67 != NULL)) goto CPyL63;
    PyErr_SetString(PyExc_NameError, "value for final name \"ASYNC_INTERNAL_VALIDATION_MAP\" was not set");
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 349, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r69 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "method", 349, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r69);
CPyL64: ;
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r67, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 349, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_validator != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_validator);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_validator = cpy_r_r70;
    cpy_r_r71 = 1;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 349, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r72 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_validator;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "cache_validator", 352, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r72);
CPyL67: ;
    cpy_r_r73 = CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction;
    if (unlikely(cpy_r_r73 == NULL)) {
        goto CPyL139;
    } else
        goto CPyL70;
CPyL68: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"iscoroutinefunction\" was not set");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 352, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_Unreachable();
CPyL70: ;
    PyObject *cpy_r_r75[1] = {cpy_r_r72};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = PyObject_Vectorcall(cpy_r_r73, cpy_r_r76, 1, 0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 352, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL140;
    }
    CPy_DECREF(cpy_r_r72);
    if (unlikely(!PyBool_Check(cpy_r_r77))) {
        CPy_TypeError("bool", cpy_r_r77); cpy_r_r78 = 2;
    } else
        cpy_r_r78 = cpy_r_r77 == Py_True;
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 352, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    if (!cpy_r_r78) goto CPyL107;
    cpy_r_r79 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "provider", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r79);
CPyL74: ;
    cpy_r_r80 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "params", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r80);
CPyL75: ;
    cpy_r_r81 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "result", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r81);
CPyL76: ;
    cpy_r_r82 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_validator;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "cache_validator", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL143;
    }
    CPy_INCREF(cpy_r_r82);
CPyL77: ;
    PyObject *cpy_r_r83[3] = {cpy_r_r79, cpy_r_r80, cpy_r_r81};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 3, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL143;
    }
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r86 = CPy_GetCoro(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r86;
    cpy_r_r87 = 1;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r88 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r88);
CPyL81: ;
    cpy_r_r89 = CPyIter_Next(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (cpy_r_r89 != NULL) goto CPyL84;
    cpy_r_r90 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r91 = cpy_r_r90;
    cpy_r_r92 = NULL;
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r92;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL144;
    } else
        goto CPyL106;
CPyL84: ;
    cpy_r_r94 = cpy_r_r89;
CPyL85: ;
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r94;
CPyL86: ;
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r97 = cpy_r_type != cpy_r_r96;
    if (!cpy_r_r97) goto CPyL145;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL90;
    } else
        goto CPyL146;
CPyL88: ;
    CPy_Unreachable();
CPyL89: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL101;
CPyL90: ;
    cpy_r_r98 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f2);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r98;
    cpy_r_r99 = 1;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL147;
    }
    cpy_r_r100 = (PyObject **)&cpy_r_r5;
    cpy_r_r101 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r101);
CPyL92: ;
    cpy_r_r102 = CPy_YieldFromErrorHandle(cpy_r_r101, cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL147;
    }
    if (cpy_r_r102) goto CPyL96;
    cpy_r_r94 = cpy_r_r5;
    cpy_r_r103 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r103.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__6", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r103.f0);
    CPy_INCREF(cpy_r_r103.f1);
    CPy_INCREF(cpy_r_r103.f2);
CPyL95: ;
    CPy_RestoreExcInfo(cpy_r_r103);
    CPy_DecRef(cpy_r_r103.f0);
    CPy_DecRef(cpy_r_r103.f1);
    CPy_DecRef(cpy_r_r103.f2);
    goto CPyL85;
CPyL96: ;
    cpy_r_r91 = cpy_r_r5;
    cpy_r_r104 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r104.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__6", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL149;
    }
    CPy_INCREF(cpy_r_r104.f0);
    CPy_INCREF(cpy_r_r104.f1);
    CPy_INCREF(cpy_r_r104.f2);
CPyL97: ;
    CPy_RestoreExcInfo(cpy_r_r104);
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL106;
CPyL98: ;
    cpy_r_r105 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r105.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__6", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_INCREF(cpy_r_r105.f2);
CPyL99: ;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_DecRef(cpy_r_r105.f0);
    CPy_DecRef(cpy_r_r105.f1);
    CPy_DecRef(cpy_r_r105.f2);
    cpy_r_r106 = CPy_KeepPropagating();
    if (!cpy_r_r106) goto CPyL128;
    CPy_Unreachable();
CPyL101: ;
    cpy_r_r107 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "__mypyc_temp__5", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL150;
    }
    CPy_INCREF(cpy_r_r107);
CPyL102: ;
    cpy_r_r108 = CPyIter_Send(cpy_r_r107, cpy_r_arg);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r108 == NULL) goto CPyL104;
    cpy_r_r94 = cpy_r_r108;
    goto CPyL85;
CPyL104: ;
    cpy_r_r109 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 351, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    cpy_r_r91 = cpy_r_r109;
CPyL106: ;
    cpy_r_r110 = cpy_r_r91;
    goto CPyL113;
CPyL107: ;
    cpy_r_r111 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "provider", 353, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r111);
CPyL108: ;
    cpy_r_r112 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "params", 353, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL151;
    }
    CPy_INCREF(cpy_r_r112);
CPyL109: ;
    cpy_r_r113 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "result", 353, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL152;
    }
    CPy_INCREF(cpy_r_r113);
CPyL110: ;
    cpy_r_r114 = ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_validator;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", "_async_should_cache_response_gen", "cache_validator", 353, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL153;
    }
    CPy_INCREF(cpy_r_r114);
CPyL111: ;
    PyObject *cpy_r_r115[3] = {cpy_r_r111, cpy_r_r112, cpy_r_r113};
    cpy_r_r116 = (PyObject **)&cpy_r_r115;
    cpy_r_r117 = PyObject_Vectorcall(cpy_r_r114, cpy_r_r116, 3, 0);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 353, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL153;
    }
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r110 = cpy_r_r117;
CPyL113: ;
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL117;
    CPyGen_SetStopIterationValue(cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    if (!0) goto CPyL128;
    CPy_Unreachable();
CPyL117: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r110;
    return 0;
CPyL118: ;
    cpy_r_r119 = 1 ? Py_True : Py_False;
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL122;
    CPyGen_SetStopIterationValue(cpy_r_r119);
    if (!0) goto CPyL128;
    CPy_Unreachable();
CPyL122: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r119;
    return 0;
CPyL123: ;
    cpy_r_r121 = cpy_r_r6 == 0;
    if (cpy_r_r121) goto CPyL154;
    cpy_r_r122 = cpy_r_r6 == 1;
    if (cpy_r_r122) {
        goto CPyL155;
    } else
        goto CPyL156;
CPyL125: ;
    cpy_r_r123 = cpy_r_r6 == 2;
    if (cpy_r_r123) {
        goto CPyL86;
    } else
        goto CPyL157;
CPyL126: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r124 = 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL128;
    }
    CPy_Unreachable();
CPyL128: ;
    cpy_r_r125 = NULL;
    return cpy_r_r125;
CPyL129: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL12;
CPyL130: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL128;
CPyL131: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL29;
CPyL132: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL128;
CPyL133: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL34;
CPyL134: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL33;
CPyL135: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL43;
CPyL136: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL43;
CPyL137: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL128;
CPyL138: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL53;
CPyL139: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL68;
CPyL140: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL128;
CPyL141: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL128;
CPyL142: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL128;
CPyL143: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL128;
CPyL144: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL128;
CPyL145: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL89;
CPyL146: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL88;
CPyL147: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL98;
CPyL148: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL98;
CPyL149: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL98;
CPyL150: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL128;
CPyL151: ;
    CPy_DecRef(cpy_r_r111);
    goto CPyL128;
CPyL152: ;
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    goto CPyL128;
CPyL153: ;
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    goto CPyL128;
CPyL154: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    goto CPyL1;
CPyL155: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL31;
CPyL156: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL125;
CPyL157: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL126;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils._async_should_cache_response_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils._async_should_cache_response_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "send", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils._async_should_cache_response_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils._async_should_cache_response_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "throw", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[27]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[28]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp38 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp38);
    PyObject *__tmp39 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp39);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils._async_should_cache_response_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "close", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils._async_should_cache_response_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_response) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL6;
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_method);
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__method = cpy_r_method;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__params = cpy_r_params;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_response);
    if (((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__response != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__response);
    }
    ((faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *)cpy_r_r0)->___mypyc_generator_attribute__response = cpy_r_response;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"provider", "method", "params", "response", 0};
    static CPyArg_Parser parser = {"OOOO:_async_should_cache_response", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_method;
    PyObject *obj_params;
    PyObject *obj_response;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_provider, &obj_method, &obj_params, &obj_response)) {
        return NULL;
    }
    PyObject *arg_provider = obj_provider;
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *arg_response;
    if (likely(PyDict_Check(obj_response)))
        arg_response = obj_response;
    else {
        CPy_TypeError("dict", obj_response); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response(arg_provider, arg_method, arg_params, arg_response);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "_async_should_cache_response", 334, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__get__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T3OOO cpy_r_r12;
    tuple_T3OOO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T2OO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    char cpy_r_r73;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    tuple_T3OOO cpy_r_r77;
    tuple_T3OOO cpy_r_r78;
    tuple_T3OOO cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    char cpy_r_r106;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    tuple_T3OOO cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject **cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    tuple_T3OOO cpy_r_r144;
    char cpy_r_r145;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    tuple_T3OOO cpy_r_r149;
    tuple_T3OOO cpy_r_r150;
    tuple_T3OOO cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    tuple_T2OO cpy_r_r159;
    tuple_T3OOO cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    tuple_T3OOO cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject **cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    tuple_T3OOO cpy_r_r184;
    char cpy_r_r185;
    PyObject **cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    tuple_T3OOO cpy_r_r189;
    tuple_T3OOO cpy_r_r190;
    tuple_T3OOO cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    tuple_T3OOO cpy_r_r199;
    tuple_T3OOO cpy_r_r200;
    char cpy_r_r201;
    tuple_T3OOO cpy_r_r202;
    tuple_T3OOO cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject **cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    tuple_T3OOO cpy_r_r223;
    char cpy_r_r224;
    PyObject **cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    tuple_T3OOO cpy_r_r228;
    tuple_T3OOO cpy_r_r229;
    tuple_T3OOO cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject **cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    char cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    tuple_T3OOO cpy_r_r257;
    char cpy_r_r258;
    PyObject **cpy_r_r259;
    PyObject *cpy_r_r260;
    char cpy_r_r261;
    tuple_T3OOO cpy_r_r262;
    tuple_T3OOO cpy_r_r263;
    tuple_T3OOO cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    char cpy_r_r270;
    char cpy_r_r271;
    char cpy_r_r272;
    char cpy_r_r273;
    char cpy_r_r274;
    char cpy_r_r275;
    char cpy_r_r276;
    char cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    CPy_XDECREF(cpy_r_r3);
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    cpy_r_r8 = NULL;
    cpy_r_r9 = cpy_r_r8;
    cpy_r_r10 = NULL;
    cpy_r_r11 = cpy_r_r10;
    tuple_T3OOO __tmp40 = { NULL, NULL, NULL };
    cpy_r_r12 = __tmp40;
    cpy_r_r13 = cpy_r_r12;
    cpy_r_r14 = NULL;
    cpy_r_r15 = cpy_r_r14;
    cpy_r_r16 = ((faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_gen___363", "__mypyc_env__", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL286;
    }
    CPy_INCREF_NO_IMM(cpy_r_r16);
CPyL1: ;
    cpy_r_r17 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__;
    cpy_r_r18 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_env__;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_env__", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_INCREF_NO_IMM(cpy_r_r18);
    goto CPyL276;
CPyL2: ;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_type != cpy_r_r19;
    if (cpy_r_r20) {
        goto CPyL288;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL285;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r21 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "provider", 366, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r21);
CPyL6: ;
    cpy_r_r22 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "method", 366, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    CPy_INCREF(cpy_r_r22);
CPyL7: ;
    cpy_r_r23 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "params", 366, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL291;
    }
    CPy_INCREF(cpy_r_r23);
CPyL8: ;
    cpy_r_r24 = CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 366, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    if (!cpy_r_r24) goto CPyL237;
    cpy_r_r25 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "provider", 367, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r25);
CPyL11: ;
    cpy_r_r26 = CPyStatics[20]; /* '_request_cache' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 367, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r27, *exports_faster_web3.CPyType_faster_web3___utils___caching___SimpleCache)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 367, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "faster_web3.utils.caching.SimpleCache", cpy_r_r27);
        goto CPyL289;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 367, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    cpy_r_r30 = CPyStatic_faster_web3____utils___caching___caching_utils___get_ident;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL292;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"get_ident\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL285;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r32 = PyObject_Vectorcall(cpy_r_r30, 0, 0, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    if (likely(PyLong_Check(cpy_r_r32)))
        cpy_r_r33 = CPyTagged_FromObject(cpy_r_r32);
    else {
        CPy_TypeError("int", cpy_r_r32); cpy_r_r33 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    cpy_r_r34 = CPyTagged_Str(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    cpy_r_r35 = CPyStatics[21]; /* ':' */
    cpy_r_r36 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "method", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL293;
    }
    CPy_INCREF(cpy_r_r36);
CPyL21: ;
    cpy_r_r37 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "params", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r37);
CPyL22: ;
    cpy_r_r38.f0 = cpy_r_r36;
    cpy_r_r38.f1 = cpy_r_r37;
    cpy_r_r39 = PyTuple_New(2);
    if (unlikely(cpy_r_r39 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp41 = cpy_r_r38.f0;
    PyTuple_SET_ITEM(cpy_r_r39, 0, __tmp41);
    PyObject *__tmp42 = cpy_r_r38.f1;
    PyTuple_SET_ITEM(cpy_r_r39, 1, __tmp42);
    cpy_r_r40 = PyObject_Str(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL293;
    }
    cpy_r_r41 = CPyStr_Build(3, cpy_r_r34, cpy_r_r35, cpy_r_r40);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 369, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    cpy_r_r42 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 368, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key = cpy_r_r42;
    cpy_r_r43 = 1;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 368, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    cpy_r_r44 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "request_cache", 371, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    CPy_INCREF_NO_IMM(cpy_r_r44);
CPyL27: ;
    cpy_r_r45 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "cache_key", 371, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL295;
    }
    CPy_INCREF(cpy_r_r45);
CPyL28: ;
    cpy_r_r46 = exports_faster_web3.CPyDef_faster_web3___utils___caching___SimpleCache___get_cache_entry(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF_NO_IMM(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 371, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 371, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    cpy_r_r48 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "cache_result", 372, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r48);
CPyL31: ;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_r48 != cpy_r_r49;
    CPy_DECREF(cpy_r_r48);
    if (cpy_r_r50) {
        goto CPyL296;
    } else
        goto CPyL38;
CPyL32: ;
    cpy_r_r51 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "cache_result", 373, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r51);
CPyL33: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL37;
    CPyGen_SetStopIterationValue(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (!0) goto CPyL285;
    CPy_Unreachable();
CPyL37: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r51;
    return 0;
CPyL38: ;
    cpy_r_r53 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "provider", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r53);
CPyL39: ;
    cpy_r_r54 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "method", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL298;
    }
    CPy_INCREF(cpy_r_r54);
CPyL40: ;
    cpy_r_r55 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "params", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL299;
    }
    CPy_INCREF(cpy_r_r55);
CPyL41: ;
    cpy_r_r56 = ((faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *)cpy_r_r18)->_func;
    if (unlikely(cpy_r_r56 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'func' of 'async_handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r56);
    }
    CPy_DECREF_NO_IMM(cpy_r_r18);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL300;
    }
CPyL42: ;
    PyObject *cpy_r_r57[3] = {cpy_r_r53, cpy_r_r54, cpy_r_r55};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = PyObject_Vectorcall(cpy_r_r56, cpy_r_r58, 3, 0);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL300;
    }
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r60 = CPy_GetCoro(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7 = cpy_r_r60;
    cpy_r_r61 = 1;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r62 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__7", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r62);
CPyL46: ;
    cpy_r_r63 = CPyIter_Next(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (cpy_r_r63 != NULL) goto CPyL49;
    cpy_r_r64 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r65 = cpy_r_r64;
    cpy_r_r66 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7 = cpy_r_r66;
    cpy_r_r67 = 1;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL301;
    } else
        goto CPyL71;
CPyL49: ;
    cpy_r_r68 = cpy_r_r63;
CPyL50: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r68;
CPyL51: ;
    cpy_r_r70 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r71 = cpy_r_type != cpy_r_r70;
    if (!cpy_r_r71) goto CPyL302;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL55;
    } else
        goto CPyL303;
CPyL53: ;
    CPy_Unreachable();
CPyL54: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL66;
CPyL55: ;
    cpy_r_r72 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8 = cpy_r_r72;
    cpy_r_r73 = 1;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL304;
    }
    cpy_r_r74 = (PyObject **)&cpy_r_r1;
    cpy_r_r75 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__7", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r75);
CPyL57: ;
    cpy_r_r76 = CPy_YieldFromErrorHandle(cpy_r_r75, cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL304;
    }
    if (cpy_r_r76) goto CPyL61;
    cpy_r_r68 = cpy_r_r1;
    cpy_r_r77 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8;
    if (unlikely(cpy_r_r77.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__8", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL305;
    }
    CPy_INCREF(cpy_r_r77.f0);
    CPy_INCREF(cpy_r_r77.f1);
    CPy_INCREF(cpy_r_r77.f2);
CPyL60: ;
    CPy_RestoreExcInfo(cpy_r_r77);
    CPy_DecRef(cpy_r_r77.f0);
    CPy_DecRef(cpy_r_r77.f1);
    CPy_DecRef(cpy_r_r77.f2);
    goto CPyL50;
CPyL61: ;
    cpy_r_r65 = cpy_r_r1;
    cpy_r_r78 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8;
    if (unlikely(cpy_r_r78.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__8", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL306;
    }
    CPy_INCREF(cpy_r_r78.f0);
    CPy_INCREF(cpy_r_r78.f1);
    CPy_INCREF(cpy_r_r78.f2);
CPyL62: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    goto CPyL71;
CPyL63: ;
    cpy_r_r79 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__8;
    if (unlikely(cpy_r_r79.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__8' of 'wrapper_async_handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r79.f0);
        CPy_INCREF(cpy_r_r79.f1);
        CPy_INCREF(cpy_r_r79.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r79.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL285;
    }
CPyL64: ;
    CPy_RestoreExcInfo(cpy_r_r79);
    CPy_DecRef(cpy_r_r79.f0);
    CPy_DecRef(cpy_r_r79.f1);
    CPy_DecRef(cpy_r_r79.f2);
    cpy_r_r80 = CPy_KeepPropagating();
    if (!cpy_r_r80) goto CPyL285;
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r81 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__7;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__7", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL307;
    }
    CPy_INCREF(cpy_r_r81);
CPyL67: ;
    cpy_r_r82 = CPyIter_Send(cpy_r_r81, cpy_r_arg);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r82 == NULL) goto CPyL69;
    cpy_r_r68 = cpy_r_r82;
    goto CPyL50;
CPyL69: ;
    cpy_r_r83 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r65 = cpy_r_r83;
CPyL71: ;
    if (likely(PyDict_Check(cpy_r_r65)))
        cpy_r_r84 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r65);
        goto CPyL297;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response = cpy_r_r84;
    cpy_r_r85 = 1;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 375, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r86 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "provider", 377, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r86);
CPyL74: ;
    cpy_r_r87 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "method", 377, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL308;
    }
    CPy_INCREF(cpy_r_r87);
CPyL75: ;
    cpy_r_r88 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "params", 377, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL309;
    }
    CPy_INCREF(cpy_r_r88);
CPyL76: ;
    cpy_r_r89 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "response", 377, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL310;
    }
    CPy_INCREF(cpy_r_r89);
CPyL77: ;
    cpy_r_r90 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response(cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 376, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9 = cpy_r_r90;
    cpy_r_r91 = 1;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r92 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__9", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF_NO_IMM(cpy_r_r92);
CPyL80: ;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r94 = NULL;
    cpy_r_r3 = cpy_r_r94;
    cpy_r_r95 = (PyObject **)&cpy_r_r3;
    cpy_r_r96 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__(cpy_r_r92, cpy_r_r93, cpy_r_r93, cpy_r_r93, cpy_r_r93, cpy_r_r95);
    CPy_DECREF_NO_IMM(cpy_r_r92);
    if (cpy_r_r96 != NULL) goto CPyL311;
    cpy_r_r97 = cpy_r_r3 != 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL312;
    }
    cpy_r_r98 = cpy_r_r3;
    cpy_r_r99 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9 = cpy_r_r99;
    cpy_r_r100 = 1;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 376, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL313;
    } else
        goto CPyL105;
CPyL83: ;
    cpy_r_r101 = cpy_r_r96;
CPyL84: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 2;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r101;
CPyL85: ;
    cpy_r_r103 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r104 = cpy_r_type != cpy_r_r103;
    if (!cpy_r_r104) goto CPyL314;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 376, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL89;
    } else
        goto CPyL315;
CPyL87: ;
    CPy_Unreachable();
CPyL88: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL100;
CPyL89: ;
    cpy_r_r105 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10 = cpy_r_r105;
    cpy_r_r106 = 1;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL316;
    }
    cpy_r_r107 = (PyObject **)&cpy_r_r5;
    cpy_r_r108 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__9", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL316;
    }
    CPy_INCREF_NO_IMM(cpy_r_r108);
CPyL91: ;
    cpy_r_r109 = CPy_YieldFromErrorHandle(cpy_r_r108, cpy_r_r107);
    CPy_DecRef(cpy_r_r108);
    if (unlikely(cpy_r_r109 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 376, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL316;
    }
    if (cpy_r_r109) goto CPyL95;
    cpy_r_r101 = cpy_r_r5;
    cpy_r_r110 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10;
    if (unlikely(cpy_r_r110.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__10", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL317;
    }
    CPy_INCREF(cpy_r_r110.f0);
    CPy_INCREF(cpy_r_r110.f1);
    CPy_INCREF(cpy_r_r110.f2);
CPyL94: ;
    CPy_RestoreExcInfo(cpy_r_r110);
    CPy_DecRef(cpy_r_r110.f0);
    CPy_DecRef(cpy_r_r110.f1);
    CPy_DecRef(cpy_r_r110.f2);
    goto CPyL84;
CPyL95: ;
    cpy_r_r98 = cpy_r_r5;
    cpy_r_r111 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10;
    if (unlikely(cpy_r_r111.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__10", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL318;
    }
    CPy_INCREF(cpy_r_r111.f0);
    CPy_INCREF(cpy_r_r111.f1);
    CPy_INCREF(cpy_r_r111.f2);
CPyL96: ;
    CPy_RestoreExcInfo(cpy_r_r111);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    CPy_DecRef(cpy_r_r111.f2);
    goto CPyL105;
CPyL97: ;
    cpy_r_r112 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__10;
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__10' of 'wrapper_async_handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r112.f0);
        CPy_INCREF(cpy_r_r112.f1);
        CPy_INCREF(cpy_r_r112.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL285;
    }
CPyL98: ;
    CPy_RestoreExcInfo(cpy_r_r112);
    CPy_DecRef(cpy_r_r112.f0);
    CPy_DecRef(cpy_r_r112.f1);
    CPy_DecRef(cpy_r_r112.f2);
    cpy_r_r113 = CPy_KeepPropagating();
    if (!cpy_r_r113) goto CPyL285;
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r114 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__9;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__9", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL319;
    }
    CPy_INCREF_NO_IMM(cpy_r_r114);
CPyL101: ;
    cpy_r_r115 = CPyIter_Send(cpy_r_r114, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r114);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r115 == NULL) goto CPyL103;
    cpy_r_r101 = cpy_r_r115;
    goto CPyL84;
CPyL103: ;
    cpy_r_r116 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 376, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r98 = cpy_r_r116;
CPyL105: ;
    if (unlikely(!PyBool_Check(cpy_r_r98))) {
        CPy_TypeError("bool", cpy_r_r98); cpy_r_r117 = 2;
    } else
        cpy_r_r117 = cpy_r_r98 == Py_True;
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 376, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    if (!cpy_r_r117) goto CPyL231;
    cpy_r_r118 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "provider", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r118);
CPyL108: ;
    cpy_r_r119 = CPyStatics[22]; /* '_request_cache_lock' */
    cpy_r_r120 = CPyObject_GetAttr(cpy_r_r118, cpy_r_r119);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r121 = CPy_TYPE(cpy_r_r120);
    cpy_r_r122 = CPyStatics[29]; /* '__aexit__' */
    cpy_r_r123 = CPyObject_GetAttr(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL320;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__11 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__11);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__11 = cpy_r_r123;
    cpy_r_r124 = 1;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL320;
    }
    cpy_r_r125 = CPyStatics[30]; /* '__aenter__' */
    cpy_r_r126 = CPyObject_GetAttr(cpy_r_r121, cpy_r_r125);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL321;
    }
    PyObject *cpy_r_r127[1] = {cpy_r_r120};
    cpy_r_r128 = (PyObject **)&cpy_r_r127;
    cpy_r_r129 = PyObject_Vectorcall(cpy_r_r126, cpy_r_r128, 1, 0);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL321;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__12 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__12);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__12 = cpy_r_r120;
    cpy_r_r130 = 1;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL322;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__13 = 1;
    cpy_r_r131 = 1;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL322;
    }
    cpy_r_r132 = CPy_GetCoro(cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14 = cpy_r_r132;
    cpy_r_r133 = 1;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r134 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14;
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__14", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r134);
CPyL118: ;
    cpy_r_r135 = CPyIter_Next(cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    if (cpy_r_r135 != NULL) goto CPyL121;
    cpy_r_r136 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r137 = cpy_r_r136;
    CPy_DECREF(cpy_r_r137);
    cpy_r_r138 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14 = cpy_r_r138;
    cpy_r_r139 = 1;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    } else
        goto CPyL143;
CPyL121: ;
    cpy_r_r140 = cpy_r_r135;
CPyL122: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 3;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r140;
CPyL123: ;
    cpy_r_r142 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r143 = cpy_r_type != cpy_r_r142;
    if (!cpy_r_r143) goto CPyL323;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL127;
    } else
        goto CPyL324;
CPyL125: ;
    CPy_Unreachable();
CPyL126: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL138;
CPyL127: ;
    cpy_r_r144 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15 = cpy_r_r144;
    cpy_r_r145 = 1;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL325;
    }
    cpy_r_r146 = (PyObject **)&cpy_r_r7;
    cpy_r_r147 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__14", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL325;
    }
    CPy_INCREF(cpy_r_r147);
CPyL129: ;
    cpy_r_r148 = CPy_YieldFromErrorHandle(cpy_r_r147, cpy_r_r146);
    CPy_DecRef(cpy_r_r147);
    if (unlikely(cpy_r_r148 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL325;
    }
    if (cpy_r_r148) goto CPyL133;
    cpy_r_r140 = cpy_r_r7;
    cpy_r_r149 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15;
    if (unlikely(cpy_r_r149.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__15", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL326;
    }
    CPy_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    CPy_INCREF(cpy_r_r149.f2);
CPyL132: ;
    CPy_RestoreExcInfo(cpy_r_r149);
    CPy_DecRef(cpy_r_r149.f0);
    CPy_DecRef(cpy_r_r149.f1);
    CPy_DecRef(cpy_r_r149.f2);
    goto CPyL122;
CPyL133: ;
    cpy_r_r137 = cpy_r_r7;
    CPy_DecRef(cpy_r_r137);
    cpy_r_r150 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15;
    if (unlikely(cpy_r_r150.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__15", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r150.f0);
    CPy_INCREF(cpy_r_r150.f1);
    CPy_INCREF(cpy_r_r150.f2);
CPyL134: ;
    CPy_RestoreExcInfo(cpy_r_r150);
    CPy_DecRef(cpy_r_r150.f0);
    CPy_DecRef(cpy_r_r150.f1);
    CPy_DecRef(cpy_r_r150.f2);
    goto CPyL143;
CPyL135: ;
    cpy_r_r151 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__15;
    if (unlikely(cpy_r_r151.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__15' of 'wrapper_async_handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r151.f0);
        CPy_INCREF(cpy_r_r151.f1);
        CPy_INCREF(cpy_r_r151.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r151.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL285;
    }
CPyL136: ;
    CPy_RestoreExcInfo(cpy_r_r151);
    CPy_DecRef(cpy_r_r151.f0);
    CPy_DecRef(cpy_r_r151.f1);
    CPy_DecRef(cpy_r_r151.f2);
    cpy_r_r152 = CPy_KeepPropagating();
    if (!cpy_r_r152) goto CPyL285;
    CPy_Unreachable();
CPyL138: ;
    cpy_r_r153 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__14;
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__14", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL327;
    }
    CPy_INCREF(cpy_r_r153);
CPyL139: ;
    cpy_r_r154 = CPyIter_Send(cpy_r_r153, cpy_r_arg);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r154 == NULL) goto CPyL141;
    cpy_r_r140 = cpy_r_r154;
    goto CPyL122;
CPyL141: ;
    cpy_r_r155 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r137 = cpy_r_r155;
    CPy_DECREF(cpy_r_r137);
CPyL143: ;
    cpy_r_r156 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache;
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "request_cache", 380, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL147;
    }
    CPy_INCREF_NO_IMM(cpy_r_r156);
CPyL144: ;
    cpy_r_r157 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key;
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "cache_key", 380, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL328;
    }
    CPy_INCREF(cpy_r_r157);
CPyL145: ;
    cpy_r_r158 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "response", 380, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL329;
    }
    CPy_INCREF(cpy_r_r158);
CPyL146: ;
    cpy_r_r159 = exports_faster_web3.CPyDef_faster_web3___utils___caching___SimpleCache___cache(cpy_r_r156, cpy_r_r157, cpy_r_r158);
    CPy_DECREF(cpy_r_r157);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF_NO_IMM(cpy_r_r156);
    if (unlikely(cpy_r_r159.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 380, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    } else
        goto CPyL330;
CPyL147: ;
    cpy_r_r160 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__16.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__16.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__16.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__16.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__16 = cpy_r_r160;
    cpy_r_r161 = 1;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__13 = 0;
    cpy_r_r162 = 1;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    cpy_r_r163 = CPy_GetExcInfo();
    cpy_r_r164 = cpy_r_r163.f0;
    CPy_INCREF(cpy_r_r164);
    cpy_r_r165 = cpy_r_r163.f1;
    CPy_INCREF(cpy_r_r165);
    cpy_r_r166 = cpy_r_r163.f2;
    CPy_INCREF(cpy_r_r166);
    CPy_DecRef(cpy_r_r163.f0);
    CPy_DecRef(cpy_r_r163.f1);
    CPy_DecRef(cpy_r_r163.f2);
    cpy_r_r167 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__11;
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__11", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL331;
    }
    CPy_INCREF(cpy_r_r167);
CPyL150: ;
    cpy_r_r168 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__12;
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__12", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL332;
    }
    CPy_INCREF(cpy_r_r168);
CPyL151: ;
    PyObject *cpy_r_r169[4] = {cpy_r_r168, cpy_r_r164, cpy_r_r165, cpy_r_r166};
    cpy_r_r170 = (PyObject **)&cpy_r_r169;
    cpy_r_r171 = PyObject_Vectorcall(cpy_r_r167, cpy_r_r170, 4, 0);
    CPy_DecRef(cpy_r_r167);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL333;
    }
    CPy_DecRef(cpy_r_r168);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r166);
    cpy_r_r172 = CPy_GetCoro(cpy_r_r171);
    CPy_DecRef(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17 = cpy_r_r172;
    cpy_r_r173 = 1;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    cpy_r_r174 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17;
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__17", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    CPy_INCREF(cpy_r_r174);
CPyL155: ;
    cpy_r_r175 = CPyIter_Next(cpy_r_r174);
    CPy_DecRef(cpy_r_r174);
    if (cpy_r_r175 != NULL) goto CPyL158;
    cpy_r_r176 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    cpy_r_r177 = cpy_r_r176;
    cpy_r_r178 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17 = cpy_r_r178;
    cpy_r_r179 = 1;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL334;
    } else
        goto CPyL180;
CPyL158: ;
    cpy_r_r180 = cpy_r_r175;
CPyL159: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 4;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r180;
CPyL160: ;
    cpy_r_r182 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r183 = cpy_r_type != cpy_r_r182;
    if (!cpy_r_r183) goto CPyL335;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL164;
    } else
        goto CPyL336;
CPyL162: ;
    CPy_Unreachable();
CPyL163: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL175;
CPyL164: ;
    cpy_r_r184 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18 = cpy_r_r184;
    cpy_r_r185 = 1;
    if (unlikely(!cpy_r_r185)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL337;
    }
    cpy_r_r186 = (PyObject **)&cpy_r_r9;
    cpy_r_r187 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17;
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__17", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL337;
    }
    CPy_INCREF(cpy_r_r187);
CPyL166: ;
    cpy_r_r188 = CPy_YieldFromErrorHandle(cpy_r_r187, cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    if (unlikely(cpy_r_r188 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL337;
    }
    if (cpy_r_r188) goto CPyL170;
    cpy_r_r180 = cpy_r_r9;
    cpy_r_r189 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18;
    if (unlikely(cpy_r_r189.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__18", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL338;
    }
    CPy_INCREF(cpy_r_r189.f0);
    CPy_INCREF(cpy_r_r189.f1);
    CPy_INCREF(cpy_r_r189.f2);
CPyL169: ;
    CPy_RestoreExcInfo(cpy_r_r189);
    CPy_DecRef(cpy_r_r189.f0);
    CPy_DecRef(cpy_r_r189.f1);
    CPy_DecRef(cpy_r_r189.f2);
    goto CPyL159;
CPyL170: ;
    cpy_r_r177 = cpy_r_r9;
    cpy_r_r190 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18;
    if (unlikely(cpy_r_r190.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__18", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL339;
    }
    CPy_INCREF(cpy_r_r190.f0);
    CPy_INCREF(cpy_r_r190.f1);
    CPy_INCREF(cpy_r_r190.f2);
CPyL171: ;
    CPy_RestoreExcInfo(cpy_r_r190);
    CPy_DecRef(cpy_r_r190.f0);
    CPy_DecRef(cpy_r_r190.f1);
    CPy_DecRef(cpy_r_r190.f2);
    goto CPyL180;
CPyL172: ;
    cpy_r_r191 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__18;
    if (unlikely(cpy_r_r191.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__18", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    CPy_INCREF(cpy_r_r191.f0);
    CPy_INCREF(cpy_r_r191.f1);
    CPy_INCREF(cpy_r_r191.f2);
CPyL173: ;
    CPy_RestoreExcInfo(cpy_r_r191);
    CPy_DecRef(cpy_r_r191.f0);
    CPy_DecRef(cpy_r_r191.f1);
    CPy_DecRef(cpy_r_r191.f2);
    cpy_r_r192 = CPy_KeepPropagating();
    if (!cpy_r_r192) {
        goto CPyL186;
    } else
        goto CPyL340;
CPyL174: ;
    CPy_Unreachable();
CPyL175: ;
    cpy_r_r193 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__17;
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__17", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL341;
    }
    CPy_INCREF(cpy_r_r193);
CPyL176: ;
    cpy_r_r194 = CPyIter_Send(cpy_r_r193, cpy_r_arg);
    CPy_DECREF(cpy_r_r193);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r194 == NULL) goto CPyL178;
    cpy_r_r180 = cpy_r_r194;
    goto CPyL159;
CPyL178: ;
    cpy_r_r195 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    cpy_r_r177 = cpy_r_r195;
CPyL180: ;
    cpy_r_r196 = PyObject_IsTrue(cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL186;
    }
    cpy_r_r198 = cpy_r_r196;
    if (cpy_r_r198) goto CPyL184;
    CPy_Reraise();
    if (!0) {
        goto CPyL186;
    } else
        goto CPyL342;
CPyL183: ;
    CPy_Unreachable();
CPyL184: ;
    cpy_r_r199 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__16;
    if (unlikely(cpy_r_r199.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__16", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r199.f0);
    CPy_INCREF(cpy_r_r199.f1);
    CPy_INCREF(cpy_r_r199.f2);
CPyL185: ;
    CPy_RestoreExcInfo(cpy_r_r199);
    CPy_DECREF(cpy_r_r199.f0);
    CPy_DECREF(cpy_r_r199.f1);
    CPy_DECREF(cpy_r_r199.f2);
    goto CPyL189;
CPyL186: ;
    cpy_r_r200 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__16;
    if (unlikely(cpy_r_r200.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__16", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r200.f0);
    CPy_INCREF(cpy_r_r200.f1);
    CPy_INCREF(cpy_r_r200.f2);
CPyL187: ;
    CPy_RestoreExcInfo(cpy_r_r200);
    CPy_DECREF(cpy_r_r200.f0);
    CPy_DECREF(cpy_r_r200.f1);
    CPy_DECREF(cpy_r_r200.f2);
    cpy_r_r201 = CPy_KeepPropagating();
    if (!cpy_r_r201) {
        goto CPyL190;
    } else
        goto CPyL343;
CPyL188: ;
    CPy_Unreachable();
CPyL189: ;
    tuple_T3OOO __tmp43 = { NULL, NULL, NULL };
    cpy_r_r202 = __tmp43;
    cpy_r_r13 = cpy_r_r202;
    goto CPyL191;
CPyL190: ;
    cpy_r_r203 = CPy_CatchError();
    cpy_r_r13 = cpy_r_r203;
CPyL191: ;
    cpy_r_r204 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__13;
    if (unlikely(cpy_r_r204 == 2)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__13", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
CPyL192: ;
    if (!cpy_r_r204) goto CPyL224;
CPyL193: ;
    cpy_r_r205 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r206 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__11;
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__11", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    CPy_INCREF(cpy_r_r206);
CPyL194: ;
    cpy_r_r207 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__12;
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__12", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL345;
    }
    CPy_INCREF(cpy_r_r207);
CPyL195: ;
    PyObject *cpy_r_r208[4] = {cpy_r_r207, cpy_r_r205, cpy_r_r205, cpy_r_r205};
    cpy_r_r209 = (PyObject **)&cpy_r_r208;
    cpy_r_r210 = PyObject_Vectorcall(cpy_r_r206, cpy_r_r209, 4, 0);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL346;
    }
    CPy_DECREF(cpy_r_r207);
    cpy_r_r211 = CPy_GetCoro(cpy_r_r210);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19 = cpy_r_r211;
    cpy_r_r212 = 1;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    cpy_r_r213 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19;
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__19", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    CPy_INCREF(cpy_r_r213);
CPyL199: ;
    cpy_r_r214 = CPyIter_Next(cpy_r_r213);
    CPy_DECREF(cpy_r_r213);
    if (cpy_r_r214 != NULL) goto CPyL347;
    cpy_r_r215 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    cpy_r_r216 = cpy_r_r215;
    CPy_DECREF(cpy_r_r216);
    cpy_r_r217 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19 = cpy_r_r217;
    cpy_r_r218 = 1;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    } else
        goto CPyL224;
CPyL202: ;
    cpy_r_r219 = cpy_r_r214;
CPyL203: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 5;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r219;
CPyL204: ;
    cpy_r_r221 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r222 = cpy_r_type != cpy_r_r221;
    if (!cpy_r_r222) goto CPyL348;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL208;
    } else
        goto CPyL349;
CPyL206: ;
    CPy_Unreachable();
CPyL207: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL219;
CPyL208: ;
    cpy_r_r223 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20 = cpy_r_r223;
    cpy_r_r224 = 1;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL350;
    }
    cpy_r_r225 = (PyObject **)&cpy_r_r11;
    cpy_r_r226 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19;
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__19", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL350;
    }
    CPy_INCREF(cpy_r_r226);
CPyL210: ;
    cpy_r_r227 = CPy_YieldFromErrorHandle(cpy_r_r226, cpy_r_r225);
    CPy_DecRef(cpy_r_r226);
    if (unlikely(cpy_r_r227 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL350;
    }
    if (cpy_r_r227) goto CPyL214;
    cpy_r_r219 = cpy_r_r11;
    cpy_r_r228 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20;
    if (unlikely(cpy_r_r228.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__20", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL351;
    }
    CPy_INCREF(cpy_r_r228.f0);
    CPy_INCREF(cpy_r_r228.f1);
    CPy_INCREF(cpy_r_r228.f2);
    goto CPyL352;
CPyL213: ;
    CPy_RestoreExcInfo(cpy_r_r228);
    CPy_DecRef(cpy_r_r228.f0);
    CPy_DecRef(cpy_r_r228.f1);
    CPy_DecRef(cpy_r_r228.f2);
    goto CPyL203;
CPyL214: ;
    cpy_r_r216 = cpy_r_r11;
    CPy_DecRef(cpy_r_r216);
    cpy_r_r229 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20;
    if (unlikely(cpy_r_r229.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__20", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r229.f0);
    CPy_INCREF(cpy_r_r229.f1);
    CPy_INCREF(cpy_r_r229.f2);
CPyL215: ;
    CPy_RestoreExcInfo(cpy_r_r229);
    CPy_DecRef(cpy_r_r229.f0);
    CPy_DecRef(cpy_r_r229.f1);
    CPy_DecRef(cpy_r_r229.f2);
    goto CPyL224;
CPyL216: ;
    cpy_r_r230 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__20;
    if (unlikely(cpy_r_r230.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__20' of 'wrapper_async_handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r230.f0);
        CPy_INCREF(cpy_r_r230.f1);
        CPy_INCREF(cpy_r_r230.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r230.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL227;
    }
CPyL217: ;
    CPy_RestoreExcInfo(cpy_r_r230);
    CPy_DecRef(cpy_r_r230.f0);
    CPy_DecRef(cpy_r_r230.f1);
    CPy_DecRef(cpy_r_r230.f2);
    cpy_r_r231 = CPy_KeepPropagating();
    if (!cpy_r_r231) {
        goto CPyL227;
    } else
        goto CPyL353;
CPyL218: ;
    CPy_Unreachable();
CPyL219: ;
    cpy_r_r232 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__19;
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__19", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL354;
    }
    CPy_INCREF(cpy_r_r232);
CPyL220: ;
    cpy_r_r233 = CPyIter_Send(cpy_r_r232, cpy_r_arg);
    CPy_DECREF(cpy_r_r232);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r233 == NULL) {
        goto CPyL222;
    } else
        goto CPyL355;
CPyL221: ;
    cpy_r_r219 = cpy_r_r233;
    goto CPyL203;
CPyL222: ;
    cpy_r_r234 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 379, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    cpy_r_r216 = cpy_r_r234;
    CPy_DECREF(cpy_r_r216);
CPyL224: ;
    if (cpy_r_r13.f0 == NULL) {
        goto CPyL231;
    } else
        goto CPyL356;
CPyL225: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL227;
    } else
        goto CPyL357;
CPyL226: ;
    CPy_Unreachable();
CPyL227: ;
    if (cpy_r_r13.f0 == NULL) goto CPyL229;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
CPyL229: ;
    cpy_r_r235 = CPy_KeepPropagating();
    if (!cpy_r_r235) goto CPyL285;
    CPy_Unreachable();
CPyL231: ;
    cpy_r_r236 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "response", 381, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r236);
CPyL232: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL236;
    CPyGen_SetStopIterationValue(cpy_r_r236);
    CPy_DECREF(cpy_r_r236);
    if (!0) goto CPyL285;
    CPy_Unreachable();
CPyL236: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r236;
    return 0;
CPyL237: ;
    cpy_r_r238 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "provider", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r238);
CPyL238: ;
    cpy_r_r239 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "method", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL358;
    }
    CPy_INCREF(cpy_r_r239);
CPyL239: ;
    cpy_r_r240 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "params", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL359;
    }
    CPy_INCREF(cpy_r_r240);
CPyL240: ;
    cpy_r_r241 = ((faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *)cpy_r_r18)->_func;
    if (unlikely(cpy_r_r241 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'func' of 'async_handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r241);
    }
    CPy_DECREF_NO_IMM(cpy_r_r18);
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL360;
    }
CPyL241: ;
    PyObject *cpy_r_r242[3] = {cpy_r_r238, cpy_r_r239, cpy_r_r240};
    cpy_r_r243 = (PyObject **)&cpy_r_r242;
    cpy_r_r244 = PyObject_Vectorcall(cpy_r_r241, cpy_r_r243, 3, 0);
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL360;
    }
    CPy_DECREF(cpy_r_r238);
    CPy_DECREF(cpy_r_r239);
    CPy_DECREF(cpy_r_r240);
    cpy_r_r245 = CPy_GetCoro(cpy_r_r244);
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21 = cpy_r_r245;
    cpy_r_r246 = 1;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r247 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21;
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__21", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r247);
CPyL245: ;
    cpy_r_r248 = CPyIter_Next(cpy_r_r247);
    CPy_DECREF(cpy_r_r247);
    if (cpy_r_r248 != NULL) goto CPyL248;
    cpy_r_r249 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r250 = cpy_r_r249;
    cpy_r_r251 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21 = cpy_r_r251;
    cpy_r_r252 = 1;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL361;
    } else
        goto CPyL270;
CPyL248: ;
    cpy_r_r253 = cpy_r_r248;
CPyL249: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 6;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r253;
CPyL250: ;
    cpy_r_r255 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r256 = cpy_r_type != cpy_r_r255;
    if (!cpy_r_r256) goto CPyL362;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL254;
    } else
        goto CPyL363;
CPyL252: ;
    CPy_Unreachable();
CPyL253: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL265;
CPyL254: ;
    cpy_r_r257 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22 = cpy_r_r257;
    cpy_r_r258 = 1;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL364;
    }
    cpy_r_r259 = (PyObject **)&cpy_r_r15;
    cpy_r_r260 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21;
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__21", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL364;
    }
    CPy_INCREF(cpy_r_r260);
CPyL256: ;
    cpy_r_r261 = CPy_YieldFromErrorHandle(cpy_r_r260, cpy_r_r259);
    CPy_DecRef(cpy_r_r260);
    if (unlikely(cpy_r_r261 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL364;
    }
    if (cpy_r_r261) goto CPyL260;
    cpy_r_r253 = cpy_r_r15;
    cpy_r_r262 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22;
    if (unlikely(cpy_r_r262.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__22", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL365;
    }
    CPy_INCREF(cpy_r_r262.f0);
    CPy_INCREF(cpy_r_r262.f1);
    CPy_INCREF(cpy_r_r262.f2);
CPyL259: ;
    CPy_RestoreExcInfo(cpy_r_r262);
    CPy_DecRef(cpy_r_r262.f0);
    CPy_DecRef(cpy_r_r262.f1);
    CPy_DecRef(cpy_r_r262.f2);
    goto CPyL249;
CPyL260: ;
    cpy_r_r250 = cpy_r_r15;
    cpy_r_r263 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22;
    if (unlikely(cpy_r_r263.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__22", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL366;
    }
    CPy_INCREF(cpy_r_r263.f0);
    CPy_INCREF(cpy_r_r263.f1);
    CPy_INCREF(cpy_r_r263.f2);
CPyL261: ;
    CPy_RestoreExcInfo(cpy_r_r263);
    CPy_DecRef(cpy_r_r263.f0);
    CPy_DecRef(cpy_r_r263.f1);
    CPy_DecRef(cpy_r_r263.f2);
    goto CPyL270;
CPyL262: ;
    cpy_r_r264 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__22;
    if (unlikely(cpy_r_r264.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__22' of 'wrapper_async_handle_request_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r264.f0);
        CPy_INCREF(cpy_r_r264.f1);
        CPy_INCREF(cpy_r_r264.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r264.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL285;
    }
CPyL263: ;
    CPy_RestoreExcInfo(cpy_r_r264);
    CPy_DecRef(cpy_r_r264.f0);
    CPy_DecRef(cpy_r_r264.f1);
    CPy_DecRef(cpy_r_r264.f2);
    cpy_r_r265 = CPy_KeepPropagating();
    if (!cpy_r_r265) goto CPyL285;
    CPy_Unreachable();
CPyL265: ;
    cpy_r_r266 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_temp__21;
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_env", "__mypyc_temp__21", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL367;
    }
    CPy_INCREF(cpy_r_r266);
CPyL266: ;
    cpy_r_r267 = CPyIter_Send(cpy_r_r266, cpy_r_arg);
    CPy_DECREF(cpy_r_r266);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r267 == NULL) goto CPyL268;
    cpy_r_r253 = cpy_r_r267;
    goto CPyL249;
CPyL268: ;
    cpy_r_r268 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r250 = cpy_r_r268;
CPyL270: ;
    if (likely(PyDict_Check(cpy_r_r250)))
        cpy_r_r269 = cpy_r_r250;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 383, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r250);
        goto CPyL297;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL275;
    CPyGen_SetStopIterationValue(cpy_r_r269);
    CPy_DECREF(cpy_r_r269);
    if (!0) goto CPyL285;
    CPy_Unreachable();
CPyL275: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r269;
    return 0;
CPyL276: ;
    cpy_r_r271 = cpy_r_r17 == 0;
    if (cpy_r_r271) {
        goto CPyL368;
    } else
        goto CPyL369;
CPyL277: ;
    cpy_r_r272 = cpy_r_r17 == 1;
    if (cpy_r_r272) {
        goto CPyL370;
    } else
        goto CPyL371;
CPyL278: ;
    cpy_r_r273 = cpy_r_r17 == 2;
    if (cpy_r_r273) {
        goto CPyL372;
    } else
        goto CPyL373;
CPyL279: ;
    cpy_r_r274 = cpy_r_r17 == 3;
    if (cpy_r_r274) {
        goto CPyL374;
    } else
        goto CPyL375;
CPyL280: ;
    cpy_r_r275 = cpy_r_r17 == 4;
    if (cpy_r_r275) {
        goto CPyL376;
    } else
        goto CPyL377;
CPyL281: ;
    cpy_r_r276 = cpy_r_r17 == 5;
    if (cpy_r_r276) {
        goto CPyL378;
    } else
        goto CPyL379;
CPyL282: ;
    cpy_r_r277 = cpy_r_r17 == 6;
    if (cpy_r_r277) {
        goto CPyL250;
    } else
        goto CPyL380;
CPyL283: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r278 = 0;
    if (unlikely(!cpy_r_r278)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL285;
    }
    CPy_Unreachable();
CPyL285: ;
    cpy_r_r279 = NULL;
    return cpy_r_r279;
CPyL286: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_XDecRef(cpy_r_r9);
    CPy_XDecRef(cpy_r_r11);
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    CPy_XDecRef(cpy_r_r15);
    goto CPyL285;
CPyL287: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_XDecRef(cpy_r_r9);
    CPy_XDecRef(cpy_r_r11);
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    CPy_XDecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL285;
CPyL288: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    CPy_DECREF_NO_IMM(cpy_r_r18);
    goto CPyL3;
CPyL289: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL285;
CPyL290: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL285;
CPyL291: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL285;
CPyL292: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL15;
CPyL293: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r34);
    goto CPyL285;
CPyL294: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL285;
CPyL295: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r44);
    goto CPyL285;
CPyL296: ;
    CPy_DECREF_NO_IMM(cpy_r_r18);
    goto CPyL32;
CPyL297: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL285;
CPyL298: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r53);
    goto CPyL285;
CPyL299: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL285;
CPyL300: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    goto CPyL285;
CPyL301: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r65);
    goto CPyL285;
CPyL302: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL54;
CPyL303: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL53;
CPyL304: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL63;
CPyL305: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL63;
CPyL306: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL63;
CPyL307: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL285;
CPyL308: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r86);
    goto CPyL285;
CPyL309: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    goto CPyL285;
CPyL310: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r88);
    goto CPyL285;
CPyL311: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL83;
CPyL312: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r16);
    goto CPyL285;
CPyL313: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r98);
    goto CPyL285;
CPyL314: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL88;
CPyL315: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL87;
CPyL316: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL97;
CPyL317: ;
    CPy_DecRef(cpy_r_r101);
    goto CPyL97;
CPyL318: ;
    CPy_DecRef(cpy_r_r98);
    goto CPyL97;
CPyL319: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL285;
CPyL320: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL285;
CPyL321: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r120);
    goto CPyL285;
CPyL322: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r129);
    goto CPyL285;
CPyL323: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL126;
CPyL324: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL125;
CPyL325: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL135;
CPyL326: ;
    CPy_DecRef(cpy_r_r140);
    goto CPyL135;
CPyL327: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL285;
CPyL328: ;
    CPy_DecRef(cpy_r_r156);
    goto CPyL147;
CPyL329: ;
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    goto CPyL147;
CPyL330: ;
    CPy_DECREF(cpy_r_r159.f0);
    CPy_DECREF(cpy_r_r159.f1);
    goto CPyL189;
CPyL331: ;
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r166);
    goto CPyL186;
CPyL332: ;
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r166);
    CPy_DecRef(cpy_r_r167);
    goto CPyL186;
CPyL333: ;
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r166);
    CPy_DecRef(cpy_r_r168);
    goto CPyL186;
CPyL334: ;
    CPy_DecRef(cpy_r_r177);
    goto CPyL186;
CPyL335: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL163;
CPyL336: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL162;
CPyL337: ;
    CPy_XDecRef(cpy_r_r9);
    goto CPyL172;
CPyL338: ;
    CPy_DecRef(cpy_r_r180);
    goto CPyL172;
CPyL339: ;
    CPy_DecRef(cpy_r_r177);
    goto CPyL172;
CPyL340: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL174;
CPyL341: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL186;
CPyL342: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL183;
CPyL343: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL188;
CPyL344: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL227;
CPyL345: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r206);
    goto CPyL227;
CPyL346: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r207);
    goto CPyL227;
CPyL347: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL202;
CPyL348: ;
    CPy_XDECREF(cpy_r_r11);
    goto CPyL207;
CPyL349: ;
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL206;
CPyL350: ;
    CPy_XDecRef(cpy_r_r11);
    goto CPyL216;
CPyL351: ;
    CPy_DecRef(cpy_r_r219);
    goto CPyL216;
CPyL352: ;
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    goto CPyL213;
CPyL353: ;
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    goto CPyL218;
CPyL354: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL227;
CPyL355: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL221;
CPyL356: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL225;
CPyL357: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL226;
CPyL358: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r238);
    goto CPyL285;
CPyL359: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r238);
    CPy_DecRef(cpy_r_r239);
    goto CPyL285;
CPyL360: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r238);
    CPy_DecRef(cpy_r_r239);
    CPy_DecRef(cpy_r_r240);
    goto CPyL285;
CPyL361: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r250);
    goto CPyL285;
CPyL362: ;
    CPy_XDECREF(cpy_r_r15);
    goto CPyL253;
CPyL363: ;
    CPy_XDECREF(cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL252;
CPyL364: ;
    CPy_XDecRef(cpy_r_r15);
    goto CPyL262;
CPyL365: ;
    CPy_DecRef(cpy_r_r253);
    goto CPyL262;
CPyL366: ;
    CPy_DecRef(cpy_r_r250);
    goto CPyL262;
CPyL367: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL285;
CPyL368: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL2;
CPyL369: ;
    CPy_DECREF_NO_IMM(cpy_r_r18);
    goto CPyL277;
CPyL370: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL51;
CPyL371: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL278;
CPyL372: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL85;
CPyL373: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL279;
CPyL374: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL123;
CPyL375: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL280;
CPyL376: ;
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL160;
CPyL377: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL281;
CPyL378: ;
    CPy_XDECREF(cpy_r_r15);
    goto CPyL204;
CPyL379: ;
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL282;
CPyL380: ;
    CPy_XDECREF(cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL283;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___363", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___363", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "send", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___363", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___363", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "throw", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[27]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[28]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp44 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp44);
    PyObject *__tmp45 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp45);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___363", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "close", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___363", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_request_caching_obj", "__mypyc_env__", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_method);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__method != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__method);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__method = cpy_r_method;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__params);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__params = cpy_r_params;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    cpy_r_r6 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF_NO_IMM(cpy_r_r1);
    if (((faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *)cpy_r_r6)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *)cpy_r_r6)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL12;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *)cpy_r_r1)->___mypyc_next_label__ = 0;
    CPy_DECREF_NO_IMM(cpy_r_r1);
    return cpy_r_r6;
CPyL9: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"provider", "method", "params", 0};
    static CPyArg_Parser parser = {"OOO:__call__", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_provider, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_provider = obj_provider;
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__(arg___mypyc_self__, arg_provider, arg_method, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching(PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_wrapper;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_request_caching", 358, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_func);
    if (((faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *)cpy_r_r0)->_func != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *)cpy_r_r0)->_func);
    }
    ((faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *)cpy_r_r0)->_func = cpy_r_func;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_request_caching", 358, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_request_caching", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_request_caching", 363, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    cpy_r_wrapper = cpy_r_r2;
    cpy_r_r4 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r5 = CPyStatics[31]; /* 'async_handle_request_caching' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_request_caching", 386, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    cpy_r_r7 = CPyStatics[26]; /* '_decorator' */
    cpy_r_r8 = PyObject_SetAttr(cpy_r_wrapper, cpy_r_r7, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_request_caching", 386, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    return cpy_r_wrapper;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_wrapper);
    goto CPyL7;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_handle_request_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:async_handle_request_caching", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_func = obj_func;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching(arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_request_caching", 358, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__get__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    char cpy_r_r65;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    tuple_T3OOO cpy_r_r69;
    tuple_T3OOO cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_gen___396", "__mypyc_env__", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_next_label__;
    cpy_r_r4 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_env__;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "__mypyc_env__", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL84;
    }
    CPy_INCREF_NO_IMM(cpy_r_r4);
    goto CPyL78;
CPyL2: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_type != cpy_r_r5;
    if (cpy_r_r6) {
        goto CPyL85;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r7 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "provider", 399, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    cpy_r_r8 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "method", 399, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "params", 399, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request(cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 399, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    if (!cpy_r_r10) goto CPyL39;
    cpy_r_r11 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "provider", 400, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = CPyStatics[20]; /* '_request_cache' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 400, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, *exports_faster_web3.CPyType_faster_web3___utils___caching___SimpleCache)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 400, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "faster_web3.utils.caching.SimpleCache", cpy_r_r13);
        goto CPyL86;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__request_cache != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__request_cache);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__request_cache = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 400, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    cpy_r_r16 = CPyStatic_faster_web3____utils___caching___caching_utils___get_ident;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL89;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"get_ident\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r16, 0, 0, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18); cpy_r_r19 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    cpy_r_r20 = CPyTagged_Str(cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    cpy_r_r21 = CPyStatics[21]; /* ':' */
    cpy_r_r22 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "method", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r22);
CPyL21: ;
    cpy_r_r23 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "params", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r23);
CPyL22: ;
    cpy_r_r24.f0 = cpy_r_r22;
    cpy_r_r24.f1 = cpy_r_r23;
    cpy_r_r25 = PyTuple_New(2);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp46 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp46);
    PyObject *__tmp47 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp47);
    cpy_r_r26 = PyObject_Str(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL90;
    }
    cpy_r_r27 = CPyStr_Build(3, cpy_r_r20, cpy_r_r21, cpy_r_r26);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 402, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    cpy_r_r28 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 401, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cache_key != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cache_key);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cache_key = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 401, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    cpy_r_r30 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__request_cache;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "request_cache", 404, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    CPy_INCREF_NO_IMM(cpy_r_r30);
CPyL27: ;
    cpy_r_r31 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cache_key;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "cache_key", 404, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r31);
CPyL28: ;
    cpy_r_r32 = exports_faster_web3.CPyDef_faster_web3___utils___caching___SimpleCache___get_cache_entry(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF_NO_IMM(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 404, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cached_response != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cached_response);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cached_response = cpy_r_r32;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 404, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    cpy_r_r34 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__cached_response;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "cached_response", 405, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r34);
CPyL31: ;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_r34 != cpy_r_r35;
    CPy_DECREF(cpy_r_r34);
    if (cpy_r_r36) {
        goto CPyL93;
    } else
        goto CPyL39;
CPyL32: ;
    cpy_r_r37 = CPyStatics[32]; /* 'id' */
    cpy_r_r38 = CPyStatics[33]; /* 'method' */
    cpy_r_r39 = CPyStatics[7]; /* '' */
    cpy_r_r40 = CPyStatics[34]; /* 'params' */
    cpy_r_r41 = PyList_New(0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 408, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL94;
    }
    cpy_r_r42 = CPyStatics[138]; /* -1 */
    cpy_r_r43 = CPyDict_Build(3, cpy_r_r37, cpy_r_r42, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF_NO_IMM(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 408, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL94;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL38;
    CPyGen_SetStopIterationValue(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (!0) goto CPyL82;
    CPy_Unreachable();
CPyL38: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r43;
    return 0;
CPyL39: ;
    cpy_r_r45 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "provider", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r45);
CPyL40: ;
    cpy_r_r46 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "method", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r46);
CPyL41: ;
    cpy_r_r47 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "params", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r47);
CPyL42: ;
    cpy_r_r48 = ((faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *)cpy_r_r4)->_func;
    if (unlikely(cpy_r_r48 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'func' of 'async_handle_send_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r48);
    }
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
CPyL43: ;
    PyObject *cpy_r_r49[3] = {cpy_r_r45, cpy_r_r46, cpy_r_r47};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 3, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r52 = CPy_GetCoro(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL94;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23 = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL94;
    }
    cpy_r_r54 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "__mypyc_temp__23", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r54);
CPyL47: ;
    cpy_r_r55 = CPyIter_Next(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (cpy_r_r55 != NULL) goto CPyL50;
    cpy_r_r56 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL94;
    }
    cpy_r_r57 = cpy_r_r56;
    cpy_r_r58 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23 = cpy_r_r58;
    cpy_r_r59 = 1;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL98;
    } else
        goto CPyL72;
CPyL50: ;
    cpy_r_r60 = cpy_r_r55;
CPyL51: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_next_label__ = 1;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    return cpy_r_r60;
CPyL52: ;
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r63 = cpy_r_type != cpy_r_r62;
    if (!cpy_r_r63) goto CPyL99;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL56;
    } else
        goto CPyL100;
CPyL54: ;
    CPy_Unreachable();
CPyL55: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL67;
CPyL56: ;
    cpy_r_r64 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24 = cpy_r_r64;
    cpy_r_r65 = 1;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL101;
    }
    cpy_r_r66 = (PyObject **)&cpy_r_r1;
    cpy_r_r67 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "__mypyc_temp__23", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r67);
CPyL58: ;
    cpy_r_r68 = CPy_YieldFromErrorHandle(cpy_r_r67, cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL101;
    }
    if (cpy_r_r68) goto CPyL62;
    cpy_r_r60 = cpy_r_r1;
    cpy_r_r69 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24;
    if (unlikely(cpy_r_r69.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "__mypyc_temp__24", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r69.f0);
    CPy_INCREF(cpy_r_r69.f1);
    CPy_INCREF(cpy_r_r69.f2);
CPyL61: ;
    CPy_RestoreExcInfo(cpy_r_r69);
    CPy_DecRef(cpy_r_r69.f0);
    CPy_DecRef(cpy_r_r69.f1);
    CPy_DecRef(cpy_r_r69.f2);
    goto CPyL51;
CPyL62: ;
    cpy_r_r57 = cpy_r_r1;
    cpy_r_r70 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24;
    if (unlikely(cpy_r_r70.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "__mypyc_temp__24", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r70.f0);
    CPy_INCREF(cpy_r_r70.f1);
    CPy_INCREF(cpy_r_r70.f2);
CPyL63: ;
    CPy_RestoreExcInfo(cpy_r_r70);
    CPy_DecRef(cpy_r_r70.f0);
    CPy_DecRef(cpy_r_r70.f1);
    CPy_DecRef(cpy_r_r70.f2);
    goto CPyL72;
CPyL64: ;
    cpy_r_r71 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__24;
    if (unlikely(cpy_r_r71.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__24' of 'wrapper_async_handle_send_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r71.f0);
        CPy_INCREF(cpy_r_r71.f1);
        CPy_INCREF(cpy_r_r71.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r71.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL82;
    }
CPyL65: ;
    CPy_RestoreExcInfo(cpy_r_r71);
    CPy_DecRef(cpy_r_r71.f0);
    CPy_DecRef(cpy_r_r71.f1);
    CPy_DecRef(cpy_r_r71.f2);
    cpy_r_r72 = CPy_KeepPropagating();
    if (!cpy_r_r72) goto CPyL82;
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r73 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_temp__23;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_env", "__mypyc_temp__23", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r73);
CPyL68: ;
    cpy_r_r74 = CPyIter_Send(cpy_r_r73, cpy_r_arg);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r74 == NULL) goto CPyL70;
    cpy_r_r60 = cpy_r_r74;
    goto CPyL51;
CPyL70: ;
    cpy_r_r75 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL94;
    }
    cpy_r_r57 = cpy_r_r75;
CPyL72: ;
    if (likely(PyDict_Check(cpy_r_r57)))
        cpy_r_r76 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 409, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r57);
        goto CPyL94;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r2)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL77;
    CPyGen_SetStopIterationValue(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (!0) goto CPyL82;
    CPy_Unreachable();
CPyL77: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r76;
    return 0;
CPyL78: ;
    cpy_r_r78 = cpy_r_r3 == 0;
    if (cpy_r_r78) {
        goto CPyL105;
    } else
        goto CPyL106;
CPyL79: ;
    cpy_r_r79 = cpy_r_r3 == 1;
    if (cpy_r_r79) {
        goto CPyL52;
    } else
        goto CPyL107;
CPyL80: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r80 = 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL82;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r81 = NULL;
    return cpy_r_r81;
CPyL83: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL82;
CPyL84: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL82;
CPyL85: ;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    goto CPyL3;
CPyL86: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL82;
CPyL87: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL82;
CPyL88: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL82;
CPyL89: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL15;
CPyL90: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r20);
    goto CPyL82;
CPyL91: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r22);
    goto CPyL82;
CPyL92: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r30);
    goto CPyL82;
CPyL93: ;
    CPy_DECREF_NO_IMM(cpy_r_r4);
    goto CPyL32;
CPyL94: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL82;
CPyL95: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r45);
    goto CPyL82;
CPyL96: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    goto CPyL82;
CPyL97: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL82;
CPyL98: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r57);
    goto CPyL82;
CPyL99: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL55;
CPyL100: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL54;
CPyL101: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL64;
CPyL102: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL64;
CPyL103: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL64;
CPyL104: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    goto CPyL82;
CPyL105: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL2;
CPyL106: ;
    CPy_DECREF_NO_IMM(cpy_r_r4);
    goto CPyL79;
CPyL107: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL80;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___396", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___396", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "send", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___396", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___396", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "throw", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[27]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[28]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp48 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp48);
    PyObject *__tmp49 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp49);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___396", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "close", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___396", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_send_caching_obj", "__mypyc_env__", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_method);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__method != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__method);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__method = cpy_r_method;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_params);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__params);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__params = cpy_r_params;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    cpy_r_r6 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    CPy_INCREF_NO_IMM(cpy_r_r1);
    if (((faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *)cpy_r_r6)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *)cpy_r_r6)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL12;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *)cpy_r_r1)->___mypyc_next_label__ = 0;
    CPy_DECREF_NO_IMM(cpy_r_r1);
    return cpy_r_r6;
CPyL9: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"provider", "method", "params", 0};
    static CPyArg_Parser parser = {"OOO:__call__", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_method;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_provider, &obj_method, &obj_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_provider = obj_provider;
    PyObject *arg_method;
    if (likely(PyUnicode_Check(obj_method)))
        arg_method = obj_method;
    else {
        CPy_TypeError("str", obj_method); 
        goto fail;
    }
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__(arg___mypyc_self__, arg_provider, arg_method, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching(PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_wrapper;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_send_caching", 390, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_func);
    if (((faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *)cpy_r_r0)->_func != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *)cpy_r_r0)->_func);
    }
    ((faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *)cpy_r_r0)->_func = cpy_r_func;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_send_caching", 390, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_send_caching", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_send_caching", 396, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    cpy_r_wrapper = cpy_r_r2;
    cpy_r_r4 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r5 = CPyStatics[35]; /* 'async_handle_send_caching' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_send_caching", 412, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    cpy_r_r7 = CPyStatics[26]; /* '_decorator' */
    cpy_r_r8 = PyObject_SetAttr(cpy_r_wrapper, cpy_r_r7, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_send_caching", 412, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    return cpy_r_wrapper;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_wrapper);
    goto CPyL7;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_handle_send_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:async_handle_send_caching", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_func = obj_func;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching(arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_send_caching", 390, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__get__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T3OOO cpy_r_r12;
    tuple_T3OOO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    char cpy_r_r81;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    tuple_T3OOO cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    char cpy_r_r114;
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    tuple_T3OOO cpy_r_r118;
    tuple_T3OOO cpy_r_r119;
    tuple_T3OOO cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject **cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    tuple_T3OOO cpy_r_r152;
    char cpy_r_r153;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    tuple_T3OOO cpy_r_r157;
    tuple_T3OOO cpy_r_r158;
    tuple_T3OOO cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    tuple_T2OO cpy_r_r167;
    tuple_T3OOO cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    tuple_T3OOO cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject **cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    tuple_T3OOO cpy_r_r192;
    char cpy_r_r193;
    PyObject **cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    tuple_T3OOO cpy_r_r197;
    tuple_T3OOO cpy_r_r198;
    tuple_T3OOO cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    tuple_T3OOO cpy_r_r207;
    tuple_T3OOO cpy_r_r208;
    char cpy_r_r209;
    tuple_T3OOO cpy_r_r210;
    tuple_T3OOO cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject **cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    tuple_T3OOO cpy_r_r231;
    char cpy_r_r232;
    PyObject **cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    tuple_T3OOO cpy_r_r236;
    tuple_T3OOO cpy_r_r237;
    tuple_T3OOO cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject **cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    tuple_T3OOO cpy_r_r264;
    char cpy_r_r265;
    PyObject **cpy_r_r266;
    PyObject *cpy_r_r267;
    char cpy_r_r268;
    tuple_T3OOO cpy_r_r269;
    tuple_T3OOO cpy_r_r270;
    tuple_T3OOO cpy_r_r271;
    char cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    char cpy_r_r277;
    char cpy_r_r278;
    char cpy_r_r279;
    char cpy_r_r280;
    char cpy_r_r281;
    char cpy_r_r282;
    char cpy_r_r283;
    char cpy_r_r284;
    char cpy_r_r285;
    PyObject *cpy_r_r286;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    CPy_XDECREF(cpy_r_r3);
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    cpy_r_r8 = NULL;
    cpy_r_r9 = cpy_r_r8;
    cpy_r_r10 = NULL;
    cpy_r_r11 = cpy_r_r10;
    tuple_T3OOO __tmp50 = { NULL, NULL, NULL };
    cpy_r_r12 = __tmp50;
    cpy_r_r13 = cpy_r_r12;
    cpy_r_r14 = NULL;
    cpy_r_r15 = cpy_r_r14;
    cpy_r_r16 = ((faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_gen___422", "__mypyc_env__", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL291;
    }
    CPy_INCREF_NO_IMM(cpy_r_r16);
CPyL1: ;
    cpy_r_r17 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__;
    cpy_r_r18 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_env__;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_env__", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL292;
    }
    CPy_INCREF_NO_IMM(cpy_r_r18);
    goto CPyL281;
CPyL2: ;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_type != cpy_r_r19;
    if (cpy_r_r20) {
        goto CPyL293;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r21 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__rpc_request;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "rpc_request", 426, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r21);
CPyL6: ;
    cpy_r_r22 = CPyStatics[33]; /* 'method' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 426, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 426, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r23);
        goto CPyL294;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 426, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r26 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__rpc_request;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "rpc_request", 427, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r26);
CPyL10: ;
    cpy_r_r27 = CPyStatics[34]; /* 'params' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 427, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 427, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r30 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "provider", 428, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r30);
CPyL13: ;
    cpy_r_r31 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "method", 428, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL295;
    }
    CPy_INCREF(cpy_r_r31);
CPyL14: ;
    cpy_r_r32 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "params", 428, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL296;
    }
    CPy_INCREF(cpy_r_r32);
CPyL15: ;
    cpy_r_r33 = CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request(cpy_r_r30, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 428, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (!cpy_r_r33) goto CPyL243;
    cpy_r_r34 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "provider", 429, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r34);
CPyL18: ;
    cpy_r_r35 = CPyStatics[20]; /* '_request_cache' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 429, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r36, *exports_faster_web3.CPyType_faster_web3___utils___caching___SimpleCache)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 429, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "faster_web3.utils.caching.SimpleCache", cpy_r_r36);
        goto CPyL294;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache = cpy_r_r37;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 429, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r39 = CPyStatic_faster_web3____utils___caching___caching_utils___get_ident;
    if (unlikely(cpy_r_r39 == NULL)) {
        goto CPyL297;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"get_ident\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r41 = PyObject_Vectorcall(cpy_r_r39, 0, 0, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (likely(PyLong_Check(cpy_r_r41)))
        cpy_r_r42 = CPyTagged_FromObject(cpy_r_r41);
    else {
        CPy_TypeError("int", cpy_r_r41); cpy_r_r42 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r43 = CPyTagged_Str(cpy_r_r42);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r44 = CPyStatics[21]; /* ':' */
    cpy_r_r45 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "method", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL298;
    }
    CPy_INCREF(cpy_r_r45);
CPyL28: ;
    cpy_r_r46 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "params", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL299;
    }
    CPy_INCREF(cpy_r_r46);
CPyL29: ;
    cpy_r_r47.f0 = cpy_r_r45;
    cpy_r_r47.f1 = cpy_r_r46;
    cpy_r_r48 = PyTuple_New(2);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp51 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r48, 0, __tmp51);
    PyObject *__tmp52 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r48, 1, __tmp52);
    cpy_r_r49 = PyObject_Str(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL298;
    }
    cpy_r_r50 = CPyStr_Build(3, cpy_r_r43, cpy_r_r44, cpy_r_r49);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 431, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r51 = CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 430, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key = cpy_r_r51;
    cpy_r_r52 = 1;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 430, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r53 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "request_cache", 433, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF_NO_IMM(cpy_r_r53);
CPyL34: ;
    cpy_r_r54 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "cache_key", 433, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL300;
    }
    CPy_INCREF(cpy_r_r54);
CPyL35: ;
    cpy_r_r55 = exports_faster_web3.CPyDef_faster_web3___utils___caching___SimpleCache___get_cache_entry(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF_NO_IMM(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 433, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result = cpy_r_r55;
    cpy_r_r56 = 1;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 433, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r57 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "cache_result", 434, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r57);
CPyL38: ;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_r57 != cpy_r_r58;
    CPy_DECREF(cpy_r_r57);
    if (cpy_r_r59) {
        goto CPyL301;
    } else
        goto CPyL45;
CPyL39: ;
    cpy_r_r60 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_result;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "cache_result", 435, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r60);
CPyL40: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL44;
    CPyGen_SetStopIterationValue(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (!0) goto CPyL290;
    CPy_Unreachable();
CPyL44: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r60;
    return 0;
CPyL45: ;
    cpy_r_r62 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "provider", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r62);
CPyL46: ;
    cpy_r_r63 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__rpc_request;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "rpc_request", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL303;
    }
    CPy_INCREF(cpy_r_r63);
CPyL47: ;
    cpy_r_r64 = ((faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *)cpy_r_r18)->_func;
    if (unlikely(cpy_r_r64 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'func' of 'async_handle_recv_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r64);
    }
    CPy_DECREF_NO_IMM(cpy_r_r18);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL304;
    }
CPyL48: ;
    PyObject *cpy_r_r65[2] = {cpy_r_r62, cpy_r_r63};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = PyObject_Vectorcall(cpy_r_r64, cpy_r_r66, 2, 0);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL304;
    }
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r68 = CPy_GetCoro(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25 = cpy_r_r68;
    cpy_r_r69 = 1;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r70 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__25", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r70);
CPyL52: ;
    cpy_r_r71 = CPyIter_Next(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (cpy_r_r71 != NULL) goto CPyL55;
    cpy_r_r72 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r73 = cpy_r_r72;
    cpy_r_r74 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25 = cpy_r_r74;
    cpy_r_r75 = 1;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL305;
    } else
        goto CPyL77;
CPyL55: ;
    cpy_r_r76 = cpy_r_r71;
CPyL56: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r76;
CPyL57: ;
    cpy_r_r78 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r79 = cpy_r_type != cpy_r_r78;
    if (!cpy_r_r79) goto CPyL306;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL61;
    } else
        goto CPyL307;
CPyL59: ;
    CPy_Unreachable();
CPyL60: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL72;
CPyL61: ;
    cpy_r_r80 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26 = cpy_r_r80;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL308;
    }
    cpy_r_r82 = (PyObject **)&cpy_r_r1;
    cpy_r_r83 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__25", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL308;
    }
    CPy_INCREF(cpy_r_r83);
CPyL63: ;
    cpy_r_r84 = CPy_YieldFromErrorHandle(cpy_r_r83, cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL308;
    }
    if (cpy_r_r84) goto CPyL67;
    cpy_r_r76 = cpy_r_r1;
    cpy_r_r85 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26;
    if (unlikely(cpy_r_r85.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__26", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL309;
    }
    CPy_INCREF(cpy_r_r85.f0);
    CPy_INCREF(cpy_r_r85.f1);
    CPy_INCREF(cpy_r_r85.f2);
CPyL66: ;
    CPy_RestoreExcInfo(cpy_r_r85);
    CPy_DecRef(cpy_r_r85.f0);
    CPy_DecRef(cpy_r_r85.f1);
    CPy_DecRef(cpy_r_r85.f2);
    goto CPyL56;
CPyL67: ;
    cpy_r_r73 = cpy_r_r1;
    cpy_r_r86 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26;
    if (unlikely(cpy_r_r86.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__26", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL310;
    }
    CPy_INCREF(cpy_r_r86.f0);
    CPy_INCREF(cpy_r_r86.f1);
    CPy_INCREF(cpy_r_r86.f2);
CPyL68: ;
    CPy_RestoreExcInfo(cpy_r_r86);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    goto CPyL77;
CPyL69: ;
    cpy_r_r87 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__26;
    if (unlikely(cpy_r_r87.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__26' of 'wrapper_async_handle_recv_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r87.f0);
        CPy_INCREF(cpy_r_r87.f1);
        CPy_INCREF(cpy_r_r87.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r87.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
CPyL70: ;
    CPy_RestoreExcInfo(cpy_r_r87);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    cpy_r_r88 = CPy_KeepPropagating();
    if (!cpy_r_r88) goto CPyL290;
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r89 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__25;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__25", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL311;
    }
    CPy_INCREF(cpy_r_r89);
CPyL73: ;
    cpy_r_r90 = CPyIter_Send(cpy_r_r89, cpy_r_arg);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r90 == NULL) goto CPyL75;
    cpy_r_r76 = cpy_r_r90;
    goto CPyL56;
CPyL75: ;
    cpy_r_r91 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r73 = cpy_r_r91;
CPyL77: ;
    if (likely(PyDict_Check(cpy_r_r73)))
        cpy_r_r92 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r73);
        goto CPyL302;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response = cpy_r_r92;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 437, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r94 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "provider", 439, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r94);
CPyL80: ;
    cpy_r_r95 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__method;
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "method", 439, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL312;
    }
    CPy_INCREF(cpy_r_r95);
CPyL81: ;
    cpy_r_r96 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__params;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "params", 439, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL313;
    }
    CPy_INCREF(cpy_r_r96);
CPyL82: ;
    cpy_r_r97 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "response", 439, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL314;
    }
    CPy_INCREF(cpy_r_r97);
CPyL83: ;
    cpy_r_r98 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response(cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 438, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27 = cpy_r_r98;
    cpy_r_r99 = 1;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r100 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__27", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF_NO_IMM(cpy_r_r100);
CPyL86: ;
    cpy_r_r101 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r102 = NULL;
    cpy_r_r3 = cpy_r_r102;
    cpy_r_r103 = (PyObject **)&cpy_r_r3;
    cpy_r_r104 = CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__(cpy_r_r100, cpy_r_r101, cpy_r_r101, cpy_r_r101, cpy_r_r101, cpy_r_r103);
    CPy_DECREF_NO_IMM(cpy_r_r100);
    if (cpy_r_r104 != NULL) goto CPyL315;
    cpy_r_r105 = cpy_r_r3 != 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL316;
    }
    cpy_r_r106 = cpy_r_r3;
    cpy_r_r107 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27 != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27 = cpy_r_r107;
    cpy_r_r108 = 1;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 438, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL317;
    } else
        goto CPyL111;
CPyL89: ;
    cpy_r_r109 = cpy_r_r104;
CPyL90: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 2;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r109;
CPyL91: ;
    cpy_r_r111 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r112 = cpy_r_type != cpy_r_r111;
    if (!cpy_r_r112) goto CPyL318;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 438, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL95;
    } else
        goto CPyL319;
CPyL93: ;
    CPy_Unreachable();
CPyL94: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL106;
CPyL95: ;
    cpy_r_r113 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28 = cpy_r_r113;
    cpy_r_r114 = 1;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL320;
    }
    cpy_r_r115 = (PyObject **)&cpy_r_r5;
    cpy_r_r116 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27;
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__27", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL320;
    }
    CPy_INCREF_NO_IMM(cpy_r_r116);
CPyL97: ;
    cpy_r_r117 = CPy_YieldFromErrorHandle(cpy_r_r116, cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 438, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL320;
    }
    if (cpy_r_r117) goto CPyL101;
    cpy_r_r109 = cpy_r_r5;
    cpy_r_r118 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28;
    if (unlikely(cpy_r_r118.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__28", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL321;
    }
    CPy_INCREF(cpy_r_r118.f0);
    CPy_INCREF(cpy_r_r118.f1);
    CPy_INCREF(cpy_r_r118.f2);
CPyL100: ;
    CPy_RestoreExcInfo(cpy_r_r118);
    CPy_DecRef(cpy_r_r118.f0);
    CPy_DecRef(cpy_r_r118.f1);
    CPy_DecRef(cpy_r_r118.f2);
    goto CPyL90;
CPyL101: ;
    cpy_r_r106 = cpy_r_r5;
    cpy_r_r119 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28;
    if (unlikely(cpy_r_r119.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__28", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL322;
    }
    CPy_INCREF(cpy_r_r119.f0);
    CPy_INCREF(cpy_r_r119.f1);
    CPy_INCREF(cpy_r_r119.f2);
CPyL102: ;
    CPy_RestoreExcInfo(cpy_r_r119);
    CPy_DecRef(cpy_r_r119.f0);
    CPy_DecRef(cpy_r_r119.f1);
    CPy_DecRef(cpy_r_r119.f2);
    goto CPyL111;
CPyL103: ;
    cpy_r_r120 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__28;
    if (unlikely(cpy_r_r120.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__28' of 'wrapper_async_handle_recv_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r120.f0);
        CPy_INCREF(cpy_r_r120.f1);
        CPy_INCREF(cpy_r_r120.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r120.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
CPyL104: ;
    CPy_RestoreExcInfo(cpy_r_r120);
    CPy_DecRef(cpy_r_r120.f0);
    CPy_DecRef(cpy_r_r120.f1);
    CPy_DecRef(cpy_r_r120.f2);
    cpy_r_r121 = CPy_KeepPropagating();
    if (!cpy_r_r121) goto CPyL290;
    CPy_Unreachable();
CPyL106: ;
    cpy_r_r122 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__27;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__27", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL323;
    }
    CPy_INCREF_NO_IMM(cpy_r_r122);
CPyL107: ;
    cpy_r_r123 = CPyIter_Send(cpy_r_r122, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r122);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r123 == NULL) goto CPyL109;
    cpy_r_r109 = cpy_r_r123;
    goto CPyL90;
CPyL109: ;
    cpy_r_r124 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 438, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r106 = cpy_r_r124;
CPyL111: ;
    if (unlikely(!PyBool_Check(cpy_r_r106))) {
        CPy_TypeError("bool", cpy_r_r106); cpy_r_r125 = 2;
    } else
        cpy_r_r125 = cpy_r_r106 == Py_True;
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 438, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    if (!cpy_r_r125) goto CPyL237;
    cpy_r_r126 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "provider", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r126);
CPyL114: ;
    cpy_r_r127 = CPyStatics[22]; /* '_request_cache_lock' */
    cpy_r_r128 = CPyObject_GetAttr(cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r129 = CPy_TYPE(cpy_r_r128);
    cpy_r_r130 = CPyStatics[29]; /* '__aexit__' */
    cpy_r_r131 = CPyObject_GetAttr(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL324;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__29 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__29);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__29 = cpy_r_r131;
    cpy_r_r132 = 1;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL324;
    }
    cpy_r_r133 = CPyStatics[30]; /* '__aenter__' */
    cpy_r_r134 = CPyObject_GetAttr(cpy_r_r129, cpy_r_r133);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL325;
    }
    PyObject *cpy_r_r135[1] = {cpy_r_r128};
    cpy_r_r136 = (PyObject **)&cpy_r_r135;
    cpy_r_r137 = PyObject_Vectorcall(cpy_r_r134, cpy_r_r136, 1, 0);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL325;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__30 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__30);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__30 = cpy_r_r128;
    cpy_r_r138 = 1;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL326;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__31 = 1;
    cpy_r_r139 = 1;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL326;
    }
    cpy_r_r140 = CPy_GetCoro(cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32 = cpy_r_r140;
    cpy_r_r141 = 1;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r142 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32;
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__32", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r142);
CPyL124: ;
    cpy_r_r143 = CPyIter_Next(cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    if (cpy_r_r143 != NULL) goto CPyL127;
    cpy_r_r144 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r145 = cpy_r_r144;
    CPy_DECREF(cpy_r_r145);
    cpy_r_r146 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32 = cpy_r_r146;
    cpy_r_r147 = 1;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    } else
        goto CPyL149;
CPyL127: ;
    cpy_r_r148 = cpy_r_r143;
CPyL128: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 3;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r148;
CPyL129: ;
    cpy_r_r150 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r151 = cpy_r_type != cpy_r_r150;
    if (!cpy_r_r151) goto CPyL327;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL133;
    } else
        goto CPyL328;
CPyL131: ;
    CPy_Unreachable();
CPyL132: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL144;
CPyL133: ;
    cpy_r_r152 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33 = cpy_r_r152;
    cpy_r_r153 = 1;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL329;
    }
    cpy_r_r154 = (PyObject **)&cpy_r_r7;
    cpy_r_r155 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32;
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__32", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL329;
    }
    CPy_INCREF(cpy_r_r155);
CPyL135: ;
    cpy_r_r156 = CPy_YieldFromErrorHandle(cpy_r_r155, cpy_r_r154);
    CPy_DecRef(cpy_r_r155);
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL329;
    }
    if (cpy_r_r156) goto CPyL139;
    cpy_r_r148 = cpy_r_r7;
    cpy_r_r157 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33;
    if (unlikely(cpy_r_r157.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__33", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_r157.f0);
    CPy_INCREF(cpy_r_r157.f1);
    CPy_INCREF(cpy_r_r157.f2);
CPyL138: ;
    CPy_RestoreExcInfo(cpy_r_r157);
    CPy_DecRef(cpy_r_r157.f0);
    CPy_DecRef(cpy_r_r157.f1);
    CPy_DecRef(cpy_r_r157.f2);
    goto CPyL128;
CPyL139: ;
    cpy_r_r145 = cpy_r_r7;
    CPy_DecRef(cpy_r_r145);
    cpy_r_r158 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33;
    if (unlikely(cpy_r_r158.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__33", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r158.f0);
    CPy_INCREF(cpy_r_r158.f1);
    CPy_INCREF(cpy_r_r158.f2);
CPyL140: ;
    CPy_RestoreExcInfo(cpy_r_r158);
    CPy_DecRef(cpy_r_r158.f0);
    CPy_DecRef(cpy_r_r158.f1);
    CPy_DecRef(cpy_r_r158.f2);
    goto CPyL149;
CPyL141: ;
    cpy_r_r159 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__33;
    if (unlikely(cpy_r_r159.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__33' of 'wrapper_async_handle_recv_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r159.f0);
        CPy_INCREF(cpy_r_r159.f1);
        CPy_INCREF(cpy_r_r159.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r159.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
CPyL142: ;
    CPy_RestoreExcInfo(cpy_r_r159);
    CPy_DecRef(cpy_r_r159.f0);
    CPy_DecRef(cpy_r_r159.f1);
    CPy_DecRef(cpy_r_r159.f2);
    cpy_r_r160 = CPy_KeepPropagating();
    if (!cpy_r_r160) goto CPyL290;
    CPy_Unreachable();
CPyL144: ;
    cpy_r_r161 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__32;
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__32", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL331;
    }
    CPy_INCREF(cpy_r_r161);
CPyL145: ;
    cpy_r_r162 = CPyIter_Send(cpy_r_r161, cpy_r_arg);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r162 == NULL) goto CPyL147;
    cpy_r_r148 = cpy_r_r162;
    goto CPyL128;
CPyL147: ;
    cpy_r_r163 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r145 = cpy_r_r163;
    CPy_DECREF(cpy_r_r145);
CPyL149: ;
    cpy_r_r164 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__request_cache;
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "request_cache", 442, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL153;
    }
    CPy_INCREF_NO_IMM(cpy_r_r164);
CPyL150: ;
    cpy_r_r165 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__cache_key;
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "cache_key", 442, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL332;
    }
    CPy_INCREF(cpy_r_r165);
CPyL151: ;
    cpy_r_r166 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "response", 442, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL333;
    }
    CPy_INCREF(cpy_r_r166);
CPyL152: ;
    cpy_r_r167 = exports_faster_web3.CPyDef_faster_web3___utils___caching___SimpleCache___cache(cpy_r_r164, cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r166);
    CPy_DECREF_NO_IMM(cpy_r_r164);
    if (unlikely(cpy_r_r167.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 442, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    } else
        goto CPyL334;
CPyL153: ;
    cpy_r_r168 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__34.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__34.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__34.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__34.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__34 = cpy_r_r168;
    cpy_r_r169 = 1;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__31 = 0;
    cpy_r_r170 = 1;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    cpy_r_r171 = CPy_GetExcInfo();
    cpy_r_r172 = cpy_r_r171.f0;
    CPy_INCREF(cpy_r_r172);
    cpy_r_r173 = cpy_r_r171.f1;
    CPy_INCREF(cpy_r_r173);
    cpy_r_r174 = cpy_r_r171.f2;
    CPy_INCREF(cpy_r_r174);
    CPy_DecRef(cpy_r_r171.f0);
    CPy_DecRef(cpy_r_r171.f1);
    CPy_DecRef(cpy_r_r171.f2);
    cpy_r_r175 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__29;
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__29", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL335;
    }
    CPy_INCREF(cpy_r_r175);
CPyL156: ;
    cpy_r_r176 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__30;
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__30", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL336;
    }
    CPy_INCREF(cpy_r_r176);
CPyL157: ;
    PyObject *cpy_r_r177[4] = {cpy_r_r176, cpy_r_r172, cpy_r_r173, cpy_r_r174};
    cpy_r_r178 = (PyObject **)&cpy_r_r177;
    cpy_r_r179 = PyObject_Vectorcall(cpy_r_r175, cpy_r_r178, 4, 0);
    CPy_DecRef(cpy_r_r175);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL337;
    }
    CPy_DecRef(cpy_r_r176);
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r174);
    cpy_r_r180 = CPy_GetCoro(cpy_r_r179);
    CPy_DecRef(cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35 = cpy_r_r180;
    cpy_r_r181 = 1;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    cpy_r_r182 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35;
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__35", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    CPy_INCREF(cpy_r_r182);
CPyL161: ;
    cpy_r_r183 = CPyIter_Next(cpy_r_r182);
    CPy_DecRef(cpy_r_r182);
    if (cpy_r_r183 != NULL) goto CPyL164;
    cpy_r_r184 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    cpy_r_r185 = cpy_r_r184;
    cpy_r_r186 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35 = cpy_r_r186;
    cpy_r_r187 = 1;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL338;
    } else
        goto CPyL186;
CPyL164: ;
    cpy_r_r188 = cpy_r_r183;
CPyL165: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 4;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r188;
CPyL166: ;
    cpy_r_r190 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r191 = cpy_r_type != cpy_r_r190;
    if (!cpy_r_r191) goto CPyL339;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL170;
    } else
        goto CPyL340;
CPyL168: ;
    CPy_Unreachable();
CPyL169: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL181;
CPyL170: ;
    cpy_r_r192 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36 = cpy_r_r192;
    cpy_r_r193 = 1;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL341;
    }
    cpy_r_r194 = (PyObject **)&cpy_r_r9;
    cpy_r_r195 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35;
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__35", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL341;
    }
    CPy_INCREF(cpy_r_r195);
CPyL172: ;
    cpy_r_r196 = CPy_YieldFromErrorHandle(cpy_r_r195, cpy_r_r194);
    CPy_DecRef(cpy_r_r195);
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL341;
    }
    if (cpy_r_r196) goto CPyL176;
    cpy_r_r188 = cpy_r_r9;
    cpy_r_r197 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36;
    if (unlikely(cpy_r_r197.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__36", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL342;
    }
    CPy_INCREF(cpy_r_r197.f0);
    CPy_INCREF(cpy_r_r197.f1);
    CPy_INCREF(cpy_r_r197.f2);
CPyL175: ;
    CPy_RestoreExcInfo(cpy_r_r197);
    CPy_DecRef(cpy_r_r197.f0);
    CPy_DecRef(cpy_r_r197.f1);
    CPy_DecRef(cpy_r_r197.f2);
    goto CPyL165;
CPyL176: ;
    cpy_r_r185 = cpy_r_r9;
    cpy_r_r198 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36;
    if (unlikely(cpy_r_r198.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__36", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL343;
    }
    CPy_INCREF(cpy_r_r198.f0);
    CPy_INCREF(cpy_r_r198.f1);
    CPy_INCREF(cpy_r_r198.f2);
CPyL177: ;
    CPy_RestoreExcInfo(cpy_r_r198);
    CPy_DecRef(cpy_r_r198.f0);
    CPy_DecRef(cpy_r_r198.f1);
    CPy_DecRef(cpy_r_r198.f2);
    goto CPyL186;
CPyL178: ;
    cpy_r_r199 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__36;
    if (unlikely(cpy_r_r199.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__36", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    CPy_INCREF(cpy_r_r199.f0);
    CPy_INCREF(cpy_r_r199.f1);
    CPy_INCREF(cpy_r_r199.f2);
CPyL179: ;
    CPy_RestoreExcInfo(cpy_r_r199);
    CPy_DecRef(cpy_r_r199.f0);
    CPy_DecRef(cpy_r_r199.f1);
    CPy_DecRef(cpy_r_r199.f2);
    cpy_r_r200 = CPy_KeepPropagating();
    if (!cpy_r_r200) {
        goto CPyL192;
    } else
        goto CPyL344;
CPyL180: ;
    CPy_Unreachable();
CPyL181: ;
    cpy_r_r201 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__35;
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__35", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL345;
    }
    CPy_INCREF(cpy_r_r201);
CPyL182: ;
    cpy_r_r202 = CPyIter_Send(cpy_r_r201, cpy_r_arg);
    CPy_DECREF(cpy_r_r201);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r202 == NULL) goto CPyL184;
    cpy_r_r188 = cpy_r_r202;
    goto CPyL165;
CPyL184: ;
    cpy_r_r203 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    cpy_r_r185 = cpy_r_r203;
CPyL186: ;
    cpy_r_r204 = PyObject_IsTrue(cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL192;
    }
    cpy_r_r206 = cpy_r_r204;
    if (cpy_r_r206) goto CPyL190;
    CPy_Reraise();
    if (!0) {
        goto CPyL192;
    } else
        goto CPyL346;
CPyL189: ;
    CPy_Unreachable();
CPyL190: ;
    cpy_r_r207 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__34;
    if (unlikely(cpy_r_r207.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__34", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL196;
    }
    CPy_INCREF(cpy_r_r207.f0);
    CPy_INCREF(cpy_r_r207.f1);
    CPy_INCREF(cpy_r_r207.f2);
CPyL191: ;
    CPy_RestoreExcInfo(cpy_r_r207);
    CPy_DECREF(cpy_r_r207.f0);
    CPy_DECREF(cpy_r_r207.f1);
    CPy_DECREF(cpy_r_r207.f2);
    goto CPyL195;
CPyL192: ;
    cpy_r_r208 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__34;
    if (unlikely(cpy_r_r208.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__34", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL196;
    }
    CPy_INCREF(cpy_r_r208.f0);
    CPy_INCREF(cpy_r_r208.f1);
    CPy_INCREF(cpy_r_r208.f2);
CPyL193: ;
    CPy_RestoreExcInfo(cpy_r_r208);
    CPy_DECREF(cpy_r_r208.f0);
    CPy_DECREF(cpy_r_r208.f1);
    CPy_DECREF(cpy_r_r208.f2);
    cpy_r_r209 = CPy_KeepPropagating();
    if (!cpy_r_r209) {
        goto CPyL196;
    } else
        goto CPyL347;
CPyL194: ;
    CPy_Unreachable();
CPyL195: ;
    tuple_T3OOO __tmp53 = { NULL, NULL, NULL };
    cpy_r_r210 = __tmp53;
    cpy_r_r13 = cpy_r_r210;
    goto CPyL197;
CPyL196: ;
    cpy_r_r211 = CPy_CatchError();
    cpy_r_r13 = cpy_r_r211;
CPyL197: ;
    cpy_r_r212 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__31;
    if (unlikely(cpy_r_r212 == 2)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__31", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    }
CPyL198: ;
    if (!cpy_r_r212) goto CPyL230;
CPyL199: ;
    cpy_r_r213 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r214 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__29;
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__29", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    }
    CPy_INCREF(cpy_r_r214);
CPyL200: ;
    cpy_r_r215 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__30;
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__30", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL349;
    }
    CPy_INCREF(cpy_r_r215);
CPyL201: ;
    PyObject *cpy_r_r216[4] = {cpy_r_r215, cpy_r_r213, cpy_r_r213, cpy_r_r213};
    cpy_r_r217 = (PyObject **)&cpy_r_r216;
    cpy_r_r218 = PyObject_Vectorcall(cpy_r_r214, cpy_r_r217, 4, 0);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL350;
    }
    CPy_DECREF(cpy_r_r215);
    cpy_r_r219 = CPy_GetCoro(cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37 = cpy_r_r219;
    cpy_r_r220 = 1;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    }
    cpy_r_r221 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37;
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__37", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    }
    CPy_INCREF(cpy_r_r221);
CPyL205: ;
    cpy_r_r222 = CPyIter_Next(cpy_r_r221);
    CPy_DECREF(cpy_r_r221);
    if (cpy_r_r222 != NULL) goto CPyL351;
    cpy_r_r223 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    }
    cpy_r_r224 = cpy_r_r223;
    CPy_DECREF(cpy_r_r224);
    cpy_r_r225 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37 = cpy_r_r225;
    cpy_r_r226 = 1;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    } else
        goto CPyL230;
CPyL208: ;
    cpy_r_r227 = cpy_r_r222;
CPyL209: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 5;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r227;
CPyL210: ;
    cpy_r_r229 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r230 = cpy_r_type != cpy_r_r229;
    if (!cpy_r_r230) goto CPyL352;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL214;
    } else
        goto CPyL353;
CPyL212: ;
    CPy_Unreachable();
CPyL213: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL225;
CPyL214: ;
    cpy_r_r231 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38 = cpy_r_r231;
    cpy_r_r232 = 1;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL354;
    }
    cpy_r_r233 = (PyObject **)&cpy_r_r11;
    cpy_r_r234 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37;
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__37", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL354;
    }
    CPy_INCREF(cpy_r_r234);
CPyL216: ;
    cpy_r_r235 = CPy_YieldFromErrorHandle(cpy_r_r234, cpy_r_r233);
    CPy_DecRef(cpy_r_r234);
    if (unlikely(cpy_r_r235 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL354;
    }
    if (cpy_r_r235) goto CPyL220;
    cpy_r_r227 = cpy_r_r11;
    cpy_r_r236 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38;
    if (unlikely(cpy_r_r236.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__38", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL355;
    }
    CPy_INCREF(cpy_r_r236.f0);
    CPy_INCREF(cpy_r_r236.f1);
    CPy_INCREF(cpy_r_r236.f2);
    goto CPyL356;
CPyL219: ;
    CPy_RestoreExcInfo(cpy_r_r236);
    CPy_DecRef(cpy_r_r236.f0);
    CPy_DecRef(cpy_r_r236.f1);
    CPy_DecRef(cpy_r_r236.f2);
    goto CPyL209;
CPyL220: ;
    cpy_r_r224 = cpy_r_r11;
    CPy_DecRef(cpy_r_r224);
    cpy_r_r237 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38;
    if (unlikely(cpy_r_r237.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__38", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL222;
    }
    CPy_INCREF(cpy_r_r237.f0);
    CPy_INCREF(cpy_r_r237.f1);
    CPy_INCREF(cpy_r_r237.f2);
CPyL221: ;
    CPy_RestoreExcInfo(cpy_r_r237);
    CPy_DecRef(cpy_r_r237.f0);
    CPy_DecRef(cpy_r_r237.f1);
    CPy_DecRef(cpy_r_r237.f2);
    goto CPyL230;
CPyL222: ;
    cpy_r_r238 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__38;
    if (unlikely(cpy_r_r238.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__38' of 'wrapper_async_handle_recv_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r238.f0);
        CPy_INCREF(cpy_r_r238.f1);
        CPy_INCREF(cpy_r_r238.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r238.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL233;
    }
CPyL223: ;
    CPy_RestoreExcInfo(cpy_r_r238);
    CPy_DecRef(cpy_r_r238.f0);
    CPy_DecRef(cpy_r_r238.f1);
    CPy_DecRef(cpy_r_r238.f2);
    cpy_r_r239 = CPy_KeepPropagating();
    if (!cpy_r_r239) {
        goto CPyL233;
    } else
        goto CPyL357;
CPyL224: ;
    CPy_Unreachable();
CPyL225: ;
    cpy_r_r240 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__37;
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__37", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL358;
    }
    CPy_INCREF(cpy_r_r240);
CPyL226: ;
    cpy_r_r241 = CPyIter_Send(cpy_r_r240, cpy_r_arg);
    CPy_DECREF(cpy_r_r240);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r241 == NULL) {
        goto CPyL228;
    } else
        goto CPyL359;
CPyL227: ;
    cpy_r_r227 = cpy_r_r241;
    goto CPyL209;
CPyL228: ;
    cpy_r_r242 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 441, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL348;
    }
    cpy_r_r224 = cpy_r_r242;
    CPy_DECREF(cpy_r_r224);
CPyL230: ;
    if (cpy_r_r13.f0 == NULL) {
        goto CPyL237;
    } else
        goto CPyL360;
CPyL231: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL233;
    } else
        goto CPyL361;
CPyL232: ;
    CPy_Unreachable();
CPyL233: ;
    if (cpy_r_r13.f0 == NULL) goto CPyL235;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
CPyL235: ;
    cpy_r_r243 = CPy_KeepPropagating();
    if (!cpy_r_r243) goto CPyL290;
    CPy_Unreachable();
CPyL237: ;
    cpy_r_r244 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__response;
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "response", 443, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r244);
CPyL238: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL242;
    CPyGen_SetStopIterationValue(cpy_r_r244);
    CPy_DECREF(cpy_r_r244);
    if (!0) goto CPyL290;
    CPy_Unreachable();
CPyL242: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r244;
    return 0;
CPyL243: ;
    cpy_r_r246 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__provider;
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "provider", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r246);
CPyL244: ;
    cpy_r_r247 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_generator_attribute__rpc_request;
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "rpc_request", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL362;
    }
    CPy_INCREF(cpy_r_r247);
CPyL245: ;
    cpy_r_r248 = ((faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *)cpy_r_r18)->_func;
    if (unlikely(cpy_r_r248 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'func' of 'async_handle_recv_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r248);
    }
    CPy_DECREF_NO_IMM(cpy_r_r18);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL363;
    }
CPyL246: ;
    PyObject *cpy_r_r249[2] = {cpy_r_r246, cpy_r_r247};
    cpy_r_r250 = (PyObject **)&cpy_r_r249;
    cpy_r_r251 = PyObject_Vectorcall(cpy_r_r248, cpy_r_r250, 2, 0);
    CPy_DECREF(cpy_r_r248);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL363;
    }
    CPy_DECREF(cpy_r_r246);
    CPy_DECREF(cpy_r_r247);
    cpy_r_r252 = CPy_GetCoro(cpy_r_r251);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39 = cpy_r_r252;
    cpy_r_r253 = 1;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r254 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39;
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__39", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r254);
CPyL250: ;
    cpy_r_r255 = CPyIter_Next(cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    if (cpy_r_r255 != NULL) goto CPyL253;
    cpy_r_r256 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r257 = cpy_r_r256;
    cpy_r_r258 = NULL;
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39 = cpy_r_r258;
    cpy_r_r259 = 1;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL364;
    } else
        goto CPyL275;
CPyL253: ;
    cpy_r_r260 = cpy_r_r255;
CPyL254: ;
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = 6;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    return cpy_r_r260;
CPyL255: ;
    cpy_r_r262 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r263 = cpy_r_type != cpy_r_r262;
    if (!cpy_r_r263) goto CPyL365;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL259;
    } else
        goto CPyL366;
CPyL257: ;
    CPy_Unreachable();
CPyL258: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL270;
CPyL259: ;
    cpy_r_r264 = CPy_CatchError();
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40.f0 != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40.f0);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40.f1);
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40.f2);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40 = cpy_r_r264;
    cpy_r_r265 = 1;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL367;
    }
    cpy_r_r266 = (PyObject **)&cpy_r_r15;
    cpy_r_r267 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39;
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__39", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL367;
    }
    CPy_INCREF(cpy_r_r267);
CPyL261: ;
    cpy_r_r268 = CPy_YieldFromErrorHandle(cpy_r_r267, cpy_r_r266);
    CPy_DecRef(cpy_r_r267);
    if (unlikely(cpy_r_r268 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL367;
    }
    if (cpy_r_r268) goto CPyL265;
    cpy_r_r260 = cpy_r_r15;
    cpy_r_r269 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40;
    if (unlikely(cpy_r_r269.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__40", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL368;
    }
    CPy_INCREF(cpy_r_r269.f0);
    CPy_INCREF(cpy_r_r269.f1);
    CPy_INCREF(cpy_r_r269.f2);
CPyL264: ;
    CPy_RestoreExcInfo(cpy_r_r269);
    CPy_DecRef(cpy_r_r269.f0);
    CPy_DecRef(cpy_r_r269.f1);
    CPy_DecRef(cpy_r_r269.f2);
    goto CPyL254;
CPyL265: ;
    cpy_r_r257 = cpy_r_r15;
    cpy_r_r270 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40;
    if (unlikely(cpy_r_r270.f0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__40", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL369;
    }
    CPy_INCREF(cpy_r_r270.f0);
    CPy_INCREF(cpy_r_r270.f1);
    CPy_INCREF(cpy_r_r270.f2);
CPyL266: ;
    CPy_RestoreExcInfo(cpy_r_r270);
    CPy_DecRef(cpy_r_r270.f0);
    CPy_DecRef(cpy_r_r270.f1);
    CPy_DecRef(cpy_r_r270.f2);
    goto CPyL275;
CPyL267: ;
    cpy_r_r271 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__40;
    if (unlikely(cpy_r_r271.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__40' of 'wrapper_async_handle_recv_caching_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r271.f0);
        CPy_INCREF(cpy_r_r271.f1);
        CPy_INCREF(cpy_r_r271.f2);
    }
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r271.f0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
CPyL268: ;
    CPy_RestoreExcInfo(cpy_r_r271);
    CPy_DecRef(cpy_r_r271.f0);
    CPy_DecRef(cpy_r_r271.f1);
    CPy_DecRef(cpy_r_r271.f2);
    cpy_r_r272 = CPy_KeepPropagating();
    if (!cpy_r_r272) goto CPyL290;
    CPy_Unreachable();
CPyL270: ;
    cpy_r_r273 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_temp__39;
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_env", "__mypyc_temp__39", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL370;
    }
    CPy_INCREF(cpy_r_r273);
CPyL271: ;
    cpy_r_r274 = CPyIter_Send(cpy_r_r273, cpy_r_arg);
    CPy_DECREF(cpy_r_r273);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r274 == NULL) goto CPyL273;
    cpy_r_r260 = cpy_r_r274;
    goto CPyL254;
CPyL273: ;
    cpy_r_r275 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r257 = cpy_r_r275;
CPyL275: ;
    if (likely(PyDict_Check(cpy_r_r257)))
        cpy_r_r276 = cpy_r_r257;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 445, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "dict", cpy_r_r257);
        goto CPyL302;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r16)->___mypyc_next_label__ = -1;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL280;
    CPyGen_SetStopIterationValue(cpy_r_r276);
    CPy_DECREF(cpy_r_r276);
    if (!0) goto CPyL290;
    CPy_Unreachable();
CPyL280: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r276;
    return 0;
CPyL281: ;
    cpy_r_r278 = cpy_r_r17 == 0;
    if (cpy_r_r278) {
        goto CPyL371;
    } else
        goto CPyL372;
CPyL282: ;
    cpy_r_r279 = cpy_r_r17 == 1;
    if (cpy_r_r279) {
        goto CPyL373;
    } else
        goto CPyL374;
CPyL283: ;
    cpy_r_r280 = cpy_r_r17 == 2;
    if (cpy_r_r280) {
        goto CPyL375;
    } else
        goto CPyL376;
CPyL284: ;
    cpy_r_r281 = cpy_r_r17 == 3;
    if (cpy_r_r281) {
        goto CPyL377;
    } else
        goto CPyL378;
CPyL285: ;
    cpy_r_r282 = cpy_r_r17 == 4;
    if (cpy_r_r282) {
        goto CPyL379;
    } else
        goto CPyL380;
CPyL286: ;
    cpy_r_r283 = cpy_r_r17 == 5;
    if (cpy_r_r283) {
        goto CPyL381;
    } else
        goto CPyL382;
CPyL287: ;
    cpy_r_r284 = cpy_r_r17 == 6;
    if (cpy_r_r284) {
        goto CPyL255;
    } else
        goto CPyL383;
CPyL288: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r285 = 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    CPy_Unreachable();
CPyL290: ;
    cpy_r_r286 = NULL;
    return cpy_r_r286;
CPyL291: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_XDecRef(cpy_r_r9);
    CPy_XDecRef(cpy_r_r11);
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    CPy_XDecRef(cpy_r_r15);
    goto CPyL290;
CPyL292: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_XDecRef(cpy_r_r9);
    CPy_XDecRef(cpy_r_r11);
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    CPy_XDecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL290;
CPyL293: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    CPy_DECREF_NO_IMM(cpy_r_r18);
    goto CPyL3;
CPyL294: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL290;
CPyL295: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r30);
    goto CPyL290;
CPyL296: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL290;
CPyL297: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL22;
CPyL298: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    goto CPyL290;
CPyL299: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r45);
    goto CPyL290;
CPyL300: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r53);
    goto CPyL290;
CPyL301: ;
    CPy_DECREF_NO_IMM(cpy_r_r18);
    goto CPyL39;
CPyL302: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL290;
CPyL303: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r62);
    goto CPyL290;
CPyL304: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    goto CPyL290;
CPyL305: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r73);
    goto CPyL290;
CPyL306: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL60;
CPyL307: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL59;
CPyL308: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL69;
CPyL309: ;
    CPy_DecRef(cpy_r_r76);
    goto CPyL69;
CPyL310: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL69;
CPyL311: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL290;
CPyL312: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r94);
    goto CPyL290;
CPyL313: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    goto CPyL290;
CPyL314: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r96);
    goto CPyL290;
CPyL315: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL89;
CPyL316: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r16);
    goto CPyL290;
CPyL317: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r106);
    goto CPyL290;
CPyL318: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL94;
CPyL319: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL93;
CPyL320: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL103;
CPyL321: ;
    CPy_DecRef(cpy_r_r109);
    goto CPyL103;
CPyL322: ;
    CPy_DecRef(cpy_r_r106);
    goto CPyL103;
CPyL323: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL290;
CPyL324: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r129);
    goto CPyL290;
CPyL325: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r128);
    goto CPyL290;
CPyL326: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r137);
    goto CPyL290;
CPyL327: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL132;
CPyL328: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL131;
CPyL329: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL141;
CPyL330: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL141;
CPyL331: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL290;
CPyL332: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL153;
CPyL333: ;
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    goto CPyL153;
CPyL334: ;
    CPy_DECREF(cpy_r_r167.f0);
    CPy_DECREF(cpy_r_r167.f1);
    goto CPyL195;
CPyL335: ;
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r174);
    goto CPyL192;
CPyL336: ;
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r174);
    CPy_DecRef(cpy_r_r175);
    goto CPyL192;
CPyL337: ;
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r174);
    CPy_DecRef(cpy_r_r176);
    goto CPyL192;
CPyL338: ;
    CPy_DecRef(cpy_r_r185);
    goto CPyL192;
CPyL339: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL169;
CPyL340: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL168;
CPyL341: ;
    CPy_XDecRef(cpy_r_r9);
    goto CPyL178;
CPyL342: ;
    CPy_DecRef(cpy_r_r188);
    goto CPyL178;
CPyL343: ;
    CPy_DecRef(cpy_r_r185);
    goto CPyL178;
CPyL344: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL180;
CPyL345: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL192;
CPyL346: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL189;
CPyL347: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL194;
CPyL348: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL233;
CPyL349: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r214);
    goto CPyL233;
CPyL350: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r215);
    goto CPyL233;
CPyL351: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL208;
CPyL352: ;
    CPy_XDECREF(cpy_r_r11);
    goto CPyL213;
CPyL353: ;
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL212;
CPyL354: ;
    CPy_XDecRef(cpy_r_r11);
    goto CPyL222;
CPyL355: ;
    CPy_DecRef(cpy_r_r227);
    goto CPyL222;
CPyL356: ;
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    goto CPyL219;
CPyL357: ;
    CPy_XDecRef(cpy_r_r13.f0);
    CPy_XDecRef(cpy_r_r13.f1);
    CPy_XDecRef(cpy_r_r13.f2);
    goto CPyL224;
CPyL358: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL233;
CPyL359: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL227;
CPyL360: ;
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL231;
CPyL361: ;
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL232;
CPyL362: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r246);
    goto CPyL290;
CPyL363: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r246);
    CPy_DecRef(cpy_r_r247);
    goto CPyL290;
CPyL364: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r257);
    goto CPyL290;
CPyL365: ;
    CPy_XDECREF(cpy_r_r15);
    goto CPyL258;
CPyL366: ;
    CPy_XDECREF(cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL257;
CPyL367: ;
    CPy_XDecRef(cpy_r_r15);
    goto CPyL267;
CPyL368: ;
    CPy_DecRef(cpy_r_r260);
    goto CPyL267;
CPyL369: ;
    CPy_DecRef(cpy_r_r257);
    goto CPyL267;
CPyL370: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_arg);
    goto CPyL290;
CPyL371: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL2;
CPyL372: ;
    CPy_DECREF_NO_IMM(cpy_r_r18);
    goto CPyL282;
CPyL373: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL57;
CPyL374: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL283;
CPyL375: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL91;
CPyL376: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL284;
CPyL377: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL129;
CPyL378: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL285;
CPyL379: ;
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    CPy_XDECREF(cpy_r_r15);
    goto CPyL166;
CPyL380: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL286;
CPyL381: ;
    CPy_XDECREF(cpy_r_r15);
    goto CPyL210;
CPyL382: ;
    CPy_XDECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r13.f0);
    CPy_XDECREF(cpy_r_r13.f1);
    CPy_XDECREF(cpy_r_r13.f2);
    goto CPyL287;
CPyL383: ;
    CPy_XDECREF(cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r16);
    goto CPyL288;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___422", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__next__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___422", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "send", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___422", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__iter__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___422", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "throw", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[27]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[28]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp54 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp54);
    PyObject *__tmp55 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp55);
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

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___422", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "close", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3._utils.caching.caching_utils.wrapper_gen___422", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "__await__", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_rpc_request) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/_utils/caching/caching_utils.py", "wrapper", "wrapper_async_handle_recv_caching_obj", "__mypyc_env__", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_provider);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__provider = cpy_r_provider;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_rpc_request);
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__rpc_request != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__rpc_request);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_generator_attribute__rpc_request = cpy_r_rpc_request;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    CPy_INCREF_NO_IMM(cpy_r_r1);
    if (((faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *)cpy_r_r5)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *)cpy_r_r5)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *)cpy_r_r5)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL11;
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *)cpy_r_r1)->___mypyc_next_label__ = 0;
    CPy_DECREF_NO_IMM(cpy_r_r1);
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"provider", "rpc_request", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_provider;
    PyObject *obj_rpc_request;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_provider, &obj_rpc_request)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_provider = obj_provider;
    PyObject *arg_rpc_request;
    if (likely(PyDict_Check(obj_rpc_request)))
        arg_rpc_request = obj_rpc_request;
    else {
        CPy_TypeError("dict", obj_rpc_request); 
        goto fail;
    }
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__(arg___mypyc_self__, arg_provider, arg_rpc_request);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "wrapper", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching(PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_wrapper;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_recv_caching", 416, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_func);
    if (((faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *)cpy_r_r0)->_func != NULL) {
        CPy_DECREF(((faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *)cpy_r_r0)->_func);
    }
    ((faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *)cpy_r_r0)->_func = cpy_r_func;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_recv_caching", 416, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_recv_caching", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL8;
    }
    if (((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_recv_caching", 422, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL9;
    }
    cpy_r_wrapper = cpy_r_r2;
    cpy_r_r4 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r5 = CPyStatics[36]; /* 'async_handle_recv_caching' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_recv_caching", 448, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    cpy_r_r7 = CPyStatics[26]; /* '_decorator' */
    cpy_r_r8 = PyObject_SetAttr(cpy_r_wrapper, cpy_r_r7, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_recv_caching", 448, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL10;
    }
    return cpy_r_wrapper;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_wrapper);
    goto CPyL7;
}

PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_handle_recv_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:async_handle_recv_caching", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_func = obj_func;
    PyObject *retval = CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching(arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "async_handle_recv_caching", 416, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
    return NULL;
}

char CPyDef_faster_web3____utils___caching___caching_utils_____top_level__(void) {
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
    PyObject **cpy_r_r21;
    void *cpy_r_r23;
    void *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
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
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
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
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    CPyTagged cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    CPyTagged cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyTagged cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    CPyTagged cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    CPyTagged cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    CPyTagged cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    CPyTagged cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    CPyTagged cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    CPyTagged cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    CPyTagged cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    CPyTagged cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    CPyTagged cpy_r_r260;
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
    int32_t cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    int32_t cpy_r_r308;
    char cpy_r_r309;
    int32_t cpy_r_r310;
    char cpy_r_r311;
    int32_t cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    int32_t cpy_r_r317;
    char cpy_r_r318;
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
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    int32_t cpy_r_r350;
    char cpy_r_r351;
    int32_t cpy_r_r352;
    char cpy_r_r353;
    int32_t cpy_r_r354;
    char cpy_r_r355;
    int32_t cpy_r_r356;
    char cpy_r_r357;
    int32_t cpy_r_r358;
    char cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    int32_t cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
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
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    int32_t cpy_r_r396;
    char cpy_r_r397;
    int32_t cpy_r_r398;
    char cpy_r_r399;
    int32_t cpy_r_r400;
    char cpy_r_r401;
    int32_t cpy_r_r402;
    char cpy_r_r403;
    int32_t cpy_r_r404;
    char cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    int32_t cpy_r_r409;
    char cpy_r_r410;
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
    int32_t cpy_r_r430;
    char cpy_r_r431;
    int32_t cpy_r_r432;
    char cpy_r_r433;
    int32_t cpy_r_r434;
    char cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    int32_t cpy_r_r439;
    char cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    char cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    int32_t cpy_r_r450;
    char cpy_r_r451;
    char cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    char cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    PyObject *cpy_r_r461;
    int32_t cpy_r_r462;
    char cpy_r_r463;
    char cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    char cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    int32_t cpy_r_r474;
    char cpy_r_r475;
    char cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    char cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    int32_t cpy_r_r486;
    char cpy_r_r487;
    char cpy_r_r488;
    PyObject *cpy_r_r489;
    int32_t cpy_r_r490;
    char cpy_r_r491;
    int32_t cpy_r_r492;
    char cpy_r_r493;
    int32_t cpy_r_r494;
    char cpy_r_r495;
    int32_t cpy_r_r496;
    char cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    int32_t cpy_r_r500;
    char cpy_r_r501;
    PyObject *cpy_r_r502;
    char cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    int32_t cpy_r_r508;
    char cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
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
    tuple_T2OO cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    CPyPtr cpy_r_r532;
    CPyPtr cpy_r_r533;
    CPyPtr cpy_r_r534;
    CPyPtr cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject *cpy_r_r549;
    tuple_T3OOO cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    tuple_T2OO cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    tuple_T2OO cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    int32_t cpy_r_r561;
    char cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject *cpy_r_r564;
    char cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    int32_t cpy_r_r572;
    char cpy_r_r573;
    char cpy_r_r574;
    PyObject *cpy_r_r575;
    PyObject *cpy_r_r576;
    char cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    PyObject *cpy_r_r583;
    int32_t cpy_r_r584;
    char cpy_r_r585;
    char cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    char cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    int32_t cpy_r_r596;
    char cpy_r_r597;
    char cpy_r_r598;
    PyObject *cpy_r_r599;
    PyObject *cpy_r_r600;
    char cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    int32_t cpy_r_r608;
    char cpy_r_r609;
    char cpy_r_r610;
    PyObject *cpy_r_r611;
    int32_t cpy_r_r612;
    char cpy_r_r613;
    int32_t cpy_r_r614;
    char cpy_r_r615;
    int32_t cpy_r_r616;
    char cpy_r_r617;
    int32_t cpy_r_r618;
    char cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    int32_t cpy_r_r622;
    char cpy_r_r623;
    char cpy_r_r624;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[37]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_asyncio;
    cpy_r_r6 = (PyObject **)&CPyModule_hashlib;
    cpy_r_r7 = (PyObject **)&CPyModule_threading;
    PyObject **cpy_r_r8[3] = {cpy_r_r5, cpy_r_r6, cpy_r_r7};
    cpy_r_r9 = (void *)&cpy_r_r8;
    int64_t cpy_r_r10[3] = {1, 2, 3};
    cpy_r_r11 = (void *)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[149]; /* (('asyncio', 'asyncio', 'asyncio'),
                                    ('hashlib', 'hashlib', 'hashlib'),
                                    ('threading', 'threading', 'threading')) */
    cpy_r_r13 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r14 = CPyStatics[41]; /* 'faster_web3/_utils/caching/caching_utils.py' */
    cpy_r_r15 = CPyStatics[42]; /* '<module>' */
    cpy_r_r16 = CPyImport_ImportMany(cpy_r_r12, cpy_r_r9, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r11);
    if (!cpy_r_r16) goto CPyL287;
    cpy_r_r17 = CPyStatics[150]; /* ('TYPE_CHECKING', 'Any', 'Callable', 'Coroutine', 'Dict',
                                    'Final', 'Generator', 'List', 'Optional', 'Sequence',
                                    'Tuple', 'Union', 'final') */
    cpy_r_r18 = CPyStatics[55]; /* 'typing' */
    cpy_r_r19 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 4, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_typing = cpy_r_r20;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = (PyObject **)&CPyModule_faster_eth_utils;
    PyObject **cpy_r_r22[1] = {cpy_r_r21};
    cpy_r_r23 = (void *)&cpy_r_r22;
    int64_t cpy_r_r24[1] = {20};
    cpy_r_r25 = (void *)&cpy_r_r24;
    cpy_r_r26 = CPyStatics[152]; /* (('faster_eth_utils', 'faster_eth_utils',
                                     'faster_eth_utils'),) */
    cpy_r_r27 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r28 = CPyStatics[41]; /* 'faster_web3/_utils/caching/caching_utils.py' */
    cpy_r_r29 = CPyStatics[42]; /* '<module>' */
    cpy_r_r30 = CPyImport_ImportMany(cpy_r_r26, cpy_r_r23, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r25);
    if (!cpy_r_r30) goto CPyL287;
    cpy_r_r31 = CPyStatics[153]; /* ('ChainId',) */
    cpy_r_r32 = CPyStatics[58]; /* 'eth_typing' */
    cpy_r_r33 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 21, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_eth_typing = cpy_r_r34;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[154]; /* ('ASYNC_PROVIDER_TYPE', 'SYNC_PROVIDER_TYPE') */
    cpy_r_r36 = CPyStatics[61]; /* 'faster_web3._utils.caching' */
    cpy_r_r37 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 25, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_faster_web3____utils___caching = cpy_r_r38;
    CPy_INCREF(CPyModule_faster_web3____utils___caching);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[155]; /* ('UNCACHEABLE_BLOCK_IDS', 'always_cache_request',
                                    'async_validate_from_block_id_in_params',
                                    'async_validate_from_blockhash_in_params',
                                    'async_validate_from_blocknum_in_result',
                                    'validate_from_block_id_in_params',
                                    'validate_from_blockhash_in_params',
                                    'validate_from_blocknum_in_result') */
    cpy_r_r40 = CPyStatics[70]; /* 'faster_web3._utils.caching.request_caching_validation' */
    cpy_r_r41 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 29, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_faster_web3____utils___caching___request_caching_validation = cpy_r_r42;
    CPy_INCREF(CPyModule_faster_web3____utils___caching___request_caching_validation);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[156]; /* ('empty',) */
    cpy_r_r44 = CPyStatics[71]; /* 'faster_web3._utils.empty' */
    cpy_r_r45 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 39, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_faster_web3____utils___empty = cpy_r_r46;
    CPy_INCREF(CPyModule_faster_web3____utils___empty);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[157]; /* ('RPC',) */
    cpy_r_r48 = CPyStatics[73]; /* 'faster_web3._utils.rpc_abi' */
    cpy_r_r49 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 42, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_faster_web3____utils___rpc_abi = cpy_r_r50;
    CPy_INCREF(CPyModule_faster_web3____utils___rpc_abi);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[158]; /* ('Web3TypeError',) */
    cpy_r_r52 = CPyStatics[74]; /* 'faster_web3.exceptions' */
    cpy_r_r53 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 45, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_faster_web3___exceptions = cpy_r_r54;
    CPy_INCREF(CPyModule_faster_web3___exceptions);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[159]; /* ('RPCEndpoint',) */
    cpy_r_r56 = CPyStatics[76]; /* 'faster_web3.types' */
    cpy_r_r57 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 48, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_faster_web3___types = cpy_r_r58;
    CPy_INCREF(CPyModule_faster_web3___types);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[160]; /* ('RequestCacheValidationThreshold',) */
    cpy_r_r60 = CPyStatics[78]; /* 'faster_web3.utils' */
    cpy_r_r61 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 51, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyModule_faster_web3___utils = cpy_r_r62;
    CPy_INCREF(CPyModule_faster_web3___utils);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyModule_asyncio;
    cpy_r_r64 = CPyStatics[79]; /* 'iscoroutinefunction' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 69, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction = cpy_r_r65;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction);
    cpy_r_r66 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r67 = CPyStatics[79]; /* 'iscoroutinefunction' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r66, cpy_r_r67, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 69, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r70 = CPyModule_hashlib;
    cpy_r_r71 = CPyStatics[80]; /* 'md5' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 71, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___md5 = cpy_r_r72;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___md5);
    cpy_r_r73 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r74 = CPyStatics[80]; /* 'md5' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r73, cpy_r_r74, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 71, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r77 = CPyModule_threading;
    cpy_r_r78 = CPyStatics[81]; /* 'get_ident' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 73, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___get_ident = cpy_r_r79;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___get_ident);
    cpy_r_r80 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r81 = CPyStatics[81]; /* 'get_ident' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 73, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r84 = CPyModule_faster_eth_utils;
    cpy_r_r85 = CPyStatics[82]; /* 'is_boolean' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 75, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean = cpy_r_r86;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean);
    cpy_r_r87 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r88 = CPyStatics[82]; /* 'is_boolean' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 75, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r91 = CPyModule_faster_eth_utils;
    cpy_r_r92 = CPyStatics[83]; /* 'is_bytes' */
    cpy_r_r93 = CPyObject_GetAttr(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 76, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes = cpy_r_r93;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes);
    cpy_r_r94 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r95 = CPyStatics[83]; /* 'is_bytes' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r94, cpy_r_r95, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 76, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r98 = CPyModule_faster_eth_utils;
    cpy_r_r99 = CPyStatics[84]; /* 'is_dict' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 77, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___is_dict = cpy_r_r100;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_dict);
    cpy_r_r101 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r102 = CPyStatics[84]; /* 'is_dict' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r101, cpy_r_r102, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 77, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r105 = CPyModule_faster_eth_utils;
    cpy_r_r106 = CPyStatics[85]; /* 'is_list_like' */
    cpy_r_r107 = CPyObject_GetAttr(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 78, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like = cpy_r_r107;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like);
    cpy_r_r108 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r109 = CPyStatics[85]; /* 'is_list_like' */
    cpy_r_r110 = CPyDict_SetItem(cpy_r_r108, cpy_r_r109, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 78, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r112 = CPyModule_faster_eth_utils;
    cpy_r_r113 = CPyStatics[86]; /* 'is_null' */
    cpy_r_r114 = CPyObject_GetAttr(cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 79, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___is_null = cpy_r_r114;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_null);
    cpy_r_r115 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r116 = CPyStatics[86]; /* 'is_null' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r115, cpy_r_r116, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 79, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r119 = CPyModule_faster_eth_utils;
    cpy_r_r120 = CPyStatics[87]; /* 'is_number' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 80, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___is_number = cpy_r_r121;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_number);
    cpy_r_r122 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r123 = CPyStatics[87]; /* 'is_number' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r122, cpy_r_r123, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 80, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r126 = CPyModule_faster_eth_utils;
    cpy_r_r127 = CPyStatics[88]; /* 'is_text' */
    cpy_r_r128 = CPyObject_GetAttr(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 81, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___is_text = cpy_r_r128;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___is_text);
    cpy_r_r129 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r130 = CPyStatics[88]; /* 'is_text' */
    cpy_r_r131 = CPyDict_SetItem(cpy_r_r129, cpy_r_r130, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 81, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r133 = CPyModule_faster_eth_utils;
    cpy_r_r134 = CPyStatics[89]; /* 'to_bytes' */
    cpy_r_r135 = CPyObject_GetAttr(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 82, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes = cpy_r_r135;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes);
    cpy_r_r136 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r137 = CPyStatics[89]; /* 'to_bytes' */
    cpy_r_r138 = CPyDict_SetItem(cpy_r_r136, cpy_r_r137, cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 82, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r140 = NULL;
    cpy_r_r141 = CPyStatics[90]; /* 'faster_web3._utils.caching.caching_utils' */
    cpy_r_r142 = (PyObject *)CPyType_faster_web3____utils___caching___caching_utils___RequestInformation_template;
    cpy_r_r143 = CPyType_FromTemplate(cpy_r_r142, cpy_r_r140, cpy_r_r141);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 111, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r144 = CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_trait_vtable_setup();
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", -1, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL288;
    }
    cpy_r_r145 = CPyStatics[91]; /* '__mypyc_attrs__' */
    cpy_r_r146 = CPyStatics[33]; /* 'method' */
    cpy_r_r147 = CPyStatics[34]; /* 'params' */
    cpy_r_r148 = CPyStatics[92]; /* 'response_formatters' */
    cpy_r_r149 = CPyStatics[93]; /* 'subscription_id' */
    cpy_r_r150 = CPyStatics[94]; /* 'middleware_response_processors' */
    cpy_r_r151 = PyTuple_Pack(5, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 111, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL288;
    }
    cpy_r_r152 = PyObject_SetAttr(cpy_r_r143, cpy_r_r145, cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 111, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL288;
    }
    CPyType_faster_web3____utils___caching___caching_utils___RequestInformation = (PyTypeObject *)cpy_r_r143;
    CPy_INCREF(CPyType_faster_web3____utils___caching___caching_utils___RequestInformation);
    cpy_r_r154 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r155 = CPyStatics[95]; /* 'RequestInformation' */
    cpy_r_r156 = PyDict_SetItem(cpy_r_r154, cpy_r_r155, cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 111, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r158 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r159 = CPyStatics[96]; /* 'DEFAULT_VALIDATION_THRESHOLD' */
    cpy_r_r160 = CPyStatics[137]; /* 3600 */
    cpy_r_r161 = CPyDict_SetItem(cpy_r_r158, cpy_r_r159, cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 130, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r163 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r164 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r165 = CPyDict_GetItem(cpy_r_r163, cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 137, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r166 = CPyStatics[97]; /* 'ETH' */
    cpy_r_r167 = CPyObject_GetAttr(cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 137, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r168 = CPyStatics[98]; /* 'value' */
    cpy_r_r169 = CPyObject_GetAttr(cpy_r_r167, cpy_r_r168);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 137, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    if (likely(PyLong_Check(cpy_r_r169)))
        cpy_r_r170 = CPyTagged_FromObject(cpy_r_r169);
    else {
        CPy_TypeError("int", cpy_r_r169); cpy_r_r170 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r170 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 137, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r171 = *exports_faster_web3.CPyStatic_faster_web3___utils___caching___RequestCacheValidationThreshold___FINALIZED;
    if (unlikely(cpy_r_r171 == NULL)) {
        goto CPyL289;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FINALIZED\" was not set");
    cpy_r_r172 = 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 137, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r173 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r174 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r175 = CPyDict_GetItem(cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 138, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    cpy_r_r176 = CPyStatics[99]; /* 'ARB1' */
    cpy_r_r177 = CPyObject_GetAttr(cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 138, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    cpy_r_r178 = CPyStatics[98]; /* 'value' */
    cpy_r_r179 = CPyObject_GetAttr(cpy_r_r177, cpy_r_r178);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 138, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    if (likely(PyLong_Check(cpy_r_r179)))
        cpy_r_r180 = CPyTagged_FromObject(cpy_r_r179);
    else {
        CPy_TypeError("int", cpy_r_r179); cpy_r_r180 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r180 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 138, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL290;
    }
    cpy_r_r181 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r182 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r183 = CPyDict_GetItem(cpy_r_r181, cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 139, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL291;
    }
    cpy_r_r184 = CPyStatics[100]; /* 'ZKSYNC' */
    cpy_r_r185 = CPyObject_GetAttr(cpy_r_r183, cpy_r_r184);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 139, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL291;
    }
    cpy_r_r186 = CPyStatics[98]; /* 'value' */
    cpy_r_r187 = CPyObject_GetAttr(cpy_r_r185, cpy_r_r186);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 139, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL291;
    }
    if (likely(PyLong_Check(cpy_r_r187)))
        cpy_r_r188 = CPyTagged_FromObject(cpy_r_r187);
    else {
        CPy_TypeError("int", cpy_r_r187); cpy_r_r188 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r188 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 139, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL291;
    }
    cpy_r_r189 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r190 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r191 = CPyDict_GetItem(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 140, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL292;
    }
    cpy_r_r192 = CPyStatics[101]; /* 'OETH' */
    cpy_r_r193 = CPyObject_GetAttr(cpy_r_r191, cpy_r_r192);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 140, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL292;
    }
    cpy_r_r194 = CPyStatics[98]; /* 'value' */
    cpy_r_r195 = CPyObject_GetAttr(cpy_r_r193, cpy_r_r194);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 140, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL292;
    }
    if (likely(PyLong_Check(cpy_r_r195)))
        cpy_r_r196 = CPyTagged_FromObject(cpy_r_r195);
    else {
        CPy_TypeError("int", cpy_r_r195); cpy_r_r196 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r196 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 140, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL292;
    }
    cpy_r_r197 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r198 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r199 = CPyDict_GetItem(cpy_r_r197, cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 141, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL293;
    }
    cpy_r_r200 = CPyStatics[102]; /* 'MATIC' */
    cpy_r_r201 = CPyObject_GetAttr(cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 141, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL293;
    }
    cpy_r_r202 = CPyStatics[98]; /* 'value' */
    cpy_r_r203 = CPyObject_GetAttr(cpy_r_r201, cpy_r_r202);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 141, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL293;
    }
    if (likely(PyLong_Check(cpy_r_r203)))
        cpy_r_r204 = CPyTagged_FromObject(cpy_r_r203);
    else {
        CPy_TypeError("int", cpy_r_r203); cpy_r_r204 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r203);
    if (unlikely(cpy_r_r204 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 141, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL293;
    }
    cpy_r_r205 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r206 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r207 = CPyDict_GetItem(cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 142, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r208 = CPyStatics[103]; /* 'ZKEVM' */
    cpy_r_r209 = CPyObject_GetAttr(cpy_r_r207, cpy_r_r208);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 142, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r210 = CPyStatics[98]; /* 'value' */
    cpy_r_r211 = CPyObject_GetAttr(cpy_r_r209, cpy_r_r210);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 142, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    if (likely(PyLong_Check(cpy_r_r211)))
        cpy_r_r212 = CPyTagged_FromObject(cpy_r_r211);
    else {
        CPy_TypeError("int", cpy_r_r211); cpy_r_r212 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 142, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL294;
    }
    cpy_r_r213 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r214 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r215 = CPyDict_GetItem(cpy_r_r213, cpy_r_r214);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 143, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL295;
    }
    cpy_r_r216 = CPyStatics[104]; /* 'BASE' */
    cpy_r_r217 = CPyObject_GetAttr(cpy_r_r215, cpy_r_r216);
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 143, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL295;
    }
    cpy_r_r218 = CPyStatics[98]; /* 'value' */
    cpy_r_r219 = CPyObject_GetAttr(cpy_r_r217, cpy_r_r218);
    CPy_DECREF(cpy_r_r217);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 143, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL295;
    }
    if (likely(PyLong_Check(cpy_r_r219)))
        cpy_r_r220 = CPyTagged_FromObject(cpy_r_r219);
    else {
        CPy_TypeError("int", cpy_r_r219); cpy_r_r220 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r219);
    if (unlikely(cpy_r_r220 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 143, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL295;
    }
    cpy_r_r221 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r222 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r223 = CPyDict_GetItem(cpy_r_r221, cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 144, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL296;
    }
    cpy_r_r224 = CPyStatics[105]; /* 'SCR' */
    cpy_r_r225 = CPyObject_GetAttr(cpy_r_r223, cpy_r_r224);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 144, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL296;
    }
    cpy_r_r226 = CPyStatics[98]; /* 'value' */
    cpy_r_r227 = CPyObject_GetAttr(cpy_r_r225, cpy_r_r226);
    CPy_DECREF(cpy_r_r225);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 144, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL296;
    }
    if (likely(PyLong_Check(cpy_r_r227)))
        cpy_r_r228 = CPyTagged_FromObject(cpy_r_r227);
    else {
        CPy_TypeError("int", cpy_r_r227); cpy_r_r228 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r228 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 144, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL296;
    }
    cpy_r_r229 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r230 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r231 = CPyDict_GetItem(cpy_r_r229, cpy_r_r230);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 145, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r232 = CPyStatics[106]; /* 'GNO' */
    cpy_r_r233 = CPyObject_GetAttr(cpy_r_r231, cpy_r_r232);
    CPy_DECREF(cpy_r_r231);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 145, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r234 = CPyStatics[98]; /* 'value' */
    cpy_r_r235 = CPyObject_GetAttr(cpy_r_r233, cpy_r_r234);
    CPy_DECREF(cpy_r_r233);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 145, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    if (likely(PyLong_Check(cpy_r_r235)))
        cpy_r_r236 = CPyTagged_FromObject(cpy_r_r235);
    else {
        CPy_TypeError("int", cpy_r_r235); cpy_r_r236 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r235);
    if (unlikely(cpy_r_r236 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 145, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL297;
    }
    cpy_r_r237 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r238 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r239 = CPyDict_GetItem(cpy_r_r237, cpy_r_r238);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 146, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL298;
    }
    cpy_r_r240 = CPyStatics[107]; /* 'AVAX' */
    cpy_r_r241 = CPyObject_GetAttr(cpy_r_r239, cpy_r_r240);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 146, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL298;
    }
    cpy_r_r242 = CPyStatics[98]; /* 'value' */
    cpy_r_r243 = CPyObject_GetAttr(cpy_r_r241, cpy_r_r242);
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 146, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL298;
    }
    if (likely(PyLong_Check(cpy_r_r243)))
        cpy_r_r244 = CPyTagged_FromObject(cpy_r_r243);
    else {
        CPy_TypeError("int", cpy_r_r243); cpy_r_r244 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r243);
    if (unlikely(cpy_r_r244 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 146, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL298;
    }
    cpy_r_r245 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r246 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r247 = CPyDict_GetItem(cpy_r_r245, cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 147, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL299;
    }
    cpy_r_r248 = CPyStatics[108]; /* 'BNB' */
    cpy_r_r249 = CPyObject_GetAttr(cpy_r_r247, cpy_r_r248);
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 147, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL299;
    }
    cpy_r_r250 = CPyStatics[98]; /* 'value' */
    cpy_r_r251 = CPyObject_GetAttr(cpy_r_r249, cpy_r_r250);
    CPy_DECREF(cpy_r_r249);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 147, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL299;
    }
    if (likely(PyLong_Check(cpy_r_r251)))
        cpy_r_r252 = CPyTagged_FromObject(cpy_r_r251);
    else {
        CPy_TypeError("int", cpy_r_r251); cpy_r_r252 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r252 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 147, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL299;
    }
    cpy_r_r253 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r254 = CPyStatics[57]; /* 'ChainId' */
    cpy_r_r255 = CPyDict_GetItem(cpy_r_r253, cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 148, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL300;
    }
    cpy_r_r256 = CPyStatics[109]; /* 'FTM' */
    cpy_r_r257 = CPyObject_GetAttr(cpy_r_r255, cpy_r_r256);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 148, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL300;
    }
    cpy_r_r258 = CPyStatics[98]; /* 'value' */
    cpy_r_r259 = CPyObject_GetAttr(cpy_r_r257, cpy_r_r258);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 148, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL300;
    }
    if (likely(PyLong_Check(cpy_r_r259)))
        cpy_r_r260 = CPyTagged_FromObject(cpy_r_r259);
    else {
        CPy_TypeError("int", cpy_r_r259); cpy_r_r260 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r260 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 148, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL300;
    }
    cpy_r_r261 = CPyTagged_StealAsObject(cpy_r_r170);
    cpy_r_r262 = CPyTagged_StealAsObject(cpy_r_r180);
    cpy_r_r263 = CPyStatics[139]; /* 604800 */
    cpy_r_r264 = CPyTagged_StealAsObject(cpy_r_r188);
    cpy_r_r265 = CPyStatics[137]; /* 3600 */
    cpy_r_r266 = CPyTagged_StealAsObject(cpy_r_r196);
    cpy_r_r267 = CPyStatics[140]; /* 180 */
    cpy_r_r268 = CPyTagged_StealAsObject(cpy_r_r204);
    cpy_r_r269 = CPyStatics[141]; /* 1800 */
    cpy_r_r270 = CPyTagged_StealAsObject(cpy_r_r212);
    cpy_r_r271 = CPyStatics[137]; /* 3600 */
    cpy_r_r272 = CPyTagged_StealAsObject(cpy_r_r220);
    cpy_r_r273 = CPyStatics[139]; /* 604800 */
    cpy_r_r274 = CPyTagged_StealAsObject(cpy_r_r228);
    cpy_r_r275 = CPyStatics[137]; /* 3600 */
    cpy_r_r276 = CPyTagged_StealAsObject(cpy_r_r236);
    cpy_r_r277 = CPyStatics[142]; /* 300 */
    cpy_r_r278 = CPyTagged_StealAsObject(cpy_r_r244);
    cpy_r_r279 = CPyStatics[143]; /* 120 */
    cpy_r_r280 = CPyTagged_StealAsObject(cpy_r_r252);
    cpy_r_r281 = CPyStatics[143]; /* 120 */
    cpy_r_r282 = CPyTagged_StealAsObject(cpy_r_r260);
    cpy_r_r283 = CPyStatics[144]; /* 60 */
    cpy_r_r284 = CPyDict_Build(12, cpy_r_r261, cpy_r_r171, cpy_r_r262, cpy_r_r263, cpy_r_r264, cpy_r_r265, cpy_r_r266, cpy_r_r267, cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272, cpy_r_r273, cpy_r_r274, cpy_r_r275, cpy_r_r276, cpy_r_r277, cpy_r_r278, cpy_r_r279, cpy_r_r280, cpy_r_r281, cpy_r_r282, cpy_r_r283);
    CPy_DECREF(cpy_r_r261);
    CPy_DECREF(cpy_r_r262);
    CPy_DECREF(cpy_r_r264);
    CPy_DECREF(cpy_r_r266);
    CPy_DECREF(cpy_r_r268);
    CPy_DECREF(cpy_r_r270);
    CPy_DECREF(cpy_r_r272);
    CPy_DECREF(cpy_r_r274);
    CPy_DECREF(cpy_r_r276);
    CPy_DECREF(cpy_r_r278);
    CPy_DECREF(cpy_r_r280);
    CPy_DECREF(cpy_r_r282);
    if (unlikely(cpy_r_r284 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 134, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS = cpy_r_r284;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS);
    cpy_r_r285 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r286 = CPyStatics[110]; /* 'CHAIN_VALIDATION_THRESHOLD_DEFAULTS' */
    cpy_r_r287 = CPyDict_SetItem(cpy_r_r285, cpy_r_r286, cpy_r_r284);
    CPy_DECREF(cpy_r_r284);
    cpy_r_r288 = cpy_r_r287 >= 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 134, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r289 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r290 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r291 = CPyDict_GetItem(cpy_r_r289, cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 169, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r292 = CPyStatics[15]; /* 'eth_chainId' */
    cpy_r_r293 = CPyObject_GetAttr(cpy_r_r291, cpy_r_r292);
    CPy_DECREF(cpy_r_r291);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 169, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    if (likely(PyUnicode_Check(cpy_r_r293)))
        cpy_r_r294 = cpy_r_r293;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 169, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r293);
        goto CPyL287;
    }
    cpy_r_r295 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r296 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r297 = CPyDict_GetItem(cpy_r_r295, cpy_r_r296);
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 170, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL301;
    }
    cpy_r_r298 = CPyStatics[111]; /* 'web3_clientVersion' */
    cpy_r_r299 = CPyObject_GetAttr(cpy_r_r297, cpy_r_r298);
    CPy_DECREF(cpy_r_r297);
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 170, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL301;
    }
    if (likely(PyUnicode_Check(cpy_r_r299)))
        cpy_r_r300 = cpy_r_r299;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 170, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r299);
        goto CPyL301;
    }
    cpy_r_r301 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r302 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r303 = CPyDict_GetItem(cpy_r_r301, cpy_r_r302);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 171, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    cpy_r_r304 = CPyStatics[112]; /* 'net_version' */
    cpy_r_r305 = CPyObject_GetAttr(cpy_r_r303, cpy_r_r304);
    CPy_DECREF(cpy_r_r303);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 171, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL302;
    }
    if (likely(PyUnicode_Check(cpy_r_r305)))
        cpy_r_r306 = cpy_r_r305;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 171, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r305);
        goto CPyL302;
    }
    cpy_r_r307 = PySet_New(NULL);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 168, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL303;
    }
    cpy_r_r308 = PySet_Add(cpy_r_r307, cpy_r_r294);
    CPy_DECREF(cpy_r_r294);
    cpy_r_r309 = cpy_r_r308 >= 0;
    if (unlikely(!cpy_r_r309)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 168, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL304;
    }
    cpy_r_r310 = PySet_Add(cpy_r_r307, cpy_r_r300);
    CPy_DECREF(cpy_r_r300);
    cpy_r_r311 = cpy_r_r310 >= 0;
    if (unlikely(!cpy_r_r311)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 168, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL305;
    }
    cpy_r_r312 = PySet_Add(cpy_r_r307, cpy_r_r306);
    CPy_DECREF(cpy_r_r306);
    cpy_r_r313 = cpy_r_r312 >= 0;
    if (unlikely(!cpy_r_r313)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 168, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL306;
    }
    cpy_r_r314 = PyFrozenSet_New(cpy_r_r307);
    CPy_DECREF(cpy_r_r307);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 168, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE = cpy_r_r314;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE);
    cpy_r_r315 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r316 = CPyStatics[113]; /* 'ALWAYS_CACHE' */
    cpy_r_r317 = CPyDict_SetItem(cpy_r_r315, cpy_r_r316, cpy_r_r314);
    CPy_DECREF(cpy_r_r314);
    cpy_r_r318 = cpy_r_r317 >= 0;
    if (unlikely(!cpy_r_r318)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 168, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r319 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r320 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r321 = CPyDict_GetItem(cpy_r_r319, cpy_r_r320);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 174, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r322 = CPyStatics[114]; /* 'eth_getBlockByNumber' */
    cpy_r_r323 = CPyObject_GetAttr(cpy_r_r321, cpy_r_r322);
    CPy_DECREF(cpy_r_r321);
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 174, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    if (likely(PyUnicode_Check(cpy_r_r323)))
        cpy_r_r324 = cpy_r_r323;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 174, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r323);
        goto CPyL287;
    }
    cpy_r_r325 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r326 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r327 = CPyDict_GetItem(cpy_r_r325, cpy_r_r326);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 175, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL307;
    }
    cpy_r_r328 = CPyStatics[115]; /* 'eth_getRawTransactionByBlockNumberAndIndex' */
    cpy_r_r329 = CPyObject_GetAttr(cpy_r_r327, cpy_r_r328);
    CPy_DECREF(cpy_r_r327);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 175, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL307;
    }
    if (likely(PyUnicode_Check(cpy_r_r329)))
        cpy_r_r330 = cpy_r_r329;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 175, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r329);
        goto CPyL307;
    }
    cpy_r_r331 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r332 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r333 = CPyDict_GetItem(cpy_r_r331, cpy_r_r332);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 176, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL308;
    }
    cpy_r_r334 = CPyStatics[116]; /* 'eth_getBlockTransactionCountByNumber' */
    cpy_r_r335 = CPyObject_GetAttr(cpy_r_r333, cpy_r_r334);
    CPy_DECREF(cpy_r_r333);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 176, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL308;
    }
    if (likely(PyUnicode_Check(cpy_r_r335)))
        cpy_r_r336 = cpy_r_r335;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 176, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r335);
        goto CPyL308;
    }
    cpy_r_r337 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r338 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r339 = CPyDict_GetItem(cpy_r_r337, cpy_r_r338);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 177, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL309;
    }
    cpy_r_r340 = CPyStatics[117]; /* 'eth_getUncleByBlockNumberAndIndex' */
    cpy_r_r341 = CPyObject_GetAttr(cpy_r_r339, cpy_r_r340);
    CPy_DECREF(cpy_r_r339);
    if (unlikely(cpy_r_r341 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 177, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL309;
    }
    if (likely(PyUnicode_Check(cpy_r_r341)))
        cpy_r_r342 = cpy_r_r341;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 177, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r341);
        goto CPyL309;
    }
    cpy_r_r343 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r344 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r345 = CPyDict_GetItem(cpy_r_r343, cpy_r_r344);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 178, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL310;
    }
    cpy_r_r346 = CPyStatics[118]; /* 'eth_getUncleCountByBlockNumber' */
    cpy_r_r347 = CPyObject_GetAttr(cpy_r_r345, cpy_r_r346);
    CPy_DECREF(cpy_r_r345);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 178, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL310;
    }
    if (likely(PyUnicode_Check(cpy_r_r347)))
        cpy_r_r348 = cpy_r_r347;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 178, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r347);
        goto CPyL310;
    }
    cpy_r_r349 = PySet_New(NULL);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL311;
    }
    cpy_r_r350 = PySet_Add(cpy_r_r349, cpy_r_r324);
    CPy_DECREF(cpy_r_r324);
    cpy_r_r351 = cpy_r_r350 >= 0;
    if (unlikely(!cpy_r_r351)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL312;
    }
    cpy_r_r352 = PySet_Add(cpy_r_r349, cpy_r_r330);
    CPy_DECREF(cpy_r_r330);
    cpy_r_r353 = cpy_r_r352 >= 0;
    if (unlikely(!cpy_r_r353)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL313;
    }
    cpy_r_r354 = PySet_Add(cpy_r_r349, cpy_r_r336);
    CPy_DECREF(cpy_r_r336);
    cpy_r_r355 = cpy_r_r354 >= 0;
    if (unlikely(!cpy_r_r355)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL314;
    }
    cpy_r_r356 = PySet_Add(cpy_r_r349, cpy_r_r342);
    CPy_DECREF(cpy_r_r342);
    cpy_r_r357 = cpy_r_r356 >= 0;
    if (unlikely(!cpy_r_r357)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL315;
    }
    cpy_r_r358 = PySet_Add(cpy_r_r349, cpy_r_r348);
    CPy_DECREF(cpy_r_r348);
    cpy_r_r359 = cpy_r_r358 >= 0;
    if (unlikely(!cpy_r_r359)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL316;
    }
    cpy_r_r360 = PyFrozenSet_New(cpy_r_r349);
    CPy_DECREF(cpy_r_r349);
    if (unlikely(cpy_r_r360 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS = cpy_r_r360;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS);
    cpy_r_r361 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r362 = CPyStatics[119]; /* 'BLOCKNUM_IN_PARAMS' */
    cpy_r_r363 = CPyDict_SetItem(cpy_r_r361, cpy_r_r362, cpy_r_r360);
    CPy_DECREF(cpy_r_r360);
    cpy_r_r364 = cpy_r_r363 >= 0;
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 173, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r365 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r366 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r367 = CPyDict_GetItem(cpy_r_r365, cpy_r_r366);
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 181, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r368 = CPyStatics[120]; /* 'eth_getBlockByHash' */
    cpy_r_r369 = CPyObject_GetAttr(cpy_r_r367, cpy_r_r368);
    CPy_DECREF(cpy_r_r367);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 181, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    if (likely(PyUnicode_Check(cpy_r_r369)))
        cpy_r_r370 = cpy_r_r369;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 181, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r369);
        goto CPyL287;
    }
    cpy_r_r371 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r372 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r373 = CPyDict_GetItem(cpy_r_r371, cpy_r_r372);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 182, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL317;
    }
    cpy_r_r374 = CPyStatics[121]; /* 'eth_getTransactionByHash' */
    cpy_r_r375 = CPyObject_GetAttr(cpy_r_r373, cpy_r_r374);
    CPy_DECREF(cpy_r_r373);
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 182, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL317;
    }
    if (likely(PyUnicode_Check(cpy_r_r375)))
        cpy_r_r376 = cpy_r_r375;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 182, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r375);
        goto CPyL317;
    }
    cpy_r_r377 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r378 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r379 = CPyDict_GetItem(cpy_r_r377, cpy_r_r378);
    if (unlikely(cpy_r_r379 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 183, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL318;
    }
    cpy_r_r380 = CPyStatics[122]; /* 'eth_getTransactionByBlockNumberAndIndex' */
    cpy_r_r381 = CPyObject_GetAttr(cpy_r_r379, cpy_r_r380);
    CPy_DECREF(cpy_r_r379);
    if (unlikely(cpy_r_r381 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 183, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL318;
    }
    if (likely(PyUnicode_Check(cpy_r_r381)))
        cpy_r_r382 = cpy_r_r381;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 183, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r381);
        goto CPyL318;
    }
    cpy_r_r383 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r384 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r385 = CPyDict_GetItem(cpy_r_r383, cpy_r_r384);
    if (unlikely(cpy_r_r385 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 184, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL319;
    }
    cpy_r_r386 = CPyStatics[123]; /* 'eth_getTransactionByBlockHashAndIndex' */
    cpy_r_r387 = CPyObject_GetAttr(cpy_r_r385, cpy_r_r386);
    CPy_DECREF(cpy_r_r385);
    if (unlikely(cpy_r_r387 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 184, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL319;
    }
    if (likely(PyUnicode_Check(cpy_r_r387)))
        cpy_r_r388 = cpy_r_r387;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 184, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r387);
        goto CPyL319;
    }
    cpy_r_r389 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r390 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r391 = CPyDict_GetItem(cpy_r_r389, cpy_r_r390);
    if (unlikely(cpy_r_r391 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 185, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL320;
    }
    cpy_r_r392 = CPyStatics[124]; /* 'eth_getBlockTransactionCountByHash' */
    cpy_r_r393 = CPyObject_GetAttr(cpy_r_r391, cpy_r_r392);
    CPy_DECREF(cpy_r_r391);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 185, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL320;
    }
    if (likely(PyUnicode_Check(cpy_r_r393)))
        cpy_r_r394 = cpy_r_r393;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 185, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r393);
        goto CPyL320;
    }
    cpy_r_r395 = PySet_New(NULL);
    if (unlikely(cpy_r_r395 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL321;
    }
    cpy_r_r396 = PySet_Add(cpy_r_r395, cpy_r_r370);
    CPy_DECREF(cpy_r_r370);
    cpy_r_r397 = cpy_r_r396 >= 0;
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL322;
    }
    cpy_r_r398 = PySet_Add(cpy_r_r395, cpy_r_r376);
    CPy_DECREF(cpy_r_r376);
    cpy_r_r399 = cpy_r_r398 >= 0;
    if (unlikely(!cpy_r_r399)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL323;
    }
    cpy_r_r400 = PySet_Add(cpy_r_r395, cpy_r_r382);
    CPy_DECREF(cpy_r_r382);
    cpy_r_r401 = cpy_r_r400 >= 0;
    if (unlikely(!cpy_r_r401)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL324;
    }
    cpy_r_r402 = PySet_Add(cpy_r_r395, cpy_r_r388);
    CPy_DECREF(cpy_r_r388);
    cpy_r_r403 = cpy_r_r402 >= 0;
    if (unlikely(!cpy_r_r403)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL325;
    }
    cpy_r_r404 = PySet_Add(cpy_r_r395, cpy_r_r394);
    CPy_DECREF(cpy_r_r394);
    cpy_r_r405 = cpy_r_r404 >= 0;
    if (unlikely(!cpy_r_r405)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL326;
    }
    cpy_r_r406 = PyFrozenSet_New(cpy_r_r395);
    CPy_DECREF(cpy_r_r395);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT = cpy_r_r406;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT);
    cpy_r_r407 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r408 = CPyStatics[125]; /* 'BLOCK_IN_RESULT' */
    cpy_r_r409 = CPyDict_SetItem(cpy_r_r407, cpy_r_r408, cpy_r_r406);
    CPy_DECREF(cpy_r_r406);
    cpy_r_r410 = cpy_r_r409 >= 0;
    if (unlikely(!cpy_r_r410)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 180, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r411 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r412 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r413 = CPyDict_GetItem(cpy_r_r411, cpy_r_r412);
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 188, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r414 = CPyStatics[126]; /* 'eth_getRawTransactionByBlockHashAndIndex' */
    cpy_r_r415 = CPyObject_GetAttr(cpy_r_r413, cpy_r_r414);
    CPy_DECREF(cpy_r_r413);
    if (unlikely(cpy_r_r415 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 188, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    if (likely(PyUnicode_Check(cpy_r_r415)))
        cpy_r_r416 = cpy_r_r415;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 188, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r415);
        goto CPyL287;
    }
    cpy_r_r417 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r418 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r419 = CPyDict_GetItem(cpy_r_r417, cpy_r_r418);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 189, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL327;
    }
    cpy_r_r420 = CPyStatics[127]; /* 'eth_getUncleByBlockHashAndIndex' */
    cpy_r_r421 = CPyObject_GetAttr(cpy_r_r419, cpy_r_r420);
    CPy_DECREF(cpy_r_r419);
    if (unlikely(cpy_r_r421 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 189, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL327;
    }
    if (likely(PyUnicode_Check(cpy_r_r421)))
        cpy_r_r422 = cpy_r_r421;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 189, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r421);
        goto CPyL327;
    }
    cpy_r_r423 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r424 = CPyStatics[72]; /* 'RPC' */
    cpy_r_r425 = CPyDict_GetItem(cpy_r_r423, cpy_r_r424);
    if (unlikely(cpy_r_r425 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 190, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL328;
    }
    cpy_r_r426 = CPyStatics[128]; /* 'eth_getUncleCountByBlockHash' */
    cpy_r_r427 = CPyObject_GetAttr(cpy_r_r425, cpy_r_r426);
    CPy_DECREF(cpy_r_r425);
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 190, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL328;
    }
    if (likely(PyUnicode_Check(cpy_r_r427)))
        cpy_r_r428 = cpy_r_r427;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 190, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r427);
        goto CPyL328;
    }
    cpy_r_r429 = PySet_New(NULL);
    if (unlikely(cpy_r_r429 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 187, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL329;
    }
    cpy_r_r430 = PySet_Add(cpy_r_r429, cpy_r_r416);
    CPy_DECREF(cpy_r_r416);
    cpy_r_r431 = cpy_r_r430 >= 0;
    if (unlikely(!cpy_r_r431)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 187, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL330;
    }
    cpy_r_r432 = PySet_Add(cpy_r_r429, cpy_r_r422);
    CPy_DECREF(cpy_r_r422);
    cpy_r_r433 = cpy_r_r432 >= 0;
    if (unlikely(!cpy_r_r433)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 187, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL331;
    }
    cpy_r_r434 = PySet_Add(cpy_r_r429, cpy_r_r428);
    CPy_DECREF(cpy_r_r428);
    cpy_r_r435 = cpy_r_r434 >= 0;
    if (unlikely(!cpy_r_r435)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 187, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL332;
    }
    cpy_r_r436 = PyFrozenSet_New(cpy_r_r429);
    CPy_DECREF(cpy_r_r429);
    if (unlikely(cpy_r_r436 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 187, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS = cpy_r_r436;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS);
    cpy_r_r437 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r438 = CPyStatics[129]; /* 'BLOCKHASH_IN_PARAMS' */
    cpy_r_r439 = CPyDict_SetItem(cpy_r_r437, cpy_r_r438, cpy_r_r436);
    CPy_DECREF(cpy_r_r436);
    cpy_r_r440 = cpy_r_r439 >= 0;
    if (unlikely(!cpy_r_r440)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 187, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r441 = PyDict_New();
    if (unlikely(cpy_r_r441 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 202, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r442 = CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE;
    if (unlikely(cpy_r_r442 == NULL)) {
        goto CPyL333;
    } else
        goto CPyL176;
CPyL174: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ALWAYS_CACHE\" was not set");
    cpy_r_r443 = 0;
    if (unlikely(!cpy_r_r443)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 202, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL176: ;
    cpy_r_r444 = PyObject_GetIter(cpy_r_r442);
    if (unlikely(cpy_r_r444 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 202, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL334;
    }
CPyL177: ;
    cpy_r_r445 = PyIter_Next(cpy_r_r444);
    if (cpy_r_r445 == NULL) goto CPyL335;
    if (likely(PyUnicode_Check(cpy_r_r445)))
        cpy_r_r446 = cpy_r_r445;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 202, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r445);
        goto CPyL336;
    }
    cpy_r_r447 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r448 = CPyStatics[63]; /* 'always_cache_request' */
    cpy_r_r449 = CPyDict_GetItem(cpy_r_r447, cpy_r_r448);
    if (unlikely(cpy_r_r449 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 202, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL337;
    }
    cpy_r_r450 = PyDict_SetItem(cpy_r_r441, cpy_r_r446, cpy_r_r449);
    CPy_DECREF(cpy_r_r446);
    CPy_DECREF(cpy_r_r449);
    cpy_r_r451 = cpy_r_r450 >= 0;
    if (unlikely(!cpy_r_r451)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 202, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL336;
    } else
        goto CPyL177;
CPyL181: ;
    cpy_r_r452 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r452)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 202, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL334;
    }
    cpy_r_r453 = PyDict_New();
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 203, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL334;
    }
    cpy_r_r454 = CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS;
    if (unlikely(cpy_r_r454 == NULL)) {
        goto CPyL338;
    } else
        goto CPyL186;
CPyL184: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCKNUM_IN_PARAMS\" was not set");
    cpy_r_r455 = 0;
    if (unlikely(!cpy_r_r455)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 203, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL186: ;
    cpy_r_r456 = PyObject_GetIter(cpy_r_r454);
    if (unlikely(cpy_r_r456 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 203, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL339;
    }
CPyL187: ;
    cpy_r_r457 = PyIter_Next(cpy_r_r456);
    if (cpy_r_r457 == NULL) goto CPyL340;
    if (likely(PyUnicode_Check(cpy_r_r457)))
        cpy_r_r458 = cpy_r_r457;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 203, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r457);
        goto CPyL341;
    }
    cpy_r_r459 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r460 = CPyStatics[67]; /* 'validate_from_block_id_in_params' */
    cpy_r_r461 = CPyDict_GetItem(cpy_r_r459, cpy_r_r460);
    if (unlikely(cpy_r_r461 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 203, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL342;
    }
    cpy_r_r462 = PyDict_SetItem(cpy_r_r453, cpy_r_r458, cpy_r_r461);
    CPy_DECREF(cpy_r_r458);
    CPy_DECREF(cpy_r_r461);
    cpy_r_r463 = cpy_r_r462 >= 0;
    if (unlikely(!cpy_r_r463)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 203, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL341;
    } else
        goto CPyL187;
CPyL191: ;
    cpy_r_r464 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r464)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 203, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL339;
    }
    cpy_r_r465 = PyDict_New();
    if (unlikely(cpy_r_r465 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 204, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL339;
    }
    cpy_r_r466 = CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT;
    if (unlikely(cpy_r_r466 == NULL)) {
        goto CPyL343;
    } else
        goto CPyL196;
CPyL194: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCK_IN_RESULT\" was not set");
    cpy_r_r467 = 0;
    if (unlikely(!cpy_r_r467)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 204, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL196: ;
    cpy_r_r468 = PyObject_GetIter(cpy_r_r466);
    if (unlikely(cpy_r_r468 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 204, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
CPyL197: ;
    cpy_r_r469 = PyIter_Next(cpy_r_r468);
    if (cpy_r_r469 == NULL) goto CPyL345;
    if (likely(PyUnicode_Check(cpy_r_r469)))
        cpy_r_r470 = cpy_r_r469;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 204, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r469);
        goto CPyL346;
    }
    cpy_r_r471 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r472 = CPyStatics[69]; /* 'validate_from_blocknum_in_result' */
    cpy_r_r473 = CPyDict_GetItem(cpy_r_r471, cpy_r_r472);
    if (unlikely(cpy_r_r473 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 204, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL347;
    }
    cpy_r_r474 = PyDict_SetItem(cpy_r_r465, cpy_r_r470, cpy_r_r473);
    CPy_DECREF(cpy_r_r470);
    CPy_DECREF(cpy_r_r473);
    cpy_r_r475 = cpy_r_r474 >= 0;
    if (unlikely(!cpy_r_r475)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 204, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL346;
    } else
        goto CPyL197;
CPyL201: ;
    cpy_r_r476 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r476)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 204, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    cpy_r_r477 = PyDict_New();
    if (unlikely(cpy_r_r477 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 205, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL344;
    }
    cpy_r_r478 = CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS;
    if (unlikely(cpy_r_r478 == NULL)) {
        goto CPyL348;
    } else
        goto CPyL206;
CPyL204: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCKHASH_IN_PARAMS\" was not set");
    cpy_r_r479 = 0;
    if (unlikely(!cpy_r_r479)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 205, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL206: ;
    cpy_r_r480 = PyObject_GetIter(cpy_r_r478);
    if (unlikely(cpy_r_r480 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 205, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL349;
    }
CPyL207: ;
    cpy_r_r481 = PyIter_Next(cpy_r_r480);
    if (cpy_r_r481 == NULL) goto CPyL350;
    if (likely(PyUnicode_Check(cpy_r_r481)))
        cpy_r_r482 = cpy_r_r481;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 205, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r481);
        goto CPyL351;
    }
    cpy_r_r483 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r484 = CPyStatics[68]; /* 'validate_from_blockhash_in_params' */
    cpy_r_r485 = CPyDict_GetItem(cpy_r_r483, cpy_r_r484);
    if (unlikely(cpy_r_r485 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 205, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL352;
    }
    cpy_r_r486 = PyDict_SetItem(cpy_r_r477, cpy_r_r482, cpy_r_r485);
    CPy_DECREF(cpy_r_r482);
    CPy_DECREF(cpy_r_r485);
    cpy_r_r487 = cpy_r_r486 >= 0;
    if (unlikely(!cpy_r_r487)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 205, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL351;
    } else
        goto CPyL207;
CPyL211: ;
    cpy_r_r488 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r488)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 205, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL349;
    }
    cpy_r_r489 = PyDict_New();
    if (unlikely(cpy_r_r489 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 201, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL349;
    }
    cpy_r_r490 = CPyDict_UpdateInDisplay(cpy_r_r489, cpy_r_r441);
    CPy_DECREF(cpy_r_r441);
    cpy_r_r491 = cpy_r_r490 >= 0;
    if (unlikely(!cpy_r_r491)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 201, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL353;
    }
    cpy_r_r492 = CPyDict_UpdateInDisplay(cpy_r_r489, cpy_r_r453);
    CPy_DECREF(cpy_r_r453);
    cpy_r_r493 = cpy_r_r492 >= 0;
    if (unlikely(!cpy_r_r493)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 201, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL354;
    }
    cpy_r_r494 = CPyDict_UpdateInDisplay(cpy_r_r489, cpy_r_r465);
    CPy_DECREF(cpy_r_r465);
    cpy_r_r495 = cpy_r_r494 >= 0;
    if (unlikely(!cpy_r_r495)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 201, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL355;
    }
    cpy_r_r496 = CPyDict_UpdateInDisplay(cpy_r_r489, cpy_r_r477);
    CPy_DECREF(cpy_r_r477);
    cpy_r_r497 = cpy_r_r496 >= 0;
    if (unlikely(!cpy_r_r497)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 201, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL356;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP = cpy_r_r489;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP);
    cpy_r_r498 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r499 = CPyStatics[130]; /* 'INTERNAL_VALIDATION_MAP' */
    cpy_r_r500 = CPyDict_SetItem(cpy_r_r498, cpy_r_r499, cpy_r_r489);
    CPy_DECREF(cpy_r_r489);
    cpy_r_r501 = cpy_r_r500 >= 0;
    if (unlikely(!cpy_r_r501)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 201, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r502 = CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP;
    if (likely(cpy_r_r502 != NULL)) goto CPyL221;
    PyErr_SetString(PyExc_NameError, "value for final name \"INTERNAL_VALIDATION_MAP\" was not set");
    cpy_r_r503 = 0;
    if (unlikely(!cpy_r_r503)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 207, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL221: ;
    cpy_r_r504 = CPyDict_KeysView(cpy_r_r502);
    if (unlikely(cpy_r_r504 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 207, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r505 = PySequence_Tuple(cpy_r_r504);
    CPy_DECREF(cpy_r_r504);
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 207, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___CACHEABLE_REQUESTS = cpy_r_r505;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___CACHEABLE_REQUESTS);
    cpy_r_r506 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r507 = CPyStatics[131]; /* 'CACHEABLE_REQUESTS' */
    cpy_r_r508 = CPyDict_SetItem(cpy_r_r506, cpy_r_r507, cpy_r_r505);
    CPy_DECREF(cpy_r_r505);
    cpy_r_r509 = cpy_r_r508 >= 0;
    if (unlikely(!cpy_r_r509)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 207, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r510 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r511 = CPyStatics[45]; /* 'Callable' */
    cpy_r_r512 = CPyDict_GetItem(cpy_r_r510, cpy_r_r511);
    if (unlikely(cpy_r_r512 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 286, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r513 = CPyStatics[132]; /* 'AsyncBaseProvider' */
    cpy_r_r514 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r515 = CPyStatics[51]; /* 'Sequence' */
    cpy_r_r516 = CPyDict_GetItem(cpy_r_r514, cpy_r_r515);
    if (unlikely(cpy_r_r516 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 287, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL357;
    }
    cpy_r_r517 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r518 = CPyStatics[44]; /* 'Any' */
    cpy_r_r519 = CPyDict_GetItem(cpy_r_r517, cpy_r_r518);
    if (unlikely(cpy_r_r519 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 287, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL358;
    }
    cpy_r_r520 = PyObject_GetItem(cpy_r_r516, cpy_r_r519);
    CPy_DECREF(cpy_r_r516);
    CPy_DECREF(cpy_r_r519);
    if (unlikely(cpy_r_r520 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 287, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL357;
    }
    cpy_r_r521 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r522 = CPyStatics[47]; /* 'Dict' */
    cpy_r_r523 = CPyDict_GetItem(cpy_r_r521, cpy_r_r522);
    if (unlikely(cpy_r_r523 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 287, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL359;
    }
    cpy_r_r524 = (PyObject *)&PyUnicode_Type;
    cpy_r_r525 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r526 = CPyStatics[44]; /* 'Any' */
    cpy_r_r527 = CPyDict_GetItem(cpy_r_r525, cpy_r_r526);
    if (unlikely(cpy_r_r527 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 287, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL360;
    }
    CPy_INCREF(cpy_r_r524);
    cpy_r_r528.f0 = cpy_r_r524;
    cpy_r_r528.f1 = cpy_r_r527;
    cpy_r_r529 = PyTuple_New(2);
    if (unlikely(cpy_r_r529 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp56 = cpy_r_r528.f0;
    PyTuple_SET_ITEM(cpy_r_r529, 0, __tmp56);
    PyObject *__tmp57 = cpy_r_r528.f1;
    PyTuple_SET_ITEM(cpy_r_r529, 1, __tmp57);
    cpy_r_r530 = PyObject_GetItem(cpy_r_r523, cpy_r_r529);
    CPy_DECREF(cpy_r_r523);
    CPy_DECREF(cpy_r_r529);
    if (unlikely(cpy_r_r530 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 287, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL359;
    }
    cpy_r_r531 = PyList_New(3);
    if (unlikely(cpy_r_r531 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 287, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL361;
    }
    cpy_r_r532 = (CPyPtr)&((PyListObject *)cpy_r_r531)->ob_item;
    cpy_r_r533 = *(CPyPtr *)cpy_r_r532;
    CPy_INCREF(cpy_r_r513);
    *(PyObject * *)cpy_r_r533 = cpy_r_r513;
    cpy_r_r534 = cpy_r_r533 + 8;
    *(PyObject * *)cpy_r_r534 = cpy_r_r520;
    cpy_r_r535 = cpy_r_r533 + 16;
    *(PyObject * *)cpy_r_r535 = cpy_r_r530;
    cpy_r_r536 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r537 = CPyStatics[53]; /* 'Union' */
    cpy_r_r538 = CPyDict_GetItem(cpy_r_r536, cpy_r_r537);
    if (unlikely(cpy_r_r538 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 288, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL362;
    }
    cpy_r_r539 = (PyObject *)&PyBool_Type;
    cpy_r_r540 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r541 = CPyStatics[46]; /* 'Coroutine' */
    cpy_r_r542 = CPyDict_GetItem(cpy_r_r540, cpy_r_r541);
    if (unlikely(cpy_r_r542 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 288, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL363;
    }
    cpy_r_r543 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r544 = CPyStatics[44]; /* 'Any' */
    cpy_r_r545 = CPyDict_GetItem(cpy_r_r543, cpy_r_r544);
    if (unlikely(cpy_r_r545 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 288, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL364;
    }
    cpy_r_r546 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r547 = CPyStatics[44]; /* 'Any' */
    cpy_r_r548 = CPyDict_GetItem(cpy_r_r546, cpy_r_r547);
    if (unlikely(cpy_r_r548 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 288, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL365;
    }
    cpy_r_r549 = (PyObject *)&PyBool_Type;
    CPy_INCREF(cpy_r_r549);
    cpy_r_r550.f0 = cpy_r_r545;
    cpy_r_r550.f1 = cpy_r_r548;
    cpy_r_r550.f2 = cpy_r_r549;
    cpy_r_r551 = PyTuple_New(3);
    if (unlikely(cpy_r_r551 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp58 = cpy_r_r550.f0;
    PyTuple_SET_ITEM(cpy_r_r551, 0, __tmp58);
    PyObject *__tmp59 = cpy_r_r550.f1;
    PyTuple_SET_ITEM(cpy_r_r551, 1, __tmp59);
    PyObject *__tmp60 = cpy_r_r550.f2;
    PyTuple_SET_ITEM(cpy_r_r551, 2, __tmp60);
    cpy_r_r552 = PyObject_GetItem(cpy_r_r542, cpy_r_r551);
    CPy_DECREF(cpy_r_r542);
    CPy_DECREF(cpy_r_r551);
    if (unlikely(cpy_r_r552 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 288, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL363;
    }
    CPy_INCREF(cpy_r_r539);
    cpy_r_r553.f0 = cpy_r_r539;
    cpy_r_r553.f1 = cpy_r_r552;
    cpy_r_r554 = PyTuple_New(2);
    if (unlikely(cpy_r_r554 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp61 = cpy_r_r553.f0;
    PyTuple_SET_ITEM(cpy_r_r554, 0, __tmp61);
    PyObject *__tmp62 = cpy_r_r553.f1;
    PyTuple_SET_ITEM(cpy_r_r554, 1, __tmp62);
    cpy_r_r555 = PyObject_GetItem(cpy_r_r538, cpy_r_r554);
    CPy_DECREF(cpy_r_r538);
    CPy_DECREF(cpy_r_r554);
    if (unlikely(cpy_r_r555 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 288, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL362;
    }
    cpy_r_r556.f0 = cpy_r_r531;
    cpy_r_r556.f1 = cpy_r_r555;
    cpy_r_r557 = PyTuple_New(2);
    if (unlikely(cpy_r_r557 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp63 = cpy_r_r556.f0;
    PyTuple_SET_ITEM(cpy_r_r557, 0, __tmp63);
    PyObject *__tmp64 = cpy_r_r556.f1;
    PyTuple_SET_ITEM(cpy_r_r557, 1, __tmp64);
    cpy_r_r558 = PyObject_GetItem(cpy_r_r512, cpy_r_r557);
    CPy_DECREF(cpy_r_r512);
    CPy_DECREF(cpy_r_r557);
    if (unlikely(cpy_r_r558 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 286, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r559 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r560 = CPyStatics[133]; /* 'ASYNC_VALIDATOR_TYPE' */
    cpy_r_r561 = CPyDict_SetItem(cpy_r_r559, cpy_r_r560, cpy_r_r558);
    CPy_DECREF(cpy_r_r558);
    cpy_r_r562 = cpy_r_r561 >= 0;
    if (unlikely(!cpy_r_r562)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 286, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r563 = PyDict_New();
    if (unlikely(cpy_r_r563 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 292, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    cpy_r_r564 = CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE;
    if (unlikely(cpy_r_r564 == NULL)) {
        goto CPyL366;
    } else
        goto CPyL244;
CPyL242: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ALWAYS_CACHE\" was not set");
    cpy_r_r565 = 0;
    if (unlikely(!cpy_r_r565)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 292, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL244: ;
    cpy_r_r566 = PyObject_GetIter(cpy_r_r564);
    if (unlikely(cpy_r_r566 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 292, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL367;
    }
CPyL245: ;
    cpy_r_r567 = PyIter_Next(cpy_r_r566);
    if (cpy_r_r567 == NULL) goto CPyL368;
    if (likely(PyUnicode_Check(cpy_r_r567)))
        cpy_r_r568 = cpy_r_r567;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 292, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r567);
        goto CPyL369;
    }
    cpy_r_r569 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r570 = CPyStatics[63]; /* 'always_cache_request' */
    cpy_r_r571 = CPyDict_GetItem(cpy_r_r569, cpy_r_r570);
    if (unlikely(cpy_r_r571 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 292, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL370;
    }
    cpy_r_r572 = PyDict_SetItem(cpy_r_r563, cpy_r_r568, cpy_r_r571);
    CPy_DECREF(cpy_r_r568);
    CPy_DECREF(cpy_r_r571);
    cpy_r_r573 = cpy_r_r572 >= 0;
    if (unlikely(!cpy_r_r573)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 292, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL369;
    } else
        goto CPyL245;
CPyL249: ;
    cpy_r_r574 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r574)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 292, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL367;
    }
    cpy_r_r575 = PyDict_New();
    if (unlikely(cpy_r_r575 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 293, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL367;
    }
    cpy_r_r576 = CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS;
    if (unlikely(cpy_r_r576 == NULL)) {
        goto CPyL371;
    } else
        goto CPyL254;
CPyL252: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCKNUM_IN_PARAMS\" was not set");
    cpy_r_r577 = 0;
    if (unlikely(!cpy_r_r577)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 295, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL254: ;
    cpy_r_r578 = PyObject_GetIter(cpy_r_r576);
    if (unlikely(cpy_r_r578 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 293, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL372;
    }
CPyL255: ;
    cpy_r_r579 = PyIter_Next(cpy_r_r578);
    if (cpy_r_r579 == NULL) goto CPyL373;
    if (likely(PyUnicode_Check(cpy_r_r579)))
        cpy_r_r580 = cpy_r_r579;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 293, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r579);
        goto CPyL374;
    }
    cpy_r_r581 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r582 = CPyStatics[64]; /* 'async_validate_from_block_id_in_params' */
    cpy_r_r583 = CPyDict_GetItem(cpy_r_r581, cpy_r_r582);
    if (unlikely(cpy_r_r583 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 294, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL375;
    }
    cpy_r_r584 = PyDict_SetItem(cpy_r_r575, cpy_r_r580, cpy_r_r583);
    CPy_DECREF(cpy_r_r580);
    CPy_DECREF(cpy_r_r583);
    cpy_r_r585 = cpy_r_r584 >= 0;
    if (unlikely(!cpy_r_r585)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 293, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL374;
    } else
        goto CPyL255;
CPyL259: ;
    cpy_r_r586 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r586)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 293, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL372;
    }
    cpy_r_r587 = PyDict_New();
    if (unlikely(cpy_r_r587 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 297, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL372;
    }
    cpy_r_r588 = CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT;
    if (unlikely(cpy_r_r588 == NULL)) {
        goto CPyL376;
    } else
        goto CPyL264;
CPyL262: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCK_IN_RESULT\" was not set");
    cpy_r_r589 = 0;
    if (unlikely(!cpy_r_r589)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 298, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL264: ;
    cpy_r_r590 = PyObject_GetIter(cpy_r_r588);
    if (unlikely(cpy_r_r590 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 297, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL377;
    }
CPyL265: ;
    cpy_r_r591 = PyIter_Next(cpy_r_r590);
    if (cpy_r_r591 == NULL) goto CPyL378;
    if (likely(PyUnicode_Check(cpy_r_r591)))
        cpy_r_r592 = cpy_r_r591;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 297, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r591);
        goto CPyL379;
    }
    cpy_r_r593 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r594 = CPyStatics[66]; /* 'async_validate_from_blocknum_in_result' */
    cpy_r_r595 = CPyDict_GetItem(cpy_r_r593, cpy_r_r594);
    if (unlikely(cpy_r_r595 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 298, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL380;
    }
    cpy_r_r596 = PyDict_SetItem(cpy_r_r587, cpy_r_r592, cpy_r_r595);
    CPy_DECREF(cpy_r_r592);
    CPy_DECREF(cpy_r_r595);
    cpy_r_r597 = cpy_r_r596 >= 0;
    if (unlikely(!cpy_r_r597)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 297, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL379;
    } else
        goto CPyL265;
CPyL269: ;
    cpy_r_r598 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r598)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 297, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL377;
    }
    cpy_r_r599 = PyDict_New();
    if (unlikely(cpy_r_r599 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 300, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL377;
    }
    cpy_r_r600 = CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS;
    if (unlikely(cpy_r_r600 == NULL)) {
        goto CPyL381;
    } else
        goto CPyL274;
CPyL272: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BLOCKHASH_IN_PARAMS\" was not set");
    cpy_r_r601 = 0;
    if (unlikely(!cpy_r_r601)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 302, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    CPy_Unreachable();
CPyL274: ;
    cpy_r_r602 = PyObject_GetIter(cpy_r_r600);
    if (unlikely(cpy_r_r602 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 300, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL382;
    }
CPyL275: ;
    cpy_r_r603 = PyIter_Next(cpy_r_r602);
    if (cpy_r_r603 == NULL) goto CPyL383;
    if (likely(PyUnicode_Check(cpy_r_r603)))
        cpy_r_r604 = cpy_r_r603;
    else {
        CPy_TypeErrorTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 300, CPyStatic_faster_web3____utils___caching___caching_utils___globals, "str", cpy_r_r603);
        goto CPyL384;
    }
    cpy_r_r605 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r606 = CPyStatics[65]; /* 'async_validate_from_blockhash_in_params' */
    cpy_r_r607 = CPyDict_GetItem(cpy_r_r605, cpy_r_r606);
    if (unlikely(cpy_r_r607 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 301, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL385;
    }
    cpy_r_r608 = PyDict_SetItem(cpy_r_r599, cpy_r_r604, cpy_r_r607);
    CPy_DECREF(cpy_r_r604);
    CPy_DECREF(cpy_r_r607);
    cpy_r_r609 = cpy_r_r608 >= 0;
    if (unlikely(!cpy_r_r609)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 300, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL384;
    } else
        goto CPyL275;
CPyL279: ;
    cpy_r_r610 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r610)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 300, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL382;
    }
    cpy_r_r611 = PyDict_New();
    if (unlikely(cpy_r_r611 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 291, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL382;
    }
    cpy_r_r612 = CPyDict_UpdateInDisplay(cpy_r_r611, cpy_r_r563);
    CPy_DECREF(cpy_r_r563);
    cpy_r_r613 = cpy_r_r612 >= 0;
    if (unlikely(!cpy_r_r613)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 291, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL386;
    }
    cpy_r_r614 = CPyDict_UpdateInDisplay(cpy_r_r611, cpy_r_r575);
    CPy_DECREF(cpy_r_r575);
    cpy_r_r615 = cpy_r_r614 >= 0;
    if (unlikely(!cpy_r_r615)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 291, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL387;
    }
    cpy_r_r616 = CPyDict_UpdateInDisplay(cpy_r_r611, cpy_r_r587);
    CPy_DECREF(cpy_r_r587);
    cpy_r_r617 = cpy_r_r616 >= 0;
    if (unlikely(!cpy_r_r617)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 291, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL388;
    }
    cpy_r_r618 = CPyDict_UpdateInDisplay(cpy_r_r611, cpy_r_r599);
    CPy_DECREF(cpy_r_r599);
    cpy_r_r619 = cpy_r_r618 >= 0;
    if (unlikely(!cpy_r_r619)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 291, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL389;
    }
    CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP = cpy_r_r611;
    CPy_INCREF(CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP);
    cpy_r_r620 = CPyStatic_faster_web3____utils___caching___caching_utils___globals;
    cpy_r_r621 = CPyStatics[134]; /* 'ASYNC_INTERNAL_VALIDATION_MAP' */
    cpy_r_r622 = CPyDict_SetItem(cpy_r_r620, cpy_r_r621, cpy_r_r611);
    CPy_DECREF(cpy_r_r611);
    cpy_r_r623 = cpy_r_r622 >= 0;
    if (unlikely(!cpy_r_r623)) {
        CPy_AddTraceback("faster_web3/_utils/caching/caching_utils.py", "<module>", 291, CPyStatic_faster_web3____utils___caching___caching_utils___globals);
        goto CPyL287;
    }
    return 1;
CPyL287: ;
    cpy_r_r624 = 2;
    return cpy_r_r624;
CPyL288: ;
    CPy_DecRef(cpy_r_r143);
    goto CPyL287;
CPyL289: ;
    CPyTagged_DecRef(cpy_r_r170);
    goto CPyL48;
CPyL290: ;
    CPyTagged_DecRef(cpy_r_r170);
    goto CPyL287;
CPyL291: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    goto CPyL287;
CPyL292: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    goto CPyL287;
CPyL293: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    goto CPyL287;
CPyL294: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    CPyTagged_DecRef(cpy_r_r204);
    goto CPyL287;
CPyL295: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    CPyTagged_DecRef(cpy_r_r204);
    CPyTagged_DecRef(cpy_r_r212);
    goto CPyL287;
CPyL296: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    CPyTagged_DecRef(cpy_r_r204);
    CPyTagged_DecRef(cpy_r_r212);
    CPyTagged_DecRef(cpy_r_r220);
    goto CPyL287;
CPyL297: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    CPyTagged_DecRef(cpy_r_r204);
    CPyTagged_DecRef(cpy_r_r212);
    CPyTagged_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r228);
    goto CPyL287;
CPyL298: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    CPyTagged_DecRef(cpy_r_r204);
    CPyTagged_DecRef(cpy_r_r212);
    CPyTagged_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r228);
    CPyTagged_DecRef(cpy_r_r236);
    goto CPyL287;
CPyL299: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    CPyTagged_DecRef(cpy_r_r204);
    CPyTagged_DecRef(cpy_r_r212);
    CPyTagged_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r228);
    CPyTagged_DecRef(cpy_r_r236);
    CPyTagged_DecRef(cpy_r_r244);
    goto CPyL287;
CPyL300: ;
    CPyTagged_DecRef(cpy_r_r170);
    CPyTagged_DecRef(cpy_r_r180);
    CPyTagged_DecRef(cpy_r_r188);
    CPyTagged_DecRef(cpy_r_r196);
    CPyTagged_DecRef(cpy_r_r204);
    CPyTagged_DecRef(cpy_r_r212);
    CPyTagged_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r228);
    CPyTagged_DecRef(cpy_r_r236);
    CPyTagged_DecRef(cpy_r_r244);
    CPyTagged_DecRef(cpy_r_r252);
    goto CPyL287;
CPyL301: ;
    CPy_DecRef(cpy_r_r294);
    goto CPyL287;
CPyL302: ;
    CPy_DecRef(cpy_r_r294);
    CPy_DecRef(cpy_r_r300);
    goto CPyL287;
CPyL303: ;
    CPy_DecRef(cpy_r_r294);
    CPy_DecRef(cpy_r_r300);
    CPy_DecRef(cpy_r_r306);
    goto CPyL287;
CPyL304: ;
    CPy_DecRef(cpy_r_r300);
    CPy_DecRef(cpy_r_r306);
    CPy_DecRef(cpy_r_r307);
    goto CPyL287;
CPyL305: ;
    CPy_DecRef(cpy_r_r306);
    CPy_DecRef(cpy_r_r307);
    goto CPyL287;
CPyL306: ;
    CPy_DecRef(cpy_r_r307);
    goto CPyL287;
CPyL307: ;
    CPy_DecRef(cpy_r_r324);
    goto CPyL287;
CPyL308: ;
    CPy_DecRef(cpy_r_r324);
    CPy_DecRef(cpy_r_r330);
    goto CPyL287;
CPyL309: ;
    CPy_DecRef(cpy_r_r324);
    CPy_DecRef(cpy_r_r330);
    CPy_DecRef(cpy_r_r336);
    goto CPyL287;
CPyL310: ;
    CPy_DecRef(cpy_r_r324);
    CPy_DecRef(cpy_r_r330);
    CPy_DecRef(cpy_r_r336);
    CPy_DecRef(cpy_r_r342);
    goto CPyL287;
CPyL311: ;
    CPy_DecRef(cpy_r_r324);
    CPy_DecRef(cpy_r_r330);
    CPy_DecRef(cpy_r_r336);
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_r348);
    goto CPyL287;
CPyL312: ;
    CPy_DecRef(cpy_r_r330);
    CPy_DecRef(cpy_r_r336);
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    goto CPyL287;
CPyL313: ;
    CPy_DecRef(cpy_r_r336);
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    goto CPyL287;
CPyL314: ;
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    goto CPyL287;
CPyL315: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    goto CPyL287;
CPyL316: ;
    CPy_DecRef(cpy_r_r349);
    goto CPyL287;
CPyL317: ;
    CPy_DecRef(cpy_r_r370);
    goto CPyL287;
CPyL318: ;
    CPy_DecRef(cpy_r_r370);
    CPy_DecRef(cpy_r_r376);
    goto CPyL287;
CPyL319: ;
    CPy_DecRef(cpy_r_r370);
    CPy_DecRef(cpy_r_r376);
    CPy_DecRef(cpy_r_r382);
    goto CPyL287;
CPyL320: ;
    CPy_DecRef(cpy_r_r370);
    CPy_DecRef(cpy_r_r376);
    CPy_DecRef(cpy_r_r382);
    CPy_DecRef(cpy_r_r388);
    goto CPyL287;
CPyL321: ;
    CPy_DecRef(cpy_r_r370);
    CPy_DecRef(cpy_r_r376);
    CPy_DecRef(cpy_r_r382);
    CPy_DecRef(cpy_r_r388);
    CPy_DecRef(cpy_r_r394);
    goto CPyL287;
CPyL322: ;
    CPy_DecRef(cpy_r_r376);
    CPy_DecRef(cpy_r_r382);
    CPy_DecRef(cpy_r_r388);
    CPy_DecRef(cpy_r_r394);
    CPy_DecRef(cpy_r_r395);
    goto CPyL287;
CPyL323: ;
    CPy_DecRef(cpy_r_r382);
    CPy_DecRef(cpy_r_r388);
    CPy_DecRef(cpy_r_r394);
    CPy_DecRef(cpy_r_r395);
    goto CPyL287;
CPyL324: ;
    CPy_DecRef(cpy_r_r388);
    CPy_DecRef(cpy_r_r394);
    CPy_DecRef(cpy_r_r395);
    goto CPyL287;
CPyL325: ;
    CPy_DecRef(cpy_r_r394);
    CPy_DecRef(cpy_r_r395);
    goto CPyL287;
CPyL326: ;
    CPy_DecRef(cpy_r_r395);
    goto CPyL287;
CPyL327: ;
    CPy_DecRef(cpy_r_r416);
    goto CPyL287;
CPyL328: ;
    CPy_DecRef(cpy_r_r416);
    CPy_DecRef(cpy_r_r422);
    goto CPyL287;
CPyL329: ;
    CPy_DecRef(cpy_r_r416);
    CPy_DecRef(cpy_r_r422);
    CPy_DecRef(cpy_r_r428);
    goto CPyL287;
CPyL330: ;
    CPy_DecRef(cpy_r_r422);
    CPy_DecRef(cpy_r_r428);
    CPy_DecRef(cpy_r_r429);
    goto CPyL287;
CPyL331: ;
    CPy_DecRef(cpy_r_r428);
    CPy_DecRef(cpy_r_r429);
    goto CPyL287;
CPyL332: ;
    CPy_DecRef(cpy_r_r429);
    goto CPyL287;
CPyL333: ;
    CPy_DecRef(cpy_r_r441);
    goto CPyL174;
CPyL334: ;
    CPy_DecRef(cpy_r_r441);
    goto CPyL287;
CPyL335: ;
    CPy_DECREF(cpy_r_r444);
    goto CPyL181;
CPyL336: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r444);
    goto CPyL287;
CPyL337: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r444);
    CPy_DecRef(cpy_r_r446);
    goto CPyL287;
CPyL338: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    goto CPyL184;
CPyL339: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    goto CPyL287;
CPyL340: ;
    CPy_DECREF(cpy_r_r456);
    goto CPyL191;
CPyL341: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r456);
    goto CPyL287;
CPyL342: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r456);
    CPy_DecRef(cpy_r_r458);
    goto CPyL287;
CPyL343: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    goto CPyL194;
CPyL344: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    goto CPyL287;
CPyL345: ;
    CPy_DECREF(cpy_r_r468);
    goto CPyL201;
CPyL346: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r468);
    goto CPyL287;
CPyL347: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r468);
    CPy_DecRef(cpy_r_r470);
    goto CPyL287;
CPyL348: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r477);
    goto CPyL204;
CPyL349: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r477);
    goto CPyL287;
CPyL350: ;
    CPy_DECREF(cpy_r_r480);
    goto CPyL211;
CPyL351: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r480);
    goto CPyL287;
CPyL352: ;
    CPy_DecRef(cpy_r_r441);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r480);
    CPy_DecRef(cpy_r_r482);
    goto CPyL287;
CPyL353: ;
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r489);
    goto CPyL287;
CPyL354: ;
    CPy_DecRef(cpy_r_r465);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r489);
    goto CPyL287;
CPyL355: ;
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r489);
    goto CPyL287;
CPyL356: ;
    CPy_DecRef(cpy_r_r489);
    goto CPyL287;
CPyL357: ;
    CPy_DecRef(cpy_r_r512);
    goto CPyL287;
CPyL358: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r516);
    goto CPyL287;
CPyL359: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r520);
    goto CPyL287;
CPyL360: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r520);
    CPy_DecRef(cpy_r_r523);
    goto CPyL287;
CPyL361: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r520);
    CPy_DecRef(cpy_r_r530);
    goto CPyL287;
CPyL362: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r531);
    goto CPyL287;
CPyL363: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r531);
    CPy_DecRef(cpy_r_r538);
    goto CPyL287;
CPyL364: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r531);
    CPy_DecRef(cpy_r_r538);
    CPy_DecRef(cpy_r_r542);
    goto CPyL287;
CPyL365: ;
    CPy_DecRef(cpy_r_r512);
    CPy_DecRef(cpy_r_r531);
    CPy_DecRef(cpy_r_r538);
    CPy_DecRef(cpy_r_r542);
    CPy_DecRef(cpy_r_r545);
    goto CPyL287;
CPyL366: ;
    CPy_DecRef(cpy_r_r563);
    goto CPyL242;
CPyL367: ;
    CPy_DecRef(cpy_r_r563);
    goto CPyL287;
CPyL368: ;
    CPy_DECREF(cpy_r_r566);
    goto CPyL249;
CPyL369: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r566);
    goto CPyL287;
CPyL370: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r566);
    CPy_DecRef(cpy_r_r568);
    goto CPyL287;
CPyL371: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    goto CPyL252;
CPyL372: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    goto CPyL287;
CPyL373: ;
    CPy_DECREF(cpy_r_r578);
    goto CPyL259;
CPyL374: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r578);
    goto CPyL287;
CPyL375: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r578);
    CPy_DecRef(cpy_r_r580);
    goto CPyL287;
CPyL376: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    goto CPyL262;
CPyL377: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    goto CPyL287;
CPyL378: ;
    CPy_DECREF(cpy_r_r590);
    goto CPyL269;
CPyL379: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r590);
    goto CPyL287;
CPyL380: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r590);
    CPy_DecRef(cpy_r_r592);
    goto CPyL287;
CPyL381: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r599);
    goto CPyL272;
CPyL382: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r599);
    goto CPyL287;
CPyL383: ;
    CPy_DECREF(cpy_r_r602);
    goto CPyL279;
CPyL384: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r602);
    goto CPyL287;
CPyL385: ;
    CPy_DecRef(cpy_r_r563);
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r602);
    CPy_DecRef(cpy_r_r604);
    goto CPyL287;
CPyL386: ;
    CPy_DecRef(cpy_r_r575);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r611);
    goto CPyL287;
CPyL387: ;
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r611);
    goto CPyL287;
CPyL388: ;
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r611);
    goto CPyL287;
CPyL389: ;
    CPy_DecRef(cpy_r_r611);
    goto CPyL287;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3____utils___caching___caching_utils = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_asyncio = Py_None;
    CPyModule_hashlib = Py_None;
    CPyModule_threading = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_utils = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_web3____utils___caching = Py_None;
    CPyModule_faster_web3____utils___caching___request_caching_validation = Py_None;
    CPyModule_faster_web3____utils___empty = Py_None;
    CPyModule_faster_web3____utils___rpc_abi = Py_None;
    CPyModule_faster_web3___exceptions = Py_None;
    CPyModule_faster_web3___types = Py_None;
    CPyModule_faster_web3___utils = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[161];
const char * const CPyLit_Str[] = {
    "\006\thexdigest\004text\004keys\tGenerator\000$Cannot generate cache key for value ",
    "\004\t of type \rWeb3TypeError\026cache_allowed_requests\022cacheable_requests",
    "\004\"request_cache_validation_threshold\005empty\veth_chainId\fmake_request",
    "\a\006result\tException\005error\016_request_cache\001:\023_request_cache_lock\b__exit__",
    "\004\t__enter__\026handle_request_caching\n_decorator\rGeneratorExit",
    "\005\rStopIteration\t__aexit__\n__aenter__\034async_handle_request_caching\002id",
    "\004\006method\006params\031async_handle_send_caching\031async_handle_recv_caching",
    "\004\bbuiltins\aasyncio\ahashlib\tthreading",
    "\003+faster_web3/_utils/caching/caching_utils.py\b<module>\rTYPE_CHECKING",
    "\n\003Any\bCallable\tCoroutine\004Dict\005Final\004List\bOptional\bSequence\005Tuple\005Union",
    "\006\005final\006typing\020faster_eth_utils\aChainId\neth_typing\023ASYNC_PROVIDER_TYPE",
    "\003\022SYNC_PROVIDER_TYPE\032faster_web3._utils.caching\025UNCACHEABLE_BLOCK_IDS",
    "\002\024always_cache_request&async_validate_from_block_id_in_params",
    "\001\'async_validate_from_blockhash_in_params",
    "\001&async_validate_from_blocknum_in_result",
    "\002 validate_from_block_id_in_params!validate_from_blockhash_in_params",
    "\001 validate_from_blocknum_in_result",
    "\0015faster_web3._utils.caching.request_caching_validation",
    "\003\030faster_web3._utils.empty\003RPC\032faster_web3._utils.rpc_abi",
    "\003\026faster_web3.exceptions\vRPCEndpoint\021faster_web3.types",
    "\003\037RequestCacheValidationThreshold\021faster_web3.utils\023iscoroutinefunction",
    "\a\003md5\tget_ident\nis_boolean\bis_bytes\ais_dict\fis_list_like\ais_null",
    "\004\tis_number\ais_text\bto_bytes(faster_web3._utils.caching.caching_utils",
    "\003\017__mypyc_attrs__\023response_formatters\017subscription_id",
    "\002\036middleware_response_processors\022RequestInformation",
    "\b\034DEFAULT_VALIDATION_THRESHOLD\003ETH\005value\004ARB1\006ZKSYNC\004OETH\005MATIC\005ZKEVM",
    "\a\004BASE\003SCR\003GNO\004AVAX\003BNB\003FTM#CHAIN_VALIDATION_THRESHOLD_DEFAULTS",
    "\004\022web3_clientVersion\vnet_version\fALWAYS_CACHE\024eth_getBlockByNumber",
    "\001*eth_getRawTransactionByBlockNumberAndIndex",
    "\001$eth_getBlockTransactionCountByNumber",
    "\002!eth_getUncleByBlockNumberAndIndex\036eth_getUncleCountByBlockNumber",
    "\003\022BLOCKNUM_IN_PARAMS\022eth_getBlockByHash\030eth_getTransactionByHash",
    "\001\'eth_getTransactionByBlockNumberAndIndex",
    "\001%eth_getTransactionByBlockHashAndIndex",
    "\002\"eth_getBlockTransactionCountByHash\017BLOCK_IN_RESULT",
    "\001(eth_getRawTransactionByBlockHashAndIndex",
    "\002\037eth_getUncleByBlockHashAndIndex\034eth_getUncleCountByBlockHash",
    "\003\023BLOCKHASH_IN_PARAMS\027INTERNAL_VALIDATION_MAP\022CACHEABLE_REQUESTS",
    "\003\021AsyncBaseProvider\024ASYNC_VALIDATOR_TYPE\035ASYNC_INTERNAL_VALIDATION_MAP",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\n0\00016\0003600\000-1\000604800\000180\0001800\000300\000120\00060",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    16, 1, 4, 3, 38, 38, 38, 3, 39, 39, 39, 3, 40, 40, 40, 3, 146, 147,
    148, 13, 43, 44, 45, 46, 47, 48, 6, 49, 50, 51, 52, 53, 54, 3, 56, 56,
    56, 1, 151, 1, 57, 2, 59, 60, 8, 62, 63, 64, 65, 66, 67, 68, 69, 1,
    14, 1, 72, 1, 10, 1, 75, 1, 77
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3____utils___caching___caching_utils__internal = NULL;
CPyModule *CPyModule_faster_web3____utils___caching___caching_utils;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_asyncio;
CPyModule *CPyModule_hashlib;
CPyModule *CPyModule_threading;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_eth_utils;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_faster_web3____utils___caching;
CPyModule *CPyModule_faster_web3____utils___caching___request_caching_validation;
CPyModule *CPyModule_faster_web3____utils___empty;
CPyModule *CPyModule_faster_web3____utils___rpc_abi;
CPyModule *CPyModule_faster_web3___exceptions;
CPyModule *CPyModule_faster_web3___types;
CPyModule *CPyModule_faster_web3___utils;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___md5 = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___get_ident = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___is_dict = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___is_null = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___is_number = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___is_text = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___CACHEABLE_REQUESTS = NULL;
PyObject *CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP = NULL;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___RequestInformation;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation(PyObject *cpy_r_method, PyObject *cpy_r_params, tuple_T3OOO cpy_r_response_formatters, PyObject *cpy_r_subscription_id);
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching_env(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___handle_request_caching_envObject *faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_objObject *faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_genObject *faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils____async_should_cache_response_genObject *faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___async_handle_request_caching_envObject *faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_envObject *faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_objObject *faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_gen___3_363Object *faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___async_handle_send_caching_envObject *faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_envObject *faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_objObject *faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_gen___3_396Object *faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___async_handle_recv_caching_envObject *faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_envObject *faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_objObject *faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance;
PyTypeObject *CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422(void);
CPyThreadLocal faster_web3____utils___caching___caching_utils___wrapper_gen___3_422Object *faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance;
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key(PyObject *cpy_r_value);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___generate_cache_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_____init__(PyObject *cpy_r_self, PyObject *cpy_r_method, PyObject *cpy_r_params, tuple_T3OOO cpy_r_response_formatters, PyObject *cpy_r_subscription_id);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___RequestInformation_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___is_cacheable_request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___caching_utils___set_threshold_if_empty(PyObject *cpy_r_provider);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___set_threshold_if_empty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___caching_utils____should_cache_response(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_response);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____should_cache_response(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching(PyObject *cpy_r_func);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___handle_request_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty(PyObject *cpy_r_provider);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response(PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params, PyObject *cpy_r_response);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils____async_should_cache_response(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching(PyObject *cpy_r_func);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_handle_request_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_method, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching(PyObject *cpy_r_func);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_handle_send_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_provider, PyObject *cpy_r_rpc_request);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching(PyObject *cpy_r_func);
PyObject *CPyPy_faster_web3____utils___caching___caching_utils___async_handle_recv_caching(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3____utils___caching___caching_utils_____top_level__(void);

static struct export_table_faster_web3____utils___caching___caching_utils exports = {
    &CPyStatic_faster_web3____utils___caching___caching_utils___iscoroutinefunction,
    &CPyStatic_faster_web3____utils___caching___caching_utils___md5,
    &CPyStatic_faster_web3____utils___caching___caching_utils___get_ident,
    &CPyStatic_faster_web3____utils___caching___caching_utils___is_boolean,
    &CPyStatic_faster_web3____utils___caching___caching_utils___is_bytes,
    &CPyStatic_faster_web3____utils___caching___caching_utils___is_dict,
    &CPyStatic_faster_web3____utils___caching___caching_utils___is_list_like,
    &CPyStatic_faster_web3____utils___caching___caching_utils___is_null,
    &CPyStatic_faster_web3____utils___caching___caching_utils___is_number,
    &CPyStatic_faster_web3____utils___caching___caching_utils___is_text,
    &CPyStatic_faster_web3____utils___caching___caching_utils___to_bytes,
    &CPyStatic_faster_web3____utils___caching___caching_utils___CHAIN_VALIDATION_THRESHOLD_DEFAULTS,
    &CPyStatic_faster_web3____utils___caching___caching_utils___ALWAYS_CACHE,
    &CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKNUM_IN_PARAMS,
    &CPyStatic_faster_web3____utils___caching___caching_utils___BLOCK_IN_RESULT,
    &CPyStatic_faster_web3____utils___caching___caching_utils___BLOCKHASH_IN_PARAMS,
    &CPyStatic_faster_web3____utils___caching___caching_utils___INTERNAL_VALIDATION_MAP,
    &CPyStatic_faster_web3____utils___caching___caching_utils___CACHEABLE_REQUESTS,
    &CPyStatic_faster_web3____utils___caching___caching_utils___ASYNC_INTERNAL_VALIDATION_MAP,
    &CPyType_faster_web3____utils___caching___caching_utils___RequestInformation,
    &CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation,
    &CPyType_faster_web3____utils___caching___caching_utils___handle_request_caching_env,
    &CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching_env,
    &faster_web3____utils___caching___caching_utils___handle_request_caching_env_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj,
    &faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen,
    &faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen,
    &faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching_env,
    &faster_web3____utils___caching___caching_utils___async_handle_request_caching_env_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env,
    &faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_env_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj,
    &faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363,
    &faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching_env,
    &faster_web3____utils___caching___caching_utils___async_handle_send_caching_env_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env,
    &faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_env_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj,
    &faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396,
    &faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env,
    &faster_web3____utils___caching___caching_utils___async_handle_recv_caching_env_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env,
    &faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_env_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj,
    &faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_free_instance,
    &CPyType_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422,
    &faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_free_instance,
    &CPyDef_faster_web3____utils___caching___caching_utils___generate_cache_key,
    &CPyDef_faster_web3____utils___caching___caching_utils___RequestInformation_____init__,
    &CPyDef_faster_web3____utils___caching___caching_utils___is_cacheable_request,
    &CPyDef_faster_web3____utils___caching___caching_utils___set_threshold_if_empty,
    &CPyDef_faster_web3____utils___caching___caching_utils____should_cache_response,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____get__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_handle_request_caching_obj_____call__,
    &CPyDef_faster_web3____utils___caching___caching_utils___handle_request_caching,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____next__,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___send,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____iter__,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___throw,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen___close,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty_gen_____await__,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_set_threshold_if_empty,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____next__,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___send,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____iter__,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___throw,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen___close,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response_gen_____await__,
    &CPyDef_faster_web3____utils___caching___caching_utils____async_should_cache_response,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____get__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____next__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___send,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____iter__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___throw,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363___close,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_363_____await__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_request_caching_obj_____call__,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_handle_request_caching,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____get__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____next__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___send,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____iter__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___throw,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396___close,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_396_____await__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_send_caching_obj_____call__,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_handle_send_caching,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____get__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____mypyc_generator_helper__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____next__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___send,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____iter__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___throw,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422___close,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_gen___3_422_____await__,
    &CPyDef_faster_web3____utils___caching___caching_utils___wrapper_async_handle_recv_caching_obj_____call__,
    &CPyDef_faster_web3____utils___caching___caching_utils___async_handle_recv_caching,
    &CPyDef_faster_web3____utils___caching___caching_utils_____top_level__,
};

static int exec_caching_utils__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3._utils.caching.caching_utils__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3____utils___caching___caching_utils(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3____utils___caching___caching_utils, "faster_web3._utils.caching.caching_utils__mypyc.init_faster_web3____utils___caching___caching_utils", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3____utils___caching___caching_utils", capsule);
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
    
    tmp = PyImport_ImportModule("faster_web3._utils.caching.request_caching_validation__mypyc"); if (!tmp) goto fail; Py_DECREF(tmp);
    struct export_table_faster_web3____utils___caching___request_caching_validation *pexports_faster_web3____utils___caching___request_caching_validation = PyCapsule_Import("faster_web3._utils.caching.request_caching_validation__mypyc.exports", 0);
    if (!pexports_faster_web3____utils___caching___request_caching_validation) {
        goto fail;
    }
    memcpy(&exports_faster_web3____utils___caching___request_caching_validation, pexports_faster_web3____utils___caching___request_caching_validation, sizeof(exports_faster_web3____utils___caching___request_caching_validation));
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_caching_utils__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3._utils.caching.caching_utils__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_caching_utils__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_caching_utils__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_caching_utils__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
