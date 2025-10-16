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
#include "__native_defaults.h"
#include "__native_internal_defaults.h"

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_eth_tester_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester_env(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___without_eth_tester_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_eth_tester_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___without_eth_tester_env_traverse(faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fn);
    Py_VISIT(self->_inner);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___without_eth_tester_env_clear(faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fn);
    Py_CLEAR(self->_inner);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___without_eth_tester_env_dealloc(faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___without_eth_tester_env_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___without_eth_tester_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_fn);
        Py_CLEAR(self->_inner);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___without_eth_tester_env_dealloc)
    faster_web3___providers___eth_tester___defaults___without_eth_tester_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___without_eth_tester_env_vtable[1];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___without_eth_tester_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3___providers___eth_tester___defaults___without_eth_tester_env_vtable, faster_web3___providers___eth_tester___defaults___without_eth_tester_env_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___without_eth_tester_env_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___defaults___without_eth_tester_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "without_eth_tester_env",
    .tp_new = faster_web3___providers___eth_tester___defaults___without_eth_tester_env_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___without_eth_tester_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___without_eth_tester_env_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___without_eth_tester_env_clear,
    .tp_methods = faster_web3___providers___eth_tester___defaults___without_eth_tester_env_methods,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("without_eth_tester_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env_template = &CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_eth_tester_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *self;
    if (faster_web3___providers___eth_tester___defaults___without_eth_tester_env_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___without_eth_tester_env_free_instance;
        faster_web3___providers___eth_tester___defaults___without_eth_tester_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___without_eth_tester_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester_env(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_eth_tester_env_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_eth_tester_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_eth_tester_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_traverse(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_clear(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_dealloc(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_dealloc)
    faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_vtable[2];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__,
    };
    memcpy(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_vtable, faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self, void *closure);
static int
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_get___3_mypyc_env__, (setter)faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($eth_tester, params)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "inner_without_eth_tester_obj",
    .tp_new = faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_clear,
    .tp_getset = faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_getseters,
    .tp_methods = faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("inner_without_eth_tester_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_template = &CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_eth_tester_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self;
    if (faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_free_instance;
        faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_vtable;
    self->vectorcall = CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_eth_tester_obj_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'inner_without_eth_tester_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'inner_without_eth_tester_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.defaults.without_eth_tester_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_params_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_params_env(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___without_params_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___without_params_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_params_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___without_params_env_traverse(faster_web3___providers___eth_tester___defaults___without_params_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_fn);
    Py_VISIT(self->_inner);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___without_params_env_clear(faster_web3___providers___eth_tester___defaults___without_params_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_fn);
    Py_CLEAR(self->_inner);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___without_params_env_dealloc(faster_web3___providers___eth_tester___defaults___without_params_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___without_params_env_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___without_params_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_fn);
        Py_CLEAR(self->_inner);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___without_params_env_dealloc)
    faster_web3___providers___eth_tester___defaults___without_params_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___without_params_env_vtable[1];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___without_params_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___without_params_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3___providers___eth_tester___defaults___without_params_env_vtable, faster_web3___providers___eth_tester___defaults___without_params_env_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___without_params_env_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___defaults___without_params_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___without_params_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "without_params_env",
    .tp_new = faster_web3___providers___eth_tester___defaults___without_params_env_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___without_params_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___without_params_env_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___without_params_env_clear,
    .tp_methods = faster_web3___providers___eth_tester___defaults___without_params_env_methods,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___without_params_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("without_params_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___without_params_env_template = &CPyType_faster_web3___providers___eth_tester___defaults___without_params_env_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_params_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___without_params_envObject *self;
    if (faster_web3___providers___eth_tester___defaults___without_params_env_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___without_params_env_free_instance;
        faster_web3___providers___eth_tester___defaults___without_params_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___without_params_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___without_params_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_params_env(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__without_params_env_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___without_params_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3___providers___eth_tester___defaults___inner_without_params_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_params_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_params_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_traverse(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_clear(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_dealloc(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___inner_without_params_obj_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___inner_without_params_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___inner_without_params_obj_dealloc)
    faster_web3___providers___eth_tester___defaults___inner_without_params_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___inner_without_params_obj_vtable[2];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___inner_without_params_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__,
    };
    memcpy(faster_web3___providers___eth_tester___defaults___inner_without_params_obj_vtable, faster_web3___providers___eth_tester___defaults___inner_without_params_obj_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___inner_without_params_obj_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self, void *closure);
static int
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___defaults___inner_without_params_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3___providers___eth_tester___defaults___inner_without_params_obj_get___3_mypyc_env__, (setter)faster_web3___providers___eth_tester___defaults___inner_without_params_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___defaults___inner_without_params_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($eth_tester, params)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "inner_without_params_obj",
    .tp_new = faster_web3___providers___eth_tester___defaults___inner_without_params_obj_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___inner_without_params_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___inner_without_params_obj_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___inner_without_params_obj_clear,
    .tp_getset = faster_web3___providers___eth_tester___defaults___inner_without_params_obj_getseters,
    .tp_methods = faster_web3___providers___eth_tester___defaults___inner_without_params_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3___providers___eth_tester___defaults___inner_without_params_obj,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("inner_without_params_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_template = &CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_params_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self;
    if (faster_web3___providers___eth_tester___defaults___inner_without_params_obj_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___inner_without_params_obj_free_instance;
        faster_web3___providers___eth_tester___defaults___inner_without_params_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___inner_without_params_obj_vtable;
    self->vectorcall = CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_without_params_obj_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'inner_without_params_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3___providers___eth_tester___defaults___inner_without_params_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'inner_without_params_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3___providers___eth_tester___defaults___without_params_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.defaults.without_params_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__static_return_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___static_return_env(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___static_return_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___static_return_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__static_return_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___static_return_env_traverse(faster_web3___providers___eth_tester___defaults___static_return_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_value);
    Py_VISIT(self->_inner);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___static_return_env_clear(faster_web3___providers___eth_tester___defaults___static_return_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_inner);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___static_return_env_dealloc(faster_web3___providers___eth_tester___defaults___static_return_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___static_return_env_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___static_return_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_value);
        Py_CLEAR(self->_inner);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___static_return_env_dealloc)
    faster_web3___providers___eth_tester___defaults___static_return_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___static_return_env_vtable[1];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___static_return_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___static_return_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3___providers___eth_tester___defaults___static_return_env_vtable, faster_web3___providers___eth_tester___defaults___static_return_env_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___static_return_env_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___defaults___static_return_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___static_return_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "static_return_env",
    .tp_new = faster_web3___providers___eth_tester___defaults___static_return_env_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___static_return_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___static_return_env_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___static_return_env_clear,
    .tp_methods = faster_web3___providers___eth_tester___defaults___static_return_env_methods,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___static_return_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("static_return_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___static_return_env_template = &CPyType_faster_web3___providers___eth_tester___defaults___static_return_env_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__static_return_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___static_return_envObject *self;
    if (faster_web3___providers___eth_tester___defaults___static_return_env_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___static_return_env_free_instance;
        faster_web3___providers___eth_tester___defaults___static_return_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___static_return_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___static_return_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___static_return_env(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__static_return_env_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___static_return_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3___providers___eth_tester___defaults___inner_static_return_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_static_return_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_static_return_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_traverse(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_clear(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_dealloc(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___inner_static_return_obj_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___inner_static_return_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___inner_static_return_obj_dealloc)
    faster_web3___providers___eth_tester___defaults___inner_static_return_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___inner_static_return_obj_vtable[2];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___inner_static_return_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__,
    };
    memcpy(faster_web3___providers___eth_tester___defaults___inner_static_return_obj_vtable, faster_web3___providers___eth_tester___defaults___inner_static_return_obj_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___inner_static_return_obj_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self, void *closure);
static int
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___defaults___inner_static_return_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3___providers___eth_tester___defaults___inner_static_return_obj_get___3_mypyc_env__, (setter)faster_web3___providers___eth_tester___defaults___inner_static_return_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___defaults___inner_static_return_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__(*$args, **kwargs)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "inner_static_return_obj",
    .tp_new = faster_web3___providers___eth_tester___defaults___inner_static_return_obj_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___inner_static_return_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___inner_static_return_obj_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___inner_static_return_obj_clear,
    .tp_getset = faster_web3___providers___eth_tester___defaults___inner_static_return_obj_getseters,
    .tp_methods = faster_web3___providers___eth_tester___defaults___inner_static_return_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3___providers___eth_tester___defaults___inner_static_return_obj,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("inner_static_return_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_template = &CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_static_return_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self;
    if (faster_web3___providers___eth_tester___defaults___inner_static_return_obj_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___inner_static_return_obj_free_instance;
        faster_web3___providers___eth_tester___defaults___inner_static_return_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___inner_static_return_obj_vtable;
    self->vectorcall = CPyPy_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__inner_static_return_obj_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'inner_static_return_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3___providers___eth_tester___defaults___inner_static_return_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'inner_static_return_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3___providers___eth_tester___defaults___static_return_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.defaults.static_return_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_env(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___null_if_excepts_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___null_if_excepts_env_traverse(faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_exc_type);
    Py_VISIT(self->_null_if_excepts_decorator);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___null_if_excepts_env_clear(faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_exc_type);
    Py_CLEAR(self->_null_if_excepts_decorator);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___null_if_excepts_env_dealloc(faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___null_if_excepts_env_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___null_if_excepts_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_exc_type);
        Py_CLEAR(self->_null_if_excepts_decorator);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___null_if_excepts_env_dealloc)
    faster_web3___providers___eth_tester___defaults___null_if_excepts_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___null_if_excepts_env_vtable[1];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_env_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___null_if_excepts_env_vtable_scratch[] = {
        NULL
    };
    memcpy(faster_web3___providers___eth_tester___defaults___null_if_excepts_env_vtable, faster_web3___providers___eth_tester___defaults___null_if_excepts_env_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___null_if_excepts_env_vtable));
    return 1;
}

static PyMethodDef faster_web3___providers___eth_tester___defaults___null_if_excepts_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "null_if_excepts_env",
    .tp_new = faster_web3___providers___eth_tester___defaults___null_if_excepts_env_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___null_if_excepts_env_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___null_if_excepts_env_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___null_if_excepts_env_clear,
    .tp_methods = faster_web3___providers___eth_tester___defaults___null_if_excepts_env_methods,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("null_if_excepts_env()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env_template = &CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *self;
    if (faster_web3___providers___eth_tester___defaults___null_if_excepts_env_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___null_if_excepts_env_free_instance;
        faster_web3___providers___eth_tester___defaults___null_if_excepts_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___null_if_excepts_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_env(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_env_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_decorator_null_if_excepts_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj(void);

static PyObject *
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_decorator_null_if_excepts_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_traverse(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_clear(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_dealloc(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_free_instance == NULL) {
        faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_dealloc)
    faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_vtable[2];
static bool
CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_trait_vtable_setup(void)
{
    CPyVTableItem faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__,
        (CPyVTableItem)CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__,
    };
    memcpy(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_vtable, faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_vtable_scratch, sizeof(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_vtable));
    return 1;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self, void *closure);
static int
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self, PyObject *value, void *closure);

static PyGetSetDef faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_get___3_mypyc_env__, (setter)faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($fn)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "null_if_excepts_decorator_null_if_excepts_obj",
    .tp_new = faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_new,
    .tp_dealloc = (destructor)faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_dealloc,
    .tp_traverse = (traverseproc)faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_traverse,
    .tp_clear = (inquiry)faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_clear,
    .tp_getset = faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_getseters,
    .tp_methods = faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj,
    .tp_basicsize = sizeof(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject),
    .tp_vectorcall_offset = offsetof(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("null_if_excepts_decorator_null_if_excepts_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_template = &CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_template_;

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_decorator_null_if_excepts_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self;
    if (faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_free_instance != NULL) {
        self = faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_free_instance;
        faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_vtable;
    self->vectorcall = CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj(void)
{
    PyObject *self = CPyDef_faster_web3___providers___eth_tester___defaults_____mypyc__null_if_excepts_decorator_null_if_excepts_obj_setup((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_get___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'null_if_excepts_decorator_null_if_excepts_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_set___3_mypyc_env__(faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'null_if_excepts_decorator_null_if_excepts_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env))
        tmp = value;
    else {
        CPy_TypeError("faster_web3.providers.eth_tester.defaults.null_if_excepts_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}
static PyMethodDef faster_web3___providers___eth_tester___defaultsmodule_methods[] = {
    {"not_implemented", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___not_implemented, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("not_implemented(*args, **kwargs)\n--\n\n") /* docstring */},
    {"call_eth_tester", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___call_eth_tester, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("call_eth_tester(fn_name, eth_tester, fn_args, fn_kwargs=None)\n--\n\n") /* docstring */},
    {"without_eth_tester", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___without_eth_tester, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("without_eth_tester(fn)\n--\n\n") /* docstring */},
    {"without_params", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___without_params, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("without_params(fn)\n--\n\n") /* docstring */},
    {"preprocess_params", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___preprocess_params, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("preprocess_params(eth_tester, params, preprocessor_fn)\n--\n\n") /* docstring */},
    {"static_return", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___static_return, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("static_return(value)\n--\n\n") /* docstring */},
    {"client_version", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___client_version, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("client_version(eth_tester, params)\n--\n\n") /* docstring */},
    {"null_if_excepts", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("null_if_excepts(exc_type)\n--\n\n") /* docstring */},
    {"get_transaction_by_block_hash_and_index", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_hash_and_index, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_transaction_by_block_hash_and_index(eth_tester, params)\n--\n\n") /* docstring */},
    {"get_transaction_by_block_number_and_index", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_number_and_index, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_transaction_by_block_number_and_index(eth_tester, params)\n--\n\n") /* docstring */},
    {"create_log_filter", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___create_log_filter, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("create_log_filter(eth_tester, params)\n--\n\n") /* docstring */},
    {"get_logs", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___get_logs, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_logs(eth_tester, params)\n--\n\n") /* docstring */},
    {"_generate_random_private_key", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults____generate_random_private_key, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_generate_random_private_key()\n--\n\n") /* docstring */},
    {"create_new_account", (PyCFunction)CPyPy_faster_web3___providers___eth_tester___defaults___create_new_account, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("create_new_account(eth_tester)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___providers___eth_tester___defaults(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___providers___eth_tester___defaults__internal, "__name__");
    CPyStatic_faster_web3___providers___eth_tester___defaults___globals = PyModule_GetDict(CPyModule_faster_web3___providers___eth_tester___defaults__internal);
    if (unlikely(CPyStatic_faster_web3___providers___eth_tester___defaults___globals == NULL))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___without_params_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___without_params_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___without_params_env))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___static_return_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___static_return_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___static_return_env))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env))
        goto fail;
    CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_template, NULL, modname);
    if (unlikely(!CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_faster_web3___providers___eth_tester___defaults_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___providers___eth_tester___defaults__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found);
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found);
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found);
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror);
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror = NULL;
    CPy_XDECREF(CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS);
    CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS = NULL;
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___without_params_env);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___static_return_env);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env);
    Py_CLEAR(CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj);
    return -1;
}
static struct PyModuleDef faster_web3___providers___eth_tester___defaultsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.providers.eth_tester.defaults",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    faster_web3___providers___eth_tester___defaultsmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___providers___eth_tester___defaults(void)
{
    if (CPyModule_faster_web3___providers___eth_tester___defaults__internal) {
        Py_INCREF(CPyModule_faster_web3___providers___eth_tester___defaults__internal);
        return CPyModule_faster_web3___providers___eth_tester___defaults__internal;
    }
    CPyModule_faster_web3___providers___eth_tester___defaults__internal = PyModule_Create(&faster_web3___providers___eth_tester___defaultsmodule);
    if (unlikely(CPyModule_faster_web3___providers___eth_tester___defaults__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___providers___eth_tester___defaults(CPyModule_faster_web3___providers___eth_tester___defaults__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___providers___eth_tester___defaults__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___not_implemented(PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[3]; /* 'RPC method not implemented' */
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[4]; /* 'NotImplementedError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "not_implemented", 79, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "not_implemented", 79, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "not_implemented", 79, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___not_implemented(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:not_implemented", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___not_implemented(arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "not_implemented", 78, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___call_eth_tester(PyObject *cpy_r_fn_name, PyObject *cpy_r_eth_tester, PyObject *cpy_r_fn_args, PyObject *cpy_r_fn_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_parsed_data_as_bytes;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    if (cpy_r_fn_kwargs != NULL) goto CPyL75;
    cpy_r_r0 = Py_None;
    cpy_r_fn_kwargs = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_fn_kwargs == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL76;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 90, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL74;
    }
    cpy_r_fn_kwargs = cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_eth_tester, cpy_r_fn_name);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 93, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL77;
    }
    cpy_r_r5 = PySequence_Tuple(cpy_r_fn_args);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 93, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL78;
    }
    cpy_r_r6 = CPyDict_FromAny(cpy_r_fn_kwargs);
    CPy_DECREF(cpy_r_fn_kwargs);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 93, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL79;
    }
    cpy_r_r7 = PyObject_Call(cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 93, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL10;
    }
    return cpy_r_r7;
CPyL10: ;
    cpy_r_r8 = CPy_CatchError();
    cpy_r_r9 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r10 = CPyStatics[5]; /* 'TransactionFailed' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 94, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL72;
    }
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DecRef(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL70;
    cpy_r_r13 = CPy_GetExcValue();
    cpy_r_r14 = CPyStatics[6]; /* 'args' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 95, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL80;
    }
    cpy_r_r16 = CPyStatics[237]; /* 0 */
    cpy_r_r17 = PyObject_GetItem(cpy_r_r15, cpy_r_r16);
    CPy_DecRef(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 95, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL80;
    }
    cpy_r_r18 = PyUnicode_Check(cpy_r_r17);
    if (!cpy_r_r18) goto CPyL81;
    CPy_INCREF(cpy_r_r17);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r19 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 97, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r17);
        goto CPyL82;
    }
    cpy_r_r20 = CPyStr_GetSlice(cpy_r_r19, 4, 20);
    CPy_DecRef(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 97, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL82;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 97, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r20);
        goto CPyL82;
    }
    cpy_r_r22 = CPyStatics[7]; /* 'Uo\\x180\\' */
    cpy_r_r23 = CPyStr_Equal(cpy_r_r21, cpy_r_r22);
    CPy_DecRef(cpy_r_r21);
    if (cpy_r_r23) {
        goto CPyL83;
    } else
        goto CPyL46;
CPyL19: ;
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r24 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 101, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r17);
        goto CPyL72;
    }
    cpy_r_r25 = CPyModule_ast;
    cpy_r_r26 = CPyStatics[8]; /* 'literal_eval' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 101, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL84;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_r24};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 101, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL84;
    }
    CPy_DecRef(cpy_r_r24);
    cpy_r_parsed_data_as_bytes = cpy_r_r30;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = CPyStatics[238]; /* 4 */
    cpy_r_r34 = PySlice_New(cpy_r_r33, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 103, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL85;
    }
    cpy_r_r35 = PyObject_GetItem(cpy_r_parsed_data_as_bytes, cpy_r_r34);
    CPy_DecRef(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 103, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL85;
    }
    cpy_r_r36 = *exports_faster_web3.CPyStatic_faster_web3____utils___error_formatters_utils___OFFCHAIN_LOOKUP_FIELDS;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL86;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"OFFCHAIN_LOOKUP_FIELDS\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 105, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL72;
    } else
        goto CPyL87;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r38 = CPyDict_Values(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 105, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL88;
    }
    cpy_r_r39 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r40 = CPyStatics[9]; /* 'abi' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 104, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL89;
    }
    cpy_r_r42 = CPyStatics[10]; /* 'decode' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 104, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL89;
    }
    PyObject *cpy_r_r44[2] = {cpy_r_r38, cpy_r_r35};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 2, 0);
    CPy_DecRef(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 104, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL89;
    }
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r35);
    if (likely(PyTuple_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 104, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "tuple", cpy_r_r46);
        goto CPyL85;
    }
    cpy_r_r48 = *exports_faster_web3.CPyStatic_faster_web3____utils___error_formatters_utils___OFFCHAIN_LOOKUP_FIELDS;
    if (unlikely(cpy_r_r48 == NULL)) {
        goto CPyL90;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"OFFCHAIN_LOOKUP_FIELDS\" was not set");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 108, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL72;
    } else
        goto CPyL91;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r50 = CPyDict_KeysView(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 108, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL92;
    }
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[11]; /* 'zip' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 108, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL93;
    }
    PyObject *cpy_r_r54[2] = {cpy_r_r50, cpy_r_r47};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 2, 0);
    CPy_DecRef(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 108, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL93;
    }
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r47);
    cpy_r_r57 = CPyDict_FromAny(cpy_r_r56);
    CPy_DecRef(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 107, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL85;
    }
    cpy_r_r58 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r59 = CPyStatics[12]; /* 'Web3' */
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 111, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL94;
    }
    cpy_r_r61 = CPyStatics[13]; /* 'to_hex' */
    PyObject *cpy_r_r62[2] = {cpy_r_r60, cpy_r_parsed_data_as_bytes};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = PyObject_VectorcallMethod(cpy_r_r61, cpy_r_r63, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 111, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL95;
    }
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    if (likely(PyUnicode_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 111, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r64);
        goto CPyL96;
    }
    cpy_r_r66 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r67 = CPyStatics[14]; /* 'OffchainLookup' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 110, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r69[2] = {cpy_r_r57, cpy_r_r65};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = CPyStatics[244]; /* ('data',) */
    cpy_r_r72 = PyObject_Vectorcall(cpy_r_r68, cpy_r_r70, 1, cpy_r_r71);
    CPy_DecRef(cpy_r_r68);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 110, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL97;
    }
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    CPy_Raise(cpy_r_r72);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 110, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL72;
    } else
        goto CPyL98;
CPyL45: ;
    CPy_Unreachable();
CPyL46: ;
    CPy_INCREF(cpy_r_r17);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r73 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 113, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r17);
        goto CPyL82;
    }
    cpy_r_r74 = CPyStr_GetSlice(cpy_r_r73, 4, 12);
    CPy_DecRef(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 113, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL82;
    }
    if (likely(PyUnicode_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 113, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r74);
        goto CPyL82;
    }
    cpy_r_r76 = CPyStatics[16]; /* 'NH{q' */
    cpy_r_r77 = CPyStr_Equal(cpy_r_r75, cpy_r_r76);
    CPy_DecRef(cpy_r_r75);
    if (cpy_r_r77) {
        goto CPyL99;
    } else
        goto CPyL81;
CPyL50: ;
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r78 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 115, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r17);
        goto CPyL72;
    }
    cpy_r_r79 = CPyModule_ast;
    cpy_r_r80 = CPyStatics[8]; /* 'literal_eval' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 115, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL100;
    }
    PyObject *cpy_r_r82[1] = {cpy_r_r78};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = PyObject_Vectorcall(cpy_r_r81, cpy_r_r83, 1, 0);
    CPy_DecRef(cpy_r_r81);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 115, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL100;
    }
    CPy_DecRef(cpy_r_r78);
    cpy_r_parsed_data_as_bytes = cpy_r_r84;
    cpy_r_r85 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r86 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r87 = CPyStatics[239]; /* -1 */
    cpy_r_r88 = PySlice_New(cpy_r_r87, cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 116, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL85;
    }
    cpy_r_r89 = PyObject_GetItem(cpy_r_parsed_data_as_bytes, cpy_r_r88);
    CPy_DecRef(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 116, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL85;
    }
    cpy_r_r90 = CPyStatics[17]; /* 'hex' */
    PyObject *cpy_r_r91[1] = {cpy_r_r89};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_VectorcallMethod(cpy_r_r90, cpy_r_r92, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 116, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL101;
    }
    CPy_DecRef(cpy_r_r89);
    cpy_r_r94 = *exports_faster_web3.CPyStatic_faster_web3____utils___error_formatters_utils___PANIC_ERROR_CODES;
    if (unlikely(cpy_r_r94 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PANIC_ERROR_CODES\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 118, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL72;
    } else
        goto CPyL103;
CPyL58: ;
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r93);
    CPy_DecRef(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 118, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL85;
    }
    if (likely(PyUnicode_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 118, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r96);
        goto CPyL85;
    }
    cpy_r_r98 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r99 = CPyStatics[12]; /* 'Web3' */
    cpy_r_r100 = CPyDict_GetItem(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 119, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL104;
    }
    cpy_r_r101 = CPyStatics[13]; /* 'to_hex' */
    PyObject *cpy_r_r102[2] = {cpy_r_r100, cpy_r_parsed_data_as_bytes};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_VectorcallMethod(cpy_r_r101, cpy_r_r103, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 119, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL105;
    }
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    if (likely(PyUnicode_Check(cpy_r_r104)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 119, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r104);
        goto CPyL106;
    }
    cpy_r_r106 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r107 = CPyStatics[18]; /* 'ContractPanicError' */
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 117, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL107;
    }
    PyObject *cpy_r_r109[2] = {cpy_r_r97, cpy_r_r105};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = CPyStatics[244]; /* ('data',) */
    cpy_r_r112 = PyObject_Vectorcall(cpy_r_r108, cpy_r_r110, 1, cpy_r_r111);
    CPy_DecRef(cpy_r_r108);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 117, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL107;
    }
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r105);
    CPy_Raise(cpy_r_r112);
    CPy_DecRef(cpy_r_r112);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 117, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL72;
    } else
        goto CPyL108;
CPyL67: ;
    CPy_Unreachable();
CPyL68: ;
    CPy_Raise(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 122, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL72;
    } else
        goto CPyL109;
CPyL69: ;
    CPy_Unreachable();
CPyL70: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL72;
    } else
        goto CPyL110;
CPyL71: ;
    CPy_Unreachable();
CPyL72: ;
    CPy_RestoreExcInfo(cpy_r_r8);
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    cpy_r_r113 = CPy_KeepPropagating();
    if (!cpy_r_r113) goto CPyL74;
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r114 = NULL;
    return cpy_r_r114;
CPyL75: ;
    CPy_INCREF(cpy_r_fn_kwargs);
    goto CPyL2;
CPyL76: ;
    CPy_DECREF(cpy_r_fn_kwargs);
    goto CPyL3;
CPyL77: ;
    CPy_DecRef(cpy_r_fn_kwargs);
    goto CPyL10;
CPyL78: ;
    CPy_DecRef(cpy_r_fn_kwargs);
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
CPyL79: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL80: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL72;
CPyL81: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL68;
CPyL82: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r17);
    goto CPyL72;
CPyL83: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL19;
CPyL84: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL72;
CPyL85: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    goto CPyL72;
CPyL86: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r35);
    goto CPyL25;
CPyL87: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL26;
CPyL88: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r35);
    goto CPyL72;
CPyL89: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL72;
CPyL90: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r47);
    goto CPyL33;
CPyL91: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL34;
CPyL92: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r47);
    goto CPyL72;
CPyL93: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL72;
CPyL94: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r57);
    goto CPyL72;
CPyL95: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r60);
    goto CPyL72;
CPyL96: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL72;
CPyL97: ;
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    goto CPyL72;
CPyL98: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL45;
CPyL99: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL50;
CPyL100: ;
    CPy_DecRef(cpy_r_r78);
    goto CPyL72;
CPyL101: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r89);
    goto CPyL72;
CPyL102: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r93);
    goto CPyL57;
CPyL103: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL58;
CPyL104: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r97);
    goto CPyL72;
CPyL105: ;
    CPy_DecRef(cpy_r_parsed_data_as_bytes);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r100);
    goto CPyL72;
CPyL106: ;
    CPy_DecRef(cpy_r_r97);
    goto CPyL72;
CPyL107: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r105);
    goto CPyL72;
CPyL108: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL67;
CPyL109: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL69;
CPyL110: ;
    CPy_DecRef(cpy_r_r8.f0);
    CPy_DecRef(cpy_r_r8.f1);
    CPy_DecRef(cpy_r_r8.f2);
    goto CPyL71;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___call_eth_tester(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn_name", "eth_tester", "fn_args", "fn_kwargs", 0};
    static CPyArg_Parser parser = {"OOO|O:call_eth_tester", kwlist, 0};
    PyObject *obj_fn_name;
    PyObject *obj_eth_tester;
    PyObject *obj_fn_args;
    PyObject *obj_fn_kwargs = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn_name, &obj_eth_tester, &obj_fn_args, &obj_fn_kwargs)) {
        return NULL;
    }
    PyObject *arg_fn_name;
    if (likely(PyUnicode_Check(obj_fn_name)))
        arg_fn_name = obj_fn_name;
    else {
        CPy_TypeError("str", obj_fn_name); 
        goto fail;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_fn_args = obj_fn_args;
    PyObject *arg_fn_kwargs;
    if (obj_fn_kwargs == NULL) {
        arg_fn_kwargs = NULL;
        goto __LL1;
    }
    arg_fn_kwargs = obj_fn_kwargs;
    if (arg_fn_kwargs != NULL) goto __LL1;
    if (obj_fn_kwargs == Py_None)
        arg_fn_kwargs = obj_fn_kwargs;
    else {
        arg_fn_kwargs = NULL;
    }
    if (arg_fn_kwargs != NULL) goto __LL1;
    CPy_TypeError("object or None", obj_fn_kwargs); 
    goto fail;
__LL1: ;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___call_eth_tester(arg_fn_name, arg_eth_tester, arg_fn_args, arg_fn_kwargs);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "call_eth_tester", 83, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "__get__", -1, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_eth_tester, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/defaults.py", "inner", "inner_without_eth_tester_obj", "__mypyc_env__", 130, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *)cpy_r_r0)->_fn;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fn' of 'without_eth_tester_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 131, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_params};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 131, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"eth_tester", "params", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_eth_tester, &obj_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__(arg___mypyc_self__, arg_eth_tester, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 130, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester(PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_inner;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_eth_tester", 125, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_fn);
    if (((faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *)cpy_r_r0)->_fn != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *)cpy_r_r0)->_fn);
    }
    ((faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *)cpy_r_r0)->_fn = cpy_r_fn;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_eth_tester", 125, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_eth_tester", 130, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    if (((faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_eth_tester", 130, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL7;
    }
    cpy_r_inner = cpy_r_r2;
    return cpy_r_inner;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___without_eth_tester(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:without_eth_tester", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_fn = obj_fn;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester(arg_fn);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_eth_tester", 125, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "__get__", -1, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_eth_tester, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/defaults.py", "inner", "inner_without_params_obj", "__mypyc_env__", 141, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_web3___providers___eth_tester___defaults___without_params_envObject *)cpy_r_r0)->_fn;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fn' of 'without_params_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 142, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
CPyL2: ;
    PyObject *cpy_r_r2[1] = {cpy_r_eth_tester};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 142, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"eth_tester", "params", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_eth_tester, &obj_params)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__(arg___mypyc_self__, arg_eth_tester, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 141, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_params(PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_inner;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___defaults___without_params_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_params", 136, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_fn);
    if (((faster_web3___providers___eth_tester___defaults___without_params_envObject *)cpy_r_r0)->_fn != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___defaults___without_params_envObject *)cpy_r_r0)->_fn);
    }
    ((faster_web3___providers___eth_tester___defaults___without_params_envObject *)cpy_r_r0)->_fn = cpy_r_fn;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_params", 136, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_params", 141, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    if (((faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_params", 141, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL7;
    }
    cpy_r_inner = cpy_r_r2;
    return cpy_r_inner;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___without_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:without_params", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_fn = obj_fn;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___without_params(arg_fn);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "without_params", 136, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

tuple_T2OO CPyDef_faster_web3___providers___eth_tester___defaults___preprocess_params(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params, PyObject *cpy_r_preprocessor_fn) {
    PyObject **cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r0[1] = {cpy_r_params};
    cpy_r_r1 = (PyObject **)&cpy_r_r0;
    cpy_r_r2 = PyObject_Vectorcall(cpy_r_preprocessor_fn, cpy_r_r1, 1, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "preprocess_params", 151, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_eth_tester);
    cpy_r_r3.f0 = cpy_r_eth_tester;
    cpy_r_r3.f1 = cpy_r_r2;
    return cpy_r_r3;
CPyL2: ;
    tuple_T2OO __tmp2 = { NULL, NULL };
    cpy_r_r4 = __tmp2;
    return cpy_r_r4;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___preprocess_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"eth_tester", "params", "preprocessor_fn", 0};
    static CPyArg_Parser parser = {"OOO:preprocess_params", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    PyObject *obj_preprocessor_fn;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_eth_tester, &obj_params, &obj_preprocessor_fn)) {
        return NULL;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    PyObject *arg_preprocessor_fn = obj_preprocessor_fn;
    tuple_T2OO retval = CPyDef_faster_web3___providers___eth_tester___defaults___preprocess_params(arg_eth_tester, arg_params, arg_preprocessor_fn);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp3);
    PyObject *__tmp4 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp4);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "preprocess_params", 148, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "__get__", -1, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/defaults.py", "inner", "inner_static_return_obj", "__mypyc_env__", 155, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL3;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_web3___providers___eth_tester___defaults___static_return_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'value' of 'static_return_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 156, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL3;
    }
CPyL2: ;
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__call__", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__(arg___mypyc_self__, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "inner", 155, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___static_return(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_inner;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "static_return", 154, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_value);
    if (((faster_web3___providers___eth_tester___defaults___static_return_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___defaults___static_return_envObject *)cpy_r_r0)->_value);
    }
    ((faster_web3___providers___eth_tester___defaults___static_return_envObject *)cpy_r_r0)->_value = cpy_r_value;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "static_return", 154, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "static_return", 155, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    if (((faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "static_return", 155, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL7;
    }
    cpy_r_inner = cpy_r_r2;
    return cpy_r_inner;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___static_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:static_return", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "static_return", 154, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___client_version(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params) {
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = CPyStatics[245]; /* ('__version__',) */
    cpy_r_r1 = CPyStatics[20]; /* 'eth_tester' */
    cpy_r_r2 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 163, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL18;
    }
    CPyModule_eth_tester = cpy_r_r3;
    CPy_INCREF(CPyModule_eth_tester);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyModule_sys;
    cpy_r_r5 = CPyStatics[21]; /* 'version_info' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 167, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL18;
    }
    if (likely(PyTuple_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 167, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "tuple", cpy_r_r6);
        goto CPyL18;
    }
    cpy_r_r8 = CPyStatics[22]; /* 'EthereumTester/' */
    cpy_r_r9 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r10 = CPyStatics[19]; /* '__version__' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL19;
    }
    cpy_r_r12 = PyObject_Str(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL19;
    }
    cpy_r_r13 = CPyStatics[23]; /* '/' */
    cpy_r_r14 = CPyModule_sys;
    cpy_r_r15 = CPyStatics[24]; /* 'platform' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r16);
        goto CPyL20;
    }
    cpy_r_r18 = CPyStatics[25]; /* '/python' */
    cpy_r_r19 = CPyStatics[26]; /* 'major' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL21;
    }
    if (likely(PyLong_Check(cpy_r_r20)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_r20);
    else {
        CPy_TypeError("int", cpy_r_r20); cpy_r_r21 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL21;
    }
    cpy_r_r22 = CPyTagged_Str(cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL21;
    }
    cpy_r_r23 = CPyStatics[27]; /* '.' */
    cpy_r_r24 = CPyStatics[28]; /* 'minor' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL22;
    }
    if (likely(PyLong_Check(cpy_r_r25)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_r25);
    else {
        CPy_TypeError("int", cpy_r_r25); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL22;
    }
    cpy_r_r27 = CPyTagged_Str(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL22;
    }
    cpy_r_r28 = CPyStatics[27]; /* '.' */
    cpy_r_r29 = CPyStatics[29]; /* 'micro' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r29);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL23;
    }
    if (likely(PyLong_Check(cpy_r_r30)))
        cpy_r_r31 = CPyTagged_FromObject(cpy_r_r30);
    else {
        CPy_TypeError("int", cpy_r_r30); cpy_r_r31 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL23;
    }
    cpy_r_r32 = CPyTagged_Str(cpy_r_r31);
    CPyTagged_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL23;
    }
    cpy_r_r33 = CPyStr_Build(10, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r17, cpy_r_r18, cpy_r_r22, cpy_r_r23, cpy_r_r27, cpy_r_r28, cpy_r_r32);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 168, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL18;
    }
    return cpy_r_r33;
CPyL18: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL19: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r12);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r27);
    goto CPyL18;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___client_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"eth_tester", "params", 0};
    static CPyArg_Parser parser = {"OO:client_version", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_eth_tester, &obj_params)) {
        return NULL;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___client_version(arg_eth_tester, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "client_version", 161, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "__get__", -1, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts_decorator", "null_if_excepts_decorator_null_if_excepts_obj", "__mypyc_env__", 174, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *)cpy_r_r0)->_exc_type;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'exc_type' of 'null_if_excepts_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts_decorator", 176, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
CPyL2: ;
    cpy_r_r2 = Py_None;
    cpy_r_r3 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts_decorator", 178, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r5 = CPyStatics[30]; /* 'excepts' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts_decorator", 175, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL8;
    }
    PyObject *cpy_r_r7[3] = {cpy_r_r1, cpy_r_fn, cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 3, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts_decorator", 175, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    return cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_fn = obj_fn;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__(arg___mypyc_self__, arg_fn);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts_decorator", 174, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts(PyObject *cpy_r_exc_type) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_null_if_excepts_decorator;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts", 171, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_exc_type);
    if (((faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *)cpy_r_r0)->_exc_type != NULL) {
        CPy_DECREF(((faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *)cpy_r_r0)->_exc_type);
    }
    ((faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *)cpy_r_r0)->_exc_type = cpy_r_exc_type;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts", 171, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts", 174, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    if (((faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts", 174, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL7;
    }
    cpy_r_null_if_excepts_decorator = cpy_r_r2;
    return cpy_r_null_if_excepts_decorator;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"exc_type", 0};
    static CPyArg_Parser parser = {"O:null_if_excepts", kwlist, 0};
    PyObject *obj_exc_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_exc_type)) {
        return NULL;
    }
    PyObject *arg_exc_type = obj_exc_type;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts(arg_exc_type);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "null_if_excepts", 171, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_hash_and_index(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = PyObject_GetIter(cpy_r_params);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 194, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) {
        goto CPyL16;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 194, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r3 == NULL) {
        goto CPyL17;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 194, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r5 = PyIter_Next(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5 == NULL) {
        goto CPyL10;
    } else
        goto CPyL18;
CPyL8: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 194, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r7 = CPyStatics[31]; /* 'get_block_by_hash' */
    cpy_r_r8 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r9[3] = {cpy_r_eth_tester, cpy_r_r1, cpy_r_r8};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[246]; /* ('full_transactions',) */
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r7, cpy_r_r10, 9223372036854775810ULL, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 195, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r13 = CPyStatics[33]; /* 'transactions' */
    cpy_r_r14 = PyObject_GetItem(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 196, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL20;
    }
    cpy_r_r15 = PyObject_GetItem(cpy_r_r14, cpy_r_r3);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 196, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    if (likely(PyDict_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 196, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "dict", cpy_r_r15);
        goto CPyL15;
    }
    return cpy_r_r16;
CPyL15: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL2;
CPyL17: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
CPyL18: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL15;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_hash_and_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"eth_tester", "params", 0};
    static CPyArg_Parser parser = {"OO:get_transaction_by_block_hash_and_index", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_eth_tester, &obj_params)) {
        return NULL;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_hash_and_index(arg_eth_tester, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_hash_and_index", 191, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_number_and_index(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = PyObject_GetIter(cpy_r_params);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 204, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) {
        goto CPyL16;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 204, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r3 == NULL) {
        goto CPyL17;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 204, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r5 = PyIter_Next(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r5 == NULL) {
        goto CPyL10;
    } else
        goto CPyL18;
CPyL8: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 204, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r7 = CPyStatics[34]; /* 'get_block_by_number' */
    cpy_r_r8 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r9[3] = {cpy_r_eth_tester, cpy_r_r1, cpy_r_r8};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[246]; /* ('full_transactions',) */
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r7, cpy_r_r10, 9223372036854775810ULL, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 205, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r13 = CPyStatics[33]; /* 'transactions' */
    cpy_r_r14 = PyObject_GetItem(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 206, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL20;
    }
    cpy_r_r15 = PyObject_GetItem(cpy_r_r14, cpy_r_r3);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 206, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL15;
    }
    if (likely(PyDict_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 206, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "dict", cpy_r_r15);
        goto CPyL15;
    }
    return cpy_r_r16;
CPyL15: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL2;
CPyL17: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
CPyL18: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL15;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_number_and_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"eth_tester", "params", 0};
    static CPyArg_Parser parser = {"OO:get_transaction_by_block_number_and_index", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_eth_tester, &obj_params)) {
        return NULL;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_number_and_index(arg_eth_tester, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_transaction_by_block_number_and_index", 201, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

CPyTagged CPyDef_faster_web3___providers___eth_tester___defaults___create_log_filter(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    cpy_r_r0 = CPyStatics[237]; /* 0 */
    cpy_r_r1 = PyObject_GetItem(cpy_r_params, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_log_filter", 210, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyStatics[35]; /* 'create_log_filter' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_eth_tester, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_log_filter", 211, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPyTuple_LoadEmptyTupleConstant();
    cpy_r_r5 = CPyDict_FromAny(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_log_filter", 211, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL8;
    }
    cpy_r_r6 = PyObject_Call(cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_log_filter", 211, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    if (likely(PyLong_Check(cpy_r_r6)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r6);
    else {
        CPy_TypeError("int", cpy_r_r6); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_log_filter", 211, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = CPY_INT_TAG;
    return cpy_r_r8;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___create_log_filter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"eth_tester", "params", 0};
    static CPyArg_Parser parser = {"OO:create_log_filter", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_eth_tester, &obj_params)) {
        return NULL;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    CPyTagged retval = CPyDef_faster_web3___providers___eth_tester___defaults___create_log_filter(arg_eth_tester, arg_params);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_log_filter", 209, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___get_logs(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[237]; /* 0 */
    cpy_r_r1 = PyObject_GetItem(cpy_r_params, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_logs", 215, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyStatics[36]; /* 'get_logs' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_eth_tester, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_logs", 216, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPyTuple_LoadEmptyTupleConstant();
    cpy_r_r5 = CPyDict_FromAny(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_logs", 216, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL8;
    }
    cpy_r_r6 = PyObject_Call(cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_logs", 216, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    cpy_r_r7 = PySequence_List(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_logs", 216, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL6;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL6;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___get_logs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"eth_tester", "params", 0};
    static CPyArg_Parser parser = {"OO:get_logs", kwlist, 0};
    PyObject *obj_eth_tester;
    PyObject *obj_params;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_eth_tester, &obj_params)) {
        return NULL;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *arg_params = obj_params;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___get_logs(arg_eth_tester, arg_params);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "get_logs", 214, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults____generate_random_private_key(void) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r__;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL16;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r__ = cpy_r_r2;
    CPy_DECREF(cpy_r__);
CPyL2: ;
    cpy_r_r3 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)64;
    if (!cpy_r_r3) goto CPyL8;
    cpy_r_r4 = CPyModule_random;
    cpy_r_r5 = CPyStatics[37]; /* 'randint' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL17;
    }
    cpy_r_r7 = CPyStatics[237]; /* 0 */
    cpy_r_r8 = CPyStatics[240]; /* 255 */
    PyObject *cpy_r_r9[2] = {cpy_r_r7, cpy_r_r8};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r10, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL17;
    }
    if (likely(PyLong_Check(cpy_r_r11)))
        cpy_r_r12 = CPyTagged_FromObject(cpy_r_r11);
    else {
        CPy_TypeError("int", cpy_r_r11); cpy_r_r12 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL17;
    }
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r12);
    cpy_r_r14 = PyList_Append(cpy_r_r0, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL17;
    }
    cpy_r_r16 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r16;
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r__ = cpy_r_r17;
    CPy_DECREF(cpy_r__);
    goto CPyL2;
CPyL8: ;
    cpy_r_r18 = PyObject_GetIter(cpy_r_r0);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL16;
    }
    cpy_r_r19 = PyByteArray_FromObject(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL16;
    }
    cpy_r_r20 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r21[1] = {cpy_r_r19};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyBytes_Check(cpy_r_r23) || PyByteArray_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "bytes", cpy_r_r23);
        goto CPyL16;
    }
    cpy_r_r25 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r26 = CPyStatics[38]; /* 'encode_hex' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_r24};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r24);
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 224, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r30);
        goto CPyL16;
    }
    return cpy_r_r31;
CPyL16: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL16;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults____generate_random_private_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_generate_random_private_key", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults____generate_random_private_key();
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "_generate_random_private_key", 219, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___create_new_account(PyObject *cpy_r_eth_tester) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_faster_web3___providers___eth_tester___defaults____generate_random_private_key();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_new_account", 229, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPyStatics[39]; /* 'add_account' */
    PyObject *cpy_r_r2[2] = {cpy_r_eth_tester, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_new_account", 229, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_web3/providers/eth_tester/defaults.py", "create_new_account", 229, CPyStatic_faster_web3___providers___eth_tester___defaults___globals, "str", cpy_r_r4);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___create_new_account(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"eth_tester", 0};
    static CPyArg_Parser parser = {"O:create_new_account", kwlist, 0};
    PyObject *obj_eth_tester;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_eth_tester)) {
        return NULL;
    }
    PyObject *arg_eth_tester = obj_eth_tester;
    PyObject *retval = CPyDef_faster_web3___providers___eth_tester___defaults___create_new_account(arg_eth_tester);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "create_new_account", 228, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
    return NULL;
}

char CPyDef_faster_web3___providers___eth_tester___defaults_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    PyObject **cpy_r_r7;
    PyObject **cpy_r_r8;
    void *cpy_r_r10;
    void *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
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
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
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
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject **cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject **cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject **cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject **cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject **cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    int32_t cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject **cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject **cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject **cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject **cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject **cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject **cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject **cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject **cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject **cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject **cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject **cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject **cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject **cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    char cpy_r_r347;
    PyObject **cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject **cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject **cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject **cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    char cpy_r_r376;
    PyObject **cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject **cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject **cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject **cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    char cpy_r_r405;
    PyObject **cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    PyObject **cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject **cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject **cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    char cpy_r_r434;
    PyObject **cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject **cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject **cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject **cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject **cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject **cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject **cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    char cpy_r_r499;
    PyObject **cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject **cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    char cpy_r_r512;
    PyObject **cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject **cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    char cpy_r_r525;
    PyObject **cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject *cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject **cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject **cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    PyObject *cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject **cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject **cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject **cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject *cpy_r_r575;
    char cpy_r_r576;
    PyObject **cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    PyObject *cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    PyObject *cpy_r_r598;
    PyObject *cpy_r_r599;
    PyObject *cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    PyObject *cpy_r_r609;
    PyObject *cpy_r_r610;
    PyObject *cpy_r_r611;
    PyObject *cpy_r_r612;
    PyObject **cpy_r_r614;
    PyObject *cpy_r_r615;
    PyObject *cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject **cpy_r_r622;
    PyObject *cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject **cpy_r_r636;
    PyObject *cpy_r_r637;
    PyObject *cpy_r_r638;
    PyObject *cpy_r_r639;
    PyObject *cpy_r_r640;
    PyObject **cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject *cpy_r_r648;
    PyObject **cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    PyObject *cpy_r_r655;
    PyObject *cpy_r_r656;
    PyObject **cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    char cpy_r_r661;
    PyObject **cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    PyObject *cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    PyObject **cpy_r_r671;
    PyObject *cpy_r_r672;
    PyObject *cpy_r_r673;
    char cpy_r_r674;
    PyObject **cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject *cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject *cpy_r_r702;
    PyObject *cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    PyObject *cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
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
    PyObject *cpy_r_r723;
    PyObject *cpy_r_r724;
    PyObject *cpy_r_r725;
    PyObject *cpy_r_r726;
    PyObject *cpy_r_r727;
    PyObject *cpy_r_r728;
    PyObject *cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject *cpy_r_r731;
    PyObject *cpy_r_r732;
    PyObject *cpy_r_r733;
    PyObject *cpy_r_r734;
    PyObject *cpy_r_r735;
    PyObject *cpy_r_r736;
    PyObject *cpy_r_r737;
    PyObject *cpy_r_r738;
    PyObject *cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    PyObject *cpy_r_r742;
    PyObject *cpy_r_r743;
    PyObject *cpy_r_r744;
    PyObject *cpy_r_r745;
    PyObject *cpy_r_r746;
    PyObject *cpy_r_r747;
    PyObject *cpy_r_r748;
    PyObject *cpy_r_r749;
    PyObject *cpy_r_r750;
    PyObject *cpy_r_r751;
    PyObject *cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject *cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject *cpy_r_r758;
    PyObject *cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject *cpy_r_r762;
    PyObject *cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    PyObject *cpy_r_r766;
    PyObject *cpy_r_r767;
    PyObject *cpy_r_r768;
    PyObject *cpy_r_r769;
    PyObject *cpy_r_r770;
    PyObject *cpy_r_r771;
    PyObject *cpy_r_r772;
    PyObject *cpy_r_r773;
    PyObject *cpy_r_r774;
    PyObject *cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject *cpy_r_r777;
    PyObject *cpy_r_r778;
    PyObject *cpy_r_r779;
    PyObject *cpy_r_r780;
    PyObject *cpy_r_r781;
    PyObject *cpy_r_r782;
    PyObject *cpy_r_r783;
    PyObject *cpy_r_r784;
    PyObject *cpy_r_r785;
    PyObject *cpy_r_r786;
    PyObject *cpy_r_r787;
    PyObject *cpy_r_r788;
    PyObject *cpy_r_r789;
    PyObject *cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject *cpy_r_r792;
    PyObject *cpy_r_r793;
    PyObject *cpy_r_r794;
    PyObject *cpy_r_r795;
    PyObject *cpy_r_r796;
    PyObject *cpy_r_r797;
    PyObject *cpy_r_r798;
    PyObject *cpy_r_r799;
    PyObject *cpy_r_r800;
    PyObject *cpy_r_r801;
    PyObject *cpy_r_r802;
    PyObject *cpy_r_r803;
    PyObject *cpy_r_r804;
    PyObject *cpy_r_r805;
    PyObject *cpy_r_r806;
    PyObject *cpy_r_r807;
    PyObject *cpy_r_r808;
    PyObject *cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_r812;
    PyObject *cpy_r_r813;
    PyObject *cpy_r_r814;
    PyObject *cpy_r_r815;
    PyObject *cpy_r_r816;
    PyObject *cpy_r_r817;
    PyObject *cpy_r_r818;
    PyObject *cpy_r_r819;
    PyObject *cpy_r_r820;
    PyObject *cpy_r_r821;
    PyObject *cpy_r_r822;
    PyObject *cpy_r_r823;
    PyObject *cpy_r_r824;
    PyObject *cpy_r_r825;
    PyObject *cpy_r_r826;
    PyObject *cpy_r_r827;
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
    PyObject *cpy_r_r852;
    PyObject *cpy_r_r853;
    PyObject *cpy_r_r854;
    PyObject **cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject *cpy_r_r858;
    PyObject *cpy_r_r859;
    PyObject *cpy_r_r860;
    PyObject *cpy_r_r861;
    PyObject *cpy_r_r862;
    PyObject *cpy_r_r863;
    PyObject *cpy_r_r864;
    PyObject *cpy_r_r865;
    PyObject *cpy_r_r866;
    PyObject *cpy_r_r867;
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
    PyObject **cpy_r_r880;
    PyObject *cpy_r_r881;
    PyObject *cpy_r_r882;
    PyObject *cpy_r_r883;
    PyObject *cpy_r_r884;
    PyObject *cpy_r_r885;
    PyObject *cpy_r_r886;
    PyObject **cpy_r_r888;
    PyObject *cpy_r_r889;
    PyObject *cpy_r_r890;
    PyObject *cpy_r_r891;
    PyObject *cpy_r_r892;
    PyObject *cpy_r_r893;
    PyObject *cpy_r_r894;
    PyObject **cpy_r_r896;
    PyObject *cpy_r_r897;
    PyObject *cpy_r_r898;
    PyObject *cpy_r_r899;
    PyObject *cpy_r_r900;
    PyObject *cpy_r_r901;
    int32_t cpy_r_r902;
    char cpy_r_r903;
    char cpy_r_r904;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[40]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", -1, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_ast;
    cpy_r_r6 = (PyObject **)&CPyModule_operator;
    cpy_r_r7 = (PyObject **)&CPyModule_random;
    cpy_r_r8 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r9[4] = {cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8};
    cpy_r_r10 = (void *)&cpy_r_r9;
    int64_t cpy_r_r11[4] = {1, 2, 3, 4};
    cpy_r_r12 = (void *)&cpy_r_r11;
    cpy_r_r13 = CPyStatics[251]; /* (('ast', 'ast', 'ast'),
                                    ('operator', 'operator', 'operator'),
                                    ('random', 'random', 'random'), ('sys', 'sys', 'sys')) */
    cpy_r_r14 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r15 = CPyStatics[45]; /* 'faster_web3/providers/eth_tester/defaults.py' */
    cpy_r_r16 = CPyStatics[46]; /* '<module>' */
    cpy_r_r17 = CPyImport_ImportMany(cpy_r_r13, cpy_r_r10, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r12);
    if (!cpy_r_r17) goto CPyL292;
    cpy_r_r18 = CPyStatics[252]; /* ('TYPE_CHECKING', 'Any', 'Callable', 'Final', 'List',
                                    'NoReturn', 'Optional', 'Tuple', 'Type', 'TypeVar') */
    cpy_r_r19 = CPyStatics[57]; /* 'typing' */
    cpy_r_r20 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 5, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_typing = cpy_r_r21;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[253]; /* ('abi',) */
    cpy_r_r23 = CPyStatics[58]; /* 'faster_eth_abi' */
    cpy_r_r24 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 18, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_eth_abi = cpy_r_r25;
    CPy_INCREF(CPyModule_faster_eth_abi);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[254]; /* ('BlockNotFound', 'FilterNotFound', 'TransactionFailed',
                                    'TransactionNotFound') */
    cpy_r_r27 = CPyStatics[62]; /* 'eth_tester.exceptions' */
    cpy_r_r28 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 21, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_eth_tester___exceptions = cpy_r_r29;
    CPy_INCREF(CPyModule_eth_tester___exceptions);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[255]; /* ('HexAddress', 'HexStr') */
    cpy_r_r31 = CPyStatics[65]; /* 'eth_typing' */
    cpy_r_r32 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 27, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_eth_typing = cpy_r_r33;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[256]; /* ('decode_hex', 'encode_hex', 'is_null', 'keccak') */
    cpy_r_r35 = CPyStatics[69]; /* 'faster_eth_utils' */
    cpy_r_r36 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 31, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_eth_utils = cpy_r_r37;
    CPy_INCREF(CPyModule_faster_eth_utils);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[257]; /* ('apply_formatter_if',) */
    cpy_r_r39 = CPyStatics[71]; /* 'faster_eth_utils.curried' */
    cpy_r_r40 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 37, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_eth_utils___curried = cpy_r_r41;
    CPy_INCREF(CPyModule_faster_eth_utils___curried);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[258]; /* ('compose', 'curry', 'excepts') */
    cpy_r_r43 = CPyStatics[74]; /* 'faster_eth_utils.toolz' */
    cpy_r_r44 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 40, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_eth_utils___toolz = cpy_r_r45;
    CPy_INCREF(CPyModule_faster_eth_utils___toolz);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatics[259]; /* ('ParamSpec',) */
    cpy_r_r47 = CPyStatics[76]; /* 'typing_extensions' */
    cpy_r_r48 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r49 = CPyImport_ImportFromMany(cpy_r_r47, cpy_r_r46, cpy_r_r46, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 45, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_typing_extensions = cpy_r_r49;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r50 = CPyStatics[260]; /* ('Web3',) */
    cpy_r_r51 = CPyStatics[77]; /* 'faster_web3' */
    cpy_r_r52 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r53 = CPyImport_ImportFromMany(cpy_r_r51, cpy_r_r50, cpy_r_r50, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 49, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_web3 = cpy_r_r53;
    CPy_INCREF(CPyModule_faster_web3);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[261]; /* ('OFFCHAIN_LOOKUP_FIELDS', 'PANIC_ERROR_CODES') */
    cpy_r_r55 = CPyStatics[80]; /* 'faster_web3._utils.error_formatters_utils' */
    cpy_r_r56 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r57 = CPyImport_ImportFromMany(cpy_r_r55, cpy_r_r54, cpy_r_r54, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 52, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_web3____utils___error_formatters_utils = cpy_r_r57;
    CPy_INCREF(CPyModule_faster_web3____utils___error_formatters_utils);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r58 = CPyStatics[262]; /* ('ContractPanicError', 'OffchainLookup') */
    cpy_r_r59 = CPyStatics[81]; /* 'faster_web3.exceptions' */
    cpy_r_r60 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r61 = CPyImport_ImportFromMany(cpy_r_r59, cpy_r_r58, cpy_r_r58, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 56, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_web3___exceptions = cpy_r_r61;
    CPy_INCREF(CPyModule_faster_web3___exceptions);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r62 = CPyStatics[263]; /* ('LogReceipt', 'TParams', 'TReturn', 'TValue',
                                    'TxReceipt') */
    cpy_r_r63 = CPyStatics[87]; /* 'faster_web3.types' */
    cpy_r_r64 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r65 = CPyImport_ImportFromMany(cpy_r_r63, cpy_r_r62, cpy_r_r62, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 60, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyModule_faster_web3___types = cpy_r_r65;
    CPy_INCREF(CPyModule_faster_web3___types);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r66 = CPyStatics[88]; /* 'P' */
    cpy_r_r67 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r68 = CPyStatics[75]; /* 'ParamSpec' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 74, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    PyObject *cpy_r_r70[1] = {cpy_r_r66};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 74, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r73 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r74 = CPyStatics[88]; /* 'P' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r73, cpy_r_r74, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 74, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r77 = CPyStatics[89]; /* 'T' */
    cpy_r_r78 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r79 = CPyStatics[56]; /* 'TypeVar' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 75, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    PyObject *cpy_r_r81[1] = {cpy_r_r77};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = PyObject_Vectorcall(cpy_r_r80, cpy_r_r82, 1, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 75, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r84 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r85 = CPyStatics[89]; /* 'T' */
    cpy_r_r86 = CPyDict_SetItem(cpy_r_r84, cpy_r_r85, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 75, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r88 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r89 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 82, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r91 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r92 = CPyStatics[73]; /* 'curry' */
    cpy_r_r93 = CPyDict_GetItem(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 82, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL293;
    }
    PyObject *cpy_r_r94[1] = {cpy_r_r90};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = PyObject_Vectorcall(cpy_r_r93, cpy_r_r95, 1, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 82, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL293;
    }
    CPy_DECREF(cpy_r_r90);
    cpy_r_r97 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r98 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r99 = PyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 82, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r101 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r102 = CPyStatics[91]; /* 'preprocess_params' */
    cpy_r_r103 = CPyDict_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 147, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r104 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r105 = CPyStatics[73]; /* 'curry' */
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 147, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL294;
    }
    PyObject *cpy_r_r107[1] = {cpy_r_r103};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = PyObject_Vectorcall(cpy_r_r106, cpy_r_r108, 1, 0);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 147, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL294;
    }
    CPy_DECREF(cpy_r_r103);
    cpy_r_r110 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r111 = CPyStatics[91]; /* 'preprocess_params' */
    cpy_r_r112 = PyDict_SetItem(cpy_r_r110, cpy_r_r111, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 147, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r114 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r115 = CPyStatics[59]; /* 'BlockNotFound' */
    cpy_r_r116 = CPyDict_GetItem(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 183, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r117 = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts(cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 183, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found = cpy_r_r117;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found);
    cpy_r_r118 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r119 = CPyStatics[92]; /* 'null_if_block_not_found' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 183, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r122 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r123 = CPyStatics[61]; /* 'TransactionNotFound' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 184, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r125 = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts(cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 184, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found = cpy_r_r125;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found);
    cpy_r_r126 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r127 = CPyStatics[93]; /* 'null_if_transaction_not_found' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r126, cpy_r_r127, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 184, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r130 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r131 = CPyStatics[60]; /* 'FilterNotFound' */
    cpy_r_r132 = CPyDict_GetItem(cpy_r_r130, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 185, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r133 = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts(cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 185, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found = cpy_r_r133;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found);
    cpy_r_r134 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r135 = CPyStatics[94]; /* 'null_if_filter_not_found' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r134, cpy_r_r135, cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 185, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r138 = CPyModule_builtins;
    cpy_r_r139 = CPyStatics[95]; /* 'IndexError' */
    cpy_r_r140 = CPyObject_GetAttr(cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 186, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r141 = CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts(cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 186, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror = cpy_r_r141;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror);
    cpy_r_r142 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r143 = CPyStatics[96]; /* 'null_if_indexerror' */
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r142, cpy_r_r143, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 186, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r146 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r147 = CPyStatics[97]; /* 'get_transaction_by_block_hash_and_index' */
    cpy_r_r148 = CPyDict_GetItem(cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 189, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r149 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r149 == NULL)) {
        goto CPyL295;
    } else
        goto CPyL47;
CPyL45: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r150 = 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 190, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL47: ;
    PyObject *cpy_r_r151[1] = {cpy_r_r148};
    cpy_r_r152 = (PyObject **)&cpy_r_r151;
    cpy_r_r153 = PyObject_Vectorcall(cpy_r_r149, cpy_r_r152, 1, 0);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 189, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL296;
    }
    CPy_DECREF(cpy_r_r148);
    cpy_r_r154 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror;
    if (unlikely(cpy_r_r154 == NULL)) {
        goto CPyL297;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_indexerror\" was not set");
    cpy_r_r155 = 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 189, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL51: ;
    PyObject *cpy_r_r156[1] = {cpy_r_r153};
    cpy_r_r157 = (PyObject **)&cpy_r_r156;
    cpy_r_r158 = PyObject_Vectorcall(cpy_r_r154, cpy_r_r157, 1, 0);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 189, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL298;
    }
    CPy_DECREF(cpy_r_r153);
    cpy_r_r159 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r160 = CPyStatics[97]; /* 'get_transaction_by_block_hash_and_index' */
    cpy_r_r161 = PyDict_SetItem(cpy_r_r159, cpy_r_r160, cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 189, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r163 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r164 = CPyStatics[98]; /* 'get_transaction_by_block_number_and_index' */
    cpy_r_r165 = CPyDict_GetItem(cpy_r_r163, cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 199, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r166 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r166 == NULL)) {
        goto CPyL299;
    } else
        goto CPyL57;
CPyL55: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r167 = 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 200, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL57: ;
    PyObject *cpy_r_r168[1] = {cpy_r_r165};
    cpy_r_r169 = (PyObject **)&cpy_r_r168;
    cpy_r_r170 = PyObject_Vectorcall(cpy_r_r166, cpy_r_r169, 1, 0);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 199, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL300;
    }
    CPy_DECREF(cpy_r_r165);
    cpy_r_r171 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror;
    if (unlikely(cpy_r_r171 == NULL)) {
        goto CPyL301;
    } else
        goto CPyL61;
CPyL59: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_indexerror\" was not set");
    cpy_r_r172 = 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 199, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL61: ;
    PyObject *cpy_r_r173[1] = {cpy_r_r170};
    cpy_r_r174 = (PyObject **)&cpy_r_r173;
    cpy_r_r175 = PyObject_Vectorcall(cpy_r_r171, cpy_r_r174, 1, 0);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 199, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL302;
    }
    CPy_DECREF(cpy_r_r170);
    cpy_r_r176 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r177 = CPyStatics[98]; /* 'get_transaction_by_block_number_and_index' */
    cpy_r_r178 = PyDict_SetItem(cpy_r_r176, cpy_r_r177, cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 199, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r180 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r181 = CPyStatics[99]; /* 'create_new_account' */
    cpy_r_r182 = CPyDict_GetItem(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 227, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r183 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r184 = CPyStatics[100]; /* 'without_params' */
    cpy_r_r185 = CPyDict_GetItem(cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 227, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL303;
    }
    PyObject *cpy_r_r186[1] = {cpy_r_r182};
    cpy_r_r187 = (PyObject **)&cpy_r_r186;
    cpy_r_r188 = PyObject_Vectorcall(cpy_r_r185, cpy_r_r187, 1, 0);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 227, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL303;
    }
    CPy_DECREF(cpy_r_r182);
    cpy_r_r189 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r190 = CPyStatics[99]; /* 'create_new_account' */
    cpy_r_r191 = PyDict_SetItem(cpy_r_r189, cpy_r_r190, cpy_r_r188);
    CPy_DECREF(cpy_r_r188);
    cpy_r_r192 = cpy_r_r191 >= 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 227, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r193 = CPyStatics[101]; /* 'web3' */
    cpy_r_r194 = CPyStatics[102]; /* 'clientVersion' */
    cpy_r_r195 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r196 = CPyStatics[103]; /* 'client_version' */
    cpy_r_r197 = CPyDict_GetItem(cpy_r_r195, cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 234, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r198 = CPyStatics[104]; /* 'sha3' */
    cpy_r_r199 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r200 = CPyStatics[38]; /* 'encode_hex' */
    cpy_r_r201 = CPyDict_GetItem(cpy_r_r199, cpy_r_r200);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 236, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL304;
    }
    cpy_r_r202 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r203 = CPyStatics[68]; /* 'keccak' */
    cpy_r_r204 = CPyDict_GetItem(cpy_r_r202, cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 237, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL305;
    }
    cpy_r_r205 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r206 = CPyStatics[66]; /* 'decode_hex' */
    cpy_r_r207 = CPyDict_GetItem(cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 238, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL306;
    }
    cpy_r_r208 = CPyModule_operator;
    cpy_r_r209 = CPyStatics[105]; /* 'itemgetter' */
    cpy_r_r210 = CPyObject_GetAttr(cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 239, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL307;
    }
    cpy_r_r211 = CPyStatics[237]; /* 0 */
    PyObject *cpy_r_r212[1] = {cpy_r_r211};
    cpy_r_r213 = (PyObject **)&cpy_r_r212;
    cpy_r_r214 = PyObject_Vectorcall(cpy_r_r210, cpy_r_r213, 1, 0);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 239, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL307;
    }
    cpy_r_r215 = CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester(cpy_r_r214);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 239, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL307;
    }
    cpy_r_r216 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r217 = CPyStatics[72]; /* 'compose' */
    cpy_r_r218 = CPyDict_GetItem(cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 235, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL308;
    }
    PyObject *cpy_r_r219[4] = {cpy_r_r201, cpy_r_r204, cpy_r_r207, cpy_r_r215};
    cpy_r_r220 = (PyObject **)&cpy_r_r219;
    cpy_r_r221 = PyObject_Vectorcall(cpy_r_r218, cpy_r_r220, 4, 0);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 235, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL308;
    }
    CPy_DECREF(cpy_r_r201);
    CPy_DECREF(cpy_r_r204);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r215);
    cpy_r_r222 = CPyDict_Build(2, cpy_r_r194, cpy_r_r197, cpy_r_r198, cpy_r_r221);
    CPy_DECREF(cpy_r_r197);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 233, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    cpy_r_r223 = CPyStatics[106]; /* 'net' */
    cpy_r_r224 = CPyStatics[107]; /* 'version' */
    cpy_r_r225 = CPyStatics[108]; /* '1' */
    cpy_r_r226 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 243, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL309;
    }
    cpy_r_r227 = CPyStatics[109]; /* 'listening' */
    cpy_r_r228 = 0 ? Py_True : Py_False;
    cpy_r_r229 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r228);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 244, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL310;
    }
    cpy_r_r230 = CPyStatics[110]; /* 'peerCount' */
    cpy_r_r231 = CPyStatics[237]; /* 0 */
    cpy_r_r232 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r231);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 245, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL311;
    }
    cpy_r_r233 = CPyDict_Build(3, cpy_r_r224, cpy_r_r226, cpy_r_r227, cpy_r_r229, cpy_r_r230, cpy_r_r232);
    CPy_DECREF(cpy_r_r226);
    CPy_DECREF(cpy_r_r229);
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 242, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL309;
    }
    cpy_r_r234 = CPyStatics[111]; /* 'eth' */
    cpy_r_r235 = CPyStatics[112]; /* 'protocolVersion' */
    cpy_r_r236 = CPyStatics[241]; /* 63 */
    cpy_r_r237 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r236);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 248, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL312;
    }
    cpy_r_r238 = CPyStatics[113]; /* 'syncing' */
    cpy_r_r239 = 0 ? Py_True : Py_False;
    cpy_r_r240 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 249, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL313;
    }
    cpy_r_r241 = CPyStatics[114]; /* 'chainId' */
    cpy_r_r242 = CPyStatics[242]; /* 131277322940537 */
    cpy_r_r243 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 250, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL314;
    }
    cpy_r_r244 = CPyStatics[115]; /* 'feeHistory' */
    cpy_r_r245 = CPyStatics[116]; /* 'get_fee_history' */
    cpy_r_r246 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r247 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r248 = CPyDict_GetItem(cpy_r_r246, cpy_r_r247);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 251, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL315;
    }
    PyObject *cpy_r_r249[1] = {cpy_r_r245};
    cpy_r_r250 = (PyObject **)&cpy_r_r249;
    cpy_r_r251 = PyObject_Vectorcall(cpy_r_r248, cpy_r_r250, 1, 0);
    CPy_DECREF(cpy_r_r248);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 251, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL315;
    }
    cpy_r_r252 = CPyStatics[117]; /* 'maxPriorityFeePerGas' */
    cpy_r_r253 = CPyStatics[243]; /* 1000000000 */
    cpy_r_r254 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r253);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 252, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL316;
    }
    cpy_r_r255 = CPyStatics[118]; /* 'blobBaseFee' */
    cpy_r_r256 = CPyStatics[243]; /* 1000000000 */
    cpy_r_r257 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r256);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 253, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL317;
    }
    cpy_r_r258 = CPyStatics[119]; /* 'gasPrice' */
    cpy_r_r259 = CPyStatics[243]; /* 1000000000 */
    cpy_r_r260 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r259);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 254, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL318;
    }
    cpy_r_r261 = CPyStatics[120]; /* 'accounts' */
    cpy_r_r262 = CPyStatics[121]; /* 'get_accounts' */
    cpy_r_r263 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r264 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r265 = CPyDict_GetItem(cpy_r_r263, cpy_r_r264);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 255, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL319;
    }
    PyObject *cpy_r_r266[1] = {cpy_r_r262};
    cpy_r_r267 = (PyObject **)&cpy_r_r266;
    cpy_r_r268 = PyObject_Vectorcall(cpy_r_r265, cpy_r_r267, 1, 0);
    CPy_DECREF(cpy_r_r265);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 255, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL319;
    }
    cpy_r_r269 = CPyStatics[122]; /* 'blockNumber' */
    cpy_r_r270 = CPyStatics[123]; /* 'number' */
    cpy_r_r271 = CPyModule_operator;
    cpy_r_r272 = CPyStatics[105]; /* 'itemgetter' */
    cpy_r_r273 = CPyObject_GetAttr(cpy_r_r271, cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 257, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL320;
    }
    PyObject *cpy_r_r274[1] = {cpy_r_r270};
    cpy_r_r275 = (PyObject **)&cpy_r_r274;
    cpy_r_r276 = PyObject_Vectorcall(cpy_r_r273, cpy_r_r275, 1, 0);
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 257, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL320;
    }
    cpy_r_r277 = CPyStatics[34]; /* 'get_block_by_number' */
    cpy_r_r278 = CPyStatics[124]; /* 'block_number' */
    cpy_r_r279 = CPyStatics[125]; /* 'latest' */
    cpy_r_r280 = CPyDict_Build(1, cpy_r_r278, cpy_r_r279);
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 259, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL321;
    }
    cpy_r_r281 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r282 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r283 = CPyDict_GetItem(cpy_r_r281, cpy_r_r282);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 258, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL322;
    }
    PyObject *cpy_r_r284[2] = {cpy_r_r277, cpy_r_r280};
    cpy_r_r285 = (PyObject **)&cpy_r_r284;
    cpy_r_r286 = CPyStatics[264]; /* ('fn_kwargs',) */
    cpy_r_r287 = PyObject_Vectorcall(cpy_r_r283, cpy_r_r285, 1, cpy_r_r286);
    CPy_DECREF(cpy_r_r283);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 258, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL322;
    }
    CPy_DECREF(cpy_r_r280);
    cpy_r_r288 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r289 = CPyStatics[72]; /* 'compose' */
    cpy_r_r290 = CPyDict_GetItem(cpy_r_r288, cpy_r_r289);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 256, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL323;
    }
    PyObject *cpy_r_r291[2] = {cpy_r_r276, cpy_r_r287};
    cpy_r_r292 = (PyObject **)&cpy_r_r291;
    cpy_r_r293 = PyObject_Vectorcall(cpy_r_r290, cpy_r_r292, 2, 0);
    CPy_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 256, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL323;
    }
    CPy_DECREF(cpy_r_r276);
    CPy_DECREF(cpy_r_r287);
    cpy_r_r294 = CPyStatics[127]; /* 'getBalance' */
    cpy_r_r295 = CPyStatics[128]; /* 'get_balance' */
    cpy_r_r296 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r297 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r298 = CPyDict_GetItem(cpy_r_r296, cpy_r_r297);
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 262, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL324;
    }
    PyObject *cpy_r_r299[1] = {cpy_r_r295};
    cpy_r_r300 = (PyObject **)&cpy_r_r299;
    cpy_r_r301 = PyObject_Vectorcall(cpy_r_r298, cpy_r_r300, 1, 0);
    CPy_DECREF(cpy_r_r298);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 262, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL324;
    }
    cpy_r_r302 = CPyStatics[129]; /* 'getStorageAt' */
    cpy_r_r303 = CPyStatics[130]; /* 'get_storage_at' */
    cpy_r_r304 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r305 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r306 = CPyDict_GetItem(cpy_r_r304, cpy_r_r305);
    if (unlikely(cpy_r_r306 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 263, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL325;
    }
    PyObject *cpy_r_r307[1] = {cpy_r_r303};
    cpy_r_r308 = (PyObject **)&cpy_r_r307;
    cpy_r_r309 = PyObject_Vectorcall(cpy_r_r306, cpy_r_r308, 1, 0);
    CPy_DECREF(cpy_r_r306);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 263, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL325;
    }
    cpy_r_r310 = CPyStatics[131]; /* 'getProof' */
    cpy_r_r311 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r312 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r313 = CPyDict_GetItem(cpy_r_r311, cpy_r_r312);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 264, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL326;
    }
    cpy_r_r314 = CPyStatics[133]; /* 'getTransactionCount' */
    cpy_r_r315 = CPyStatics[134]; /* 'get_nonce' */
    cpy_r_r316 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r317 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r318 = CPyDict_GetItem(cpy_r_r316, cpy_r_r317);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 265, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL327;
    }
    PyObject *cpy_r_r319[1] = {cpy_r_r315};
    cpy_r_r320 = (PyObject **)&cpy_r_r319;
    cpy_r_r321 = PyObject_Vectorcall(cpy_r_r318, cpy_r_r320, 1, 0);
    CPy_DECREF(cpy_r_r318);
    if (unlikely(cpy_r_r321 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 265, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL327;
    }
    cpy_r_r322 = CPyStatics[135]; /* 'getBlockTransactionCountByHash' */
    cpy_r_r323 = CPyModule_builtins;
    cpy_r_r324 = CPyStatics[136]; /* 'len' */
    cpy_r_r325 = CPyObject_GetAttr(cpy_r_r323, cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 268, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL328;
    }
    cpy_r_r326 = CPyStatics[33]; /* 'transactions' */
    cpy_r_r327 = CPyModule_operator;
    cpy_r_r328 = CPyStatics[105]; /* 'itemgetter' */
    cpy_r_r329 = CPyObject_GetAttr(cpy_r_r327, cpy_r_r328);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 269, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL329;
    }
    PyObject *cpy_r_r330[1] = {cpy_r_r326};
    cpy_r_r331 = (PyObject **)&cpy_r_r330;
    cpy_r_r332 = PyObject_Vectorcall(cpy_r_r329, cpy_r_r331, 1, 0);
    CPy_DECREF(cpy_r_r329);
    if (unlikely(cpy_r_r332 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 269, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL329;
    }
    cpy_r_r333 = CPyStatics[31]; /* 'get_block_by_hash' */
    cpy_r_r334 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r335 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r336 = CPyDict_GetItem(cpy_r_r334, cpy_r_r335);
    if (unlikely(cpy_r_r336 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 270, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL330;
    }
    PyObject *cpy_r_r337[1] = {cpy_r_r333};
    cpy_r_r338 = (PyObject **)&cpy_r_r337;
    cpy_r_r339 = PyObject_Vectorcall(cpy_r_r336, cpy_r_r338, 1, 0);
    CPy_DECREF(cpy_r_r336);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 270, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL330;
    }
    cpy_r_r340 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r341 = CPyStatics[72]; /* 'compose' */
    cpy_r_r342 = CPyDict_GetItem(cpy_r_r340, cpy_r_r341);
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 267, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL331;
    }
    PyObject *cpy_r_r343[3] = {cpy_r_r325, cpy_r_r332, cpy_r_r339};
    cpy_r_r344 = (PyObject **)&cpy_r_r343;
    cpy_r_r345 = PyObject_Vectorcall(cpy_r_r342, cpy_r_r344, 3, 0);
    CPy_DECREF(cpy_r_r342);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 267, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL331;
    }
    CPy_DECREF(cpy_r_r325);
    CPy_DECREF(cpy_r_r332);
    CPy_DECREF(cpy_r_r339);
    cpy_r_r346 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r346 == NULL)) {
        goto CPyL332;
    } else
        goto CPyL115;
CPyL113: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r347 = 0;
    if (unlikely(!cpy_r_r347)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 266, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL115: ;
    PyObject *cpy_r_r348[1] = {cpy_r_r345};
    cpy_r_r349 = (PyObject **)&cpy_r_r348;
    cpy_r_r350 = PyObject_Vectorcall(cpy_r_r346, cpy_r_r349, 1, 0);
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 266, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL333;
    }
    CPy_DECREF(cpy_r_r345);
    cpy_r_r351 = CPyStatics[137]; /* 'getBlockTransactionCountByNumber' */
    cpy_r_r352 = CPyModule_builtins;
    cpy_r_r353 = CPyStatics[136]; /* 'len' */
    cpy_r_r354 = CPyObject_GetAttr(cpy_r_r352, cpy_r_r353);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 275, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL334;
    }
    cpy_r_r355 = CPyStatics[33]; /* 'transactions' */
    cpy_r_r356 = CPyModule_operator;
    cpy_r_r357 = CPyStatics[105]; /* 'itemgetter' */
    cpy_r_r358 = CPyObject_GetAttr(cpy_r_r356, cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 276, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL335;
    }
    PyObject *cpy_r_r359[1] = {cpy_r_r355};
    cpy_r_r360 = (PyObject **)&cpy_r_r359;
    cpy_r_r361 = PyObject_Vectorcall(cpy_r_r358, cpy_r_r360, 1, 0);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r361 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 276, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL335;
    }
    cpy_r_r362 = CPyStatics[34]; /* 'get_block_by_number' */
    cpy_r_r363 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r364 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r365 = CPyDict_GetItem(cpy_r_r363, cpy_r_r364);
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 277, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL336;
    }
    PyObject *cpy_r_r366[1] = {cpy_r_r362};
    cpy_r_r367 = (PyObject **)&cpy_r_r366;
    cpy_r_r368 = PyObject_Vectorcall(cpy_r_r365, cpy_r_r367, 1, 0);
    CPy_DECREF(cpy_r_r365);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 277, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL336;
    }
    cpy_r_r369 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r370 = CPyStatics[72]; /* 'compose' */
    cpy_r_r371 = CPyDict_GetItem(cpy_r_r369, cpy_r_r370);
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 274, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL337;
    }
    PyObject *cpy_r_r372[3] = {cpy_r_r354, cpy_r_r361, cpy_r_r368};
    cpy_r_r373 = (PyObject **)&cpy_r_r372;
    cpy_r_r374 = PyObject_Vectorcall(cpy_r_r371, cpy_r_r373, 3, 0);
    CPy_DECREF(cpy_r_r371);
    if (unlikely(cpy_r_r374 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 274, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL337;
    }
    CPy_DECREF(cpy_r_r354);
    CPy_DECREF(cpy_r_r361);
    CPy_DECREF(cpy_r_r368);
    cpy_r_r375 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r375 == NULL)) {
        goto CPyL338;
    } else
        goto CPyL126;
CPyL124: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r376 = 0;
    if (unlikely(!cpy_r_r376)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 273, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL126: ;
    PyObject *cpy_r_r377[1] = {cpy_r_r374};
    cpy_r_r378 = (PyObject **)&cpy_r_r377;
    cpy_r_r379 = PyObject_Vectorcall(cpy_r_r375, cpy_r_r378, 1, 0);
    if (unlikely(cpy_r_r379 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 273, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL339;
    }
    CPy_DECREF(cpy_r_r374);
    cpy_r_r380 = CPyStatics[138]; /* 'getUncleCountByBlockHash' */
    cpy_r_r381 = CPyModule_builtins;
    cpy_r_r382 = CPyStatics[136]; /* 'len' */
    cpy_r_r383 = CPyObject_GetAttr(cpy_r_r381, cpy_r_r382);
    if (unlikely(cpy_r_r383 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 282, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL340;
    }
    cpy_r_r384 = CPyStatics[139]; /* 'uncles' */
    cpy_r_r385 = CPyModule_operator;
    cpy_r_r386 = CPyStatics[105]; /* 'itemgetter' */
    cpy_r_r387 = CPyObject_GetAttr(cpy_r_r385, cpy_r_r386);
    if (unlikely(cpy_r_r387 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 283, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL341;
    }
    PyObject *cpy_r_r388[1] = {cpy_r_r384};
    cpy_r_r389 = (PyObject **)&cpy_r_r388;
    cpy_r_r390 = PyObject_Vectorcall(cpy_r_r387, cpy_r_r389, 1, 0);
    CPy_DECREF(cpy_r_r387);
    if (unlikely(cpy_r_r390 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 283, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL341;
    }
    cpy_r_r391 = CPyStatics[31]; /* 'get_block_by_hash' */
    cpy_r_r392 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r393 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r394 = CPyDict_GetItem(cpy_r_r392, cpy_r_r393);
    if (unlikely(cpy_r_r394 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 284, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL342;
    }
    PyObject *cpy_r_r395[1] = {cpy_r_r391};
    cpy_r_r396 = (PyObject **)&cpy_r_r395;
    cpy_r_r397 = PyObject_Vectorcall(cpy_r_r394, cpy_r_r396, 1, 0);
    CPy_DECREF(cpy_r_r394);
    if (unlikely(cpy_r_r397 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 284, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL342;
    }
    cpy_r_r398 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r399 = CPyStatics[72]; /* 'compose' */
    cpy_r_r400 = CPyDict_GetItem(cpy_r_r398, cpy_r_r399);
    if (unlikely(cpy_r_r400 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 281, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL343;
    }
    PyObject *cpy_r_r401[3] = {cpy_r_r383, cpy_r_r390, cpy_r_r397};
    cpy_r_r402 = (PyObject **)&cpy_r_r401;
    cpy_r_r403 = PyObject_Vectorcall(cpy_r_r400, cpy_r_r402, 3, 0);
    CPy_DECREF(cpy_r_r400);
    if (unlikely(cpy_r_r403 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 281, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL343;
    }
    CPy_DECREF(cpy_r_r383);
    CPy_DECREF(cpy_r_r390);
    CPy_DECREF(cpy_r_r397);
    cpy_r_r404 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r404 == NULL)) {
        goto CPyL344;
    } else
        goto CPyL137;
CPyL135: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r405 = 0;
    if (unlikely(!cpy_r_r405)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 280, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL137: ;
    PyObject *cpy_r_r406[1] = {cpy_r_r403};
    cpy_r_r407 = (PyObject **)&cpy_r_r406;
    cpy_r_r408 = PyObject_Vectorcall(cpy_r_r404, cpy_r_r407, 1, 0);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 280, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL345;
    }
    CPy_DECREF(cpy_r_r403);
    cpy_r_r409 = CPyStatics[140]; /* 'getUncleCountByBlockNumber' */
    cpy_r_r410 = CPyModule_builtins;
    cpy_r_r411 = CPyStatics[136]; /* 'len' */
    cpy_r_r412 = CPyObject_GetAttr(cpy_r_r410, cpy_r_r411);
    if (unlikely(cpy_r_r412 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 289, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL346;
    }
    cpy_r_r413 = CPyStatics[139]; /* 'uncles' */
    cpy_r_r414 = CPyModule_operator;
    cpy_r_r415 = CPyStatics[105]; /* 'itemgetter' */
    cpy_r_r416 = CPyObject_GetAttr(cpy_r_r414, cpy_r_r415);
    if (unlikely(cpy_r_r416 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 290, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL347;
    }
    PyObject *cpy_r_r417[1] = {cpy_r_r413};
    cpy_r_r418 = (PyObject **)&cpy_r_r417;
    cpy_r_r419 = PyObject_Vectorcall(cpy_r_r416, cpy_r_r418, 1, 0);
    CPy_DECREF(cpy_r_r416);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 290, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL347;
    }
    cpy_r_r420 = CPyStatics[34]; /* 'get_block_by_number' */
    cpy_r_r421 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r422 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r423 = CPyDict_GetItem(cpy_r_r421, cpy_r_r422);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 291, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL348;
    }
    PyObject *cpy_r_r424[1] = {cpy_r_r420};
    cpy_r_r425 = (PyObject **)&cpy_r_r424;
    cpy_r_r426 = PyObject_Vectorcall(cpy_r_r423, cpy_r_r425, 1, 0);
    CPy_DECREF(cpy_r_r423);
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 291, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL348;
    }
    cpy_r_r427 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r428 = CPyStatics[72]; /* 'compose' */
    cpy_r_r429 = CPyDict_GetItem(cpy_r_r427, cpy_r_r428);
    if (unlikely(cpy_r_r429 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 288, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL349;
    }
    PyObject *cpy_r_r430[3] = {cpy_r_r412, cpy_r_r419, cpy_r_r426};
    cpy_r_r431 = (PyObject **)&cpy_r_r430;
    cpy_r_r432 = PyObject_Vectorcall(cpy_r_r429, cpy_r_r431, 3, 0);
    CPy_DECREF(cpy_r_r429);
    if (unlikely(cpy_r_r432 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 288, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL349;
    }
    CPy_DECREF(cpy_r_r412);
    CPy_DECREF(cpy_r_r419);
    CPy_DECREF(cpy_r_r426);
    cpy_r_r433 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r433 == NULL)) {
        goto CPyL350;
    } else
        goto CPyL148;
CPyL146: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r434 = 0;
    if (unlikely(!cpy_r_r434)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 287, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL148: ;
    PyObject *cpy_r_r435[1] = {cpy_r_r432};
    cpy_r_r436 = (PyObject **)&cpy_r_r435;
    cpy_r_r437 = PyObject_Vectorcall(cpy_r_r433, cpy_r_r436, 1, 0);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 287, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL351;
    }
    CPy_DECREF(cpy_r_r432);
    cpy_r_r438 = CPyStatics[141]; /* 'getCode' */
    cpy_r_r439 = CPyStatics[142]; /* 'get_code' */
    cpy_r_r440 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r441 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r442 = CPyDict_GetItem(cpy_r_r440, cpy_r_r441);
    if (unlikely(cpy_r_r442 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 294, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL352;
    }
    PyObject *cpy_r_r443[1] = {cpy_r_r439};
    cpy_r_r444 = (PyObject **)&cpy_r_r443;
    cpy_r_r445 = PyObject_Vectorcall(cpy_r_r442, cpy_r_r444, 1, 0);
    CPy_DECREF(cpy_r_r442);
    if (unlikely(cpy_r_r445 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 294, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL352;
    }
    cpy_r_r446 = CPyStatics[143]; /* 'sign' */
    cpy_r_r447 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r448 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r449 = CPyDict_GetItem(cpy_r_r447, cpy_r_r448);
    if (unlikely(cpy_r_r449 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 295, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL353;
    }
    cpy_r_r450 = CPyStatics[144]; /* 'signTransaction' */
    cpy_r_r451 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r452 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r453 = CPyDict_GetItem(cpy_r_r451, cpy_r_r452);
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 296, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL354;
    }
    cpy_r_r454 = CPyStatics[145]; /* 'sendTransaction' */
    cpy_r_r455 = CPyStatics[146]; /* 'send_transaction' */
    cpy_r_r456 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r457 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r458 = CPyDict_GetItem(cpy_r_r456, cpy_r_r457);
    if (unlikely(cpy_r_r458 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 297, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL355;
    }
    PyObject *cpy_r_r459[1] = {cpy_r_r455};
    cpy_r_r460 = (PyObject **)&cpy_r_r459;
    cpy_r_r461 = PyObject_Vectorcall(cpy_r_r458, cpy_r_r460, 1, 0);
    CPy_DECREF(cpy_r_r458);
    if (unlikely(cpy_r_r461 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 297, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL355;
    }
    cpy_r_r462 = CPyStatics[147]; /* 'sendRawTransaction' */
    cpy_r_r463 = CPyStatics[148]; /* 'send_raw_transaction' */
    cpy_r_r464 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r465 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r466 = CPyDict_GetItem(cpy_r_r464, cpy_r_r465);
    if (unlikely(cpy_r_r466 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 298, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL356;
    }
    PyObject *cpy_r_r467[1] = {cpy_r_r463};
    cpy_r_r468 = (PyObject **)&cpy_r_r467;
    cpy_r_r469 = PyObject_Vectorcall(cpy_r_r466, cpy_r_r468, 1, 0);
    CPy_DECREF(cpy_r_r466);
    if (unlikely(cpy_r_r469 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 298, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL356;
    }
    cpy_r_r470 = CPyStatics[149]; /* 'call' */
    cpy_r_r471 = CPyStatics[149]; /* 'call' */
    cpy_r_r472 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r473 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r474 = CPyDict_GetItem(cpy_r_r472, cpy_r_r473);
    if (unlikely(cpy_r_r474 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 299, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL357;
    }
    PyObject *cpy_r_r475[1] = {cpy_r_r471};
    cpy_r_r476 = (PyObject **)&cpy_r_r475;
    cpy_r_r477 = PyObject_Vectorcall(cpy_r_r474, cpy_r_r476, 1, 0);
    CPy_DECREF(cpy_r_r474);
    if (unlikely(cpy_r_r477 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 299, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL357;
    }
    cpy_r_r478 = CPyStatics[150]; /* 'createAccessList' */
    cpy_r_r479 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r480 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r481 = CPyDict_GetItem(cpy_r_r479, cpy_r_r480);
    if (unlikely(cpy_r_r481 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 300, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL358;
    }
    cpy_r_r482 = CPyStatics[151]; /* 'estimateGas' */
    cpy_r_r483 = CPyStatics[152]; /* 'estimate_gas' */
    cpy_r_r484 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r485 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r486 = CPyDict_GetItem(cpy_r_r484, cpy_r_r485);
    if (unlikely(cpy_r_r486 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 301, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL359;
    }
    PyObject *cpy_r_r487[1] = {cpy_r_r483};
    cpy_r_r488 = (PyObject **)&cpy_r_r487;
    cpy_r_r489 = PyObject_Vectorcall(cpy_r_r486, cpy_r_r488, 1, 0);
    CPy_DECREF(cpy_r_r486);
    if (unlikely(cpy_r_r489 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 301, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL359;
    }
    cpy_r_r490 = CPyStatics[153]; /* 'getBlockByHash' */
    cpy_r_r491 = CPyStatics[31]; /* 'get_block_by_hash' */
    cpy_r_r492 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r493 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r494 = CPyDict_GetItem(cpy_r_r492, cpy_r_r493);
    if (unlikely(cpy_r_r494 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL360;
    }
    PyObject *cpy_r_r495[1] = {cpy_r_r491};
    cpy_r_r496 = (PyObject **)&cpy_r_r495;
    cpy_r_r497 = PyObject_Vectorcall(cpy_r_r494, cpy_r_r496, 1, 0);
    CPy_DECREF(cpy_r_r494);
    if (unlikely(cpy_r_r497 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL360;
    }
    cpy_r_r498 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r498 == NULL)) {
        goto CPyL361;
    } else
        goto CPyL167;
CPyL165: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r499 = 0;
    if (unlikely(!cpy_r_r499)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL167: ;
    PyObject *cpy_r_r500[1] = {cpy_r_r497};
    cpy_r_r501 = (PyObject **)&cpy_r_r500;
    cpy_r_r502 = PyObject_Vectorcall(cpy_r_r498, cpy_r_r501, 1, 0);
    if (unlikely(cpy_r_r502 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 302, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL362;
    }
    CPy_DECREF(cpy_r_r497);
    cpy_r_r503 = CPyStatics[154]; /* 'getBlockByNumber' */
    cpy_r_r504 = CPyStatics[34]; /* 'get_block_by_number' */
    cpy_r_r505 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r506 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r507 = CPyDict_GetItem(cpy_r_r505, cpy_r_r506);
    if (unlikely(cpy_r_r507 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 304, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL363;
    }
    PyObject *cpy_r_r508[1] = {cpy_r_r504};
    cpy_r_r509 = (PyObject **)&cpy_r_r508;
    cpy_r_r510 = PyObject_Vectorcall(cpy_r_r507, cpy_r_r509, 1, 0);
    CPy_DECREF(cpy_r_r507);
    if (unlikely(cpy_r_r510 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 304, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL363;
    }
    cpy_r_r511 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found;
    if (unlikely(cpy_r_r511 == NULL)) {
        goto CPyL364;
    } else
        goto CPyL173;
CPyL171: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_block_not_found\" was not set");
    cpy_r_r512 = 0;
    if (unlikely(!cpy_r_r512)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 303, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL173: ;
    PyObject *cpy_r_r513[1] = {cpy_r_r510};
    cpy_r_r514 = (PyObject **)&cpy_r_r513;
    cpy_r_r515 = PyObject_Vectorcall(cpy_r_r511, cpy_r_r514, 1, 0);
    if (unlikely(cpy_r_r515 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 303, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL365;
    }
    CPy_DECREF(cpy_r_r510);
    cpy_r_r516 = CPyStatics[155]; /* 'getTransactionByHash' */
    cpy_r_r517 = CPyStatics[156]; /* 'get_transaction_by_hash' */
    cpy_r_r518 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r519 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r520 = CPyDict_GetItem(cpy_r_r518, cpy_r_r519);
    if (unlikely(cpy_r_r520 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 307, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL366;
    }
    PyObject *cpy_r_r521[1] = {cpy_r_r517};
    cpy_r_r522 = (PyObject **)&cpy_r_r521;
    cpy_r_r523 = PyObject_Vectorcall(cpy_r_r520, cpy_r_r522, 1, 0);
    CPy_DECREF(cpy_r_r520);
    if (unlikely(cpy_r_r523 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 307, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL366;
    }
    cpy_r_r524 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found;
    if (unlikely(cpy_r_r524 == NULL)) {
        goto CPyL367;
    } else
        goto CPyL179;
CPyL177: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_transaction_not_found\" was not set");
    cpy_r_r525 = 0;
    if (unlikely(!cpy_r_r525)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 306, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL179: ;
    PyObject *cpy_r_r526[1] = {cpy_r_r523};
    cpy_r_r527 = (PyObject **)&cpy_r_r526;
    cpy_r_r528 = PyObject_Vectorcall(cpy_r_r524, cpy_r_r527, 1, 0);
    if (unlikely(cpy_r_r528 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 306, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL368;
    }
    CPy_DECREF(cpy_r_r523);
    cpy_r_r529 = CPyStatics[157]; /* 'getTransactionByBlockHashAndIndex' */
    cpy_r_r530 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r531 = CPyStatics[97]; /* 'get_transaction_by_block_hash_and_index' */
    cpy_r_r532 = CPyDict_GetItem(cpy_r_r530, cpy_r_r531);
    if (unlikely(cpy_r_r532 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 309, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL369;
    }
    cpy_r_r533 = CPyStatics[158]; /* 'getTransactionByBlockNumberAndIndex' */
    cpy_r_r534 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r535 = CPyStatics[98]; /* 'get_transaction_by_block_number_and_index' */
    cpy_r_r536 = CPyDict_GetItem(cpy_r_r534, cpy_r_r535);
    if (unlikely(cpy_r_r536 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 310, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL370;
    }
    cpy_r_r537 = CPyStatics[159]; /* 'getTransactionReceipt' */
    cpy_r_r538 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r539 = CPyStatics[67]; /* 'is_null' */
    cpy_r_r540 = CPyDict_GetItem(cpy_r_r538, cpy_r_r539);
    if (unlikely(cpy_r_r540 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL371;
    }
    cpy_r_r541 = CPyStatics[124]; /* 'block_number' */
    cpy_r_r542 = CPyModule_operator;
    cpy_r_r543 = CPyStatics[105]; /* 'itemgetter' */
    cpy_r_r544 = CPyObject_GetAttr(cpy_r_r542, cpy_r_r543);
    if (unlikely(cpy_r_r544 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL372;
    }
    PyObject *cpy_r_r545[1] = {cpy_r_r541};
    cpy_r_r546 = (PyObject **)&cpy_r_r545;
    cpy_r_r547 = PyObject_Vectorcall(cpy_r_r544, cpy_r_r546, 1, 0);
    CPy_DECREF(cpy_r_r544);
    if (unlikely(cpy_r_r547 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL372;
    }
    cpy_r_r548 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r549 = CPyStatics[72]; /* 'compose' */
    cpy_r_r550 = CPyDict_GetItem(cpy_r_r548, cpy_r_r549);
    if (unlikely(cpy_r_r550 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL373;
    }
    PyObject *cpy_r_r551[2] = {cpy_r_r540, cpy_r_r547};
    cpy_r_r552 = (PyObject **)&cpy_r_r551;
    cpy_r_r553 = PyObject_Vectorcall(cpy_r_r550, cpy_r_r552, 2, 0);
    CPy_DECREF(cpy_r_r550);
    if (unlikely(cpy_r_r553 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 314, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL373;
    }
    CPy_DECREF(cpy_r_r540);
    CPy_DECREF(cpy_r_r547);
    cpy_r_r554 = Py_None;
    cpy_r_r555 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r554);
    if (unlikely(cpy_r_r555 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 315, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL374;
    }
    cpy_r_r556 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r557 = CPyStatics[70]; /* 'apply_formatter_if' */
    cpy_r_r558 = CPyDict_GetItem(cpy_r_r556, cpy_r_r557);
    if (unlikely(cpy_r_r558 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 313, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL375;
    }
    PyObject *cpy_r_r559[2] = {cpy_r_r553, cpy_r_r555};
    cpy_r_r560 = (PyObject **)&cpy_r_r559;
    cpy_r_r561 = PyObject_Vectorcall(cpy_r_r558, cpy_r_r560, 2, 0);
    CPy_DECREF(cpy_r_r558);
    if (unlikely(cpy_r_r561 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 313, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL375;
    }
    CPy_DECREF(cpy_r_r553);
    CPy_DECREF(cpy_r_r555);
    cpy_r_r562 = CPyStatics[160]; /* 'get_transaction_receipt' */
    cpy_r_r563 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r564 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r565 = CPyDict_GetItem(cpy_r_r563, cpy_r_r564);
    if (unlikely(cpy_r_r565 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 317, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL376;
    }
    PyObject *cpy_r_r566[1] = {cpy_r_r562};
    cpy_r_r567 = (PyObject **)&cpy_r_r566;
    cpy_r_r568 = PyObject_Vectorcall(cpy_r_r565, cpy_r_r567, 1, 0);
    CPy_DECREF(cpy_r_r565);
    if (unlikely(cpy_r_r568 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 317, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL376;
    }
    cpy_r_r569 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r570 = CPyStatics[72]; /* 'compose' */
    cpy_r_r571 = CPyDict_GetItem(cpy_r_r569, cpy_r_r570);
    if (unlikely(cpy_r_r571 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 312, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL377;
    }
    PyObject *cpy_r_r572[2] = {cpy_r_r561, cpy_r_r568};
    cpy_r_r573 = (PyObject **)&cpy_r_r572;
    cpy_r_r574 = PyObject_Vectorcall(cpy_r_r571, cpy_r_r573, 2, 0);
    CPy_DECREF(cpy_r_r571);
    if (unlikely(cpy_r_r574 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 312, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL377;
    }
    CPy_DECREF(cpy_r_r561);
    CPy_DECREF(cpy_r_r568);
    cpy_r_r575 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found;
    if (unlikely(cpy_r_r575 == NULL)) {
        goto CPyL378;
    } else
        goto CPyL197;
CPyL195: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_transaction_not_found\" was not set");
    cpy_r_r576 = 0;
    if (unlikely(!cpy_r_r576)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 311, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL197: ;
    PyObject *cpy_r_r577[1] = {cpy_r_r574};
    cpy_r_r578 = (PyObject **)&cpy_r_r577;
    cpy_r_r579 = PyObject_Vectorcall(cpy_r_r575, cpy_r_r578, 1, 0);
    if (unlikely(cpy_r_r579 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 311, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL379;
    }
    CPy_DECREF(cpy_r_r574);
    cpy_r_r580 = CPyStatics[161]; /* 'getUncleByBlockHashAndIndex' */
    cpy_r_r581 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r582 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r583 = CPyDict_GetItem(cpy_r_r581, cpy_r_r582);
    if (unlikely(cpy_r_r583 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 320, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL380;
    }
    cpy_r_r584 = CPyStatics[162]; /* 'getUncleByBlockNumberAndIndex' */
    cpy_r_r585 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r586 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r587 = CPyDict_GetItem(cpy_r_r585, cpy_r_r586);
    if (unlikely(cpy_r_r587 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 321, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL381;
    }
    cpy_r_r588 = CPyStatics[163]; /* 'getCompilers' */
    cpy_r_r589 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r590 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r591 = CPyDict_GetItem(cpy_r_r589, cpy_r_r590);
    if (unlikely(cpy_r_r591 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 322, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL382;
    }
    cpy_r_r592 = CPyStatics[164]; /* 'compileLLL' */
    cpy_r_r593 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r594 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r595 = CPyDict_GetItem(cpy_r_r593, cpy_r_r594);
    if (unlikely(cpy_r_r595 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 323, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL383;
    }
    cpy_r_r596 = CPyStatics[165]; /* 'compileSolidity' */
    cpy_r_r597 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r598 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r599 = CPyDict_GetItem(cpy_r_r597, cpy_r_r598);
    if (unlikely(cpy_r_r599 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 324, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL384;
    }
    cpy_r_r600 = CPyStatics[166]; /* 'compileSerpent' */
    cpy_r_r601 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r602 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r603 = CPyDict_GetItem(cpy_r_r601, cpy_r_r602);
    if (unlikely(cpy_r_r603 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 325, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL385;
    }
    cpy_r_r604 = CPyStatics[167]; /* 'newFilter' */
    cpy_r_r605 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r606 = CPyStatics[35]; /* 'create_log_filter' */
    cpy_r_r607 = CPyDict_GetItem(cpy_r_r605, cpy_r_r606);
    if (unlikely(cpy_r_r607 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 326, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL386;
    }
    cpy_r_r608 = CPyStatics[168]; /* 'newBlockFilter' */
    cpy_r_r609 = CPyStatics[169]; /* 'create_block_filter' */
    cpy_r_r610 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r611 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r612 = CPyDict_GetItem(cpy_r_r610, cpy_r_r611);
    if (unlikely(cpy_r_r612 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 327, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL387;
    }
    PyObject *cpy_r_r613[1] = {cpy_r_r609};
    cpy_r_r614 = (PyObject **)&cpy_r_r613;
    cpy_r_r615 = PyObject_Vectorcall(cpy_r_r612, cpy_r_r614, 1, 0);
    CPy_DECREF(cpy_r_r612);
    if (unlikely(cpy_r_r615 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 327, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL387;
    }
    cpy_r_r616 = CPyStatics[170]; /* 'newPendingTransactionFilter' */
    cpy_r_r617 = CPyStatics[171]; /* 'create_pending_transaction_filter' */
    cpy_r_r618 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r619 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r620 = CPyDict_GetItem(cpy_r_r618, cpy_r_r619);
    if (unlikely(cpy_r_r620 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 328, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL388;
    }
    PyObject *cpy_r_r621[1] = {cpy_r_r617};
    cpy_r_r622 = (PyObject **)&cpy_r_r621;
    cpy_r_r623 = PyObject_Vectorcall(cpy_r_r620, cpy_r_r622, 1, 0);
    CPy_DECREF(cpy_r_r620);
    if (unlikely(cpy_r_r623 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 328, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL388;
    }
    cpy_r_r624 = CPyStatics[172]; /* 'uninstallFilter' */
    cpy_r_r625 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r626 = CPyStatics[60]; /* 'FilterNotFound' */
    cpy_r_r627 = CPyDict_GetItem(cpy_r_r625, cpy_r_r626);
    if (unlikely(cpy_r_r627 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 332, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL389;
    }
    cpy_r_r628 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r629 = CPyStatics[67]; /* 'is_null' */
    cpy_r_r630 = CPyDict_GetItem(cpy_r_r628, cpy_r_r629);
    if (unlikely(cpy_r_r630 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 334, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL390;
    }
    cpy_r_r631 = CPyStatics[173]; /* 'delete_filter' */
    cpy_r_r632 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r633 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r634 = CPyDict_GetItem(cpy_r_r632, cpy_r_r633);
    if (unlikely(cpy_r_r634 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 335, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL391;
    }
    PyObject *cpy_r_r635[1] = {cpy_r_r631};
    cpy_r_r636 = (PyObject **)&cpy_r_r635;
    cpy_r_r637 = PyObject_Vectorcall(cpy_r_r634, cpy_r_r636, 1, 0);
    CPy_DECREF(cpy_r_r634);
    if (unlikely(cpy_r_r637 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 335, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL391;
    }
    cpy_r_r638 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r639 = CPyStatics[72]; /* 'compose' */
    cpy_r_r640 = CPyDict_GetItem(cpy_r_r638, cpy_r_r639);
    if (unlikely(cpy_r_r640 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 333, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL392;
    }
    PyObject *cpy_r_r641[2] = {cpy_r_r630, cpy_r_r637};
    cpy_r_r642 = (PyObject **)&cpy_r_r641;
    cpy_r_r643 = PyObject_Vectorcall(cpy_r_r640, cpy_r_r642, 2, 0);
    CPy_DECREF(cpy_r_r640);
    if (unlikely(cpy_r_r643 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 333, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL392;
    }
    CPy_DECREF(cpy_r_r630);
    CPy_DECREF(cpy_r_r637);
    cpy_r_r644 = 0 ? Py_True : Py_False;
    cpy_r_r645 = CPyDef_faster_web3___providers___eth_tester___defaults___static_return(cpy_r_r644);
    if (unlikely(cpy_r_r645 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 337, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL393;
    }
    cpy_r_r646 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r647 = CPyStatics[30]; /* 'excepts' */
    cpy_r_r648 = CPyDict_GetItem(cpy_r_r646, cpy_r_r647);
    if (unlikely(cpy_r_r648 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 331, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL394;
    }
    PyObject *cpy_r_r649[3] = {cpy_r_r627, cpy_r_r643, cpy_r_r645};
    cpy_r_r650 = (PyObject **)&cpy_r_r649;
    cpy_r_r651 = PyObject_Vectorcall(cpy_r_r648, cpy_r_r650, 3, 0);
    CPy_DECREF(cpy_r_r648);
    if (unlikely(cpy_r_r651 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 331, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL394;
    }
    CPy_DECREF(cpy_r_r627);
    CPy_DECREF(cpy_r_r643);
    CPy_DECREF(cpy_r_r645);
    cpy_r_r652 = CPyStatics[174]; /* 'getFilterChanges' */
    cpy_r_r653 = CPyStatics[175]; /* 'get_only_filter_changes' */
    cpy_r_r654 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r655 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r656 = CPyDict_GetItem(cpy_r_r654, cpy_r_r655);
    if (unlikely(cpy_r_r656 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 340, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL395;
    }
    PyObject *cpy_r_r657[1] = {cpy_r_r653};
    cpy_r_r658 = (PyObject **)&cpy_r_r657;
    cpy_r_r659 = PyObject_Vectorcall(cpy_r_r656, cpy_r_r658, 1, 0);
    CPy_DECREF(cpy_r_r656);
    if (unlikely(cpy_r_r659 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 340, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL395;
    }
    cpy_r_r660 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found;
    if (unlikely(cpy_r_r660 == NULL)) {
        goto CPyL396;
    } else
        goto CPyL223;
CPyL221: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_filter_not_found\" was not set");
    cpy_r_r661 = 0;
    if (unlikely(!cpy_r_r661)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 339, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL223: ;
    PyObject *cpy_r_r662[1] = {cpy_r_r659};
    cpy_r_r663 = (PyObject **)&cpy_r_r662;
    cpy_r_r664 = PyObject_Vectorcall(cpy_r_r660, cpy_r_r663, 1, 0);
    if (unlikely(cpy_r_r664 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 339, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL397;
    }
    CPy_DECREF(cpy_r_r659);
    cpy_r_r665 = CPyStatics[176]; /* 'getFilterLogs' */
    cpy_r_r666 = CPyStatics[177]; /* 'get_all_filter_logs' */
    cpy_r_r667 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r668 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r669 = CPyDict_GetItem(cpy_r_r667, cpy_r_r668);
    if (unlikely(cpy_r_r669 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 343, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL398;
    }
    PyObject *cpy_r_r670[1] = {cpy_r_r666};
    cpy_r_r671 = (PyObject **)&cpy_r_r670;
    cpy_r_r672 = PyObject_Vectorcall(cpy_r_r669, cpy_r_r671, 1, 0);
    CPy_DECREF(cpy_r_r669);
    if (unlikely(cpy_r_r672 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 343, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL398;
    }
    cpy_r_r673 = CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found;
    if (unlikely(cpy_r_r673 == NULL)) {
        goto CPyL399;
    } else
        goto CPyL229;
CPyL227: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"null_if_filter_not_found\" was not set");
    cpy_r_r674 = 0;
    if (unlikely(!cpy_r_r674)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 342, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPy_Unreachable();
CPyL229: ;
    PyObject *cpy_r_r675[1] = {cpy_r_r672};
    cpy_r_r676 = (PyObject **)&cpy_r_r675;
    cpy_r_r677 = PyObject_Vectorcall(cpy_r_r673, cpy_r_r676, 1, 0);
    if (unlikely(cpy_r_r677 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 342, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL400;
    }
    CPy_DECREF(cpy_r_r672);
    cpy_r_r678 = CPyStatics[178]; /* 'getLogs' */
    cpy_r_r679 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r680 = CPyStatics[36]; /* 'get_logs' */
    cpy_r_r681 = CPyDict_GetItem(cpy_r_r679, cpy_r_r680);
    if (unlikely(cpy_r_r681 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 345, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL401;
    }
    cpy_r_r682 = CPyStatics[179]; /* 'getWork' */
    cpy_r_r683 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r684 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r685 = CPyDict_GetItem(cpy_r_r683, cpy_r_r684);
    if (unlikely(cpy_r_r685 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 346, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL402;
    }
    cpy_r_r686 = CPyStatics[180]; /* 'submitWork' */
    cpy_r_r687 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r688 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r689 = CPyDict_GetItem(cpy_r_r687, cpy_r_r688);
    if (unlikely(cpy_r_r689 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 347, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL403;
    }
    cpy_r_r690 = CPyStatics[181]; /* 'submitHashrate' */
    cpy_r_r691 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r692 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r693 = CPyDict_GetItem(cpy_r_r691, cpy_r_r692);
    if (unlikely(cpy_r_r693 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 348, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL404;
    }
    cpy_r_r694 = CPyDict_Build(47, cpy_r_r235, cpy_r_r237, cpy_r_r238, cpy_r_r240, cpy_r_r241, cpy_r_r243, cpy_r_r244, cpy_r_r251, cpy_r_r252, cpy_r_r254, cpy_r_r255, cpy_r_r257, cpy_r_r258, cpy_r_r260, cpy_r_r261, cpy_r_r268, cpy_r_r269, cpy_r_r293, cpy_r_r294, cpy_r_r301, cpy_r_r302, cpy_r_r309, cpy_r_r310, cpy_r_r313, cpy_r_r314, cpy_r_r321, cpy_r_r322, cpy_r_r350, cpy_r_r351, cpy_r_r379, cpy_r_r380, cpy_r_r408, cpy_r_r409, cpy_r_r437, cpy_r_r438, cpy_r_r445, cpy_r_r446, cpy_r_r449, cpy_r_r450, cpy_r_r453, cpy_r_r454, cpy_r_r461, cpy_r_r462, cpy_r_r469, cpy_r_r470, cpy_r_r477, cpy_r_r478, cpy_r_r481, cpy_r_r482, cpy_r_r489, cpy_r_r490, cpy_r_r502, cpy_r_r503, cpy_r_r515, cpy_r_r516, cpy_r_r528, cpy_r_r529, cpy_r_r532, cpy_r_r533, cpy_r_r536, cpy_r_r537, cpy_r_r579, cpy_r_r580, cpy_r_r583, cpy_r_r584, cpy_r_r587, cpy_r_r588, cpy_r_r591, cpy_r_r592, cpy_r_r595, cpy_r_r596, cpy_r_r599, cpy_r_r600, cpy_r_r603, cpy_r_r604, cpy_r_r607, cpy_r_r608, cpy_r_r615, cpy_r_r616, cpy_r_r623, cpy_r_r624, cpy_r_r651, cpy_r_r652, cpy_r_r664, cpy_r_r665, cpy_r_r677, cpy_r_r678, cpy_r_r681, cpy_r_r682, cpy_r_r685, cpy_r_r686, cpy_r_r689, cpy_r_r690, cpy_r_r693);
    CPy_DECREF(cpy_r_r237);
    CPy_DECREF(cpy_r_r240);
    CPy_DECREF(cpy_r_r243);
    CPy_DECREF(cpy_r_r251);
    CPy_DECREF(cpy_r_r254);
    CPy_DECREF(cpy_r_r257);
    CPy_DECREF(cpy_r_r260);
    CPy_DECREF(cpy_r_r268);
    CPy_DECREF(cpy_r_r293);
    CPy_DECREF(cpy_r_r301);
    CPy_DECREF(cpy_r_r309);
    CPy_DECREF(cpy_r_r313);
    CPy_DECREF(cpy_r_r321);
    CPy_DECREF(cpy_r_r350);
    CPy_DECREF(cpy_r_r379);
    CPy_DECREF(cpy_r_r408);
    CPy_DECREF(cpy_r_r437);
    CPy_DECREF(cpy_r_r445);
    CPy_DECREF(cpy_r_r449);
    CPy_DECREF(cpy_r_r453);
    CPy_DECREF(cpy_r_r461);
    CPy_DECREF(cpy_r_r469);
    CPy_DECREF(cpy_r_r477);
    CPy_DECREF(cpy_r_r481);
    CPy_DECREF(cpy_r_r489);
    CPy_DECREF(cpy_r_r502);
    CPy_DECREF(cpy_r_r515);
    CPy_DECREF(cpy_r_r528);
    CPy_DECREF(cpy_r_r532);
    CPy_DECREF(cpy_r_r536);
    CPy_DECREF(cpy_r_r579);
    CPy_DECREF(cpy_r_r583);
    CPy_DECREF(cpy_r_r587);
    CPy_DECREF(cpy_r_r591);
    CPy_DECREF(cpy_r_r595);
    CPy_DECREF(cpy_r_r599);
    CPy_DECREF(cpy_r_r603);
    CPy_DECREF(cpy_r_r607);
    CPy_DECREF(cpy_r_r615);
    CPy_DECREF(cpy_r_r623);
    CPy_DECREF(cpy_r_r651);
    CPy_DECREF(cpy_r_r664);
    CPy_DECREF(cpy_r_r677);
    CPy_DECREF(cpy_r_r681);
    CPy_DECREF(cpy_r_r685);
    CPy_DECREF(cpy_r_r689);
    CPy_DECREF(cpy_r_r693);
    if (unlikely(cpy_r_r694 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 247, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL312;
    }
    cpy_r_r695 = CPyStatics[182]; /* 'db' */
    cpy_r_r696 = CPyStatics[183]; /* 'putString' */
    cpy_r_r697 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r698 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r699 = CPyDict_GetItem(cpy_r_r697, cpy_r_r698);
    if (unlikely(cpy_r_r699 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 351, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL405;
    }
    cpy_r_r700 = CPyStatics[184]; /* 'getString' */
    cpy_r_r701 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r702 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r703 = CPyDict_GetItem(cpy_r_r701, cpy_r_r702);
    if (unlikely(cpy_r_r703 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 352, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL406;
    }
    cpy_r_r704 = CPyStatics[185]; /* 'putHex' */
    cpy_r_r705 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r706 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r707 = CPyDict_GetItem(cpy_r_r705, cpy_r_r706);
    if (unlikely(cpy_r_r707 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 353, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL407;
    }
    cpy_r_r708 = CPyStatics[186]; /* 'getHex' */
    cpy_r_r709 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r710 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r711 = CPyDict_GetItem(cpy_r_r709, cpy_r_r710);
    if (unlikely(cpy_r_r711 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 354, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL408;
    }
    cpy_r_r712 = CPyDict_Build(4, cpy_r_r696, cpy_r_r699, cpy_r_r700, cpy_r_r703, cpy_r_r704, cpy_r_r707, cpy_r_r708, cpy_r_r711);
    CPy_DECREF(cpy_r_r699);
    CPy_DECREF(cpy_r_r703);
    CPy_DECREF(cpy_r_r707);
    CPy_DECREF(cpy_r_r711);
    if (unlikely(cpy_r_r712 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 350, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL405;
    }
    cpy_r_r713 = CPyStatics[187]; /* 'admin' */
    cpy_r_r714 = CPyStatics[188]; /* 'add_peer' */
    cpy_r_r715 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r716 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r717 = CPyDict_GetItem(cpy_r_r715, cpy_r_r716);
    if (unlikely(cpy_r_r717 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 357, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL409;
    }
    cpy_r_r718 = CPyStatics[189]; /* 'datadir' */
    cpy_r_r719 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r720 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r721 = CPyDict_GetItem(cpy_r_r719, cpy_r_r720);
    if (unlikely(cpy_r_r721 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 358, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL410;
    }
    cpy_r_r722 = CPyStatics[190]; /* 'node_info' */
    cpy_r_r723 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r724 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r725 = CPyDict_GetItem(cpy_r_r723, cpy_r_r724);
    if (unlikely(cpy_r_r725 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 359, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL411;
    }
    cpy_r_r726 = CPyStatics[191]; /* 'peers' */
    cpy_r_r727 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r728 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r729 = CPyDict_GetItem(cpy_r_r727, cpy_r_r728);
    if (unlikely(cpy_r_r729 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 360, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL412;
    }
    cpy_r_r730 = CPyStatics[192]; /* 'start_http' */
    cpy_r_r731 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r732 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r733 = CPyDict_GetItem(cpy_r_r731, cpy_r_r732);
    if (unlikely(cpy_r_r733 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 361, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL413;
    }
    cpy_r_r734 = CPyStatics[193]; /* 'start_ws' */
    cpy_r_r735 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r736 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r737 = CPyDict_GetItem(cpy_r_r735, cpy_r_r736);
    if (unlikely(cpy_r_r737 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 362, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL414;
    }
    cpy_r_r738 = CPyStatics[194]; /* 'stop_http' */
    cpy_r_r739 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r740 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r741 = CPyDict_GetItem(cpy_r_r739, cpy_r_r740);
    if (unlikely(cpy_r_r741 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 363, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL415;
    }
    cpy_r_r742 = CPyStatics[195]; /* 'stop_ws' */
    cpy_r_r743 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r744 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r745 = CPyDict_GetItem(cpy_r_r743, cpy_r_r744);
    if (unlikely(cpy_r_r745 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 364, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL416;
    }
    cpy_r_r746 = CPyDict_Build(8, cpy_r_r714, cpy_r_r717, cpy_r_r718, cpy_r_r721, cpy_r_r722, cpy_r_r725, cpy_r_r726, cpy_r_r729, cpy_r_r730, cpy_r_r733, cpy_r_r734, cpy_r_r737, cpy_r_r738, cpy_r_r741, cpy_r_r742, cpy_r_r745);
    CPy_DECREF(cpy_r_r717);
    CPy_DECREF(cpy_r_r721);
    CPy_DECREF(cpy_r_r725);
    CPy_DECREF(cpy_r_r729);
    CPy_DECREF(cpy_r_r733);
    CPy_DECREF(cpy_r_r737);
    CPy_DECREF(cpy_r_r741);
    CPy_DECREF(cpy_r_r745);
    if (unlikely(cpy_r_r746 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 356, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL409;
    }
    cpy_r_r747 = CPyStatics[196]; /* 'debug' */
    cpy_r_r748 = CPyStatics[197]; /* 'backtraceAt' */
    cpy_r_r749 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r750 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r751 = CPyDict_GetItem(cpy_r_r749, cpy_r_r750);
    if (unlikely(cpy_r_r751 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 367, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL417;
    }
    cpy_r_r752 = CPyStatics[198]; /* 'blockProfile' */
    cpy_r_r753 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r754 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r755 = CPyDict_GetItem(cpy_r_r753, cpy_r_r754);
    if (unlikely(cpy_r_r755 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 368, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL418;
    }
    cpy_r_r756 = CPyStatics[199]; /* 'cpuProfile' */
    cpy_r_r757 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r758 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r759 = CPyDict_GetItem(cpy_r_r757, cpy_r_r758);
    if (unlikely(cpy_r_r759 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 369, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL419;
    }
    cpy_r_r760 = CPyStatics[200]; /* 'dumpBlock' */
    cpy_r_r761 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r762 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r763 = CPyDict_GetItem(cpy_r_r761, cpy_r_r762);
    if (unlikely(cpy_r_r763 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 370, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL420;
    }
    cpy_r_r764 = CPyStatics[201]; /* 'gtStats' */
    cpy_r_r765 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r766 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r767 = CPyDict_GetItem(cpy_r_r765, cpy_r_r766);
    if (unlikely(cpy_r_r767 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 371, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL421;
    }
    cpy_r_r768 = CPyStatics[202]; /* 'getBlockRLP' */
    cpy_r_r769 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r770 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r771 = CPyDict_GetItem(cpy_r_r769, cpy_r_r770);
    if (unlikely(cpy_r_r771 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 372, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL422;
    }
    cpy_r_r772 = CPyStatics[203]; /* 'goTrace' */
    cpy_r_r773 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r774 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r775 = CPyDict_GetItem(cpy_r_r773, cpy_r_r774);
    if (unlikely(cpy_r_r775 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 373, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL423;
    }
    cpy_r_r776 = CPyStatics[204]; /* 'memStats' */
    cpy_r_r777 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r778 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r779 = CPyDict_GetItem(cpy_r_r777, cpy_r_r778);
    if (unlikely(cpy_r_r779 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 374, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL424;
    }
    cpy_r_r780 = CPyStatics[205]; /* 'seedHashSign' */
    cpy_r_r781 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r782 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r783 = CPyDict_GetItem(cpy_r_r781, cpy_r_r782);
    if (unlikely(cpy_r_r783 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 375, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL425;
    }
    cpy_r_r784 = CPyStatics[206]; /* 'setBlockProfileRate' */
    cpy_r_r785 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r786 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r787 = CPyDict_GetItem(cpy_r_r785, cpy_r_r786);
    if (unlikely(cpy_r_r787 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 376, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL426;
    }
    cpy_r_r788 = CPyStatics[207]; /* 'setHead' */
    cpy_r_r789 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r790 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r791 = CPyDict_GetItem(cpy_r_r789, cpy_r_r790);
    if (unlikely(cpy_r_r791 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 377, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL427;
    }
    cpy_r_r792 = CPyStatics[208]; /* 'stacks' */
    cpy_r_r793 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r794 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r795 = CPyDict_GetItem(cpy_r_r793, cpy_r_r794);
    if (unlikely(cpy_r_r795 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 378, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL428;
    }
    cpy_r_r796 = CPyStatics[209]; /* 'startCPUProfile' */
    cpy_r_r797 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r798 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r799 = CPyDict_GetItem(cpy_r_r797, cpy_r_r798);
    if (unlikely(cpy_r_r799 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 379, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL429;
    }
    cpy_r_r800 = CPyStatics[210]; /* 'startGoTrace' */
    cpy_r_r801 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r802 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r803 = CPyDict_GetItem(cpy_r_r801, cpy_r_r802);
    if (unlikely(cpy_r_r803 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 380, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL430;
    }
    cpy_r_r804 = CPyStatics[211]; /* 'stopCPUProfile' */
    cpy_r_r805 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r806 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r807 = CPyDict_GetItem(cpy_r_r805, cpy_r_r806);
    if (unlikely(cpy_r_r807 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 381, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL431;
    }
    cpy_r_r808 = CPyStatics[212]; /* 'stopGoTrace' */
    cpy_r_r809 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r810 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r811 = CPyDict_GetItem(cpy_r_r809, cpy_r_r810);
    if (unlikely(cpy_r_r811 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 382, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL432;
    }
    cpy_r_r812 = CPyStatics[213]; /* 'traceBlock' */
    cpy_r_r813 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r814 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r815 = CPyDict_GetItem(cpy_r_r813, cpy_r_r814);
    if (unlikely(cpy_r_r815 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 383, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL433;
    }
    cpy_r_r816 = CPyStatics[214]; /* 'traceBlockByNumber' */
    cpy_r_r817 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r818 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r819 = CPyDict_GetItem(cpy_r_r817, cpy_r_r818);
    if (unlikely(cpy_r_r819 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 384, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL434;
    }
    cpy_r_r820 = CPyStatics[215]; /* 'traceBlockByHash' */
    cpy_r_r821 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r822 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r823 = CPyDict_GetItem(cpy_r_r821, cpy_r_r822);
    if (unlikely(cpy_r_r823 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 385, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL435;
    }
    cpy_r_r824 = CPyStatics[216]; /* 'traceBlockFromFile' */
    cpy_r_r825 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r826 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r827 = CPyDict_GetItem(cpy_r_r825, cpy_r_r826);
    if (unlikely(cpy_r_r827 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 386, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL436;
    }
    cpy_r_r828 = CPyStatics[217]; /* 'traceTransaction' */
    cpy_r_r829 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r830 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r831 = CPyDict_GetItem(cpy_r_r829, cpy_r_r830);
    if (unlikely(cpy_r_r831 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 387, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL437;
    }
    cpy_r_r832 = CPyStatics[218]; /* 'verbosity' */
    cpy_r_r833 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r834 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r835 = CPyDict_GetItem(cpy_r_r833, cpy_r_r834);
    if (unlikely(cpy_r_r835 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 388, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL438;
    }
    cpy_r_r836 = CPyStatics[219]; /* 'vmodule' */
    cpy_r_r837 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r838 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r839 = CPyDict_GetItem(cpy_r_r837, cpy_r_r838);
    if (unlikely(cpy_r_r839 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 389, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL439;
    }
    cpy_r_r840 = CPyStatics[220]; /* 'writeBlockProfile' */
    cpy_r_r841 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r842 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r843 = CPyDict_GetItem(cpy_r_r841, cpy_r_r842);
    if (unlikely(cpy_r_r843 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 390, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL440;
    }
    cpy_r_r844 = CPyStatics[221]; /* 'writeMemProfile' */
    cpy_r_r845 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r846 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r847 = CPyDict_GetItem(cpy_r_r845, cpy_r_r846);
    if (unlikely(cpy_r_r847 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 391, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL441;
    }
    cpy_r_r848 = CPyDict_Build(25, cpy_r_r748, cpy_r_r751, cpy_r_r752, cpy_r_r755, cpy_r_r756, cpy_r_r759, cpy_r_r760, cpy_r_r763, cpy_r_r764, cpy_r_r767, cpy_r_r768, cpy_r_r771, cpy_r_r772, cpy_r_r775, cpy_r_r776, cpy_r_r779, cpy_r_r780, cpy_r_r783, cpy_r_r784, cpy_r_r787, cpy_r_r788, cpy_r_r791, cpy_r_r792, cpy_r_r795, cpy_r_r796, cpy_r_r799, cpy_r_r800, cpy_r_r803, cpy_r_r804, cpy_r_r807, cpy_r_r808, cpy_r_r811, cpy_r_r812, cpy_r_r815, cpy_r_r816, cpy_r_r819, cpy_r_r820, cpy_r_r823, cpy_r_r824, cpy_r_r827, cpy_r_r828, cpy_r_r831, cpy_r_r832, cpy_r_r835, cpy_r_r836, cpy_r_r839, cpy_r_r840, cpy_r_r843, cpy_r_r844, cpy_r_r847);
    CPy_DECREF(cpy_r_r751);
    CPy_DECREF(cpy_r_r755);
    CPy_DECREF(cpy_r_r759);
    CPy_DECREF(cpy_r_r763);
    CPy_DECREF(cpy_r_r767);
    CPy_DECREF(cpy_r_r771);
    CPy_DECREF(cpy_r_r775);
    CPy_DECREF(cpy_r_r779);
    CPy_DECREF(cpy_r_r783);
    CPy_DECREF(cpy_r_r787);
    CPy_DECREF(cpy_r_r791);
    CPy_DECREF(cpy_r_r795);
    CPy_DECREF(cpy_r_r799);
    CPy_DECREF(cpy_r_r803);
    CPy_DECREF(cpy_r_r807);
    CPy_DECREF(cpy_r_r811);
    CPy_DECREF(cpy_r_r815);
    CPy_DECREF(cpy_r_r819);
    CPy_DECREF(cpy_r_r823);
    CPy_DECREF(cpy_r_r827);
    CPy_DECREF(cpy_r_r831);
    CPy_DECREF(cpy_r_r835);
    CPy_DECREF(cpy_r_r839);
    CPy_DECREF(cpy_r_r843);
    CPy_DECREF(cpy_r_r847);
    if (unlikely(cpy_r_r848 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 366, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL417;
    }
    cpy_r_r849 = CPyStatics[222]; /* 'testing' */
    cpy_r_r850 = CPyStatics[223]; /* 'timeTravel' */
    cpy_r_r851 = CPyStatics[224]; /* 'time_travel' */
    cpy_r_r852 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r853 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r854 = CPyDict_GetItem(cpy_r_r852, cpy_r_r853);
    if (unlikely(cpy_r_r854 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 394, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL442;
    }
    PyObject *cpy_r_r855[1] = {cpy_r_r851};
    cpy_r_r856 = (PyObject **)&cpy_r_r855;
    cpy_r_r857 = PyObject_Vectorcall(cpy_r_r854, cpy_r_r856, 1, 0);
    CPy_DECREF(cpy_r_r854);
    if (unlikely(cpy_r_r857 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 394, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL442;
    }
    cpy_r_r858 = CPyDict_Build(1, cpy_r_r850, cpy_r_r857);
    CPy_DECREF(cpy_r_r857);
    if (unlikely(cpy_r_r858 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 393, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL442;
    }
    cpy_r_r859 = CPyStatics[225]; /* 'txpool' */
    cpy_r_r860 = CPyStatics[226]; /* 'content' */
    cpy_r_r861 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r862 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r863 = CPyDict_GetItem(cpy_r_r861, cpy_r_r862);
    if (unlikely(cpy_r_r863 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 397, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL443;
    }
    cpy_r_r864 = CPyStatics[227]; /* 'inspect' */
    cpy_r_r865 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r866 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r867 = CPyDict_GetItem(cpy_r_r865, cpy_r_r866);
    if (unlikely(cpy_r_r867 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 398, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL444;
    }
    cpy_r_r868 = CPyStatics[228]; /* 'status' */
    cpy_r_r869 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r870 = CPyStatics[132]; /* 'not_implemented' */
    cpy_r_r871 = CPyDict_GetItem(cpy_r_r869, cpy_r_r870);
    if (unlikely(cpy_r_r871 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 399, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL445;
    }
    cpy_r_r872 = CPyDict_Build(3, cpy_r_r860, cpy_r_r863, cpy_r_r864, cpy_r_r867, cpy_r_r868, cpy_r_r871);
    CPy_DECREF(cpy_r_r863);
    CPy_DECREF(cpy_r_r867);
    CPy_DECREF(cpy_r_r871);
    if (unlikely(cpy_r_r872 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 396, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL443;
    }
    cpy_r_r873 = CPyStatics[229]; /* 'evm' */
    cpy_r_r874 = CPyStatics[230]; /* 'mine' */
    cpy_r_r875 = CPyStatics[231]; /* 'mine_blocks' */
    cpy_r_r876 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r877 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r878 = CPyDict_GetItem(cpy_r_r876, cpy_r_r877);
    if (unlikely(cpy_r_r878 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 402, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL446;
    }
    PyObject *cpy_r_r879[1] = {cpy_r_r875};
    cpy_r_r880 = (PyObject **)&cpy_r_r879;
    cpy_r_r881 = PyObject_Vectorcall(cpy_r_r878, cpy_r_r880, 1, 0);
    CPy_DECREF(cpy_r_r878);
    if (unlikely(cpy_r_r881 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 402, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL446;
    }
    cpy_r_r882 = CPyStatics[232]; /* 'revert' */
    cpy_r_r883 = CPyStatics[233]; /* 'revert_to_snapshot' */
    cpy_r_r884 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r885 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r886 = CPyDict_GetItem(cpy_r_r884, cpy_r_r885);
    if (unlikely(cpy_r_r886 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 403, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL447;
    }
    PyObject *cpy_r_r887[1] = {cpy_r_r883};
    cpy_r_r888 = (PyObject **)&cpy_r_r887;
    cpy_r_r889 = PyObject_Vectorcall(cpy_r_r886, cpy_r_r888, 1, 0);
    CPy_DECREF(cpy_r_r886);
    if (unlikely(cpy_r_r889 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 403, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL447;
    }
    cpy_r_r890 = CPyStatics[234]; /* 'snapshot' */
    cpy_r_r891 = CPyStatics[235]; /* 'take_snapshot' */
    cpy_r_r892 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r893 = CPyStatics[90]; /* 'call_eth_tester' */
    cpy_r_r894 = CPyDict_GetItem(cpy_r_r892, cpy_r_r893);
    if (unlikely(cpy_r_r894 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 404, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL448;
    }
    PyObject *cpy_r_r895[1] = {cpy_r_r891};
    cpy_r_r896 = (PyObject **)&cpy_r_r895;
    cpy_r_r897 = PyObject_Vectorcall(cpy_r_r894, cpy_r_r896, 1, 0);
    CPy_DECREF(cpy_r_r894);
    if (unlikely(cpy_r_r897 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 404, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL448;
    }
    cpy_r_r898 = CPyDict_Build(3, cpy_r_r874, cpy_r_r881, cpy_r_r882, cpy_r_r889, cpy_r_r890, cpy_r_r897);
    CPy_DECREF(cpy_r_r881);
    CPy_DECREF(cpy_r_r889);
    CPy_DECREF(cpy_r_r897);
    if (unlikely(cpy_r_r898 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 401, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL446;
    }
    cpy_r_r899 = CPyDict_Build(9, cpy_r_r193, cpy_r_r222, cpy_r_r223, cpy_r_r233, cpy_r_r234, cpy_r_r694, cpy_r_r695, cpy_r_r712, cpy_r_r713, cpy_r_r746, cpy_r_r747, cpy_r_r848, cpy_r_r849, cpy_r_r858, cpy_r_r859, cpy_r_r872, cpy_r_r873, cpy_r_r898);
    CPy_DECREF(cpy_r_r222);
    CPy_DECREF(cpy_r_r233);
    CPy_DECREF(cpy_r_r694);
    CPy_DECREF(cpy_r_r712);
    CPy_DECREF(cpy_r_r746);
    CPy_DECREF(cpy_r_r848);
    CPy_DECREF(cpy_r_r858);
    CPy_DECREF(cpy_r_r872);
    CPy_DECREF(cpy_r_r898);
    if (unlikely(cpy_r_r899 == NULL)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 232, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS = cpy_r_r899;
    CPy_INCREF(CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS);
    cpy_r_r900 = CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
    cpy_r_r901 = CPyStatics[236]; /* 'API_ENDPOINTS' */
    cpy_r_r902 = CPyDict_SetItem(cpy_r_r900, cpy_r_r901, cpy_r_r899);
    CPy_DECREF(cpy_r_r899);
    cpy_r_r903 = cpy_r_r902 >= 0;
    if (unlikely(!cpy_r_r903)) {
        CPy_AddTraceback("faster_web3/providers/eth_tester/defaults.py", "<module>", 232, CPyStatic_faster_web3___providers___eth_tester___defaults___globals);
        goto CPyL292;
    }
    return 1;
CPyL292: ;
    cpy_r_r904 = 2;
    return cpy_r_r904;
CPyL293: ;
    CPy_DecRef(cpy_r_r90);
    goto CPyL292;
CPyL294: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL292;
CPyL295: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL45;
CPyL296: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL292;
CPyL297: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL49;
CPyL298: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL292;
CPyL299: ;
    CPy_DecRef(cpy_r_r165);
    goto CPyL55;
CPyL300: ;
    CPy_DecRef(cpy_r_r165);
    goto CPyL292;
CPyL301: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL59;
CPyL302: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL292;
CPyL303: ;
    CPy_DecRef(cpy_r_r182);
    goto CPyL292;
CPyL304: ;
    CPy_DecRef(cpy_r_r197);
    goto CPyL292;
CPyL305: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r201);
    goto CPyL292;
CPyL306: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r201);
    CPy_DecRef(cpy_r_r204);
    goto CPyL292;
CPyL307: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r201);
    CPy_DecRef(cpy_r_r204);
    CPy_DecRef(cpy_r_r207);
    goto CPyL292;
CPyL308: ;
    CPy_DecRef(cpy_r_r197);
    CPy_DecRef(cpy_r_r201);
    CPy_DecRef(cpy_r_r204);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r215);
    goto CPyL292;
CPyL309: ;
    CPy_DecRef(cpy_r_r222);
    goto CPyL292;
CPyL310: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r226);
    goto CPyL292;
CPyL311: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r226);
    CPy_DecRef(cpy_r_r229);
    goto CPyL292;
CPyL312: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    goto CPyL292;
CPyL313: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    goto CPyL292;
CPyL314: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    goto CPyL292;
CPyL315: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    goto CPyL292;
CPyL316: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    goto CPyL292;
CPyL317: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    goto CPyL292;
CPyL318: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    goto CPyL292;
CPyL319: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    goto CPyL292;
CPyL320: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    goto CPyL292;
CPyL321: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r276);
    goto CPyL292;
CPyL322: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r276);
    CPy_DecRef(cpy_r_r280);
    goto CPyL292;
CPyL323: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r276);
    CPy_DecRef(cpy_r_r287);
    goto CPyL292;
CPyL324: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    goto CPyL292;
CPyL325: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    goto CPyL292;
CPyL326: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    goto CPyL292;
CPyL327: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    goto CPyL292;
CPyL328: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    goto CPyL292;
CPyL329: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r325);
    goto CPyL292;
CPyL330: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r325);
    CPy_DecRef(cpy_r_r332);
    goto CPyL292;
CPyL331: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r325);
    CPy_DecRef(cpy_r_r332);
    CPy_DecRef(cpy_r_r339);
    goto CPyL292;
CPyL332: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r345);
    goto CPyL113;
CPyL333: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r345);
    goto CPyL292;
CPyL334: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    goto CPyL292;
CPyL335: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r354);
    goto CPyL292;
CPyL336: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r354);
    CPy_DecRef(cpy_r_r361);
    goto CPyL292;
CPyL337: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r354);
    CPy_DecRef(cpy_r_r361);
    CPy_DecRef(cpy_r_r368);
    goto CPyL292;
CPyL338: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r374);
    goto CPyL124;
CPyL339: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r374);
    goto CPyL292;
CPyL340: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    goto CPyL292;
CPyL341: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r383);
    goto CPyL292;
CPyL342: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r383);
    CPy_DecRef(cpy_r_r390);
    goto CPyL292;
CPyL343: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r383);
    CPy_DecRef(cpy_r_r390);
    CPy_DecRef(cpy_r_r397);
    goto CPyL292;
CPyL344: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r403);
    goto CPyL135;
CPyL345: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r403);
    goto CPyL292;
CPyL346: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    goto CPyL292;
CPyL347: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r412);
    goto CPyL292;
CPyL348: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r412);
    CPy_DecRef(cpy_r_r419);
    goto CPyL292;
CPyL349: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r412);
    CPy_DecRef(cpy_r_r419);
    CPy_DecRef(cpy_r_r426);
    goto CPyL292;
CPyL350: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r432);
    goto CPyL146;
CPyL351: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r432);
    goto CPyL292;
CPyL352: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    goto CPyL292;
CPyL353: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    goto CPyL292;
CPyL354: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    goto CPyL292;
CPyL355: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    goto CPyL292;
CPyL356: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    goto CPyL292;
CPyL357: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    goto CPyL292;
CPyL358: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    goto CPyL292;
CPyL359: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    goto CPyL292;
CPyL360: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    goto CPyL292;
CPyL361: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r497);
    goto CPyL165;
CPyL362: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r497);
    goto CPyL292;
CPyL363: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    goto CPyL292;
CPyL364: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r510);
    goto CPyL171;
CPyL365: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r510);
    goto CPyL292;
CPyL366: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    goto CPyL292;
CPyL367: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r523);
    goto CPyL177;
CPyL368: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r523);
    goto CPyL292;
CPyL369: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    goto CPyL292;
CPyL370: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    goto CPyL292;
CPyL371: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    goto CPyL292;
CPyL372: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r540);
    goto CPyL292;
CPyL373: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r540);
    CPy_DecRef(cpy_r_r547);
    goto CPyL292;
CPyL374: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r553);
    goto CPyL292;
CPyL375: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r553);
    CPy_DecRef(cpy_r_r555);
    goto CPyL292;
CPyL376: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r561);
    goto CPyL292;
CPyL377: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r561);
    CPy_DecRef(cpy_r_r568);
    goto CPyL292;
CPyL378: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r574);
    goto CPyL195;
CPyL379: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r574);
    goto CPyL292;
CPyL380: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    goto CPyL292;
CPyL381: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    goto CPyL292;
CPyL382: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    goto CPyL292;
CPyL383: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    goto CPyL292;
CPyL384: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    goto CPyL292;
CPyL385: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    goto CPyL292;
CPyL386: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    goto CPyL292;
CPyL387: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    goto CPyL292;
CPyL388: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    goto CPyL292;
CPyL389: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    goto CPyL292;
CPyL390: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r627);
    goto CPyL292;
CPyL391: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r627);
    CPy_DecRef(cpy_r_r630);
    goto CPyL292;
CPyL392: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r627);
    CPy_DecRef(cpy_r_r630);
    CPy_DecRef(cpy_r_r637);
    goto CPyL292;
CPyL393: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r627);
    CPy_DecRef(cpy_r_r643);
    goto CPyL292;
CPyL394: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r627);
    CPy_DecRef(cpy_r_r643);
    CPy_DecRef(cpy_r_r645);
    goto CPyL292;
CPyL395: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    goto CPyL292;
CPyL396: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r659);
    goto CPyL221;
CPyL397: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r659);
    goto CPyL292;
CPyL398: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r664);
    goto CPyL292;
CPyL399: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r664);
    CPy_DecRef(cpy_r_r672);
    goto CPyL227;
CPyL400: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r664);
    CPy_DecRef(cpy_r_r672);
    goto CPyL292;
CPyL401: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r664);
    CPy_DecRef(cpy_r_r677);
    goto CPyL292;
CPyL402: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r664);
    CPy_DecRef(cpy_r_r677);
    CPy_DecRef(cpy_r_r681);
    goto CPyL292;
CPyL403: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r664);
    CPy_DecRef(cpy_r_r677);
    CPy_DecRef(cpy_r_r681);
    CPy_DecRef(cpy_r_r685);
    goto CPyL292;
CPyL404: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r243);
    CPy_DecRef(cpy_r_r251);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r260);
    CPy_DecRef(cpy_r_r268);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r301);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r313);
    CPy_DecRef(cpy_r_r321);
    CPy_DecRef(cpy_r_r350);
    CPy_DecRef(cpy_r_r379);
    CPy_DecRef(cpy_r_r408);
    CPy_DecRef(cpy_r_r437);
    CPy_DecRef(cpy_r_r445);
    CPy_DecRef(cpy_r_r449);
    CPy_DecRef(cpy_r_r453);
    CPy_DecRef(cpy_r_r461);
    CPy_DecRef(cpy_r_r469);
    CPy_DecRef(cpy_r_r477);
    CPy_DecRef(cpy_r_r481);
    CPy_DecRef(cpy_r_r489);
    CPy_DecRef(cpy_r_r502);
    CPy_DecRef(cpy_r_r515);
    CPy_DecRef(cpy_r_r528);
    CPy_DecRef(cpy_r_r532);
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r579);
    CPy_DecRef(cpy_r_r583);
    CPy_DecRef(cpy_r_r587);
    CPy_DecRef(cpy_r_r591);
    CPy_DecRef(cpy_r_r595);
    CPy_DecRef(cpy_r_r599);
    CPy_DecRef(cpy_r_r603);
    CPy_DecRef(cpy_r_r607);
    CPy_DecRef(cpy_r_r615);
    CPy_DecRef(cpy_r_r623);
    CPy_DecRef(cpy_r_r651);
    CPy_DecRef(cpy_r_r664);
    CPy_DecRef(cpy_r_r677);
    CPy_DecRef(cpy_r_r681);
    CPy_DecRef(cpy_r_r685);
    CPy_DecRef(cpy_r_r689);
    goto CPyL292;
CPyL405: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    goto CPyL292;
CPyL406: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r699);
    goto CPyL292;
CPyL407: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r699);
    CPy_DecRef(cpy_r_r703);
    goto CPyL292;
CPyL408: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r699);
    CPy_DecRef(cpy_r_r703);
    CPy_DecRef(cpy_r_r707);
    goto CPyL292;
CPyL409: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    goto CPyL292;
CPyL410: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r717);
    goto CPyL292;
CPyL411: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r717);
    CPy_DecRef(cpy_r_r721);
    goto CPyL292;
CPyL412: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r717);
    CPy_DecRef(cpy_r_r721);
    CPy_DecRef(cpy_r_r725);
    goto CPyL292;
CPyL413: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r717);
    CPy_DecRef(cpy_r_r721);
    CPy_DecRef(cpy_r_r725);
    CPy_DecRef(cpy_r_r729);
    goto CPyL292;
CPyL414: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r717);
    CPy_DecRef(cpy_r_r721);
    CPy_DecRef(cpy_r_r725);
    CPy_DecRef(cpy_r_r729);
    CPy_DecRef(cpy_r_r733);
    goto CPyL292;
CPyL415: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r717);
    CPy_DecRef(cpy_r_r721);
    CPy_DecRef(cpy_r_r725);
    CPy_DecRef(cpy_r_r729);
    CPy_DecRef(cpy_r_r733);
    CPy_DecRef(cpy_r_r737);
    goto CPyL292;
CPyL416: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r717);
    CPy_DecRef(cpy_r_r721);
    CPy_DecRef(cpy_r_r725);
    CPy_DecRef(cpy_r_r729);
    CPy_DecRef(cpy_r_r733);
    CPy_DecRef(cpy_r_r737);
    CPy_DecRef(cpy_r_r741);
    goto CPyL292;
CPyL417: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    goto CPyL292;
CPyL418: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    goto CPyL292;
CPyL419: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    goto CPyL292;
CPyL420: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    goto CPyL292;
CPyL421: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    goto CPyL292;
CPyL422: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    goto CPyL292;
CPyL423: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    goto CPyL292;
CPyL424: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    goto CPyL292;
CPyL425: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    goto CPyL292;
CPyL426: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    goto CPyL292;
CPyL427: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    goto CPyL292;
CPyL428: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    goto CPyL292;
CPyL429: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    goto CPyL292;
CPyL430: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    goto CPyL292;
CPyL431: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    goto CPyL292;
CPyL432: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    goto CPyL292;
CPyL433: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    goto CPyL292;
CPyL434: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    goto CPyL292;
CPyL435: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    CPy_DecRef(cpy_r_r819);
    goto CPyL292;
CPyL436: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    CPy_DecRef(cpy_r_r819);
    CPy_DecRef(cpy_r_r823);
    goto CPyL292;
CPyL437: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    CPy_DecRef(cpy_r_r819);
    CPy_DecRef(cpy_r_r823);
    CPy_DecRef(cpy_r_r827);
    goto CPyL292;
CPyL438: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    CPy_DecRef(cpy_r_r819);
    CPy_DecRef(cpy_r_r823);
    CPy_DecRef(cpy_r_r827);
    CPy_DecRef(cpy_r_r831);
    goto CPyL292;
CPyL439: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    CPy_DecRef(cpy_r_r819);
    CPy_DecRef(cpy_r_r823);
    CPy_DecRef(cpy_r_r827);
    CPy_DecRef(cpy_r_r831);
    CPy_DecRef(cpy_r_r835);
    goto CPyL292;
CPyL440: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    CPy_DecRef(cpy_r_r819);
    CPy_DecRef(cpy_r_r823);
    CPy_DecRef(cpy_r_r827);
    CPy_DecRef(cpy_r_r831);
    CPy_DecRef(cpy_r_r835);
    CPy_DecRef(cpy_r_r839);
    goto CPyL292;
CPyL441: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r751);
    CPy_DecRef(cpy_r_r755);
    CPy_DecRef(cpy_r_r759);
    CPy_DecRef(cpy_r_r763);
    CPy_DecRef(cpy_r_r767);
    CPy_DecRef(cpy_r_r771);
    CPy_DecRef(cpy_r_r775);
    CPy_DecRef(cpy_r_r779);
    CPy_DecRef(cpy_r_r783);
    CPy_DecRef(cpy_r_r787);
    CPy_DecRef(cpy_r_r791);
    CPy_DecRef(cpy_r_r795);
    CPy_DecRef(cpy_r_r799);
    CPy_DecRef(cpy_r_r803);
    CPy_DecRef(cpy_r_r807);
    CPy_DecRef(cpy_r_r811);
    CPy_DecRef(cpy_r_r815);
    CPy_DecRef(cpy_r_r819);
    CPy_DecRef(cpy_r_r823);
    CPy_DecRef(cpy_r_r827);
    CPy_DecRef(cpy_r_r831);
    CPy_DecRef(cpy_r_r835);
    CPy_DecRef(cpy_r_r839);
    CPy_DecRef(cpy_r_r843);
    goto CPyL292;
CPyL442: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r848);
    goto CPyL292;
CPyL443: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r848);
    CPy_DecRef(cpy_r_r858);
    goto CPyL292;
CPyL444: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r848);
    CPy_DecRef(cpy_r_r858);
    CPy_DecRef(cpy_r_r863);
    goto CPyL292;
CPyL445: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r848);
    CPy_DecRef(cpy_r_r858);
    CPy_DecRef(cpy_r_r863);
    CPy_DecRef(cpy_r_r867);
    goto CPyL292;
CPyL446: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r848);
    CPy_DecRef(cpy_r_r858);
    CPy_DecRef(cpy_r_r872);
    goto CPyL292;
CPyL447: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r848);
    CPy_DecRef(cpy_r_r858);
    CPy_DecRef(cpy_r_r872);
    CPy_DecRef(cpy_r_r881);
    goto CPyL292;
CPyL448: ;
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r694);
    CPy_DecRef(cpy_r_r712);
    CPy_DecRef(cpy_r_r746);
    CPy_DecRef(cpy_r_r848);
    CPy_DecRef(cpy_r_r858);
    CPy_DecRef(cpy_r_r872);
    CPy_DecRef(cpy_r_r881);
    CPy_DecRef(cpy_r_r889);
    goto CPyL292;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___providers___eth_tester___defaults = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_ast = Py_None;
    CPyModule_operator = Py_None;
    CPyModule_random = Py_None;
    CPyModule_sys = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_abi = Py_None;
    CPyModule_eth_tester___exceptions = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_utils = Py_None;
    CPyModule_faster_eth_utils___curried = Py_None;
    CPyModule_faster_eth_utils___toolz = Py_None;
    CPyModule_typing_extensions = Py_None;
    CPyModule_faster_web3 = Py_None;
    CPyModule_faster_web3____utils___error_formatters_utils = Py_None;
    CPyModule_faster_web3___exceptions = Py_None;
    CPyModule_faster_web3___types = Py_None;
    CPyModule_eth_tester = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[265];
const char * const CPyLit_Str[] = {
    "\004\032RPC method not implemented\023NotImplementedError\021TransactionFailed\004args",
    "\t\bUo\\x180\\\fliteral_eval\003abi\006decode\003zip\004Web3\006to_hex\016OffchainLookup\004data",
    "\006\004NH{q\003hex\022ContractPanicError\v__version__\neth_tester\fversion_info",
    "\t\017EthereumTester/\001/\bplatform\a/python\005major\001.\005minor\005micro\aexcepts",
    "\004\021get_block_by_hash\021full_transactions\ftransactions\023get_block_by_number",
    "\006\021create_log_filter\bget_logs\arandint\nencode_hex\vadd_account\bbuiltins",
    "\005\003ast\boperator\006random\003sys,faster_web3/providers/eth_tester/defaults.py",
    "\b\b<module>\rTYPE_CHECKING\003Any\bCallable\005Final\004List\bNoReturn\bOptional",
    "\a\005Tuple\004Type\aTypeVar\006typing\016faster_eth_abi\rBlockNotFound\016FilterNotFound",
    "\004\023TransactionNotFound\025eth_tester.exceptions\nHexAddress\006HexStr",
    "\005\neth_typing\ndecode_hex\ais_null\006keccak\020faster_eth_utils",
    "\004\022apply_formatter_if\030faster_eth_utils.curried\acompose\005curry",
    "\004\026faster_eth_utils.toolz\tParamSpec\021typing_extensions\vfaster_web3",
    "\002\026OFFCHAIN_LOOKUP_FIELDS\021PANIC_ERROR_CODES",
    "\002)faster_web3._utils.error_formatters_utils\026faster_web3.exceptions",
    "\b\nLogReceipt\aTParams\aTReturn\006TValue\tTxReceipt\021faster_web3.types\001P\001T",
    "\003\017call_eth_tester\021preprocess_params\027null_if_block_not_found",
    "\003\035null_if_transaction_not_found\030null_if_filter_not_found\nIndexError",
    "\002\022null_if_indexerror\'get_transaction_by_block_hash_and_index",
    "\002)get_transaction_by_block_number_and_index\022create_new_account",
    "\a\016without_params\004web3\rclientVersion\016client_version\004sha3\nitemgetter\003net",
    "\b\aversion\0011\tlistening\tpeerCount\003eth\017protocolVersion\asyncing\achainId",
    "\005\nfeeHistory\017get_fee_history\024maxPriorityFeePerGas\vblobBaseFee\bgasPrice",
    "\006\baccounts\fget_accounts\vblockNumber\006number\fblock_number\006latest",
    "\006\tfn_kwargs\ngetBalance\vget_balance\fgetStorageAt\016get_storage_at\bgetProof",
    "\003\017not_implemented\023getTransactionCount\tget_nonce",
    "\003\036getBlockTransactionCountByHash\003len getBlockTransactionCountByNumber",
    "\004\030getUncleCountByBlockHash\006uncles\032getUncleCountByBlockNumber\agetCode",
    "\005\bget_code\004sign\017signTransaction\017sendTransaction\020send_transaction",
    "\004\022sendRawTransaction\024send_raw_transaction\004call\020createAccessList",
    "\004\vestimateGas\festimate_gas\016getBlockByHash\020getBlockByNumber",
    "\002\024getTransactionByHash\027get_transaction_by_hash",
    "\002!getTransactionByBlockHashAndIndex#getTransactionByBlockNumberAndIndex",
    "\002\025getTransactionReceipt\027get_transaction_receipt",
    "\002\033getUncleByBlockHashAndIndex\035getUncleByBlockNumberAndIndex",
    "\005\fgetCompilers\ncompileLLL\017compileSolidity\016compileSerpent\tnewFilter",
    "\003\016newBlockFilter\023create_block_filter\033newPendingTransactionFilter",
    "\003!create_pending_transaction_filter\017uninstallFilter\rdelete_filter",
    "\003\020getFilterChanges\027get_only_filter_changes\rgetFilterLogs",
    "\006\023get_all_filter_logs\agetLogs\agetWork\nsubmitWork\016submitHashrate\002db",
    "\b\tputString\tgetString\006putHex\006getHex\005admin\badd_peer\adatadir\tnode_info",
    "\a\005peers\nstart_http\bstart_ws\tstop_http\astop_ws\005debug\vbacktraceAt",
    "\006\fblockProfile\ncpuProfile\tdumpBlock\agtStats\vgetBlockRLP\agoTrace",
    "\005\bmemStats\fseedHashSign\023setBlockProfileRate\asetHead\006stacks",
    "\005\017startCPUProfile\fstartGoTrace\016stopCPUProfile\vstopGoTrace\ntraceBlock",
    "\003\022traceBlockByNumber\020traceBlockByHash\022traceBlockFromFile",
    "\005\020traceTransaction\tverbosity\avmodule\021writeBlockProfile\017writeMemProfile",
    "\t\atesting\ntimeTravel\vtime_travel\006txpool\acontent\ainspect\006status\003evm\004mine",
    "\005\vmine_blocks\006revert\022revert_to_snapshot\bsnapshot\rtake_snapshot",
    "\001\rAPI_ENDPOINTS",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\a0\0004\000-1\000255\00063\000131277322940537\0001000000000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    21, 1, 15, 1, 19, 1, 32, 3, 41, 41, 41, 3, 42, 42, 42, 3, 43, 43,
    43, 3, 44, 44, 44, 4, 247, 248, 249, 250, 10, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 1, 9, 4, 59, 60, 5, 61, 2, 63, 64, 4, 66, 38, 67, 68,
    1, 70, 3, 72, 73, 30, 1, 75, 1, 12, 2, 78, 79, 2, 18, 14, 5, 82, 83,
    84, 85, 86, 1, 126
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___providers___eth_tester___defaults__internal = NULL;
CPyModule *CPyModule_faster_web3___providers___eth_tester___defaults;
PyObject *CPyStatic_faster_web3___providers___eth_tester___defaults___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_ast;
CPyModule *CPyModule_operator;
CPyModule *CPyModule_random;
CPyModule *CPyModule_sys;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_eth_abi;
CPyModule *CPyModule_eth_tester___exceptions;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_faster_eth_utils;
CPyModule *CPyModule_faster_eth_utils___curried;
CPyModule *CPyModule_faster_eth_utils___toolz;
CPyModule *CPyModule_typing_extensions;
CPyModule *CPyModule_faster_web3;
CPyModule *CPyModule_faster_web3____utils___error_formatters_utils;
CPyModule *CPyModule_faster_web3___exceptions;
CPyModule *CPyModule_faster_web3___types;
CPyModule *CPyModule_eth_tester;
PyObject *CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror = NULL;
PyObject *CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS = NULL;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester_env(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___without_eth_tester_envObject *faster_web3___providers___eth_tester___defaults___without_eth_tester_env_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_objObject *faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___without_params_env;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_params_env(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___without_params_envObject *faster_web3___providers___eth_tester___defaults___without_params_env_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___inner_without_params_objObject *faster_web3___providers___eth_tester___defaults___inner_without_params_obj_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___static_return_env;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___static_return_env(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___static_return_envObject *faster_web3___providers___eth_tester___defaults___static_return_env_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___inner_static_return_objObject *faster_web3___providers___eth_tester___defaults___inner_static_return_obj_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_env(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___null_if_excepts_envObject *faster_web3___providers___eth_tester___defaults___null_if_excepts_env_free_instance;
PyTypeObject *CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj(void);
CPyThreadLocal faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_objObject *faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_free_instance;
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___not_implemented(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___not_implemented(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___call_eth_tester(PyObject *cpy_r_fn_name, PyObject *cpy_r_eth_tester, PyObject *cpy_r_fn_args, PyObject *cpy_r_fn_kwargs);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___call_eth_tester(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_eth_tester, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester(PyObject *cpy_r_fn);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___without_eth_tester(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_eth_tester, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___without_params(PyObject *cpy_r_fn);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___without_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
tuple_T2OO CPyDef_faster_web3___providers___eth_tester___defaults___preprocess_params(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params, PyObject *cpy_r_preprocessor_fn);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___preprocess_params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___static_return(PyObject *cpy_r_value);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___static_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___client_version(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___client_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_fn);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts(PyObject *cpy_r_exc_type);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___null_if_excepts(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_hash_and_index(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_hash_and_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_number_and_index(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_number_and_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_faster_web3___providers___eth_tester___defaults___create_log_filter(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___create_log_filter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___get_logs(PyObject *cpy_r_eth_tester, PyObject *cpy_r_params);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___get_logs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults____generate_random_private_key(void);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults____generate_random_private_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_faster_web3___providers___eth_tester___defaults___create_new_account(PyObject *cpy_r_eth_tester);
PyObject *CPyPy_faster_web3___providers___eth_tester___defaults___create_new_account(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_faster_web3___providers___eth_tester___defaults_____top_level__(void);

static struct export_table_faster_web3___providers___eth_tester___defaults exports = {
    &CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_block_not_found,
    &CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_transaction_not_found,
    &CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_filter_not_found,
    &CPyStatic_faster_web3___providers___eth_tester___defaults___null_if_indexerror,
    &CPyStatic_faster_web3___providers___eth_tester___defaults___API_ENDPOINTS,
    &CPyType_faster_web3___providers___eth_tester___defaults___without_eth_tester_env,
    &CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester_env,
    &faster_web3___providers___eth_tester___defaults___without_eth_tester_env_free_instance,
    &CPyType_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj,
    &faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_free_instance,
    &CPyType_faster_web3___providers___eth_tester___defaults___without_params_env,
    &CPyDef_faster_web3___providers___eth_tester___defaults___without_params_env,
    &faster_web3___providers___eth_tester___defaults___without_params_env_free_instance,
    &CPyType_faster_web3___providers___eth_tester___defaults___inner_without_params_obj,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj,
    &faster_web3___providers___eth_tester___defaults___inner_without_params_obj_free_instance,
    &CPyType_faster_web3___providers___eth_tester___defaults___static_return_env,
    &CPyDef_faster_web3___providers___eth_tester___defaults___static_return_env,
    &faster_web3___providers___eth_tester___defaults___static_return_env_free_instance,
    &CPyType_faster_web3___providers___eth_tester___defaults___inner_static_return_obj,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj,
    &faster_web3___providers___eth_tester___defaults___inner_static_return_obj_free_instance,
    &CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_env,
    &CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_env,
    &faster_web3___providers___eth_tester___defaults___null_if_excepts_env_free_instance,
    &CPyType_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj,
    &CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj,
    &faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_free_instance,
    &CPyDef_faster_web3___providers___eth_tester___defaults___not_implemented,
    &CPyDef_faster_web3___providers___eth_tester___defaults___call_eth_tester,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____get__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_eth_tester_obj_____call__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___without_eth_tester,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____get__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_without_params_obj_____call__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___without_params,
    &CPyDef_faster_web3___providers___eth_tester___defaults___preprocess_params,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____get__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___inner_static_return_obj_____call__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___static_return,
    &CPyDef_faster_web3___providers___eth_tester___defaults___client_version,
    &CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____get__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts_decorator_null_if_excepts_obj_____call__,
    &CPyDef_faster_web3___providers___eth_tester___defaults___null_if_excepts,
    &CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_hash_and_index,
    &CPyDef_faster_web3___providers___eth_tester___defaults___get_transaction_by_block_number_and_index,
    &CPyDef_faster_web3___providers___eth_tester___defaults___create_log_filter,
    &CPyDef_faster_web3___providers___eth_tester___defaults___get_logs,
    &CPyDef_faster_web3___providers___eth_tester___defaults____generate_random_private_key,
    &CPyDef_faster_web3___providers___eth_tester___defaults___create_new_account,
    &CPyDef_faster_web3___providers___eth_tester___defaults_____top_level__,
};

static int exec_defaults__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    capsule = PyCapsule_New(&exports, "faster_web3.providers.eth_tester.defaults__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___providers___eth_tester___defaults(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___providers___eth_tester___defaults, "faster_web3.providers.eth_tester.defaults__mypyc.init_faster_web3___providers___eth_tester___defaults", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___providers___eth_tester___defaults", capsule);
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
static PyModuleDef module_def_defaults__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "faster_web3.providers.eth_tester.defaults__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_defaults__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_defaults__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_defaults__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
