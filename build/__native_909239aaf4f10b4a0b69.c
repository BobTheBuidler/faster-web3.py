#ifndef DIFFCHECK_PLACEHOLDER
#define DIFFCHECK_PLACEHOLDER 0
#endif
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
#include "__native_909239aaf4f10b4a0b69.h"
#include "__native_internal_909239aaf4f10b4a0b69.h"

static int
node___GethBenchmarkFixture_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef_node_____mypyc__GethBenchmarkFixture_setup(PyObject *cpy_r_type);
PyObject *CPyDef_node___GethBenchmarkFixture(void);

static PyObject *
node___GethBenchmarkFixture_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_node___GethBenchmarkFixture) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_node_____mypyc__GethBenchmarkFixture_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_node___GethBenchmarkFixture_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
node___GethBenchmarkFixture_traverse(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_rpc_port);
    Py_VISIT(self->_endpoint_uri);
    Py_VISIT(self->_geth_binary);
    Py_VISIT(self->_datadir);
    return 0;
}

static int
node___GethBenchmarkFixture_clear(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self)
{
    Py_CLEAR(self->_rpc_port);
    Py_CLEAR(self->_endpoint_uri);
    Py_CLEAR(self->_geth_binary);
    Py_CLEAR(self->_datadir);
    return 0;
}

static void
node___GethBenchmarkFixture_dealloc(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, node___GethBenchmarkFixture_dealloc)
    node___GethBenchmarkFixture_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem node___GethBenchmarkFixture_vtable[7];
static bool
CPyDef_node___GethBenchmarkFixture_trait_vtable_setup(void)
{
    CPyVTableItem node___GethBenchmarkFixture_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_node___GethBenchmarkFixture_____init__,
        (CPyVTableItem)CPyDef_node___GethBenchmarkFixture___build,
        (CPyVTableItem)CPyDef_node___GethBenchmarkFixture____rpc_port,
        (CPyVTableItem)CPyDef_node___GethBenchmarkFixture____endpoint_uri,
        (CPyVTableItem)CPyDef_node___GethBenchmarkFixture____geth_binary,
        (CPyVTableItem)CPyDef_node___GethBenchmarkFixture____geth_command_arguments,
        (CPyVTableItem)CPyDef_node___GethBenchmarkFixture____geth_process,
    };
    memcpy(node___GethBenchmarkFixture_vtable, node___GethBenchmarkFixture_vtable_scratch, sizeof(node___GethBenchmarkFixture_vtable));
    return 1;
}

static PyObject *
node___GethBenchmarkFixture_get_rpc_port(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure);
static int
node___GethBenchmarkFixture_set_rpc_port(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure);
static PyObject *
node___GethBenchmarkFixture_get_endpoint_uri(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure);
static int
node___GethBenchmarkFixture_set_endpoint_uri(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure);
static PyObject *
node___GethBenchmarkFixture_get_geth_binary(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure);
static int
node___GethBenchmarkFixture_set_geth_binary(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure);
static PyObject *
node___GethBenchmarkFixture_get_datadir(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure);
static int
node___GethBenchmarkFixture_set_datadir(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure);

static PyGetSetDef node___GethBenchmarkFixture_getseters[] = {
    {"rpc_port",
     (getter)node___GethBenchmarkFixture_get_rpc_port, (setter)node___GethBenchmarkFixture_set_rpc_port,
     NULL, NULL},
    {"endpoint_uri",
     (getter)node___GethBenchmarkFixture_get_endpoint_uri, (setter)node___GethBenchmarkFixture_set_endpoint_uri,
     NULL, NULL},
    {"geth_binary",
     (getter)node___GethBenchmarkFixture_get_geth_binary, (setter)node___GethBenchmarkFixture_set_geth_binary,
     NULL, NULL},
    {"datadir",
     (getter)node___GethBenchmarkFixture_get_datadir, (setter)node___GethBenchmarkFixture_set_datadir,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef node___GethBenchmarkFixture_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_node___GethBenchmarkFixture_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self)\n--\n\n")},
    {"build",
     (PyCFunction)CPyPy_node___GethBenchmarkFixture___build,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("build($self)\n--\n\n")},
    {"_rpc_port",
     (PyCFunction)CPyPy_node___GethBenchmarkFixture____rpc_port,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_rpc_port($self)\n--\n\n")},
    {"_endpoint_uri",
     (PyCFunction)CPyPy_node___GethBenchmarkFixture____endpoint_uri,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_endpoint_uri($self)\n--\n\n")},
    {"_geth_binary",
     (PyCFunction)CPyPy_node___GethBenchmarkFixture____geth_binary,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_geth_binary($self)\n--\n\n")},
    {"_geth_command_arguments",
     (PyCFunction)CPyPy_node___GethBenchmarkFixture____geth_command_arguments,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_geth_command_arguments($self, datadir)\n--\n\n")},
    {"_geth_process",
     (PyCFunction)CPyPy_node___GethBenchmarkFixture____geth_process,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_geth_process($self, datadir, genesis_file, rpc_port)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_node___GethBenchmarkFixture_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "GethBenchmarkFixture",
    .tp_new = node___GethBenchmarkFixture_new,
    .tp_dealloc = (destructor)node___GethBenchmarkFixture_dealloc,
    .tp_traverse = (traverseproc)node___GethBenchmarkFixture_traverse,
    .tp_clear = (inquiry)node___GethBenchmarkFixture_clear,
    .tp_getset = node___GethBenchmarkFixture_getseters,
    .tp_methods = node___GethBenchmarkFixture_methods,
    .tp_init = node___GethBenchmarkFixture_init,
    .tp_basicsize = sizeof(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("GethBenchmarkFixture()\n--\n\n"),
};
static PyTypeObject *CPyType_node___GethBenchmarkFixture_template = &CPyType_node___GethBenchmarkFixture_template_;

PyObject *CPyDef_node_____mypyc__GethBenchmarkFixture_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self;
    self = (faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = node___GethBenchmarkFixture_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_node___GethBenchmarkFixture(void)
{
    PyObject *self = CPyDef_node_____mypyc__GethBenchmarkFixture_setup((PyObject *)CPyType_node___GethBenchmarkFixture);
    if (self == NULL)
        return NULL;
    char res = CPyDef_node___GethBenchmarkFixture_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
node___GethBenchmarkFixture_get_rpc_port(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure)
{
    if (unlikely(self->_rpc_port == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'rpc_port' of 'GethBenchmarkFixture' undefined");
        return NULL;
    }
    CPy_INCREF(self->_rpc_port);
    PyObject *retval = self->_rpc_port;
    return retval;
}

static int
node___GethBenchmarkFixture_set_rpc_port(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GethBenchmarkFixture' object attribute 'rpc_port' cannot be deleted");
        return -1;
    }
    if (self->_rpc_port != NULL) {
        CPy_DECREF(self->_rpc_port);
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
    self->_rpc_port = tmp;
    return 0;
}

static PyObject *
node___GethBenchmarkFixture_get_endpoint_uri(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure)
{
    if (unlikely(self->_endpoint_uri == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'endpoint_uri' of 'GethBenchmarkFixture' undefined");
        return NULL;
    }
    CPy_INCREF(self->_endpoint_uri);
    PyObject *retval = self->_endpoint_uri;
    return retval;
}

static int
node___GethBenchmarkFixture_set_endpoint_uri(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GethBenchmarkFixture' object attribute 'endpoint_uri' cannot be deleted");
        return -1;
    }
    if (self->_endpoint_uri != NULL) {
        CPy_DECREF(self->_endpoint_uri);
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
    self->_endpoint_uri = tmp;
    return 0;
}

static PyObject *
node___GethBenchmarkFixture_get_geth_binary(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure)
{
    if (unlikely(self->_geth_binary == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'geth_binary' of 'GethBenchmarkFixture' undefined");
        return NULL;
    }
    CPy_INCREF(self->_geth_binary);
    PyObject *retval = self->_geth_binary;
    return retval;
}

static int
node___GethBenchmarkFixture_set_geth_binary(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GethBenchmarkFixture' object attribute 'geth_binary' cannot be deleted");
        return -1;
    }
    if (self->_geth_binary != NULL) {
        CPy_DECREF(self->_geth_binary);
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
    self->_geth_binary = tmp;
    return 0;
}

static PyObject *
node___GethBenchmarkFixture_get_datadir(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, void *closure)
{
    if (unlikely(self->_datadir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'datadir' of 'GethBenchmarkFixture' undefined");
        return NULL;
    }
    CPy_INCREF(self->_datadir);
    PyObject *retval = self->_datadir;
    return retval;
}

static int
node___GethBenchmarkFixture_set_datadir(faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GethBenchmarkFixture' object attribute 'datadir' cannot be deleted");
        return -1;
    }
    if (self->_datadir != NULL) {
        CPy_DECREF(self->_datadir);
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
    self->_datadir = tmp;
    return 0;
}

PyObject *CPyDef_node_____mypyc__build_GethBenchmarkFixture_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen(void);

static PyObject *
node___build_GethBenchmarkFixture_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_node___build_GethBenchmarkFixture_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_node_____mypyc__build_GethBenchmarkFixture_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
node___build_GethBenchmarkFixture_gen_traverse(faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->___mypyc_generator_attribute__base_dir);
    Py_VISIT(self->___mypyc_generator_attribute__zipfile_path);
    Py_VISIT(self->___mypyc_generator_attribute__tmp_datadir);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_generator_attribute__zip_ref);
    Py_VISIT(self->___mypyc_temp__6.f0);
    Py_VISIT(self->___mypyc_temp__6.f1);
    Py_VISIT(self->___mypyc_temp__6.f2);
    Py_VISIT(self->___mypyc_generator_attribute__genesis_file);
    Py_VISIT(self->___mypyc_temp__7.f0);
    Py_VISIT(self->___mypyc_temp__7.f1);
    Py_VISIT(self->___mypyc_temp__7.f2);
    return 0;
}

static int
node___build_GethBenchmarkFixture_gen_clear(faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->___mypyc_generator_attribute__base_dir);
    Py_CLEAR(self->___mypyc_generator_attribute__zipfile_path);
    Py_CLEAR(self->___mypyc_generator_attribute__tmp_datadir);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_generator_attribute__zip_ref);
    Py_CLEAR(self->___mypyc_temp__6.f0);
    Py_CLEAR(self->___mypyc_temp__6.f1);
    Py_CLEAR(self->___mypyc_temp__6.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__genesis_file);
    Py_CLEAR(self->___mypyc_temp__7.f0);
    Py_CLEAR(self->___mypyc_temp__7.f1);
    Py_CLEAR(self->___mypyc_temp__7.f2);
    return 0;
}

static void
node___build_GethBenchmarkFixture_gen_dealloc(faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (node___build_GethBenchmarkFixture_gen_free_instance == NULL) {
        node___build_GethBenchmarkFixture_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1);
        self->___mypyc_temp__2 = 2;
        Py_CLEAR(self->___mypyc_generator_attribute__base_dir);
        Py_CLEAR(self->___mypyc_generator_attribute__zipfile_path);
        Py_CLEAR(self->___mypyc_generator_attribute__tmp_datadir);
        Py_CLEAR(self->___mypyc_temp__3);
        Py_CLEAR(self->___mypyc_temp__4);
        self->___mypyc_temp__5 = 2;
        Py_CLEAR(self->___mypyc_generator_attribute__zip_ref);
        Py_CLEAR(self->___mypyc_temp__6.f0);
        Py_CLEAR(self->___mypyc_temp__6.f1);
        Py_CLEAR(self->___mypyc_temp__6.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__genesis_file);
        Py_CLEAR(self->___mypyc_temp__7.f0);
        Py_CLEAR(self->___mypyc_temp__7.f1);
        Py_CLEAR(self->___mypyc_temp__7.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, node___build_GethBenchmarkFixture_gen_dealloc)
    node___build_GethBenchmarkFixture_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem node___build_GethBenchmarkFixture_gen_vtable[6];
static bool
CPyDef_node___build_GethBenchmarkFixture_gen_trait_vtable_setup(void)
{
    CPyVTableItem node___build_GethBenchmarkFixture_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_node___build_GethBenchmarkFixture_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_node___build_GethBenchmarkFixture_gen_____next__,
        (CPyVTableItem)CPyDef_node___build_GethBenchmarkFixture_gen___send,
        (CPyVTableItem)CPyDef_node___build_GethBenchmarkFixture_gen_____iter__,
        (CPyVTableItem)CPyDef_node___build_GethBenchmarkFixture_gen___throw,
        (CPyVTableItem)CPyDef_node___build_GethBenchmarkFixture_gen___close,
    };
    memcpy(node___build_GethBenchmarkFixture_gen_vtable, node___build_GethBenchmarkFixture_gen_vtable_scratch, sizeof(node___build_GethBenchmarkFixture_gen_vtable));
    return 1;
}

static PyMethodDef node___build_GethBenchmarkFixture_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_node___build_GethBenchmarkFixture_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_node___build_GethBenchmarkFixture_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_node___build_GethBenchmarkFixture_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_node___build_GethBenchmarkFixture_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_node___build_GethBenchmarkFixture_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_node___build_GethBenchmarkFixture_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "build_GethBenchmarkFixture_gen",
    .tp_new = node___build_GethBenchmarkFixture_gen_new,
    .tp_dealloc = (destructor)node___build_GethBenchmarkFixture_gen_dealloc,
    .tp_traverse = (traverseproc)node___build_GethBenchmarkFixture_gen_traverse,
    .tp_clear = (inquiry)node___build_GethBenchmarkFixture_gen_clear,
    .tp_methods = node___build_GethBenchmarkFixture_gen_methods,
    .tp_iter = CPyDef_node___build_GethBenchmarkFixture_gen_____iter__,
    .tp_iternext = CPyDef_node___build_GethBenchmarkFixture_gen_____next__,
    .tp_basicsize = sizeof(faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("build_GethBenchmarkFixture_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_node___build_GethBenchmarkFixture_gen_template = &CPyType_node___build_GethBenchmarkFixture_gen_template_;

PyObject *CPyDef_node_____mypyc__build_GethBenchmarkFixture_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *self;
    if (node___build_GethBenchmarkFixture_gen_free_instance != NULL) {
        self = node___build_GethBenchmarkFixture_gen_free_instance;
        node___build_GethBenchmarkFixture_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = node___build_GethBenchmarkFixture_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__2 = 2;
    self->___mypyc_temp__5 = 2;
    self->___mypyc_temp__6 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__7 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_node___build_GethBenchmarkFixture_gen(void)
{
    PyObject *self = CPyDef_node_____mypyc__build_GethBenchmarkFixture_gen_setup((PyObject *)CPyType_node___build_GethBenchmarkFixture_gen);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef_node_____mypyc___3_geth_process_GethBenchmarkFixture_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen(void);

static PyObject *
node____geth_process_GethBenchmarkFixture_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_node____geth_process_GethBenchmarkFixture_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_node_____mypyc___3_geth_process_GethBenchmarkFixture_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
node____geth_process_GethBenchmarkFixture_gen_traverse(faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__datadir);
    Py_VISIT(self->___mypyc_generator_attribute__genesis_file);
    Py_VISIT(self->___mypyc_generator_attribute__rpc_port);
    Py_VISIT(self->___mypyc_generator_attribute__init_datadir_command.f0);
    Py_VISIT(self->___mypyc_generator_attribute__init_datadir_command.f1);
    Py_VISIT(self->___mypyc_generator_attribute__init_datadir_command.f2);
    Py_VISIT(self->___mypyc_generator_attribute__init_datadir_command.f3);
    Py_VISIT(self->___mypyc_generator_attribute__init_datadir_command.f4);
    Py_VISIT(self->___mypyc_generator_attribute__proc);
    return 0;
}

static int
node____geth_process_GethBenchmarkFixture_gen_clear(faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__datadir);
    Py_CLEAR(self->___mypyc_generator_attribute__genesis_file);
    Py_CLEAR(self->___mypyc_generator_attribute__rpc_port);
    Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f0);
    Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f1);
    Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f3);
    Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f4);
    Py_CLEAR(self->___mypyc_generator_attribute__proc);
    return 0;
}

static void
node____geth_process_GethBenchmarkFixture_gen_dealloc(faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (node____geth_process_GethBenchmarkFixture_gen_free_instance == NULL) {
        node____geth_process_GethBenchmarkFixture_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__datadir);
        Py_CLEAR(self->___mypyc_generator_attribute__genesis_file);
        Py_CLEAR(self->___mypyc_generator_attribute__rpc_port);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f0);
        Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f1);
        Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f3);
        Py_CLEAR(self->___mypyc_generator_attribute__init_datadir_command.f4);
        Py_CLEAR(self->___mypyc_generator_attribute__proc);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, node____geth_process_GethBenchmarkFixture_gen_dealloc)
    node____geth_process_GethBenchmarkFixture_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem node____geth_process_GethBenchmarkFixture_gen_vtable[6];
static bool
CPyDef_node____geth_process_GethBenchmarkFixture_gen_trait_vtable_setup(void)
{
    CPyVTableItem node____geth_process_GethBenchmarkFixture_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_node____geth_process_GethBenchmarkFixture_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_node____geth_process_GethBenchmarkFixture_gen_____next__,
        (CPyVTableItem)CPyDef_node____geth_process_GethBenchmarkFixture_gen___send,
        (CPyVTableItem)CPyDef_node____geth_process_GethBenchmarkFixture_gen_____iter__,
        (CPyVTableItem)CPyDef_node____geth_process_GethBenchmarkFixture_gen___throw,
        (CPyVTableItem)CPyDef_node____geth_process_GethBenchmarkFixture_gen___close,
    };
    memcpy(node____geth_process_GethBenchmarkFixture_gen_vtable, node____geth_process_GethBenchmarkFixture_gen_vtable_scratch, sizeof(node____geth_process_GethBenchmarkFixture_gen_vtable));
    return 1;
}

static PyMethodDef node____geth_process_GethBenchmarkFixture_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_node____geth_process_GethBenchmarkFixture_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_node____geth_process_GethBenchmarkFixture_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_node____geth_process_GethBenchmarkFixture_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_node____geth_process_GethBenchmarkFixture_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_node____geth_process_GethBenchmarkFixture_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_node____geth_process_GethBenchmarkFixture_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_geth_process_GethBenchmarkFixture_gen",
    .tp_new = node____geth_process_GethBenchmarkFixture_gen_new,
    .tp_dealloc = (destructor)node____geth_process_GethBenchmarkFixture_gen_dealloc,
    .tp_traverse = (traverseproc)node____geth_process_GethBenchmarkFixture_gen_traverse,
    .tp_clear = (inquiry)node____geth_process_GethBenchmarkFixture_gen_clear,
    .tp_methods = node____geth_process_GethBenchmarkFixture_gen_methods,
    .tp_iter = CPyDef_node____geth_process_GethBenchmarkFixture_gen_____iter__,
    .tp_iternext = CPyDef_node____geth_process_GethBenchmarkFixture_gen_____next__,
    .tp_basicsize = sizeof(faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("_geth_process_GethBenchmarkFixture_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_node____geth_process_GethBenchmarkFixture_gen_template = &CPyType_node____geth_process_GethBenchmarkFixture_gen_template_;

PyObject *CPyDef_node_____mypyc___3_geth_process_GethBenchmarkFixture_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *self;
    if (node____geth_process_GethBenchmarkFixture_gen_free_instance != NULL) {
        self = node____geth_process_GethBenchmarkFixture_gen_free_instance;
        node____geth_process_GethBenchmarkFixture_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = node____geth_process_GethBenchmarkFixture_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__init_datadir_command = (tuple_T5OOOOO) { NULL, NULL, NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen(void)
{
    PyObject *self = CPyDef_node_____mypyc___3_geth_process_GethBenchmarkFixture_gen_setup((PyObject *)CPyType_node____geth_process_GethBenchmarkFixture_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef nodemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___tools___benchmark___node(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___tools___benchmark___node__internal, "__name__");
    CPyStatic_node___globals = PyModule_GetDict(CPyModule_faster_web3___tools___benchmark___node__internal);
    if (unlikely(CPyStatic_node___globals == NULL))
        goto fail;
    CPyType_node___build_GethBenchmarkFixture_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_node___build_GethBenchmarkFixture_gen_template, NULL, modname);
    if (unlikely(!CPyType_node___build_GethBenchmarkFixture_gen))
        goto fail;
    CPyType_node____geth_process_GethBenchmarkFixture_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_node____geth_process_GethBenchmarkFixture_gen_template, NULL, modname);
    if (unlikely(!CPyType_node____geth_process_GethBenchmarkFixture_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_node_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___tools___benchmark___node__internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_node___GethBenchmarkFixture);
    Py_CLEAR(CPyType_node___build_GethBenchmarkFixture_gen);
    Py_CLEAR(CPyType_node____geth_process_GethBenchmarkFixture_gen);
    return -1;
}
static struct PyModuleDef nodemodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.tools.benchmark.node",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    nodemodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___tools___benchmark___node(void)
{
    if (CPyModule_faster_web3___tools___benchmark___node__internal) {
        Py_INCREF(CPyModule_faster_web3___tools___benchmark___node__internal);
        return CPyModule_faster_web3___tools___benchmark___node__internal;
    }
    CPyModule_faster_web3___tools___benchmark___node__internal = PyModule_Create(&nodemodule);
    if (unlikely(CPyModule_faster_web3___tools___benchmark___node__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___tools___benchmark___node(CPyModule_faster_web3___tools___benchmark___node__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___tools___benchmark___node__internal;
    fail:
    return NULL;
}

char CPyDef_node___GethBenchmarkFixture_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_node___GethBenchmarkFixture____rpc_port(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    if (((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_rpc_port != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_rpc_port);
    }
    ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_rpc_port = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_node___GethBenchmarkFixture____endpoint_uri(cpy_r_self);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    if (((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_endpoint_uri != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_endpoint_uri);
    }
    ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_endpoint_uri = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    cpy_r_r4 = CPyDef_node___GethBenchmarkFixture____geth_binary(cpy_r_self);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    if (((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_geth_binary != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_geth_binary);
    }
    ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_geth_binary = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_node___GethBenchmarkFixture_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_node___GethBenchmarkFixture))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.GethBenchmarkFixture", obj_self); 
        goto fail;
    }
    char retval = CPyDef_node___GethBenchmarkFixture_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__init__", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___build_GethBenchmarkFixture_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
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
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
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
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject **cpy_r_r91;
    PyObject *cpy_r_r92;
    tuple_T3OOO cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    tuple_T3OOO cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    tuple_T3OOO cpy_r_r109;
    char cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject **cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    tuple_T3OOO cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    tuple_T3OOO cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    tuple_T3OOO cpy_r_r163;
    tuple_T3OOO cpy_r_r164;
    char cpy_r_r165;
    tuple_T3OOO cpy_r_r166;
    tuple_T3OOO cpy_r_r167;
    tuple_T3OOO cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject **cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    cpy_r_r0 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL135;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL139;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = CPyStatic_node___globals;
    cpy_r_r4 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'TemporaryDirectory' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL139;
    }
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r5, 0, 0, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL139;
    }
    cpy_r_r7 = CPy_TYPE(cpy_r_r6);
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__exit__' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL140;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL140;
    }
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__enter__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL141;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r6};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL141;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r6;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL142;
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 1;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL142;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r18 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "build", 40, CPyStatic_node___globals, "str", cpy_r_r15);
        goto CPyL101;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__base_dir != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__base_dir);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__base_dir = cpy_r_r18;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    cpy_r_r20 = CPyStatic_node___globals;
    cpy_r_r21 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__file__' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "build", 43, CPyStatic_node___globals, "str", cpy_r_r22);
        goto CPyL101;
    }
    cpy_r_r24 = CPyModule_os;
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL143;
    }
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'dirname' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL143;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r23};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL143;
    }
    CPy_DECREF(cpy_r_r23);
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "build", 43, CPyStatic_node___globals, "str", cpy_r_r31);
        goto CPyL101;
    }
    cpy_r_r33 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '../../../tests/integration/geth-1.16.2-fixture.zip' */
    cpy_r_r34 = CPyStr_Build(1, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL144;
    }
    cpy_r_r35 = CPyModule_os;
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL145;
    }
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'join' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL145;
    }
    PyObject *cpy_r_r40[2] = {cpy_r_r32, cpy_r_r34};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 2, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL145;
    }
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "build", 42, CPyStatic_node___globals, "str", cpy_r_r42);
        goto CPyL101;
    }
    cpy_r_r44 = CPyModule_os;
    cpy_r_r45 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL146;
    }
    cpy_r_r47 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'abspath' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL146;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_r43};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL146;
    }
    CPy_DECREF(cpy_r_r43);
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "build", 41, CPyStatic_node___globals, "str", cpy_r_r51);
        goto CPyL101;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zipfile_path != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zipfile_path);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zipfile_path = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    cpy_r_r54 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__base_dir;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "base_dir", 47, CPyStatic_node___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r54);
CPyL31: ;
    cpy_r_r55 = PyObject_Str(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    cpy_r_r56 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'datadir' */
    cpy_r_r57 = CPyModule_os;
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL147;
    }
    cpy_r_r60 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'join' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL147;
    }
    PyObject *cpy_r_r62[2] = {cpy_r_r55, cpy_r_r56};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = PyObject_Vectorcall(cpy_r_r61, cpy_r_r63, 2, 0);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL147;
    }
    CPy_DECREF(cpy_r_r55);
    if (likely(PyUnicode_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "build", 47, CPyStatic_node___globals, "str", cpy_r_r64);
        goto CPyL101;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tmp_datadir != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tmp_datadir);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tmp_datadir = cpy_r_r65;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    cpy_r_r67 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zipfile_path;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "zipfile_path", 48, CPyStatic_node___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r67);
CPyL38: ;
    cpy_r_r68 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'r' */
    cpy_r_r69 = CPyModule_zipfile;
    cpy_r_r70 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ZipFile' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL148;
    }
    PyObject *cpy_r_r72[2] = {cpy_r_r67, cpy_r_r68};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = PyObject_Vectorcall(cpy_r_r71, cpy_r_r73, 2, 0);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL148;
    }
    CPy_DECREF(cpy_r_r67);
    cpy_r_r75 = CPy_TYPE(cpy_r_r74);
    cpy_r_r76 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__exit__' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL149;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r77;
    cpy_r_r78 = 1;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL149;
    }
    cpy_r_r79 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__enter__' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r79);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL150;
    }
    PyObject *cpy_r_r81[1] = {cpy_r_r74};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = PyObject_Vectorcall(cpy_r_r80, cpy_r_r82, 1, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL150;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r74;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL151;
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = 1;
    cpy_r_r85 = 1;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL151;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zip_ref != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zip_ref);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zip_ref = cpy_r_r83;
    cpy_r_r86 = 1;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL51;
    }
    cpy_r_r87 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__zip_ref;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "zip_ref", 49, CPyStatic_node___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r87);
CPyL48: ;
    cpy_r_r88 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tmp_datadir;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "tmp_datadir", 49, CPyStatic_node___globals);
        goto CPyL152;
    }
    CPy_INCREF(cpy_r_r88);
CPyL49: ;
    cpy_r_r89 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'extractall' */
    PyObject *cpy_r_r90[2] = {cpy_r_r87, cpy_r_r88};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = PyObject_VectorcallMethod(cpy_r_r89, cpy_r_r91, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL153;
    } else
        goto CPyL154;
CPyL50: ;
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r88);
    goto CPyL65;
CPyL51: ;
    cpy_r_r93 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f2);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r93;
    cpy_r_r94 = 1;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL62;
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = 0;
    cpy_r_r95 = 1;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL62;
    }
    cpy_r_r96 = CPy_GetExcInfo();
    cpy_r_r97 = cpy_r_r96.f0;
    CPy_INCREF(cpy_r_r97);
    cpy_r_r98 = cpy_r_r96.f1;
    CPy_INCREF(cpy_r_r98);
    cpy_r_r99 = cpy_r_r96.f2;
    CPy_INCREF(cpy_r_r99);
    CPy_DecRef(cpy_r_r96.f0);
    CPy_DecRef(cpy_r_r96.f1);
    CPy_DecRef(cpy_r_r96.f2);
    cpy_r_r100 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__3", -1, CPyStatic_node___globals);
        goto CPyL155;
    }
    CPy_INCREF(cpy_r_r100);
CPyL54: ;
    cpy_r_r101 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__4", -1, CPyStatic_node___globals);
        goto CPyL156;
    }
    CPy_INCREF(cpy_r_r101);
CPyL55: ;
    PyObject *cpy_r_r102[4] = {cpy_r_r101, cpy_r_r97, cpy_r_r98, cpy_r_r99};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_Vectorcall(cpy_r_r100, cpy_r_r103, 4, 0);
    CPy_DecRef(cpy_r_r100);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL157;
    }
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r99);
    cpy_r_r105 = PyObject_IsTrue(cpy_r_r104);
    CPy_DecRef(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL62;
    }
    cpy_r_r107 = cpy_r_r105;
    if (cpy_r_r107) goto CPyL60;
    CPy_Reraise();
    if (!0) goto CPyL62;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r108 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r108.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__6", -1, CPyStatic_node___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r108.f0);
    CPy_INCREF(cpy_r_r108.f1);
    CPy_INCREF(cpy_r_r108.f2);
CPyL61: ;
    CPy_RestoreExcInfo(cpy_r_r108);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    goto CPyL65;
CPyL62: ;
    cpy_r_r109 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__6", -1, CPyStatic_node___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r109.f0);
    CPy_INCREF(cpy_r_r109.f1);
    CPy_INCREF(cpy_r_r109.f2);
CPyL63: ;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    cpy_r_r110 = CPy_KeepPropagating();
    if (!cpy_r_r110) goto CPyL66;
    CPy_Unreachable();
CPyL65: ;
    tuple_T3OOO __tmp1 = { NULL, NULL, NULL };
    cpy_r_r111 = __tmp1;
    cpy_r_r112 = cpy_r_r111;
    goto CPyL67;
CPyL66: ;
    cpy_r_r113 = CPy_CatchError();
    cpy_r_r112 = cpy_r_r113;
CPyL67: ;
    cpy_r_r114 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__5", -1, CPyStatic_node___globals);
        goto CPyL76;
    }
CPyL68: ;
    if (!cpy_r_r114) goto CPyL73;
CPyL69: ;
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r116 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__3", -1, CPyStatic_node___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r116);
CPyL70: ;
    cpy_r_r117 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__4", -1, CPyStatic_node___globals);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_r117);
CPyL71: ;
    PyObject *cpy_r_r118[4] = {cpy_r_r117, cpy_r_r115, cpy_r_r115, cpy_r_r115};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = PyObject_Vectorcall(cpy_r_r116, cpy_r_r119, 4, 0);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL159;
    } else
        goto CPyL160;
CPyL72: ;
    CPy_DECREF(cpy_r_r117);
CPyL73: ;
    if (cpy_r_r112.f0 == NULL) goto CPyL80;
    CPy_Reraise();
    if (!0) {
        goto CPyL76;
    } else
        goto CPyL161;
CPyL75: ;
    CPy_Unreachable();
CPyL76: ;
    if (cpy_r_r112.f0 == NULL) goto CPyL78;
    CPy_RestoreExcInfo(cpy_r_r112);
    CPy_XDECREF(cpy_r_r112.f0);
    CPy_XDECREF(cpy_r_r112.f1);
    CPy_XDECREF(cpy_r_r112.f2);
CPyL78: ;
    cpy_r_r121 = CPy_KeepPropagating();
    if (!cpy_r_r121) goto CPyL101;
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r122 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tmp_datadir;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "tmp_datadir", 50, CPyStatic_node___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r122);
CPyL81: ;
    cpy_r_r123 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "self", 50, CPyStatic_node___globals);
        goto CPyL162;
    }
    CPy_INCREF_NO_IMM(cpy_r_r123);
CPyL82: ;
    if (((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_r123)->_datadir != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_r123)->_datadir);
    }
    ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_r123)->_datadir = cpy_r_r122;
    cpy_r_r124 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r123);
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    cpy_r_r125 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "self", 52, CPyStatic_node___globals);
        goto CPyL101;
    }
    CPy_INCREF_NO_IMM(cpy_r_r125);
CPyL84: ;
    cpy_r_r126 = ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_r125)->_datadir;
    if (unlikely(cpy_r_r126 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'datadir' of 'GethBenchmarkFixture' undefined");
    } else {
        CPy_INCREF(cpy_r_r126);
    }
    CPy_DECREF_NO_IMM(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
CPyL85: ;
    cpy_r_r127 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'genesis.json' */
    cpy_r_r128 = CPyModule_os;
    cpy_r_r129 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r130 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL163;
    }
    cpy_r_r131 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'join' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL163;
    }
    PyObject *cpy_r_r133[2] = {cpy_r_r126, cpy_r_r127};
    cpy_r_r134 = (PyObject **)&cpy_r_r133;
    cpy_r_r135 = PyObject_Vectorcall(cpy_r_r132, cpy_r_r134, 2, 0);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL163;
    }
    CPy_DECREF(cpy_r_r126);
    if (likely(PyUnicode_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "build", 52, CPyStatic_node___globals, "str", cpy_r_r135);
        goto CPyL101;
    }
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__genesis_file != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__genesis_file);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__genesis_file = cpy_r_r136;
    cpy_r_r137 = 1;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    cpy_r_r138 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "self", 54, CPyStatic_node___globals);
        goto CPyL101;
    }
    CPy_INCREF_NO_IMM(cpy_r_r138);
CPyL91: ;
    cpy_r_r139 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "self", 54, CPyStatic_node___globals);
        goto CPyL164;
    }
    CPy_INCREF_NO_IMM(cpy_r_r139);
CPyL92: ;
    cpy_r_r140 = ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_r139)->_datadir;
    if (unlikely(cpy_r_r140 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'datadir' of 'GethBenchmarkFixture' undefined");
    } else {
        CPy_INCREF(cpy_r_r140);
    }
    CPy_DECREF_NO_IMM(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL164;
    }
CPyL93: ;
    cpy_r_r141 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__genesis_file;
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "genesis_file", 54, CPyStatic_node___globals);
        goto CPyL165;
    }
    CPy_INCREF(cpy_r_r141);
CPyL94: ;
    cpy_r_r142 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "self", 54, CPyStatic_node___globals);
        goto CPyL166;
    }
    CPy_INCREF_NO_IMM(cpy_r_r142);
CPyL95: ;
    cpy_r_r143 = ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_r142)->_rpc_port;
    if (unlikely(cpy_r_r143 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'rpc_port' of 'GethBenchmarkFixture' undefined");
    } else {
        CPy_INCREF(cpy_r_r143);
    }
    CPy_DECREF_NO_IMM(cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL166;
    }
CPyL96: ;
    cpy_r_r144 = CPyDef_node___GethBenchmarkFixture____geth_process(cpy_r_r138, cpy_r_r140, cpy_r_r141, cpy_r_r143);
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF_NO_IMM(cpy_r_r138);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r144;
CPyL98: ;
    cpy_r_r146 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r147 = cpy_r_type != cpy_r_r146;
    if (!cpy_r_r147) goto CPyL115;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL101;
    }
    CPy_Unreachable();
CPyL101: ;
    cpy_r_r148 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f2);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r148;
    cpy_r_r149 = 1;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", -1, CPyStatic_node___globals);
        goto CPyL112;
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 0;
    cpy_r_r150 = 1;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL112;
    }
    cpy_r_r151 = CPy_GetExcInfo();
    cpy_r_r152 = cpy_r_r151.f0;
    CPy_INCREF(cpy_r_r152);
    cpy_r_r153 = cpy_r_r151.f1;
    CPy_INCREF(cpy_r_r153);
    cpy_r_r154 = cpy_r_r151.f2;
    CPy_INCREF(cpy_r_r154);
    CPy_DECREF(cpy_r_r151.f0);
    CPy_DECREF(cpy_r_r151.f1);
    CPy_DECREF(cpy_r_r151.f2);
    cpy_r_r155 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__0", -1, CPyStatic_node___globals);
        goto CPyL167;
    }
    CPy_INCREF(cpy_r_r155);
CPyL104: ;
    cpy_r_r156 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__1", -1, CPyStatic_node___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r156);
CPyL105: ;
    PyObject *cpy_r_r157[4] = {cpy_r_r156, cpy_r_r152, cpy_r_r153, cpy_r_r154};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = PyObject_Vectorcall(cpy_r_r155, cpy_r_r158, 4, 0);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL169;
    }
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_r154);
    cpy_r_r160 = PyObject_IsTrue(cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL112;
    }
    cpy_r_r162 = cpy_r_r160;
    if (cpy_r_r162) goto CPyL110;
    CPy_Reraise();
    if (!0) goto CPyL112;
    CPy_Unreachable();
CPyL110: ;
    cpy_r_r163 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r163.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__7", -1, CPyStatic_node___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r163.f0);
    CPy_INCREF(cpy_r_r163.f1);
    CPy_INCREF(cpy_r_r163.f2);
CPyL111: ;
    CPy_RestoreExcInfo(cpy_r_r163);
    CPy_DECREF(cpy_r_r163.f0);
    CPy_DECREF(cpy_r_r163.f1);
    CPy_DECREF(cpy_r_r163.f2);
    goto CPyL115;
CPyL112: ;
    cpy_r_r164 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r164.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__7", -1, CPyStatic_node___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r164.f0);
    CPy_INCREF(cpy_r_r164.f1);
    CPy_INCREF(cpy_r_r164.f2);
CPyL113: ;
    CPy_RestoreExcInfo(cpy_r_r164);
    CPy_DECREF(cpy_r_r164.f0);
    CPy_DECREF(cpy_r_r164.f1);
    CPy_DECREF(cpy_r_r164.f2);
    cpy_r_r165 = CPy_KeepPropagating();
    if (!cpy_r_r165) goto CPyL116;
    CPy_Unreachable();
CPyL115: ;
    tuple_T3OOO __tmp2 = { NULL, NULL, NULL };
    cpy_r_r166 = __tmp2;
    cpy_r_r167 = cpy_r_r166;
    goto CPyL117;
CPyL116: ;
    cpy_r_r168 = CPy_CatchError();
    cpy_r_r167 = cpy_r_r168;
CPyL117: ;
    cpy_r_r169 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r169 == 2)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__2", -1, CPyStatic_node___globals);
        goto CPyL126;
    }
CPyL118: ;
    if (!cpy_r_r169) goto CPyL123;
CPyL119: ;
    cpy_r_r170 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r171 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__0", -1, CPyStatic_node___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r171);
CPyL120: ;
    cpy_r_r172 = ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "build", "build_GethBenchmarkFixture_gen", "__mypyc_temp__1", -1, CPyStatic_node___globals);
        goto CPyL170;
    }
    CPy_INCREF(cpy_r_r172);
CPyL121: ;
    PyObject *cpy_r_r173[4] = {cpy_r_r172, cpy_r_r170, cpy_r_r170, cpy_r_r170};
    cpy_r_r174 = (PyObject **)&cpy_r_r173;
    cpy_r_r175 = PyObject_Vectorcall(cpy_r_r171, cpy_r_r174, 4, 0);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL171;
    } else
        goto CPyL172;
CPyL122: ;
    CPy_DECREF(cpy_r_r172);
CPyL123: ;
    if (cpy_r_r167.f0 == NULL) goto CPyL130;
    CPy_Reraise();
    if (!0) {
        goto CPyL126;
    } else
        goto CPyL173;
CPyL125: ;
    CPy_Unreachable();
CPyL126: ;
    if (cpy_r_r167.f0 == NULL) goto CPyL128;
    CPy_RestoreExcInfo(cpy_r_r167);
    CPy_XDECREF(cpy_r_r167.f0);
    CPy_XDECREF(cpy_r_r167.f1);
    CPy_XDECREF(cpy_r_r167.f2);
CPyL128: ;
    cpy_r_r176 = CPy_KeepPropagating();
    if (!cpy_r_r176) goto CPyL139;
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r177 = Py_None;
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL134;
    CPyGen_SetStopIterationValue(cpy_r_r177);
    if (!0) goto CPyL139;
    CPy_Unreachable();
CPyL134: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r177;
    return 0;
CPyL135: ;
    cpy_r_r179 = cpy_r_r0 == 0;
    if (cpy_r_r179) goto CPyL1;
    cpy_r_r180 = cpy_r_r0 == 1;
    if (cpy_r_r180) goto CPyL98;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r181 = 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL139;
    }
    CPy_Unreachable();
CPyL139: ;
    cpy_r_r182 = NULL;
    return cpy_r_r182;
CPyL140: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL139;
CPyL141: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL139;
CPyL142: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL139;
CPyL143: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL101;
CPyL144: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL101;
CPyL145: ;
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    goto CPyL101;
CPyL146: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL101;
CPyL147: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL101;
CPyL148: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL101;
CPyL149: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    goto CPyL101;
CPyL150: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL101;
CPyL151: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL101;
CPyL152: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL51;
CPyL153: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r88);
    goto CPyL51;
CPyL154: ;
    CPy_DECREF(cpy_r_r92);
    goto CPyL50;
CPyL155: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r99);
    goto CPyL62;
CPyL156: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    goto CPyL62;
CPyL157: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r101);
    goto CPyL62;
CPyL158: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL76;
CPyL159: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL76;
CPyL160: ;
    CPy_DECREF(cpy_r_r120);
    goto CPyL72;
CPyL161: ;
    CPy_XDECREF(cpy_r_r112.f0);
    CPy_XDECREF(cpy_r_r112.f1);
    CPy_XDECREF(cpy_r_r112.f2);
    goto CPyL75;
CPyL162: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL101;
CPyL163: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL101;
CPyL164: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL101;
CPyL165: ;
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_r140);
    goto CPyL101;
CPyL166: ;
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_r140);
    CPy_DecRef(cpy_r_r141);
    goto CPyL101;
CPyL167: ;
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    goto CPyL112;
CPyL168: ;
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r155);
    goto CPyL112;
CPyL169: ;
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r156);
    goto CPyL112;
CPyL170: ;
    CPy_DecRef(cpy_r_r171);
    goto CPyL126;
CPyL171: ;
    CPy_DecRef(cpy_r_r172);
    goto CPyL126;
CPyL172: ;
    CPy_DECREF(cpy_r_r175);
    goto CPyL122;
CPyL173: ;
    CPy_XDECREF(cpy_r_r167.f0);
    CPy_XDECREF(cpy_r_r167.f1);
    CPy_XDECREF(cpy_r_r167.f2);
    goto CPyL125;
}

PyObject *CPyDef_node___build_GethBenchmarkFixture_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_node___build_GethBenchmarkFixture_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_node___build_GethBenchmarkFixture_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node___build_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.build_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___build_GethBenchmarkFixture_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__next__", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___build_GethBenchmarkFixture_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_node___build_GethBenchmarkFixture_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_node___build_GethBenchmarkFixture_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node___build_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.build_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_node___build_GethBenchmarkFixture_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "send", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___build_GethBenchmarkFixture_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_node___build_GethBenchmarkFixture_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node___build_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.build_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___build_GethBenchmarkFixture_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__iter__", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___build_GethBenchmarkFixture_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_node___build_GethBenchmarkFixture_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_node___build_GethBenchmarkFixture_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node___build_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.build_GethBenchmarkFixture_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_node___build_GethBenchmarkFixture_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "throw", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___build_GethBenchmarkFixture_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_node___build_GethBenchmarkFixture_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'StopIteration' */
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

PyObject *CPyPy_node___build_GethBenchmarkFixture_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node___build_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.build_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___build_GethBenchmarkFixture_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "close", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___GethBenchmarkFixture___build(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_node___build_GethBenchmarkFixture_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL3;
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
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

PyObject *CPyPy_node___GethBenchmarkFixture___build(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":build", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_node___GethBenchmarkFixture))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.GethBenchmarkFixture", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___GethBenchmarkFixture___build(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "build", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___GethBenchmarkFixture____rpc_port(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T2OI cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyModule_socket;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'socket' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL8;
    }
    cpy_r_r3 = PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '127.0.0.1' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5.f0 = cpy_r_r4;
    cpy_r_r5.f1 = 0;
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'bind' */
    cpy_r_r7 = PyTuple_New(2);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp5);
    PyObject *__tmp6 = CPyTagged_StealAsObject(cpy_r_r5.f1);
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp6);
    PyObject *cpy_r_r8[2] = {cpy_r_r3, cpy_r_r7};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r9, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL3: ;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'getsockname' */
    PyObject *cpy_r_r12[1] = {cpy_r_r3};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL11;
    }
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 1 */
    cpy_r_r16 = PyObject_GetItem(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL11;
    }
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'close' */
    PyObject *cpy_r_r18[1] = {cpy_r_r3};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r21 = PyObject_Str(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL8;
    }
    return cpy_r_r21;
CPyL8: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL9: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r16);
    goto CPyL8;
CPyL13: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL6;
}

PyObject *CPyPy_node___GethBenchmarkFixture____rpc_port(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_rpc_port", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_node___GethBenchmarkFixture))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.GethBenchmarkFixture", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___GethBenchmarkFixture____rpc_port(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_rpc_port", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___GethBenchmarkFixture____endpoint_uri(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'http://localhost:' */
    cpy_r_r1 = ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_rpc_port;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_endpoint_uri", "GethBenchmarkFixture", "rpc_port", 64, CPyStatic_node___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyStr_Build(2, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_endpoint_uri", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_node___GethBenchmarkFixture____endpoint_uri(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_endpoint_uri", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_node___GethBenchmarkFixture))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.GethBenchmarkFixture", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___GethBenchmarkFixture____endpoint_uri(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_endpoint_uri", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___GethBenchmarkFixture____geth_binary(PyObject *cpy_r_self) {
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
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GETH_BINARY' */
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'environ' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    cpy_r_r4 = PySequence_Contains(cpy_r_r3, cpy_r_r0);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL7;
    cpy_r_r7 = CPyModule_os;
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'environ' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GETH_BINARY' */
    cpy_r_r11 = PyObject_GetItem(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", 68, CPyStatic_node___globals, "str", cpy_r_r11);
        goto CPyL33;
    }
    return cpy_r_r12;
CPyL7: ;
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GETH_VERSION' */
    cpy_r_r14 = CPyModule_os;
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'environ' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    cpy_r_r17 = PySequence_Contains(cpy_r_r16, cpy_r_r13);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL32;
    cpy_r_r20 = CPyModule_os;
    cpy_r_r21 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'environ' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GETH_VERSION' */
    cpy_r_r24 = PyObject_GetItem(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", 70, CPyStatic_node___globals, "str", cpy_r_r24);
        goto CPyL33;
    }
    cpy_r_r26 = CPyStatic_node___globals;
    cpy_r_r27 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'get_executable_path' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL34;
    }
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", 71, CPyStatic_node___globals, "str", cpy_r_r31);
        goto CPyL34;
    }
    cpy_r_r33 = CPyModule_os;
    cpy_r_r34 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL35;
    }
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'exists' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL35;
    }
    PyObject *cpy_r_r38[1] = {cpy_r_r32};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r40))) {
        CPy_TypeError("bool", cpy_r_r40); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = cpy_r_r40 == Py_True;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL35;
    }
    if (cpy_r_r41) goto CPyL36;
    cpy_r_r42 = CPyStatic_node___globals;
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'install_geth' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL35;
    }
    PyObject *cpy_r_r45[1] = {cpy_r_r25};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 1, 0);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL35;
    } else
        goto CPyL37;
CPyL23: ;
    CPy_DECREF(cpy_r_r25);
CPyL24: ;
    cpy_r_r48 = CPyModule_os;
    cpy_r_r49 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL38;
    }
    cpy_r_r51 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'exists' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r53[1] = {cpy_r_r32};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL38;
    }
    if (unlikely(!PyBool_Check(cpy_r_r55))) {
        CPy_TypeError("bool", cpy_r_r55); cpy_r_r56 = 2;
    } else
        cpy_r_r56 = cpy_r_r55 == Py_True;
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL38;
    }
    if (cpy_r_r56) {
        goto CPyL31;
    } else
        goto CPyL39;
CPyL29: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL31: ;
    return cpy_r_r32;
CPyL32: ;
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'geth' */
    CPy_INCREF(cpy_r_r58);
    return cpy_r_r58;
CPyL33: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL34: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r32);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL24;
CPyL37: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL23;
CPyL38: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL33;
CPyL39: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL29;
}

PyObject *CPyPy_node___GethBenchmarkFixture____geth_binary(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_geth_binary", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_node___GethBenchmarkFixture))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.GethBenchmarkFixture", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___GethBenchmarkFixture____geth_binary(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_binary", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___GethBenchmarkFixture____geth_command_arguments(PyObject *cpy_r_self, PyObject *cpy_r_datadir) {
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
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T15OOOOOOOOOOOOOOO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_geth_binary;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_command_arguments", "GethBenchmarkFixture", "geth_binary", 81, CPyStatic_node___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--dev' */
    cpy_r_r2 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--dev.period' */
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '100' */
    cpy_r_r4 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--datadir' */
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--nodiscover' */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--http' */
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--http.port' */
    cpy_r_r8 = ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_self)->_rpc_port;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_command_arguments", "GethBenchmarkFixture", "rpc_port", 90, CPyStatic_node___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r8);
CPyL2: ;
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--http.api' */
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'admin,debug,eth,net,web3' */
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--ipcdisable' */
    cpy_r_r12 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--password' */
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'keystore' */
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'pw.txt' */
    cpy_r_r15 = CPyModule_os;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'path' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_command_arguments", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL9;
    }
    cpy_r_r18 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'join' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_command_arguments", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r20[3] = {cpy_r_datadir, cpy_r_r13, cpy_r_r14};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 3, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_command_arguments", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/node.py", "_geth_command_arguments", 95, CPyStatic_node___globals, "str", cpy_r_r22);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
    CPy_INCREF(cpy_r_r2);
    CPy_INCREF(cpy_r_r3);
    CPy_INCREF(cpy_r_r4);
    CPy_INCREF(cpy_r_datadir);
    CPy_INCREF(cpy_r_r5);
    CPy_INCREF(cpy_r_r6);
    CPy_INCREF(cpy_r_r7);
    CPy_INCREF(cpy_r_r9);
    CPy_INCREF(cpy_r_r10);
    CPy_INCREF(cpy_r_r11);
    CPy_INCREF(cpy_r_r12);
    cpy_r_r24.f0 = cpy_r_r0;
    cpy_r_r24.f1 = cpy_r_r1;
    cpy_r_r24.f2 = cpy_r_r2;
    cpy_r_r24.f3 = cpy_r_r3;
    cpy_r_r24.f4 = cpy_r_r4;
    cpy_r_r24.f5 = cpy_r_datadir;
    cpy_r_r24.f6 = cpy_r_r5;
    cpy_r_r24.f7 = cpy_r_r6;
    cpy_r_r24.f8 = cpy_r_r7;
    cpy_r_r24.f9 = cpy_r_r8;
    cpy_r_r24.f10 = cpy_r_r9;
    cpy_r_r24.f11 = cpy_r_r10;
    cpy_r_r24.f12 = cpy_r_r11;
    cpy_r_r24.f13 = cpy_r_r12;
    cpy_r_r24.f14 = cpy_r_r23;
    cpy_r_r25 = PyTuple_New(15);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp7);
    PyObject *__tmp8 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp8);
    PyObject *__tmp9 = cpy_r_r24.f2;
    PyTuple_SET_ITEM(cpy_r_r25, 2, __tmp9);
    PyObject *__tmp10 = cpy_r_r24.f3;
    PyTuple_SET_ITEM(cpy_r_r25, 3, __tmp10);
    PyObject *__tmp11 = cpy_r_r24.f4;
    PyTuple_SET_ITEM(cpy_r_r25, 4, __tmp11);
    PyObject *__tmp12 = cpy_r_r24.f5;
    PyTuple_SET_ITEM(cpy_r_r25, 5, __tmp12);
    PyObject *__tmp13 = cpy_r_r24.f6;
    PyTuple_SET_ITEM(cpy_r_r25, 6, __tmp13);
    PyObject *__tmp14 = cpy_r_r24.f7;
    PyTuple_SET_ITEM(cpy_r_r25, 7, __tmp14);
    PyObject *__tmp15 = cpy_r_r24.f8;
    PyTuple_SET_ITEM(cpy_r_r25, 8, __tmp15);
    PyObject *__tmp16 = cpy_r_r24.f9;
    PyTuple_SET_ITEM(cpy_r_r25, 9, __tmp16);
    PyObject *__tmp17 = cpy_r_r24.f10;
    PyTuple_SET_ITEM(cpy_r_r25, 10, __tmp17);
    PyObject *__tmp18 = cpy_r_r24.f11;
    PyTuple_SET_ITEM(cpy_r_r25, 11, __tmp18);
    PyObject *__tmp19 = cpy_r_r24.f12;
    PyTuple_SET_ITEM(cpy_r_r25, 12, __tmp19);
    PyObject *__tmp20 = cpy_r_r24.f13;
    PyTuple_SET_ITEM(cpy_r_r25, 13, __tmp20);
    PyObject *__tmp21 = cpy_r_r24.f14;
    PyTuple_SET_ITEM(cpy_r_r25, 14, __tmp21);
    return cpy_r_r25;
CPyL7: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL7;
}

PyObject *CPyPy_node___GethBenchmarkFixture____geth_command_arguments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"datadir", 0};
    static CPyArg_Parser parser = {"O:_geth_command_arguments", kwlist, 0};
    PyObject *obj_datadir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_datadir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_node___GethBenchmarkFixture))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.GethBenchmarkFixture", obj_self); 
        goto fail;
    }
    PyObject *arg_datadir;
    if (likely(PyUnicode_Check(obj_datadir)))
        arg_datadir = obj_datadir;
    else {
        CPy_TypeError("str", obj_datadir); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___GethBenchmarkFixture____geth_command_arguments(arg_self, arg_datadir);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_command_arguments", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
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
    PyObject *cpy_r_r10;
    tuple_T5OOOOO cpy_r_r11;
    char cpy_r_r12;
    tuple_T5OOOOO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    tuple_T3OOO cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    cpy_r_r0 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL51;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_type != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "self", 102, CPyStatic_node___globals);
        goto CPyL55;
    }
    CPy_INCREF_NO_IMM(cpy_r_r3);
CPyL5: ;
    cpy_r_r4 = ((faster_web3___tools___benchmark___node___GethBenchmarkFixtureObject *)cpy_r_r3)->_geth_binary;
    if (unlikely(cpy_r_r4 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'geth_binary' of 'GethBenchmarkFixture' undefined");
    } else {
        CPy_INCREF(cpy_r_r4);
    }
    CPy_DECREF_NO_IMM(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL55;
    }
CPyL6: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '--datadir' */
    cpy_r_r6 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__datadir;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "datadir", 104, CPyStatic_node___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = PyObject_Str(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL56;
    }
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'init' */
    cpy_r_r9 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__genesis_file;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "genesis_file", 106, CPyStatic_node___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r9);
CPyL9: ;
    cpy_r_r10 = PyObject_Str(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r5);
    CPy_INCREF(cpy_r_r8);
    cpy_r_r11.f0 = cpy_r_r4;
    cpy_r_r11.f1 = cpy_r_r5;
    cpy_r_r11.f2 = cpy_r_r7;
    cpy_r_r11.f3 = cpy_r_r8;
    cpy_r_r11.f4 = cpy_r_r10;
    if (((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command.f2);
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command.f3);
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command.f4);
    }
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL55;
    }
    cpy_r_r13 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__init_datadir_command;
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "init_datadir_command", 109, CPyStatic_node___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r13.f0);
    CPy_INCREF(cpy_r_r13.f1);
    CPy_INCREF(cpy_r_r13.f2);
    CPy_INCREF(cpy_r_r13.f3);
    CPy_INCREF(cpy_r_r13.f4);
CPyL12: ;
    cpy_r_r14 = CPyStatic_node___globals;
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'PIPE' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL58;
    }
    if (likely(PyLong_Check(cpy_r_r16)))
        cpy_r_r17 = CPyTagged_FromObject(cpy_r_r16);
    else {
        CPy_TypeError("int", cpy_r_r16); cpy_r_r17 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL58;
    }
    cpy_r_r18 = CPyStatic_node___globals;
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'PIPE' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL59;
    }
    if (likely(PyLong_Check(cpy_r_r20)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_r20);
    else {
        CPy_TypeError("int", cpy_r_r20); cpy_r_r21 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL59;
    }
    cpy_r_r22 = CPyStatic_node___globals;
    cpy_r_r23 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'check_output' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL60;
    }
    cpy_r_r25 = PyTuple_New(5);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp22 = cpy_r_r13.f0;
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp22);
    PyObject *__tmp23 = cpy_r_r13.f1;
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp23);
    PyObject *__tmp24 = cpy_r_r13.f2;
    PyTuple_SET_ITEM(cpy_r_r25, 2, __tmp24);
    PyObject *__tmp25 = cpy_r_r13.f3;
    PyTuple_SET_ITEM(cpy_r_r25, 3, __tmp25);
    PyObject *__tmp26 = cpy_r_r13.f4;
    PyTuple_SET_ITEM(cpy_r_r25, 4, __tmp26);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r17);
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r21);
    PyObject *cpy_r_r28[3] = {cpy_r_r25, cpy_r_r26, cpy_r_r27};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('stdin', 'stderr') */
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r24, cpy_r_r29, 1, cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL61;
    } else
        goto CPyL62;
CPyL18: ;
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r32 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "self", 114, CPyStatic_node___globals);
        goto CPyL55;
    }
    CPy_INCREF_NO_IMM(cpy_r_r32);
CPyL19: ;
    cpy_r_r33 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__datadir;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "datadir", 114, CPyStatic_node___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r33);
CPyL20: ;
    cpy_r_r34 = CPyDef_node___GethBenchmarkFixture____geth_command_arguments(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF_NO_IMM(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL55;
    }
    cpy_r_r35 = CPyStatic_node___globals;
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'PIPE' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL64;
    }
    if (likely(PyLong_Check(cpy_r_r37)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_r37);
    else {
        CPy_TypeError("int", cpy_r_r37); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL64;
    }
    cpy_r_r39 = CPyStatic_node___globals;
    cpy_r_r40 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'PIPE' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL65;
    }
    if (likely(PyLong_Check(cpy_r_r41)))
        cpy_r_r42 = CPyTagged_FromObject(cpy_r_r41);
    else {
        CPy_TypeError("int", cpy_r_r41); cpy_r_r42 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL65;
    }
    cpy_r_r43 = CPyStatic_node___globals;
    cpy_r_r44 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'PIPE' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL66;
    }
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45); cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL66;
    }
    cpy_r_r47 = CPyStatic_node___globals;
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Popen' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL67;
    }
    cpy_r_r50 = CPyTagged_StealAsObject(cpy_r_r38);
    cpy_r_r51 = CPyTagged_StealAsObject(cpy_r_r42);
    cpy_r_r52 = CPyTagged_StealAsObject(cpy_r_r46);
    PyObject *cpy_r_r53[4] = {cpy_r_r34, cpy_r_r50, cpy_r_r51, cpy_r_r52};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('stdin', 'stdout', 'stderr') */
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r54, 1, cpy_r_r55);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r52);
    if (((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__proc != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__proc);
    }
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__proc = cpy_r_r56;
    cpy_r_r57 = 1;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL55;
    }
    cpy_r_r58 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__proc;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "proc", 120, CPyStatic_node___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r58);
CPyL31: ;
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r58;
CPyL32: ;
    cpy_r_r60 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r61 = cpy_r_type != cpy_r_r60;
    if (!cpy_r_r61) goto CPyL35;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL35: ;
    tuple_T3OOO __tmp27 = { NULL, NULL, NULL };
    cpy_r_r62 = __tmp27;
    cpy_r_r63 = cpy_r_r62;
    goto CPyL37;
CPyL36: ;
    cpy_r_r64 = CPy_CatchError();
    cpy_r_r63 = cpy_r_r64;
CPyL37: ;
    cpy_r_r65 = ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__proc;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/node.py", "_geth_process", "_geth_process_GethBenchmarkFixture_gen", "proc", 122, CPyStatic_node___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r65);
CPyL38: ;
    cpy_r_r66 = CPyDef_utils___kill_proc_gracefully(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL42;
    }
    if (cpy_r_r63.f0 == NULL) goto CPyL46;
    CPy_Reraise();
    if (!0) {
        goto CPyL42;
    } else
        goto CPyL69;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    if (cpy_r_r63.f0 == NULL) goto CPyL44;
    CPy_RestoreExcInfo(cpy_r_r63);
    CPy_XDECREF(cpy_r_r63.f0);
    CPy_XDECREF(cpy_r_r63.f1);
    CPy_XDECREF(cpy_r_r63.f2);
CPyL44: ;
    cpy_r_r67 = CPy_KeepPropagating();
    if (!cpy_r_r67) goto CPyL55;
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r68 = Py_None;
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL50;
    CPyGen_SetStopIterationValue(cpy_r_r68);
    if (!0) goto CPyL55;
    CPy_Unreachable();
CPyL50: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r68;
    return 0;
CPyL51: ;
    cpy_r_r70 = cpy_r_r0 == 0;
    if (cpy_r_r70) goto CPyL1;
    cpy_r_r71 = cpy_r_r0 == 1;
    if (cpy_r_r71) goto CPyL32;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r73 = NULL;
    return cpy_r_r73;
CPyL56: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL55;
CPyL57: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL55;
CPyL58: ;
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    CPy_DecRef(cpy_r_r13.f3);
    CPy_DecRef(cpy_r_r13.f4);
    goto CPyL55;
CPyL59: ;
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    CPy_DecRef(cpy_r_r13.f3);
    CPy_DecRef(cpy_r_r13.f4);
    CPyTagged_DecRef(cpy_r_r17);
    goto CPyL55;
CPyL60: ;
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    CPy_DecRef(cpy_r_r13.f3);
    CPy_DecRef(cpy_r_r13.f4);
    CPyTagged_DecRef(cpy_r_r17);
    CPyTagged_DecRef(cpy_r_r21);
    goto CPyL55;
CPyL61: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    goto CPyL55;
CPyL62: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL18;
CPyL63: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL55;
CPyL64: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL55;
CPyL65: ;
    CPy_DecRef(cpy_r_r34);
    CPyTagged_DecRef(cpy_r_r38);
    goto CPyL55;
CPyL66: ;
    CPy_DecRef(cpy_r_r34);
    CPyTagged_DecRef(cpy_r_r38);
    CPyTagged_DecRef(cpy_r_r42);
    goto CPyL55;
CPyL67: ;
    CPy_DecRef(cpy_r_r34);
    CPyTagged_DecRef(cpy_r_r38);
    CPyTagged_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_r46);
    goto CPyL55;
CPyL68: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL55;
CPyL69: ;
    CPy_XDECREF(cpy_r_r63.f0);
    CPy_XDECREF(cpy_r_r63.f1);
    CPy_XDECREF(cpy_r_r63.f2);
    goto CPyL41;
}

PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_node____geth_process_GethBenchmarkFixture_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node____geth_process_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node._geth_process_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_node____geth_process_GethBenchmarkFixture_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__next__", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_node____geth_process_GethBenchmarkFixture_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node____geth_process_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node._geth_process_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_node____geth_process_GethBenchmarkFixture_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "send", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node____geth_process_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node._geth_process_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_node____geth_process_GethBenchmarkFixture_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "__iter__", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_node____geth_process_GethBenchmarkFixture_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node____geth_process_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node._geth_process_GethBenchmarkFixture_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_node____geth_process_GethBenchmarkFixture_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "throw", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_node____geth_process_GethBenchmarkFixture_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp28 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp28);
    PyObject *__tmp29 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp29);
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

PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_node____geth_process_GethBenchmarkFixture_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node._geth_process_GethBenchmarkFixture_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_node____geth_process_GethBenchmarkFixture_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "close", -1, CPyStatic_node___globals);
    return NULL;
}

PyObject *CPyDef_node___GethBenchmarkFixture____geth_process(PyObject *cpy_r_self, PyObject *cpy_r_datadir, PyObject *cpy_r_genesis_file, PyObject *cpy_r_rpc_port) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_node____geth_process_GethBenchmarkFixture_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL6;
    }
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_datadir);
    if (((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__datadir != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__datadir);
    }
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__datadir = cpy_r_datadir;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_genesis_file);
    if (((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__genesis_file != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__genesis_file);
    }
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__genesis_file = cpy_r_genesis_file;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_rpc_port);
    if (((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__rpc_port != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__rpc_port);
    }
    ((faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *)cpy_r_r0)->___mypyc_generator_attribute__rpc_port = cpy_r_rpc_port;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
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

PyObject *CPyPy_node___GethBenchmarkFixture____geth_process(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"datadir", "genesis_file", "rpc_port", 0};
    static CPyArg_Parser parser = {"OOO:_geth_process", kwlist, 0};
    PyObject *obj_datadir;
    PyObject *obj_genesis_file;
    PyObject *obj_rpc_port;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_datadir, &obj_genesis_file, &obj_rpc_port)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_node___GethBenchmarkFixture))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.node.GethBenchmarkFixture", obj_self); 
        goto fail;
    }
    PyObject *arg_datadir;
    if (likely(PyUnicode_Check(obj_datadir)))
        arg_datadir = obj_datadir;
    else {
        CPy_TypeError("str", obj_datadir); 
        goto fail;
    }
    PyObject *arg_genesis_file;
    if (likely(PyUnicode_Check(obj_genesis_file)))
        arg_genesis_file = obj_genesis_file;
    else {
        CPy_TypeError("str", obj_genesis_file); 
        goto fail;
    }
    PyObject *arg_rpc_port;
    if (likely(PyUnicode_Check(obj_rpc_port)))
        arg_rpc_port = obj_rpc_port;
    else {
        CPy_TypeError("str", obj_rpc_port); 
        goto fail;
    }
    PyObject *retval = CPyDef_node___GethBenchmarkFixture____geth_process(arg_self, arg_datadir, arg_genesis_file, arg_rpc_port);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "_geth_process", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
    return NULL;
}

char CPyDef_node_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    void *cpy_r_r8;
    void *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
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
    PyObject **cpy_r_r28;
    void *cpy_r_r30;
    void *cpy_r_r32;
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
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", -1, CPyStatic_node___globals);
        goto CPyL17;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_os;
    cpy_r_r6 = (PyObject **)&CPyModule_socket;
    PyObject **cpy_r_r7[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r8 = (void *)&cpy_r_r7;
    int64_t cpy_r_r9[2] = {1, 2};
    cpy_r_r10 = (void *)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('os', 'os', 'os'), ('socket', 'socket', 'socket')) */
    cpy_r_r12 = CPyStatic_node___globals;
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_web3/tools/benchmark/node.py' */
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL17;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('PIPE', 'Popen', 'check_output') */
    cpy_r_r17 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'subprocess' */
    cpy_r_r18 = CPyStatic_node___globals;
    cpy_r_r19 = CPyImport_ImportFromMany(cpy_r_r17, cpy_r_r16, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    CPyModule_subprocess = cpy_r_r19;
    CPy_INCREF(CPyModule_subprocess);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r20 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('TemporaryDirectory',) */
    cpy_r_r21 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'tempfile' */
    cpy_r_r22 = CPyStatic_node___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    CPyModule_tempfile = cpy_r_r23;
    CPy_INCREF(CPyModule_tempfile);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Any', 'Final', 'Generator', 'Sequence', 'final') */
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r26 = CPyStatic_node___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    CPyModule_typing = cpy_r_r27;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = (PyObject **)&CPyModule_zipfile;
    PyObject **cpy_r_r29[1] = {cpy_r_r28};
    cpy_r_r30 = (void *)&cpy_r_r29;
    int64_t cpy_r_r31[1] = {18};
    cpy_r_r32 = (void *)&cpy_r_r31;
    cpy_r_r33 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('zipfile', 'zipfile', 'zipfile'),) */
    cpy_r_r34 = CPyStatic_node___globals;
    cpy_r_r35 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_web3/tools/benchmark/node.py' */
    cpy_r_r36 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r37 = CPyImport_ImportMany(cpy_r_r33, cpy_r_r30, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r32);
    if (!cpy_r_r37) goto CPyL17;
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('get_executable_path', 'install_geth') */
    cpy_r_r39 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'geth.install' */
    cpy_r_r40 = CPyStatic_node___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    CPyModule_geth___install = cpy_r_r41;
    CPy_INCREF(CPyModule_geth___install);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('kill_proc_gracefully',) */
    cpy_r_r43 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_web3.tools.benchmark.utils' */
    cpy_r_r44 = CPyStatic_node___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    CPyModule_faster_web3___tools___benchmark___utils = cpy_r_r45;
    CPy_INCREF(CPyModule_faster_web3___tools___benchmark___utils);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'geth-1.16.2-fixture.zip' */
    cpy_r_r47 = CPyStatic_node___globals;
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GETH_FIXTURE_ZIP' */
    cpy_r_r49 = CPyDict_SetItem(cpy_r_r47, cpy_r_r48, cpy_r_r46);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_web3.tools.benchmark.node' */
    cpy_r_r53 = (PyObject *)CPyType_node___GethBenchmarkFixture_template;
    cpy_r_r54 = CPyType_FromTemplate(cpy_r_r53, cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    cpy_r_r55 = CPyDef_node___GethBenchmarkFixture_trait_vtable_setup();
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", -1, CPyStatic_node___globals);
        goto CPyL18;
    }
    cpy_r_r56 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__mypyc_attrs__' */
    cpy_r_r57 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'rpc_port' */
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'endpoint_uri' */
    cpy_r_r59 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'geth_binary' */
    cpy_r_r60 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'datadir' */
    cpy_r_r61 = PyTuple_Pack(4, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL18;
    }
    cpy_r_r62 = PyObject_SetAttr(cpy_r_r54, cpy_r_r56, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL18;
    }
    CPyType_node___GethBenchmarkFixture = (PyTypeObject *)cpy_r_r54;
    CPy_INCREF(CPyType_node___GethBenchmarkFixture);
    cpy_r_r64 = CPyStatic_node___globals;
    cpy_r_r65 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GethBenchmarkFixture' */
    cpy_r_r66 = PyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/node.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_node___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r68 = 2;
    return cpy_r_r68;
CPyL18: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL17;
}
static PyMethodDef reportingmodule_methods[] = {
    {"print_header", (PyCFunction)CPyPy_reporting___print_header, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("print_header(logger, num_calls)\n--\n\n") /* docstring */},
    {"print_entry", (PyCFunction)CPyPy_reporting___print_entry, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("print_entry(logger, method_benchmarks)\n--\n\n") /* docstring */},
    {"print_footer", (PyCFunction)CPyPy_reporting___print_footer, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("print_footer(logger)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___tools___benchmark___reporting(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___tools___benchmark___reporting__internal, "__name__");
    CPyStatic_reporting___globals = PyModule_GetDict(CPyModule_faster_web3___tools___benchmark___reporting__internal);
    if (unlikely(CPyStatic_reporting___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_reporting_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___tools___benchmark___reporting__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef reportingmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.tools.benchmark.reporting",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    reportingmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___tools___benchmark___reporting(void)
{
    if (CPyModule_faster_web3___tools___benchmark___reporting__internal) {
        Py_INCREF(CPyModule_faster_web3___tools___benchmark___reporting__internal);
        return CPyModule_faster_web3___tools___benchmark___reporting__internal;
    }
    CPyModule_faster_web3___tools___benchmark___reporting__internal = PyModule_Create(&reportingmodule);
    if (unlikely(CPyModule_faster_web3___tools___benchmark___reporting__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___tools___benchmark___reporting(CPyModule_faster_web3___tools___benchmark___reporting__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___tools___benchmark___reporting__internal;
    fail:
    return NULL;
}

char CPyDef_reporting___print_header(PyObject *cpy_r_logger, CPyTagged cpy_r_num_calls) {
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
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '|{:^26}|{:^20}|{:^20}|{:^20}|{:^20}|' */
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'Method (' */
    cpy_r_r2 = CPyTagged_Str(cpy_r_num_calls);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_header", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL7;
    }
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ' calls)' */
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_header", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HTTPProvider' */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'AsyncHTTProvider' */
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'IPCProvider' */
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'WebSocketProvider' */
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'format' */
    PyObject *cpy_r_r10[6] = {cpy_r_r0, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775814ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_header", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL8;
    }
    CPy_DECREF(cpy_r_r4);
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/reporting.py", "print_header", 12, CPyStatic_reporting___globals, "str", cpy_r_r12);
        goto CPyL7;
    }
    cpy_r_r14 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'info' */
    PyObject *cpy_r_r15[2] = {cpy_r_logger, cpy_r_r13};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r16, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_header", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL5: ;
    CPy_DECREF(cpy_r_r13);
    cpy_r_r18 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '----------------------------------------------------------------------------------------------------------------' */
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'info' */
    PyObject *cpy_r_r20[2] = {cpy_r_logger, cpy_r_r18};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_VectorcallMethod(cpy_r_r19, cpy_r_r21, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_header", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL7;
    } else
        goto CPyL11;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL8: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL7;
CPyL10: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL5;
CPyL11: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL6;
}

PyObject *CPyPy_reporting___print_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"logger", "num_calls", 0};
    static CPyArg_Parser parser = {"OO:print_header", kwlist, 0};
    PyObject *obj_logger;
    PyObject *obj_num_calls;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_logger, &obj_num_calls)) {
        return NULL;
    }
    PyObject *arg_logger = obj_logger;
    CPyTagged arg_num_calls;
    if (likely(PyLong_Check(obj_num_calls)))
        arg_num_calls = CPyTagged_BorrowFromObject(obj_num_calls);
    else {
        CPy_TypeError("int", obj_num_calls); goto fail;
    }
    char retval = CPyDef_reporting___print_header(arg_logger, arg_num_calls);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_header", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
    return NULL;
}

char CPyDef_reporting___print_entry(PyObject *cpy_r_logger, PyObject *cpy_r_method_benchmarks) {
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
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '|{:^26}|{:^20.10}|{:^20.10}|{:^20.10}|{:^20.10}|' */
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'name' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_method_benchmarks, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL9;
    }
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'HTTPProvider' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_method_benchmarks, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'AsyncHTTPProvider' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_method_benchmarks, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL11;
    }
    cpy_r_r7 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'IPCProvider' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_method_benchmarks, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL12;
    }
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'WebSocketProvider' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_method_benchmarks, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL13;
    }
    cpy_r_r11 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'format' */
    PyObject *cpy_r_r12[6] = {cpy_r_r0, cpy_r_r2, cpy_r_r4, cpy_r_r6, cpy_r_r8, cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775814ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", 28, CPyStatic_reporting___globals, "str", cpy_r_r14);
        goto CPyL9;
    }
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'info' */
    PyObject *cpy_r_r17[2] = {cpy_r_logger, cpy_r_r15};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL8: ;
    CPy_DECREF(cpy_r_r15);
    return 1;
CPyL9: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    goto CPyL9;
CPyL15: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL9;
CPyL16: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL8;
}

PyObject *CPyPy_reporting___print_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"logger", "method_benchmarks", 0};
    static CPyArg_Parser parser = {"OO:print_entry", kwlist, 0};
    PyObject *obj_logger;
    PyObject *obj_method_benchmarks;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_logger, &obj_method_benchmarks)) {
        return NULL;
    }
    PyObject *arg_logger = obj_logger;
    PyObject *arg_method_benchmarks;
    if (likely(PyDict_Check(obj_method_benchmarks)))
        arg_method_benchmarks = obj_method_benchmarks;
    else {
        CPy_TypeError("dict", obj_method_benchmarks); 
        goto fail;
    }
    char retval = CPyDef_reporting___print_entry(arg_logger, arg_method_benchmarks);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_entry", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
    return NULL;
}

char CPyDef_reporting___print_footer(PyObject *cpy_r_logger) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '----------------------------------------------------------------------------------------------------------------' */
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'info' */
    PyObject *cpy_r_r2[2] = {cpy_r_logger, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_footer", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL2;
    } else
        goto CPyL3;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL3: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL1;
}

PyObject *CPyPy_reporting___print_footer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"logger", 0};
    static CPyArg_Parser parser = {"O:print_footer", kwlist, 0};
    PyObject *obj_logger;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_logger)) {
        return NULL;
    }
    PyObject *arg_logger = obj_logger;
    char retval = CPyDef_reporting___print_footer(arg_logger);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "print_footer", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
    return NULL;
}

char CPyDef_reporting_____top_level__(void) {
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
    char cpy_r_r13;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "<module>", -1, CPyStatic_reporting___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Logger',) */
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'logging' */
    cpy_r_r7 = CPyStatic_reporting___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL6;
    }
    CPyModule_logging = cpy_r_r8;
    CPy_INCREF(CPyModule_logging);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Any', 'Dict') */
    cpy_r_r10 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r11 = CPyStatic_reporting___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/reporting.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_reporting___globals);
        goto CPyL6;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL6: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}

static PyAsyncMethods utils___wait_for_aiohttp_gen_as_async = {
    .am_await = CPyDef_utils___wait_for_aiohttp_gen_____await__,
};
PyObject *CPyDef_utils_____mypyc__wait_for_aiohttp_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_utils___wait_for_aiohttp_gen(void);

static PyObject *
utils___wait_for_aiohttp_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_utils___wait_for_aiohttp_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_utils_____mypyc__wait_for_aiohttp_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
utils___wait_for_aiohttp_gen_traverse(faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__endpoint_uri);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__timeout)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__timeout));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4.f0);
    Py_VISIT(self->___mypyc_temp__4.f1);
    Py_VISIT(self->___mypyc_temp__4.f2);
    Py_VISIT(self->___mypyc_generator_attribute__session);
    Py_VISIT(self->___mypyc_temp__5);
    Py_VISIT(self->___mypyc_temp__6.f0);
    Py_VISIT(self->___mypyc_temp__6.f1);
    Py_VISIT(self->___mypyc_temp__6.f2);
    Py_VISIT(self->___mypyc_temp__7.f0);
    Py_VISIT(self->___mypyc_temp__7.f1);
    Py_VISIT(self->___mypyc_temp__7.f2);
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__9.f0);
    Py_VISIT(self->___mypyc_temp__9.f1);
    Py_VISIT(self->___mypyc_temp__9.f2);
    Py_VISIT(self->___mypyc_temp__10);
    Py_VISIT(self->___mypyc_temp__11.f0);
    Py_VISIT(self->___mypyc_temp__11.f1);
    Py_VISIT(self->___mypyc_temp__11.f2);
    Py_VISIT(self->___mypyc_temp__12.f0);
    Py_VISIT(self->___mypyc_temp__12.f1);
    Py_VISIT(self->___mypyc_temp__12.f2);
    Py_VISIT(self->___mypyc_temp__13);
    Py_VISIT(self->___mypyc_temp__14.f0);
    Py_VISIT(self->___mypyc_temp__14.f1);
    Py_VISIT(self->___mypyc_temp__14.f2);
    return 0;
}

static int
utils___wait_for_aiohttp_gen_clear(faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__endpoint_uri);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__timeout)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__timeout;
        self->___mypyc_generator_attribute__timeout = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4.f0);
    Py_CLEAR(self->___mypyc_temp__4.f1);
    Py_CLEAR(self->___mypyc_temp__4.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__session);
    Py_CLEAR(self->___mypyc_temp__5);
    Py_CLEAR(self->___mypyc_temp__6.f0);
    Py_CLEAR(self->___mypyc_temp__6.f1);
    Py_CLEAR(self->___mypyc_temp__6.f2);
    Py_CLEAR(self->___mypyc_temp__7.f0);
    Py_CLEAR(self->___mypyc_temp__7.f1);
    Py_CLEAR(self->___mypyc_temp__7.f2);
    Py_CLEAR(self->___mypyc_temp__8);
    Py_CLEAR(self->___mypyc_temp__9.f0);
    Py_CLEAR(self->___mypyc_temp__9.f1);
    Py_CLEAR(self->___mypyc_temp__9.f2);
    Py_CLEAR(self->___mypyc_temp__10);
    Py_CLEAR(self->___mypyc_temp__11.f0);
    Py_CLEAR(self->___mypyc_temp__11.f1);
    Py_CLEAR(self->___mypyc_temp__11.f2);
    Py_CLEAR(self->___mypyc_temp__12.f0);
    Py_CLEAR(self->___mypyc_temp__12.f1);
    Py_CLEAR(self->___mypyc_temp__12.f2);
    Py_CLEAR(self->___mypyc_temp__13);
    Py_CLEAR(self->___mypyc_temp__14.f0);
    Py_CLEAR(self->___mypyc_temp__14.f1);
    Py_CLEAR(self->___mypyc_temp__14.f2);
    return 0;
}

static void
utils___wait_for_aiohttp_gen_dealloc(faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (utils___wait_for_aiohttp_gen_free_instance == NULL) {
        utils___wait_for_aiohttp_gen_free_instance = self;
        self->bitmap = 0;
        Py_CLEAR(self->___mypyc_generator_attribute__endpoint_uri);
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__timeout)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__timeout;
            self->___mypyc_generator_attribute__timeout = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__timeout = CPY_INT_TAG;
        }
        self->___mypyc_next_label__ = -113;
        self->___mypyc_generator_attribute__timeout_at = -113.0;
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1);
        self->___mypyc_temp__2 = 2;
        Py_CLEAR(self->___mypyc_temp__3);
        Py_CLEAR(self->___mypyc_temp__4.f0);
        Py_CLEAR(self->___mypyc_temp__4.f1);
        Py_CLEAR(self->___mypyc_temp__4.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__session);
        Py_CLEAR(self->___mypyc_temp__5);
        Py_CLEAR(self->___mypyc_temp__6.f0);
        Py_CLEAR(self->___mypyc_temp__6.f1);
        Py_CLEAR(self->___mypyc_temp__6.f2);
        Py_CLEAR(self->___mypyc_temp__7.f0);
        Py_CLEAR(self->___mypyc_temp__7.f1);
        Py_CLEAR(self->___mypyc_temp__7.f2);
        Py_CLEAR(self->___mypyc_temp__8);
        Py_CLEAR(self->___mypyc_temp__9.f0);
        Py_CLEAR(self->___mypyc_temp__9.f1);
        Py_CLEAR(self->___mypyc_temp__9.f2);
        Py_CLEAR(self->___mypyc_temp__10);
        Py_CLEAR(self->___mypyc_temp__11.f0);
        Py_CLEAR(self->___mypyc_temp__11.f1);
        Py_CLEAR(self->___mypyc_temp__11.f2);
        Py_CLEAR(self->___mypyc_temp__12.f0);
        Py_CLEAR(self->___mypyc_temp__12.f1);
        Py_CLEAR(self->___mypyc_temp__12.f2);
        Py_CLEAR(self->___mypyc_temp__13);
        Py_CLEAR(self->___mypyc_temp__14.f0);
        Py_CLEAR(self->___mypyc_temp__14.f1);
        Py_CLEAR(self->___mypyc_temp__14.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, utils___wait_for_aiohttp_gen_dealloc)
    utils___wait_for_aiohttp_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem utils___wait_for_aiohttp_gen_vtable[7];
static bool
CPyDef_utils___wait_for_aiohttp_gen_trait_vtable_setup(void)
{
    CPyVTableItem utils___wait_for_aiohttp_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_utils___wait_for_aiohttp_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_utils___wait_for_aiohttp_gen_____next__,
        (CPyVTableItem)CPyDef_utils___wait_for_aiohttp_gen___send,
        (CPyVTableItem)CPyDef_utils___wait_for_aiohttp_gen_____iter__,
        (CPyVTableItem)CPyDef_utils___wait_for_aiohttp_gen___throw,
        (CPyVTableItem)CPyDef_utils___wait_for_aiohttp_gen___close,
        (CPyVTableItem)CPyDef_utils___wait_for_aiohttp_gen_____await__,
    };
    memcpy(utils___wait_for_aiohttp_gen_vtable, utils___wait_for_aiohttp_gen_vtable_scratch, sizeof(utils___wait_for_aiohttp_gen_vtable));
    return 1;
}

static PyMethodDef utils___wait_for_aiohttp_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_utils___wait_for_aiohttp_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_utils___wait_for_aiohttp_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_utils___wait_for_aiohttp_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_utils___wait_for_aiohttp_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_utils___wait_for_aiohttp_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_utils___wait_for_aiohttp_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_utils___wait_for_aiohttp_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wait_for_aiohttp_gen",
    .tp_new = utils___wait_for_aiohttp_gen_new,
    .tp_dealloc = (destructor)utils___wait_for_aiohttp_gen_dealloc,
    .tp_traverse = (traverseproc)utils___wait_for_aiohttp_gen_traverse,
    .tp_clear = (inquiry)utils___wait_for_aiohttp_gen_clear,
    .tp_methods = utils___wait_for_aiohttp_gen_methods,
    .tp_iter = CPyDef_utils___wait_for_aiohttp_gen_____iter__,
    .tp_iternext = CPyDef_utils___wait_for_aiohttp_gen_____next__,
    .tp_as_async = &utils___wait_for_aiohttp_gen_as_async,
    .tp_basicsize = sizeof(faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("wait_for_aiohttp_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_utils___wait_for_aiohttp_gen_template = &CPyType_utils___wait_for_aiohttp_gen_template_;

PyObject *CPyDef_utils_____mypyc__wait_for_aiohttp_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *self;
    if (utils___wait_for_aiohttp_gen_free_instance != NULL) {
        self = utils___wait_for_aiohttp_gen_free_instance;
        utils___wait_for_aiohttp_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = utils___wait_for_aiohttp_gen_vtable;
    self->bitmap = 0;
    self->___mypyc_generator_attribute__timeout = CPY_INT_TAG;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_generator_attribute__timeout_at = -113.0;
    self->___mypyc_temp__2 = 2;
    self->___mypyc_temp__4 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__6 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__7 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__9 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__11 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__12 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__14 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen(void)
{
    PyObject *self = CPyDef_utils_____mypyc__wait_for_aiohttp_gen_setup((PyObject *)CPyType_utils___wait_for_aiohttp_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef utilsmodule_methods[] = {
    {"wait_for_socket", (PyCFunction)CPyPy_utils___wait_for_socket, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("wait_for_socket(ipc_path, timeout=30)\n--\n\n") /* docstring */},
    {"wait_for_http", (PyCFunction)CPyPy_utils___wait_for_http, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("wait_for_http(endpoint_uri, timeout=60)\n--\n\n") /* docstring */},
    {"wait_for_aiohttp", (PyCFunction)CPyPy_utils___wait_for_aiohttp, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("wait_for_aiohttp(endpoint_uri, timeout=60)\n--\n\n") /* docstring */},
    {"wait_for_popen", (PyCFunction)CPyPy_utils___wait_for_popen, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("wait_for_popen(proc, timeout)\n--\n\n") /* docstring */},
    {"kill_proc_gracefully", (PyCFunction)CPyPy_utils___kill_proc_gracefully, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("kill_proc_gracefully(proc)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3___tools___benchmark___utils(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3___tools___benchmark___utils__internal, "__name__");
    CPyStatic_utils___globals = PyModule_GetDict(CPyModule_faster_web3___tools___benchmark___utils__internal);
    if (unlikely(CPyStatic_utils___globals == NULL))
        goto fail;
    CPyType_utils___wait_for_aiohttp_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_utils___wait_for_aiohttp_gen_template, NULL, modname);
    if (unlikely(!CPyType_utils___wait_for_aiohttp_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_utils_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3___tools___benchmark___utils__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_utils___aiosleep);
    CPyStatic_utils___aiosleep = NULL;
    CPy_XDECREF(CPyStatic_utils___socket);
    CPyStatic_utils___socket = NULL;
    CPy_XDECREF(CPyStatic_utils___AF_UNIX);
    CPyStatic_utils___AF_UNIX = NULL;
    CPy_XDECREF(CPyStatic_utils___SOCK_STREAM);
    CPyStatic_utils___SOCK_STREAM = NULL;
    CPy_XDECREF(CPyStatic_utils___time);
    CPyStatic_utils___time = NULL;
    CPy_XDECREF(CPyStatic_utils___sleep);
    CPyStatic_utils___sleep = NULL;
    Py_CLEAR(CPyType_utils___wait_for_aiohttp_gen);
    return -1;
}
static struct PyModuleDef utilsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3.tools.benchmark.utils",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    utilsmodule_methods,
    NULL,
};

PyObject *CPyInit_faster_web3___tools___benchmark___utils(void)
{
    if (CPyModule_faster_web3___tools___benchmark___utils__internal) {
        Py_INCREF(CPyModule_faster_web3___tools___benchmark___utils__internal);
        return CPyModule_faster_web3___tools___benchmark___utils__internal;
    }
    CPyModule_faster_web3___tools___benchmark___utils__internal = PyModule_Create(&utilsmodule);
    if (unlikely(CPyModule_faster_web3___tools___benchmark___utils__internal == NULL))
        goto fail;
    if (CPyExec_faster_web3___tools___benchmark___utils(CPyModule_faster_web3___tools___benchmark___utils__internal) != 0)
        goto fail;
    return CPyModule_faster_web3___tools___benchmark___utils__internal;
    fail:
    return NULL;
}

char CPyDef_utils___wait_for_socket(PyObject *cpy_r_ipc_path, CPyTagged cpy_r_timeout) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    double cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    double cpy_r_r9;
    char cpy_r_r10;
    double cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    double cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    if (cpy_r_timeout != CPY_INT_TAG) goto CPyL45;
    cpy_r_timeout = 60;
CPyL2: ;
    cpy_r_r0 = CPyStatic_utils___time;
    if (unlikely(cpy_r_r0 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r2 = PyObject_Vectorcall(cpy_r_r0, 0, 0, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL47;
    }
    cpy_r_r3 = PyFloat_AsDouble(cpy_r_r2);
    if (cpy_r_r3 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r2); cpy_r_r3 = -113.0;
    }
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 == -113.0;
    if (unlikely(cpy_r_r4)) goto CPyL8;
CPyL7: ;
    goto CPyL9;
CPyL8: ;
    cpy_r_r5 = PyErr_Occurred();
    if (unlikely(cpy_r_r5 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL47;
    } else
        goto CPyL7;
CPyL9: ;
    cpy_r_r6 = CPyStatic_utils___time;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_r6, 0, 0, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL47;
    }
    cpy_r_r9 = PyFloat_AsDouble(cpy_r_r8);
    if (cpy_r_r9 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r8); cpy_r_r9 = -113.0;
    }
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -113.0;
    if (unlikely(cpy_r_r10)) goto CPyL15;
CPyL14: ;
    cpy_r_r11 = CPyFloat_FromTagged(cpy_r_timeout);
    cpy_r_r12 = cpy_r_r11 == -113.0;
    if (unlikely(cpy_r_r12)) {
        goto CPyL17;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r13 = PyErr_Occurred();
    if (unlikely(cpy_r_r13 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL47;
    } else
        goto CPyL14;
CPyL16: ;
    cpy_r_r14 = cpy_r_r3 + cpy_r_r11;
    cpy_r_r15 = cpy_r_r9 < cpy_r_r14;
    if (cpy_r_r15) {
        goto CPyL18;
    } else
        goto CPyL49;
CPyL17: ;
    cpy_r_r16 = PyErr_Occurred();
    if (unlikely(cpy_r_r16 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL47;
    } else
        goto CPyL16;
CPyL18: ;
    cpy_r_r17 = CPyStatic_utils___AF_UNIX;
    if (likely(cpy_r_r17 != NULL)) goto CPyL21;
    PyErr_SetString(PyExc_NameError, "value for final name \"AF_UNIX\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL31;
    } else
        goto CPyL50;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r19 = CPyStatic_utils___SOCK_STREAM;
    if (likely(cpy_r_r19 != NULL)) goto CPyL24;
    PyErr_SetString(PyExc_NameError, "value for final name \"SOCK_STREAM\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL31;
    } else
        goto CPyL51;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r21 = CPyStatic_utils___socket;
    if (likely(cpy_r_r21 != NULL)) goto CPyL27;
    PyErr_SetString(PyExc_NameError, "value for final name \"socket\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL31;
    } else
        goto CPyL52;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    PyObject *cpy_r_r23[2] = {cpy_r_r17, cpy_r_r19};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = PyObject_Vectorcall(cpy_r_r21, cpy_r_r24, 2, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL31;
    }
    cpy_r_r26 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'connect' */
    PyObject *cpy_r_r27[2] = {cpy_r_r25, cpy_r_ipc_path};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r28, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL53;
    } else
        goto CPyL54;
CPyL29: ;
    cpy_r_r30 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'settimeout' */
    CPyTagged_INCREF(cpy_r_timeout);
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_timeout);
    PyObject *cpy_r_r32[2] = {cpy_r_r25, cpy_r_r31};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r30, cpy_r_r33, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL55;
    } else
        goto CPyL56;
CPyL30: ;
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r31);
    goto CPyL43;
CPyL31: ;
    cpy_r_r35 = CPy_CatchError();
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'OSError' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL57;
    }
    cpy_r_r39 = CPy_ExceptionMatches(cpy_r_r38);
    CPy_DecRef(cpy_r_r38);
    if (!cpy_r_r39) goto CPyL58;
    cpy_r_r40 = CPyStatic_utils___sleep;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL59;
    } else
        goto CPyL36;
CPyL34: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"sleep\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL41;
    } else
        goto CPyL60;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r42 = PyFloat_FromDouble(0.01);
    PyObject *cpy_r_r43[1] = {cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_Vectorcall(cpy_r_r40, cpy_r_r44, 1, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL61;
    } else
        goto CPyL62;
CPyL37: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL40;
CPyL38: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL41;
    } else
        goto CPyL63;
CPyL39: ;
    CPy_Unreachable();
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r35);
    CPy_DecRef(cpy_r_r35.f0);
    CPy_DecRef(cpy_r_r35.f1);
    CPy_DecRef(cpy_r_r35.f2);
    goto CPyL9;
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r35);
    CPy_DecRef(cpy_r_r35.f0);
    CPy_DecRef(cpy_r_r35.f1);
    CPy_DecRef(cpy_r_r35.f2);
    cpy_r_r46 = CPy_KeepPropagating();
    if (!cpy_r_r46) goto CPyL44;
    CPy_Unreachable();
CPyL43: ;
    return 1;
CPyL44: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL45: ;
    CPyTagged_INCREF(cpy_r_timeout);
    goto CPyL2;
CPyL46: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL3;
CPyL47: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL44;
CPyL48: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL10;
CPyL49: ;
    CPyTagged_DECREF(cpy_r_timeout);
    goto CPyL43;
CPyL50: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL20;
CPyL51: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL23;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL26;
CPyL53: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL31;
CPyL54: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL29;
CPyL55: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r31);
    goto CPyL31;
CPyL56: ;
    CPyTagged_DECREF(cpy_r_timeout);
    CPy_DECREF(cpy_r_r34);
    goto CPyL30;
CPyL57: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL41;
CPyL58: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL38;
CPyL59: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL34;
CPyL60: ;
    CPy_DecRef(cpy_r_r35.f0);
    CPy_DecRef(cpy_r_r35.f1);
    CPy_DecRef(cpy_r_r35.f2);
    goto CPyL35;
CPyL61: ;
    CPyTagged_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_r42);
    goto CPyL41;
CPyL62: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL37;
CPyL63: ;
    CPy_DecRef(cpy_r_r35.f0);
    CPy_DecRef(cpy_r_r35.f1);
    CPy_DecRef(cpy_r_r35.f2);
    goto CPyL39;
}

PyObject *CPyPy_utils___wait_for_socket(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ipc_path", "timeout", 0};
    static CPyArg_Parser parser = {"O|O:wait_for_socket", kwlist, 0};
    PyObject *obj_ipc_path;
    PyObject *obj_timeout = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ipc_path, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_ipc_path;
    if (likely(PyUnicode_Check(obj_ipc_path)))
        arg_ipc_path = obj_ipc_path;
    else {
        CPy_TypeError("str", obj_ipc_path); 
        goto fail;
    }
    CPyTagged arg_timeout;
    if (obj_timeout == NULL) {
        arg_timeout = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_timeout)))
        arg_timeout = CPyTagged_BorrowFromObject(obj_timeout);
    else {
        CPy_TypeError("int", obj_timeout); goto fail;
    }
    char retval = CPyDef_utils___wait_for_socket(arg_ipc_path, arg_timeout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_socket", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
    return NULL;
}

char CPyDef_utils___wait_for_http(PyObject *cpy_r_endpoint_uri, CPyTagged cpy_r_timeout) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    double cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    double cpy_r_r9;
    char cpy_r_r10;
    double cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    double cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    if (cpy_r_timeout != CPY_INT_TAG) goto CPyL34;
    cpy_r_timeout = 120;
CPyL2: ;
    cpy_r_r0 = CPyStatic_utils___time;
    if (unlikely(cpy_r_r0 == NULL)) {
        goto CPyL35;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r2 = PyObject_Vectorcall(cpy_r_r0, 0, 0, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL36;
    }
    cpy_r_r3 = PyFloat_AsDouble(cpy_r_r2);
    if (cpy_r_r3 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r2); cpy_r_r3 = -113.0;
    }
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 == -113.0;
    if (unlikely(cpy_r_r4)) goto CPyL8;
CPyL7: ;
    goto CPyL9;
CPyL8: ;
    cpy_r_r5 = PyErr_Occurred();
    if (unlikely(cpy_r_r5 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL36;
    } else
        goto CPyL7;
CPyL9: ;
    cpy_r_r6 = CPyStatic_utils___time;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL37;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_r6, 0, 0, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL36;
    }
    cpy_r_r9 = PyFloat_AsDouble(cpy_r_r8);
    if (cpy_r_r9 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r8); cpy_r_r9 = -113.0;
    }
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -113.0;
    if (unlikely(cpy_r_r10)) goto CPyL15;
CPyL14: ;
    cpy_r_r11 = CPyFloat_FromTagged(cpy_r_timeout);
    cpy_r_r12 = cpy_r_r11 == -113.0;
    if (unlikely(cpy_r_r12)) {
        goto CPyL17;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r13 = PyErr_Occurred();
    if (unlikely(cpy_r_r13 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL36;
    } else
        goto CPyL14;
CPyL16: ;
    cpy_r_r14 = cpy_r_r3 + cpy_r_r11;
    cpy_r_r15 = cpy_r_r9 < cpy_r_r14;
    if (cpy_r_r15) {
        goto CPyL18;
    } else
        goto CPyL38;
CPyL17: ;
    cpy_r_r16 = PyErr_Occurred();
    if (unlikely(cpy_r_r16 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL36;
    } else
        goto CPyL16;
CPyL18: ;
    cpy_r_r17 = CPyModule_requests;
    cpy_r_r18 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'get' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL20;
    }
    PyObject *cpy_r_r20[1] = {cpy_r_endpoint_uri};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
    } else
        goto CPyL39;
CPyL20: ;
    cpy_r_r23 = CPy_CatchError();
    cpy_r_r24 = CPyModule_requests;
    cpy_r_r25 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ConnectionError' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL40;
    }
    cpy_r_r27 = CPy_ExceptionMatches(cpy_r_r26);
    CPy_DecRef(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL41;
    cpy_r_r28 = CPyStatic_utils___sleep;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL42;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"sleep\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL30;
    } else
        goto CPyL43;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r30 = PyFloat_FromDouble(0.01);
    PyObject *cpy_r_r31[1] = {cpy_r_r30};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r32, 1, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL44;
    } else
        goto CPyL45;
CPyL26: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL29;
CPyL27: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL46;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL9;
CPyL30: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    cpy_r_r34 = CPy_KeepPropagating();
    if (!cpy_r_r34) goto CPyL33;
    CPy_Unreachable();
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL34: ;
    CPyTagged_INCREF(cpy_r_timeout);
    goto CPyL2;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL3;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL33;
CPyL37: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL10;
CPyL38: ;
    CPyTagged_DECREF(cpy_r_timeout);
    goto CPyL32;
CPyL39: ;
    CPyTagged_DECREF(cpy_r_timeout);
    CPy_DECREF(cpy_r_r22);
    goto CPyL32;
CPyL40: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL30;
CPyL41: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL27;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL23;
CPyL43: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL24;
CPyL44: ;
    CPyTagged_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_r30);
    goto CPyL30;
CPyL45: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL26;
CPyL46: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL28;
}

PyObject *CPyPy_utils___wait_for_http(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"endpoint_uri", "timeout", 0};
    static CPyArg_Parser parser = {"O|O:wait_for_http", kwlist, 0};
    PyObject *obj_endpoint_uri;
    PyObject *obj_timeout = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_endpoint_uri, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_endpoint_uri;
    if (likely(PyUnicode_Check(obj_endpoint_uri)))
        arg_endpoint_uri = obj_endpoint_uri;
    else {
        CPy_TypeError("str", obj_endpoint_uri); 
        goto fail;
    }
    CPyTagged arg_timeout;
    if (obj_timeout == NULL) {
        arg_timeout = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_timeout)))
        arg_timeout = CPyTagged_BorrowFromObject(obj_timeout);
    else {
        CPy_TypeError("int", obj_timeout); goto fail;
    }
    char retval = CPyDef_utils___wait_for_http(arg_endpoint_uri, arg_timeout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_http", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
    return NULL;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    tuple_T3OOO cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    double cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    double cpy_r_r22;
    char cpy_r_r23;
    double cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    double cpy_r_r30;
    char cpy_r_r31;
    double cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    tuple_T3OOO cpy_r_r67;
    char cpy_r_r68;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
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
    tuple_T3OOO cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject **cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    tuple_T3OOO cpy_r_r134;
    char cpy_r_r135;
    PyObject **cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    tuple_T3OOO cpy_r_r139;
    tuple_T3OOO cpy_r_r140;
    tuple_T3OOO cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    tuple_T3OOO cpy_r_r149;
    tuple_T3OOO cpy_r_r150;
    char cpy_r_r151;
    tuple_T3OOO cpy_r_r152;
    tuple_T3OOO cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject **cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    tuple_T3OOO cpy_r_r173;
    char cpy_r_r174;
    PyObject **cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    tuple_T3OOO cpy_r_r178;
    tuple_T3OOO cpy_r_r179;
    tuple_T3OOO cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    tuple_T3OOO cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    tuple_T3OOO cpy_r_r214;
    char cpy_r_r215;
    PyObject **cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    tuple_T3OOO cpy_r_r219;
    tuple_T3OOO cpy_r_r220;
    tuple_T3OOO cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    tuple_T3OOO cpy_r_r226;
    tuple_T3OOO cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    char cpy_r_r231;
    char cpy_r_r232;
    char cpy_r_r233;
    char cpy_r_r234;
    char cpy_r_r235;
    char cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    tuple_T3OOO __tmp30 = { NULL, NULL, NULL };
    cpy_r_r8 = __tmp30;
    cpy_r_r9 = cpy_r_r8;
    cpy_r_r10 = NULL;
    cpy_r_r11 = cpy_r_r10;
    cpy_r_r12 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL224;
CPyL1: ;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_type != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r15 = CPyStatic_utils___time;
    if (likely(cpy_r_r15 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r15, 0, 0, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    }
    cpy_r_r18 = PyFloat_AsDouble(cpy_r_r17);
    if (cpy_r_r18 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r17); cpy_r_r18 = -113.0;
    }
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 == -113.0;
    if (unlikely(cpy_r_r19)) goto CPyL10;
CPyL9: ;
    cpy_r_r20 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__timeout;
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "timeout", 49, CPyStatic_utils___globals);
        goto CPyL232;
    }
    CPyTagged_INCREF(cpy_r_r20);
    goto CPyL11;
CPyL10: ;
    cpy_r_r21 = PyErr_Occurred();
    if (unlikely(cpy_r_r21 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    } else
        goto CPyL9;
CPyL11: ;
    cpy_r_r22 = CPyFloat_FromTagged(cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r20);
    cpy_r_r23 = cpy_r_r22 == -113.0;
    if (unlikely(cpy_r_r23)) goto CPyL13;
CPyL12: ;
    cpy_r_r24 = cpy_r_r18 + cpy_r_r22;
    if (unlikely(cpy_r_r24 == -113.0)) {
        ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->bitmap |= 1;
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__timeout_at = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r26 = PyErr_Occurred();
    if (unlikely(cpy_r_r26 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    } else
        goto CPyL12;
CPyL14: ;
    cpy_r_r27 = CPyStatic_utils___time;
    if (likely(cpy_r_r27 != NULL)) goto CPyL17;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_r27, 0, 0, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    }
    cpy_r_r30 = PyFloat_AsDouble(cpy_r_r29);
    if (cpy_r_r30 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r29); cpy_r_r30 = -113.0;
    }
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 == -113.0;
    if (unlikely(cpy_r_r31)) goto CPyL20;
CPyL19: ;
    cpy_r_r32 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__timeout_at;
    if (unlikely(cpy_r_r32 == -113.0) && !(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'timeout_at' of 'wait_for_aiohttp_gen' undefined");
    }
    cpy_r_r33 = cpy_r_r32 == -113.0;
    if (unlikely(cpy_r_r33)) {
        goto CPyL22;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r34 = PyErr_Occurred();
    if (unlikely(cpy_r_r34 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    } else
        goto CPyL19;
CPyL21: ;
    cpy_r_r35 = cpy_r_r30 < cpy_r_r32;
    if (cpy_r_r35) {
        goto CPyL23;
    } else
        goto CPyL219;
CPyL22: ;
    cpy_r_r36 = PyErr_Occurred();
    if (unlikely(cpy_r_r36 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    } else
        goto CPyL21;
CPyL23: ;
    cpy_r_r37 = CPyStatic_utils___globals;
    cpy_r_r38 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'aiohttp' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL175;
    }
    cpy_r_r40 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ClientSession' */
    PyObject *cpy_r_r41[1] = {cpy_r_r39};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r40, cpy_r_r42, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL233;
    }
    CPy_DECREF(cpy_r_r39);
    cpy_r_r44 = CPy_TYPE(cpy_r_r43);
    cpy_r_r45 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__aexit__' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL234;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL234;
    }
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '__aenter__' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r48);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL235;
    }
    PyObject *cpy_r_r50[1] = {cpy_r_r43};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL235;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r43;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL236;
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 1;
    cpy_r_r54 = 1;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL236;
    }
    cpy_r_r55 = CPy_GetCoro(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL175;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r55;
    cpy_r_r56 = 1;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL175;
    }
    cpy_r_r57 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__3", -1, CPyStatic_utils___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r57);
CPyL34: ;
    cpy_r_r58 = CPyIter_Next(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (cpy_r_r58 != NULL) goto CPyL37;
    cpy_r_r59 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL175;
    }
    cpy_r_r60 = cpy_r_r59;
    cpy_r_r61 = NULL;
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r61;
    cpy_r_r62 = 1;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL237;
    } else
        goto CPyL59;
CPyL37: ;
    cpy_r_r63 = cpy_r_r58;
CPyL38: ;
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r63;
CPyL39: ;
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_type != cpy_r_r65;
    if (!cpy_r_r66) goto CPyL238;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL43;
    } else
        goto CPyL239;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL54;
CPyL43: ;
    cpy_r_r67 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f2);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r67;
    cpy_r_r68 = 1;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL240;
    }
    cpy_r_r69 = (PyObject **)&cpy_r_r1;
    cpy_r_r70 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__3", -1, CPyStatic_utils___globals);
        goto CPyL240;
    }
    CPy_INCREF(cpy_r_r70);
CPyL45: ;
    cpy_r_r71 = CPy_YieldFromErrorHandle(cpy_r_r70, cpy_r_r69);
    CPy_DecRef(cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL240;
    }
    if (cpy_r_r71) goto CPyL49;
    cpy_r_r63 = cpy_r_r1;
    cpy_r_r72 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r72.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__4", -1, CPyStatic_utils___globals);
        goto CPyL241;
    }
    CPy_INCREF(cpy_r_r72.f0);
    CPy_INCREF(cpy_r_r72.f1);
    CPy_INCREF(cpy_r_r72.f2);
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r72);
    CPy_DecRef(cpy_r_r72.f0);
    CPy_DecRef(cpy_r_r72.f1);
    CPy_DecRef(cpy_r_r72.f2);
    goto CPyL38;
CPyL49: ;
    cpy_r_r60 = cpy_r_r1;
    cpy_r_r73 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r73.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__4", -1, CPyStatic_utils___globals);
        goto CPyL242;
    }
    CPy_INCREF(cpy_r_r73.f0);
    CPy_INCREF(cpy_r_r73.f1);
    CPy_INCREF(cpy_r_r73.f2);
CPyL50: ;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_DecRef(cpy_r_r73.f0);
    CPy_DecRef(cpy_r_r73.f1);
    CPy_DecRef(cpy_r_r73.f2);
    goto CPyL59;
CPyL51: ;
    cpy_r_r74 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r74.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__4", -1, CPyStatic_utils___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r74.f0);
    CPy_INCREF(cpy_r_r74.f1);
    CPy_INCREF(cpy_r_r74.f2);
CPyL52: ;
    CPy_RestoreExcInfo(cpy_r_r74);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r74.f2);
    cpy_r_r75 = CPy_KeepPropagating();
    if (!cpy_r_r75) goto CPyL175;
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r76 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__3", -1, CPyStatic_utils___globals);
        goto CPyL243;
    }
    CPy_INCREF(cpy_r_r76);
CPyL55: ;
    cpy_r_r77 = CPyIter_Send(cpy_r_r76, cpy_r_arg);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r77 == NULL) goto CPyL57;
    cpy_r_r63 = cpy_r_r77;
    goto CPyL38;
CPyL57: ;
    cpy_r_r78 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL175;
    }
    cpy_r_r60 = cpy_r_r78;
CPyL59: ;
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__session != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__session);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__session = cpy_r_r60;
    cpy_r_r79 = 1;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL91;
    }
    cpy_r_r80 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__session;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "session", 53, CPyStatic_utils___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r80);
CPyL61: ;
    cpy_r_r81 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__endpoint_uri;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "endpoint_uri", 53, CPyStatic_utils___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r81);
CPyL62: ;
    cpy_r_r82 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'get' */
    PyObject *cpy_r_r83[2] = {cpy_r_r80, cpy_r_r81};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = PyObject_VectorcallMethod(cpy_r_r82, cpy_r_r84, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL245;
    }
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r86 = CPy_GetCoro(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL91;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r86;
    cpy_r_r87 = 1;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL91;
    }
    cpy_r_r88 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__5", -1, CPyStatic_utils___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r88);
CPyL66: ;
    cpy_r_r89 = CPyIter_Next(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (cpy_r_r89 != NULL) goto CPyL69;
    cpy_r_r90 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL91;
    }
    cpy_r_r91 = cpy_r_r90;
    CPy_DECREF(cpy_r_r91);
    cpy_r_r92 = NULL;
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r92;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL91;
    } else
        goto CPyL133;
CPyL69: ;
    cpy_r_r94 = cpy_r_r89;
CPyL70: ;
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r94;
CPyL71: ;
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r97 = cpy_r_type != cpy_r_r96;
    if (!cpy_r_r97) goto CPyL246;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL75;
    } else
        goto CPyL247;
CPyL73: ;
    CPy_Unreachable();
CPyL74: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL86;
CPyL75: ;
    cpy_r_r98 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f2);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r98;
    cpy_r_r99 = 1;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL248;
    }
    cpy_r_r100 = (PyObject **)&cpy_r_r3;
    cpy_r_r101 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__5", -1, CPyStatic_utils___globals);
        goto CPyL248;
    }
    CPy_INCREF(cpy_r_r101);
CPyL77: ;
    cpy_r_r102 = CPy_YieldFromErrorHandle(cpy_r_r101, cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL248;
    }
    if (cpy_r_r102) goto CPyL81;
    cpy_r_r94 = cpy_r_r3;
    cpy_r_r103 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r103.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__6", -1, CPyStatic_utils___globals);
        goto CPyL249;
    }
    CPy_INCREF(cpy_r_r103.f0);
    CPy_INCREF(cpy_r_r103.f1);
    CPy_INCREF(cpy_r_r103.f2);
CPyL80: ;
    CPy_RestoreExcInfo(cpy_r_r103);
    CPy_DecRef(cpy_r_r103.f0);
    CPy_DecRef(cpy_r_r103.f1);
    CPy_DecRef(cpy_r_r103.f2);
    goto CPyL70;
CPyL81: ;
    cpy_r_r91 = cpy_r_r3;
    CPy_DecRef(cpy_r_r91);
    cpy_r_r104 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r104.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__6", -1, CPyStatic_utils___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r104.f0);
    CPy_INCREF(cpy_r_r104.f1);
    CPy_INCREF(cpy_r_r104.f2);
CPyL82: ;
    CPy_RestoreExcInfo(cpy_r_r104);
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL133;
CPyL83: ;
    cpy_r_r105 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r105.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__6", -1, CPyStatic_utils___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_INCREF(cpy_r_r105.f2);
CPyL84: ;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_DecRef(cpy_r_r105.f0);
    CPy_DecRef(cpy_r_r105.f1);
    CPy_DecRef(cpy_r_r105.f2);
    cpy_r_r106 = CPy_KeepPropagating();
    if (!cpy_r_r106) goto CPyL91;
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r107 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__5", -1, CPyStatic_utils___globals);
        goto CPyL250;
    }
    CPy_INCREF(cpy_r_r107);
CPyL87: ;
    cpy_r_r108 = CPyIter_Send(cpy_r_r107, cpy_r_arg);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r108 == NULL) goto CPyL89;
    cpy_r_r94 = cpy_r_r108;
    goto CPyL70;
CPyL89: ;
    cpy_r_r109 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL91;
    }
    cpy_r_r91 = cpy_r_r109;
    CPy_DECREF(cpy_r_r91);
    goto CPyL133;
CPyL91: ;
    cpy_r_r110 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f2);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r110;
    cpy_r_r111 = 1;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL130;
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 0;
    cpy_r_r112 = 1;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL130;
    }
    cpy_r_r113 = CPy_GetExcInfo();
    cpy_r_r114 = cpy_r_r113.f0;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = cpy_r_r113.f1;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = cpy_r_r113.f2;
    CPy_INCREF(cpy_r_r116);
    CPy_DecRef(cpy_r_r113.f0);
    CPy_DecRef(cpy_r_r113.f1);
    CPy_DecRef(cpy_r_r113.f2);
    cpy_r_r117 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__0", -1, CPyStatic_utils___globals);
        goto CPyL251;
    }
    CPy_INCREF(cpy_r_r117);
CPyL94: ;
    cpy_r_r118 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__1", -1, CPyStatic_utils___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_r118);
CPyL95: ;
    PyObject *cpy_r_r119[4] = {cpy_r_r118, cpy_r_r114, cpy_r_r115, cpy_r_r116};
    cpy_r_r120 = (PyObject **)&cpy_r_r119;
    cpy_r_r121 = PyObject_Vectorcall(cpy_r_r117, cpy_r_r120, 4, 0);
    CPy_DecRef(cpy_r_r117);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL253;
    }
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    cpy_r_r122 = CPy_GetCoro(cpy_r_r121);
    CPy_DecRef(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL130;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r122;
    cpy_r_r123 = 1;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL130;
    }
    cpy_r_r124 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__8", -1, CPyStatic_utils___globals);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_r124);
CPyL99: ;
    cpy_r_r125 = CPyIter_Next(cpy_r_r124);
    CPy_DecRef(cpy_r_r124);
    if (cpy_r_r125 != NULL) goto CPyL102;
    cpy_r_r126 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL130;
    }
    cpy_r_r127 = cpy_r_r126;
    cpy_r_r128 = NULL;
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r128;
    cpy_r_r129 = 1;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL254;
    } else
        goto CPyL124;
CPyL102: ;
    cpy_r_r130 = cpy_r_r125;
CPyL103: ;
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 3;
    return cpy_r_r130;
CPyL104: ;
    cpy_r_r132 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r133 = cpy_r_type != cpy_r_r132;
    if (!cpy_r_r133) goto CPyL255;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL108;
    } else
        goto CPyL256;
CPyL106: ;
    CPy_Unreachable();
CPyL107: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL119;
CPyL108: ;
    cpy_r_r134 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f2);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r134;
    cpy_r_r135 = 1;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL257;
    }
    cpy_r_r136 = (PyObject **)&cpy_r_r5;
    cpy_r_r137 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__8", -1, CPyStatic_utils___globals);
        goto CPyL257;
    }
    CPy_INCREF(cpy_r_r137);
CPyL110: ;
    cpy_r_r138 = CPy_YieldFromErrorHandle(cpy_r_r137, cpy_r_r136);
    CPy_DecRef(cpy_r_r137);
    if (unlikely(cpy_r_r138 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL257;
    }
    if (cpy_r_r138) goto CPyL114;
    cpy_r_r130 = cpy_r_r5;
    cpy_r_r139 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r139.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__9", -1, CPyStatic_utils___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r139.f0);
    CPy_INCREF(cpy_r_r139.f1);
    CPy_INCREF(cpy_r_r139.f2);
CPyL113: ;
    CPy_RestoreExcInfo(cpy_r_r139);
    CPy_DecRef(cpy_r_r139.f0);
    CPy_DecRef(cpy_r_r139.f1);
    CPy_DecRef(cpy_r_r139.f2);
    goto CPyL103;
CPyL114: ;
    cpy_r_r127 = cpy_r_r5;
    cpy_r_r140 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r140.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__9", -1, CPyStatic_utils___globals);
        goto CPyL259;
    }
    CPy_INCREF(cpy_r_r140.f0);
    CPy_INCREF(cpy_r_r140.f1);
    CPy_INCREF(cpy_r_r140.f2);
CPyL115: ;
    CPy_RestoreExcInfo(cpy_r_r140);
    CPy_DecRef(cpy_r_r140.f0);
    CPy_DecRef(cpy_r_r140.f1);
    CPy_DecRef(cpy_r_r140.f2);
    goto CPyL124;
CPyL116: ;
    cpy_r_r141 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r141.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__9", -1, CPyStatic_utils___globals);
        goto CPyL130;
    }
    CPy_INCREF(cpy_r_r141.f0);
    CPy_INCREF(cpy_r_r141.f1);
    CPy_INCREF(cpy_r_r141.f2);
CPyL117: ;
    CPy_RestoreExcInfo(cpy_r_r141);
    CPy_DecRef(cpy_r_r141.f0);
    CPy_DecRef(cpy_r_r141.f1);
    CPy_DecRef(cpy_r_r141.f2);
    cpy_r_r142 = CPy_KeepPropagating();
    if (!cpy_r_r142) goto CPyL130;
    CPy_Unreachable();
CPyL119: ;
    cpy_r_r143 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__8", -1, CPyStatic_utils___globals);
        goto CPyL260;
    }
    CPy_INCREF(cpy_r_r143);
CPyL120: ;
    cpy_r_r144 = CPyIter_Send(cpy_r_r143, cpy_r_arg);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r144 == NULL) goto CPyL122;
    cpy_r_r130 = cpy_r_r144;
    goto CPyL103;
CPyL122: ;
    cpy_r_r145 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL130;
    }
    cpy_r_r127 = cpy_r_r145;
CPyL124: ;
    cpy_r_r146 = PyObject_IsTrue(cpy_r_r127);
    CPy_DECREF(cpy_r_r127);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL130;
    }
    cpy_r_r148 = cpy_r_r146;
    if (cpy_r_r148) goto CPyL128;
    CPy_Reraise();
    if (!0) goto CPyL130;
    CPy_Unreachable();
CPyL128: ;
    cpy_r_r149 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r149.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__7", -1, CPyStatic_utils___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    CPy_INCREF(cpy_r_r149.f2);
CPyL129: ;
    CPy_RestoreExcInfo(cpy_r_r149);
    CPy_DECREF(cpy_r_r149.f0);
    CPy_DECREF(cpy_r_r149.f1);
    CPy_DECREF(cpy_r_r149.f2);
    goto CPyL133;
CPyL130: ;
    cpy_r_r150 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r150.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__7", -1, CPyStatic_utils___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r150.f0);
    CPy_INCREF(cpy_r_r150.f1);
    CPy_INCREF(cpy_r_r150.f2);
CPyL131: ;
    CPy_RestoreExcInfo(cpy_r_r150);
    CPy_DECREF(cpy_r_r150.f0);
    CPy_DECREF(cpy_r_r150.f1);
    CPy_DECREF(cpy_r_r150.f2);
    cpy_r_r151 = CPy_KeepPropagating();
    if (!cpy_r_r151) goto CPyL134;
    CPy_Unreachable();
CPyL133: ;
    tuple_T3OOO __tmp31 = { NULL, NULL, NULL };
    cpy_r_r152 = __tmp31;
    cpy_r_r9 = cpy_r_r152;
    goto CPyL135;
CPyL134: ;
    cpy_r_r153 = CPy_CatchError();
    cpy_r_r9 = cpy_r_r153;
CPyL135: ;
    cpy_r_r154 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__2", -1, CPyStatic_utils___globals);
        goto CPyL171;
    }
CPyL136: ;
    if (!cpy_r_r154) goto CPyL168;
CPyL137: ;
    cpy_r_r155 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r156 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__0", -1, CPyStatic_utils___globals);
        goto CPyL171;
    }
    CPy_INCREF(cpy_r_r156);
CPyL138: ;
    cpy_r_r157 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__1", -1, CPyStatic_utils___globals);
        goto CPyL261;
    }
    CPy_INCREF(cpy_r_r157);
CPyL139: ;
    PyObject *cpy_r_r158[4] = {cpy_r_r157, cpy_r_r155, cpy_r_r155, cpy_r_r155};
    cpy_r_r159 = (PyObject **)&cpy_r_r158;
    cpy_r_r160 = PyObject_Vectorcall(cpy_r_r156, cpy_r_r159, 4, 0);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL262;
    }
    CPy_DECREF(cpy_r_r157);
    cpy_r_r161 = CPy_GetCoro(cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL171;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r161;
    cpy_r_r162 = 1;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL171;
    }
    cpy_r_r163 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__10", -1, CPyStatic_utils___globals);
        goto CPyL171;
    }
    CPy_INCREF(cpy_r_r163);
CPyL143: ;
    cpy_r_r164 = CPyIter_Next(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (cpy_r_r164 != NULL) goto CPyL263;
    cpy_r_r165 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL171;
    }
    cpy_r_r166 = cpy_r_r165;
    CPy_DECREF(cpy_r_r166);
    cpy_r_r167 = NULL;
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r167;
    cpy_r_r168 = 1;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL171;
    } else
        goto CPyL168;
CPyL146: ;
    cpy_r_r169 = cpy_r_r164;
CPyL147: ;
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 4;
    return cpy_r_r169;
CPyL148: ;
    cpy_r_r171 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r172 = cpy_r_type != cpy_r_r171;
    if (!cpy_r_r172) goto CPyL264;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL152;
    } else
        goto CPyL265;
CPyL150: ;
    CPy_Unreachable();
CPyL151: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL163;
CPyL152: ;
    cpy_r_r173 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f2);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r173;
    cpy_r_r174 = 1;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL266;
    }
    cpy_r_r175 = (PyObject **)&cpy_r_r7;
    cpy_r_r176 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__10", -1, CPyStatic_utils___globals);
        goto CPyL266;
    }
    CPy_INCREF(cpy_r_r176);
CPyL154: ;
    cpy_r_r177 = CPy_YieldFromErrorHandle(cpy_r_r176, cpy_r_r175);
    CPy_DecRef(cpy_r_r176);
    if (unlikely(cpy_r_r177 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL266;
    }
    if (cpy_r_r177) goto CPyL158;
    cpy_r_r169 = cpy_r_r7;
    cpy_r_r178 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r178.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__11", -1, CPyStatic_utils___globals);
        goto CPyL267;
    }
    CPy_INCREF(cpy_r_r178.f0);
    CPy_INCREF(cpy_r_r178.f1);
    CPy_INCREF(cpy_r_r178.f2);
    goto CPyL268;
CPyL157: ;
    CPy_RestoreExcInfo(cpy_r_r178);
    CPy_DecRef(cpy_r_r178.f0);
    CPy_DecRef(cpy_r_r178.f1);
    CPy_DecRef(cpy_r_r178.f2);
    goto CPyL147;
CPyL158: ;
    cpy_r_r166 = cpy_r_r7;
    CPy_DecRef(cpy_r_r166);
    cpy_r_r179 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r179.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__11", -1, CPyStatic_utils___globals);
        goto CPyL160;
    }
    CPy_INCREF(cpy_r_r179.f0);
    CPy_INCREF(cpy_r_r179.f1);
    CPy_INCREF(cpy_r_r179.f2);
CPyL159: ;
    CPy_RestoreExcInfo(cpy_r_r179);
    CPy_DecRef(cpy_r_r179.f0);
    CPy_DecRef(cpy_r_r179.f1);
    CPy_DecRef(cpy_r_r179.f2);
    goto CPyL168;
CPyL160: ;
    cpy_r_r180 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r180.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__11", -1, CPyStatic_utils___globals);
        goto CPyL171;
    }
    CPy_INCREF(cpy_r_r180.f0);
    CPy_INCREF(cpy_r_r180.f1);
    CPy_INCREF(cpy_r_r180.f2);
CPyL161: ;
    CPy_RestoreExcInfo(cpy_r_r180);
    CPy_DecRef(cpy_r_r180.f0);
    CPy_DecRef(cpy_r_r180.f1);
    CPy_DecRef(cpy_r_r180.f2);
    cpy_r_r181 = CPy_KeepPropagating();
    if (!cpy_r_r181) {
        goto CPyL171;
    } else
        goto CPyL269;
CPyL162: ;
    CPy_Unreachable();
CPyL163: ;
    cpy_r_r182 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__10", -1, CPyStatic_utils___globals);
        goto CPyL270;
    }
    CPy_INCREF(cpy_r_r182);
CPyL164: ;
    cpy_r_r183 = CPyIter_Send(cpy_r_r182, cpy_r_arg);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r183 == NULL) {
        goto CPyL166;
    } else
        goto CPyL271;
CPyL165: ;
    cpy_r_r169 = cpy_r_r183;
    goto CPyL147;
CPyL166: ;
    cpy_r_r184 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL171;
    }
    cpy_r_r166 = cpy_r_r184;
    CPy_DECREF(cpy_r_r166);
CPyL168: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL219;
    CPy_Reraise();
    if (!0) {
        goto CPyL171;
    } else
        goto CPyL272;
CPyL170: ;
    CPy_Unreachable();
CPyL171: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL173;
    CPy_RestoreExcInfo(cpy_r_r9);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
CPyL173: ;
    cpy_r_r185 = CPy_KeepPropagating();
    if (!cpy_r_r185) goto CPyL175;
    CPy_Unreachable();
CPyL175: ;
    cpy_r_r186 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f2);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r186;
    cpy_r_r187 = 1;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL216;
    }
    cpy_r_r188 = CPyStatic_utils___globals;
    cpy_r_r189 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'aiohttp' */
    cpy_r_r190 = CPyDict_GetItem(cpy_r_r188, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    }
    cpy_r_r191 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'client_exceptions' */
    cpy_r_r192 = CPyObject_GetAttr(cpy_r_r190, cpy_r_r191);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    }
    cpy_r_r193 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'ClientConnectorError' */
    cpy_r_r194 = CPyObject_GetAttr(cpy_r_r192, cpy_r_r193);
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    }
    cpy_r_r195 = CPy_ExceptionMatches(cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    if (!cpy_r_r195) goto CPyL212;
    cpy_r_r196 = CPyStatic_utils___aiosleep;
    if (likely(cpy_r_r196 != NULL)) goto CPyL183;
    PyErr_SetString(PyExc_NameError, "value for final name \"aiosleep\" was not set");
    cpy_r_r197 = 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    }
    CPy_Unreachable();
CPyL183: ;
    cpy_r_r198 = PyFloat_FromDouble(0.01);
    PyObject *cpy_r_r199[1] = {cpy_r_r198};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = PyObject_Vectorcall(cpy_r_r196, cpy_r_r200, 1, 0);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL273;
    }
    CPy_DECREF(cpy_r_r198);
    cpy_r_r202 = CPy_GetCoro(cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = cpy_r_r202;
    cpy_r_r203 = 1;
    if (unlikely(!cpy_r_r203)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL216;
    }
    cpy_r_r204 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__13", -1, CPyStatic_utils___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r204);
CPyL187: ;
    cpy_r_r205 = CPyIter_Next(cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    if (cpy_r_r205 != NULL) goto CPyL190;
    cpy_r_r206 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    }
    cpy_r_r207 = cpy_r_r206;
    CPy_DECREF(cpy_r_r207);
    cpy_r_r208 = NULL;
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = cpy_r_r208;
    cpy_r_r209 = 1;
    if (unlikely(!cpy_r_r209)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    } else
        goto CPyL214;
CPyL190: ;
    cpy_r_r210 = cpy_r_r205;
CPyL191: ;
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 5;
    return cpy_r_r210;
CPyL192: ;
    cpy_r_r212 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r213 = cpy_r_type != cpy_r_r212;
    if (!cpy_r_r213) goto CPyL274;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL196;
    } else
        goto CPyL275;
CPyL194: ;
    CPy_Unreachable();
CPyL195: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL207;
CPyL196: ;
    cpy_r_r214 = CPy_CatchError();
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f0 != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f0);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f1);
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f2);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14 = cpy_r_r214;
    cpy_r_r215 = 1;
    if (unlikely(!cpy_r_r215)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", -1, CPyStatic_utils___globals);
        goto CPyL276;
    }
    cpy_r_r216 = (PyObject **)&cpy_r_r11;
    cpy_r_r217 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__13", -1, CPyStatic_utils___globals);
        goto CPyL276;
    }
    CPy_INCREF(cpy_r_r217);
CPyL198: ;
    cpy_r_r218 = CPy_YieldFromErrorHandle(cpy_r_r217, cpy_r_r216);
    CPy_DecRef(cpy_r_r217);
    if (unlikely(cpy_r_r218 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL276;
    }
    if (cpy_r_r218) goto CPyL202;
    cpy_r_r210 = cpy_r_r11;
    cpy_r_r219 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r219.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__14", -1, CPyStatic_utils___globals);
        goto CPyL277;
    }
    CPy_INCREF(cpy_r_r219.f0);
    CPy_INCREF(cpy_r_r219.f1);
    CPy_INCREF(cpy_r_r219.f2);
CPyL201: ;
    CPy_RestoreExcInfo(cpy_r_r219);
    CPy_DecRef(cpy_r_r219.f0);
    CPy_DecRef(cpy_r_r219.f1);
    CPy_DecRef(cpy_r_r219.f2);
    goto CPyL191;
CPyL202: ;
    cpy_r_r207 = cpy_r_r11;
    CPy_DecRef(cpy_r_r207);
    cpy_r_r220 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r220.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__14", -1, CPyStatic_utils___globals);
        goto CPyL204;
    }
    CPy_INCREF(cpy_r_r220.f0);
    CPy_INCREF(cpy_r_r220.f1);
    CPy_INCREF(cpy_r_r220.f2);
CPyL203: ;
    CPy_RestoreExcInfo(cpy_r_r220);
    CPy_DecRef(cpy_r_r220.f0);
    CPy_DecRef(cpy_r_r220.f1);
    CPy_DecRef(cpy_r_r220.f2);
    goto CPyL214;
CPyL204: ;
    cpy_r_r221 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r221.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__14", -1, CPyStatic_utils___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r221.f0);
    CPy_INCREF(cpy_r_r221.f1);
    CPy_INCREF(cpy_r_r221.f2);
CPyL205: ;
    CPy_RestoreExcInfo(cpy_r_r221);
    CPy_DecRef(cpy_r_r221.f0);
    CPy_DecRef(cpy_r_r221.f1);
    CPy_DecRef(cpy_r_r221.f2);
    cpy_r_r222 = CPy_KeepPropagating();
    if (!cpy_r_r222) goto CPyL216;
    CPy_Unreachable();
CPyL207: ;
    cpy_r_r223 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__13", -1, CPyStatic_utils___globals);
        goto CPyL278;
    }
    CPy_INCREF(cpy_r_r223);
CPyL208: ;
    cpy_r_r224 = CPyIter_Send(cpy_r_r223, cpy_r_arg);
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r224 == NULL) goto CPyL210;
    cpy_r_r210 = cpy_r_r224;
    goto CPyL191;
CPyL210: ;
    cpy_r_r225 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL216;
    }
    cpy_r_r207 = cpy_r_r225;
    CPy_DECREF(cpy_r_r207);
    goto CPyL214;
CPyL212: ;
    CPy_Reraise();
    if (!0) goto CPyL216;
    CPy_Unreachable();
CPyL214: ;
    cpy_r_r226 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (unlikely(cpy_r_r226.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__12", -1, CPyStatic_utils___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r226.f0);
    CPy_INCREF(cpy_r_r226.f1);
    CPy_INCREF(cpy_r_r226.f2);
CPyL215: ;
    CPy_RestoreExcInfo(cpy_r_r226);
    CPy_DECREF(cpy_r_r226.f0);
    CPy_DECREF(cpy_r_r226.f1);
    CPy_DECREF(cpy_r_r226.f2);
    goto CPyL14;
CPyL216: ;
    cpy_r_r227 = ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (unlikely(cpy_r_r227.f0 == NULL)) {
        CPy_AttributeError("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", "wait_for_aiohttp_gen", "__mypyc_temp__12", -1, CPyStatic_utils___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r227.f0);
    CPy_INCREF(cpy_r_r227.f1);
    CPy_INCREF(cpy_r_r227.f2);
CPyL217: ;
    CPy_RestoreExcInfo(cpy_r_r227);
    CPy_DECREF(cpy_r_r227.f0);
    CPy_DECREF(cpy_r_r227.f1);
    CPy_DECREF(cpy_r_r227.f2);
    cpy_r_r228 = CPy_KeepPropagating();
    if (!cpy_r_r228) goto CPyL232;
    CPy_Unreachable();
CPyL219: ;
    cpy_r_r229 = Py_None;
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL223;
    CPyGen_SetStopIterationValue(cpy_r_r229);
    if (!0) goto CPyL232;
    CPy_Unreachable();
CPyL223: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r229;
    return 0;
CPyL224: ;
    cpy_r_r231 = cpy_r_r12 == 0;
    if (cpy_r_r231) goto CPyL279;
    cpy_r_r232 = cpy_r_r12 == 1;
    if (cpy_r_r232) {
        goto CPyL280;
    } else
        goto CPyL281;
CPyL226: ;
    cpy_r_r233 = cpy_r_r12 == 2;
    if (cpy_r_r233) {
        goto CPyL282;
    } else
        goto CPyL283;
CPyL227: ;
    cpy_r_r234 = cpy_r_r12 == 3;
    if (cpy_r_r234) {
        goto CPyL284;
    } else
        goto CPyL285;
CPyL228: ;
    cpy_r_r235 = cpy_r_r12 == 4;
    if (cpy_r_r235) {
        goto CPyL286;
    } else
        goto CPyL287;
CPyL229: ;
    cpy_r_r236 = cpy_r_r12 == 5;
    if (cpy_r_r236) {
        goto CPyL192;
    } else
        goto CPyL288;
CPyL230: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r237 = 0;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL232;
    }
    CPy_Unreachable();
CPyL232: ;
    cpy_r_r238 = NULL;
    return cpy_r_r238;
CPyL233: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL175;
CPyL234: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL175;
CPyL235: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL175;
CPyL236: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL175;
CPyL237: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL175;
CPyL238: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL42;
CPyL239: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL41;
CPyL240: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL51;
CPyL241: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL51;
CPyL242: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL51;
CPyL243: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL175;
CPyL244: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL91;
CPyL245: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL91;
CPyL246: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL74;
CPyL247: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL73;
CPyL248: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL83;
CPyL249: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL83;
CPyL250: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL91;
CPyL251: ;
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    goto CPyL130;
CPyL252: ;
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r117);
    goto CPyL130;
CPyL253: ;
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r118);
    goto CPyL130;
CPyL254: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL130;
CPyL255: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL107;
CPyL256: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL106;
CPyL257: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL116;
CPyL258: ;
    CPy_DecRef(cpy_r_r130);
    goto CPyL116;
CPyL259: ;
    CPy_DecRef(cpy_r_r127);
    goto CPyL116;
CPyL260: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL130;
CPyL261: ;
    CPy_DecRef(cpy_r_r156);
    goto CPyL171;
CPyL262: ;
    CPy_DecRef(cpy_r_r157);
    goto CPyL171;
CPyL263: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL146;
CPyL264: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL151;
CPyL265: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL150;
CPyL266: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL160;
CPyL267: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL160;
CPyL268: ;
    CPy_XDecRef(cpy_r_r9.f0);
    CPy_XDecRef(cpy_r_r9.f1);
    CPy_XDecRef(cpy_r_r9.f2);
    goto CPyL157;
CPyL269: ;
    CPy_XDecRef(cpy_r_r9.f0);
    CPy_XDecRef(cpy_r_r9.f1);
    CPy_XDecRef(cpy_r_r9.f2);
    goto CPyL162;
CPyL270: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL171;
CPyL271: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL165;
CPyL272: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL170;
CPyL273: ;
    CPy_DecRef(cpy_r_r198);
    goto CPyL216;
CPyL274: ;
    CPy_XDECREF(cpy_r_r11);
    goto CPyL195;
CPyL275: ;
    CPy_XDECREF(cpy_r_r11);
    goto CPyL194;
CPyL276: ;
    CPy_XDecRef(cpy_r_r11);
    goto CPyL204;
CPyL277: ;
    CPy_DecRef(cpy_r_r210);
    goto CPyL204;
CPyL278: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL216;
CPyL279: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    CPy_XDECREF(cpy_r_r11);
    goto CPyL1;
CPyL280: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    CPy_XDECREF(cpy_r_r11);
    goto CPyL39;
CPyL281: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL226;
CPyL282: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    CPy_XDECREF(cpy_r_r11);
    goto CPyL71;
CPyL283: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL227;
CPyL284: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    CPy_XDECREF(cpy_r_r11);
    goto CPyL104;
CPyL285: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL228;
CPyL286: ;
    CPy_XDECREF(cpy_r_r11);
    goto CPyL148;
CPyL287: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL229;
CPyL288: ;
    CPy_XDECREF(cpy_r_r11);
    goto CPyL230;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_utils___wait_for_aiohttp_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_utils___wait_for_aiohttp_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_utils___wait_for_aiohttp_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.utils.wait_for_aiohttp_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_utils___wait_for_aiohttp_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "__next__", -1, CPyStatic_utils___globals);
    return NULL;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_utils___wait_for_aiohttp_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_utils___wait_for_aiohttp_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_utils___wait_for_aiohttp_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.utils.wait_for_aiohttp_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_utils___wait_for_aiohttp_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "send", -1, CPyStatic_utils___globals);
    return NULL;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_utils___wait_for_aiohttp_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_utils___wait_for_aiohttp_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.utils.wait_for_aiohttp_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_utils___wait_for_aiohttp_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "__iter__", -1, CPyStatic_utils___globals);
    return NULL;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_utils___wait_for_aiohttp_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
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

PyObject *CPyPy_utils___wait_for_aiohttp_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_utils___wait_for_aiohttp_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.utils.wait_for_aiohttp_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_utils___wait_for_aiohttp_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "throw", -1, CPyStatic_utils___globals);
    return NULL;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r1 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_utils___wait_for_aiohttp_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp32 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp32);
    PyObject *__tmp33 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp33);
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

PyObject *CPyPy_utils___wait_for_aiohttp_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_utils___wait_for_aiohttp_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.utils.wait_for_aiohttp_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_utils___wait_for_aiohttp_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "close", -1, CPyStatic_utils___globals);
    return NULL;
}

PyObject *CPyDef_utils___wait_for_aiohttp_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_utils___wait_for_aiohttp_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_utils___wait_for_aiohttp_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_web3.tools.benchmark.utils.wait_for_aiohttp_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_utils___wait_for_aiohttp_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "__await__", -1, CPyStatic_utils___globals);
    return NULL;
}

PyObject *CPyDef_utils___wait_for_aiohttp(PyObject *cpy_r_endpoint_uri, CPyTagged cpy_r_timeout) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_timeout != CPY_INT_TAG) goto CPyL7;
    cpy_r_timeout = 120;
CPyL2: ;
    cpy_r_r0 = CPyDef_utils___wait_for_aiohttp_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL8;
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF(cpy_r_endpoint_uri);
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r_r0)->___mypyc_generator_attribute__endpoint_uri != NULL) {
        CPy_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r_r0)->___mypyc_generator_attribute__endpoint_uri);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r_r0)->___mypyc_generator_attribute__endpoint_uri = cpy_r_endpoint_uri;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL9;
    }
    if (((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r_r0)->___mypyc_generator_attribute__timeout != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r_r0)->___mypyc_generator_attribute__timeout);
    }
    ((faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *)cpy_r_r0)->___mypyc_generator_attribute__timeout = cpy_r_timeout;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL10;
    }
    return cpy_r_r0;
CPyL6: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL7: ;
    CPyTagged_INCREF(cpy_r_timeout);
    goto CPyL2;
CPyL8: ;
    CPyTagged_DecRef(cpy_r_timeout);
    goto CPyL6;
CPyL9: ;
    CPyTagged_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy_utils___wait_for_aiohttp(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"endpoint_uri", "timeout", 0};
    static CPyArg_Parser parser = {"O|O:wait_for_aiohttp", kwlist, 0};
    PyObject *obj_endpoint_uri;
    PyObject *obj_timeout = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_endpoint_uri, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_endpoint_uri;
    if (likely(PyUnicode_Check(obj_endpoint_uri)))
        arg_endpoint_uri = obj_endpoint_uri;
    else {
        CPy_TypeError("str", obj_endpoint_uri); 
        goto fail;
    }
    CPyTagged arg_timeout;
    if (obj_timeout == NULL) {
        arg_timeout = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_timeout)))
        arg_timeout = CPyTagged_BorrowFromObject(obj_timeout);
    else {
        CPy_TypeError("int", obj_timeout); goto fail;
    }
    PyObject *retval = CPyDef_utils___wait_for_aiohttp(arg_endpoint_uri, arg_timeout);
    return retval;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_aiohttp", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
    return NULL;
}

char CPyDef_utils___wait_for_popen(PyObject *cpy_r_proc, CPyTagged cpy_r_timeout) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    double cpy_r_r5;
    char cpy_r_r6;
    double cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    double cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    double cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'poll' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_proc, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL25;
    }
    cpy_r_r2 = CPyStatic_utils___time;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL26;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL27;
    }
    cpy_r_r5 = PyFloat_AsDouble(cpy_r_r4);
    if (cpy_r_r5 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r4); cpy_r_r5 = -113.0;
    }
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -113.0;
    if (unlikely(cpy_r_r6)) goto CPyL7;
CPyL6: ;
    cpy_r_r7 = CPyFloat_FromTagged(cpy_r_timeout);
    cpy_r_r8 = cpy_r_r7 == -113.0;
    if (unlikely(cpy_r_r8)) {
        goto CPyL9;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r9 = PyErr_Occurred();
    if (unlikely(cpy_r_r9 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL27;
    } else
        goto CPyL6;
CPyL8: ;
    cpy_r_r10 = cpy_r_r5 + cpy_r_r7;
    goto CPyL10;
CPyL9: ;
    cpy_r_r11 = PyErr_Occurred();
    if (unlikely(cpy_r_r11 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL27;
    } else
        goto CPyL8;
CPyL10: ;
    cpy_r_r12 = CPyStatic_utils___time;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL28;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"time\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r14 = PyObject_Vectorcall(cpy_r_r12, 0, 0, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL27;
    }
    cpy_r_r15 = PyFloat_AsDouble(cpy_r_r14);
    if (cpy_r_r15 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r14); cpy_r_r15 = -113.0;
    }
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -113.0;
    if (unlikely(cpy_r_r16)) goto CPyL16;
CPyL15: ;
    cpy_r_r17 = cpy_r_r15 < cpy_r_r10;
    if (cpy_r_r17) {
        goto CPyL17;
    } else
        goto CPyL29;
CPyL16: ;
    cpy_r_r18 = PyErr_Occurred();
    if (unlikely(cpy_r_r18 != NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL27;
    } else
        goto CPyL15;
CPyL17: ;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r1, 0, 0, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL27;
    }
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 == cpy_r_r20;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r21) goto CPyL29;
    cpy_r_r22 = CPyStatic_utils___sleep;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL30;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"sleep\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r24 = PyFloat_FromDouble(0.01);
    PyObject *cpy_r_r25[1] = {cpy_r_r24};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_Vectorcall(cpy_r_r22, cpy_r_r26, 1, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL23: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL10;
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL26: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL27: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL29: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL24;
CPyL30: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL20;
CPyL31: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r24);
    goto CPyL25;
CPyL32: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL23;
}

PyObject *CPyPy_utils___wait_for_popen(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"proc", "timeout", 0};
    static CPyArg_Parser parser = {"OO:wait_for_popen", kwlist, 0};
    PyObject *obj_proc;
    PyObject *obj_timeout;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_proc, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_proc = obj_proc;
    CPyTagged arg_timeout;
    if (likely(PyLong_Check(obj_timeout)))
        arg_timeout = CPyTagged_BorrowFromObject(obj_timeout);
    else {
        CPy_TypeError("int", obj_timeout); goto fail;
    }
    char retval = CPyDef_utils___wait_for_popen(arg_proc, arg_timeout);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "wait_for_popen", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
    return NULL;
}

char CPyDef_utils___kill_proc_gracefully(PyObject *cpy_r_proc) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'poll' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_proc, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL15;
    }
    cpy_r_r2 = PyObject_Vectorcall(cpy_r_r1, 0, 0, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL16;
    }
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 == cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = CPyModule_signal;
    cpy_r_r6 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'SIGINT' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL16;
    }
    cpy_r_r8 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'send_signal' */
    PyObject *cpy_r_r9[2] = {cpy_r_proc, cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL5: ;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r12 = CPyDef_utils___wait_for_popen(cpy_r_proc, 26);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL16;
    }
CPyL6: ;
    cpy_r_r13 = PyObject_Vectorcall(cpy_r_r1, 0, 0, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL16;
    }
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 == cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    if (!cpy_r_r15) goto CPyL10;
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'terminate' */
    PyObject *cpy_r_r17[1] = {cpy_r_proc};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_VectorcallMethod(cpy_r_r16, cpy_r_r18, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL16;
    } else
        goto CPyL19;
CPyL9: ;
    cpy_r_r20 = CPyDef_utils___wait_for_popen(cpy_r_proc, 10);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL16;
    }
CPyL10: ;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r1, 0, 0, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL15;
    }
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 == cpy_r_r22;
    CPy_DECREF(cpy_r_r21);
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'kill' */
    PyObject *cpy_r_r25[1] = {cpy_r_proc};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r26, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL15;
    } else
        goto CPyL20;
CPyL13: ;
    cpy_r_r28 = CPyDef_utils___wait_for_popen(cpy_r_proc, 4);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL15;
    }
CPyL14: ;
    return 1;
CPyL15: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r7);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL5;
CPyL19: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL9;
CPyL20: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL13;
}

PyObject *CPyPy_utils___kill_proc_gracefully(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"proc", 0};
    static CPyArg_Parser parser = {"O:kill_proc_gracefully", kwlist, 0};
    PyObject *obj_proc;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_proc)) {
        return NULL;
    }
    PyObject *arg_proc = obj_proc;
    char retval = CPyDef_utils___kill_proc_gracefully(arg_proc);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "kill_proc_gracefully", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
    return NULL;
}

char CPyDef_utils_____top_level__(void) {
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
    PyObject **cpy_r_r22;
    PyObject **cpy_r_r23;
    void *cpy_r_r25;
    void *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", -1, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_asyncio;
    cpy_r_r6 = (PyObject **)&CPyModule_signal;
    cpy_r_r7 = (PyObject **)&CPyModule_socket;
    cpy_r_r8 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r9[4] = {cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8};
    cpy_r_r10 = (void *)&cpy_r_r9;
    int64_t cpy_r_r11[4] = {1, 2, 3, 4};
    cpy_r_r12 = (void *)&cpy_r_r11;
    cpy_r_r13 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('asyncio', 'asyncio', 'asyncio'),
                                    ('signal', 'signal', 'signal'),
                                    ('socket', 'socket', 'builtinssocket'),
                                    ('time', 'time', 'builtinstime')) */
    cpy_r_r14 = CPyStatic_utils___globals;
    cpy_r_r15 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_web3/tools/benchmark/utils.py' */
    cpy_r_r16 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r17 = CPyImport_ImportMany(cpy_r_r13, cpy_r_r10, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r12);
    if (!cpy_r_r17) goto CPyL19;
    cpy_r_r18 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* ('Any', 'Final') */
    cpy_r_r19 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'typing' */
    cpy_r_r20 = CPyStatic_utils___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyModule_typing = cpy_r_r21;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = (PyObject **)&CPyModule_aiohttp;
    cpy_r_r23 = (PyObject **)&CPyModule_requests;
    PyObject **cpy_r_r24[2] = {cpy_r_r22, cpy_r_r23};
    cpy_r_r25 = (void *)&cpy_r_r24;
    int64_t cpy_r_r26[2] = {10, 11};
    cpy_r_r27 = (void *)&cpy_r_r26;
    cpy_r_r28 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* (('aiohttp', 'aiohttp', 'aiohttp'),
                                    ('requests', 'requests', 'requests')) */
    cpy_r_r29 = CPyStatic_utils___globals;
    cpy_r_r30 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'faster_web3/tools/benchmark/utils.py' */
    cpy_r_r31 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* '<module>' */
    cpy_r_r32 = CPyImport_ImportMany(cpy_r_r28, cpy_r_r25, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r27);
    if (!cpy_r_r32) goto CPyL19;
    cpy_r_r33 = CPyModule_asyncio;
    cpy_r_r34 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'sleep' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyStatic_utils___aiosleep = cpy_r_r35;
    CPy_INCREF(CPyStatic_utils___aiosleep);
    cpy_r_r36 = CPyStatic_utils___globals;
    cpy_r_r37 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'aiosleep' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    cpy_r_r40 = CPyModule_socket;
    cpy_r_r41 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'socket' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyStatic_utils___socket = cpy_r_r42;
    CPy_INCREF(CPyStatic_utils___socket);
    cpy_r_r43 = CPyStatic_utils___globals;
    cpy_r_r44 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'socket' */
    cpy_r_r45 = CPyDict_SetItem(cpy_r_r43, cpy_r_r44, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    cpy_r_r47 = CPyModule_socket;
    cpy_r_r48 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'AF_UNIX' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyStatic_utils___AF_UNIX = cpy_r_r49;
    CPy_INCREF(CPyStatic_utils___AF_UNIX);
    cpy_r_r50 = CPyStatic_utils___globals;
    cpy_r_r51 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'AF_UNIX' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    cpy_r_r54 = CPyModule_socket;
    cpy_r_r55 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'SOCK_STREAM' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyStatic_utils___SOCK_STREAM = cpy_r_r56;
    CPy_INCREF(CPyStatic_utils___SOCK_STREAM);
    cpy_r_r57 = CPyStatic_utils___globals;
    cpy_r_r58 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'SOCK_STREAM' */
    cpy_r_r59 = CPyDict_SetItem(cpy_r_r57, cpy_r_r58, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    cpy_r_r61 = CPyModule_time;
    cpy_r_r62 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'time' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyStatic_utils___time = cpy_r_r63;
    CPy_INCREF(CPyStatic_utils___time);
    cpy_r_r64 = CPyStatic_utils___globals;
    cpy_r_r65 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'time' */
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    cpy_r_r68 = CPyModule_time;
    cpy_r_r69 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'sleep' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    CPyStatic_utils___sleep = cpy_r_r70;
    CPy_INCREF(CPyStatic_utils___sleep);
    cpy_r_r71 = CPyStatic_utils___globals;
    cpy_r_r72 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'sleep' */
    cpy_r_r73 = CPyDict_SetItem(cpy_r_r71, cpy_r_r72, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("faster_web3/tools/benchmark/utils.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_utils___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_web3___tools___benchmark___node = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_os = Py_None;
    CPyModule_socket = Py_None;
    CPyModule_subprocess = Py_None;
    CPyModule_tempfile = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_zipfile = Py_None;
    CPyModule_geth___install = Py_None;
    CPyModule_faster_web3___tools___benchmark___utils = Py_None;
    CPyModule_faster_web3___tools___benchmark___reporting = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_logging = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_web3___tools___benchmark___utils = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_asyncio = Py_None;
    CPyModule_signal = Py_None;
    CPyModule_socket = Py_None;
    CPyModule_time = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_aiohttp = Py_None;
    CPyModule_requests = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[DIFFCHECK_PLACEHOLDER];
const char * const CPyLit_Str[] = {
    "\006\022TemporaryDirectory\b__exit__\t__enter__\b__file__\004path\adirname",
    "\0032../../../tests/integration/geth-1.16.2-fixture.zip\004join\aabspath",
    "\a\adatadir\001r\aZipFile\nextractall\fgenesis.json\rGeneratorExit\rStopIteration",
    "\a\006socket\t127.0.0.1\004bind\vgetsockname\005close\021http://localhost:\vGETH_BINARY",
    "\006\aenviron\fGETH_VERSION\023get_executable_path\006exists\finstall_geth\004geth",
    "\a\005--dev\f--dev.period\003100\t--datadir\f--nodiscover\006--http\v--http.port",
    "\005\n--http.api\030admin,debug,eth,net,web3\f--ipcdisable\n--password\bkeystore",
    "\n\006pw.txt\004init\004PIPE\fcheck_output\005stdin\006stderr\005Popen\006stdout\bbuiltins\002os",
    "\005#faster_web3/tools/benchmark/node.py\b<module>\nsubprocess\btempfile\003Any",
    "\a\005Final\tGenerator\bSequence\005final\006typing\azipfile\fgeth.install",
    "\002\024kill_proc_gracefully!faster_web3.tools.benchmark.utils",
    "\002\027geth-1.16.2-fixture.zip\020GETH_FIXTURE_ZIP",
    "\003 faster_web3.tools.benchmark.node\017__mypyc_attrs__\brpc_port",
    "\003\fendpoint_uri\vgeth_binary\024GethBenchmarkFixture",
    "\004$|{:^26}|{:^20}|{:^20}|{:^20}|{:^20}|\bMethod (\a calls)\fHTTPProvider",
    "\005\020AsyncHTTProvider\vIPCProvider\021WebSocketProvider\006format\004info",
    "\001p----------------------------------------------------------------------------------------------------------------",
    "\0020|{:^26}|{:^20.10}|{:^20.10}|{:^20.10}|{:^20.10}|\004name",
    "\b\021AsyncHTTPProvider\006Logger\alogging\004Dict\aconnect\nsettimeout\aOSError\003get",
    "\005\017ConnectionError\aaiohttp\rClientSession\t__aexit__\n__aenter__",
    "\005\021client_exceptions\024ClientConnectorError\004poll\006SIGINT\vsend_signal",
    "\a\tterminate\004kill\aasyncio\006signal\016builtinssocket\004time\fbuiltinstime",
    "\005$faster_web3/tools/benchmark/utils.py\brequests\005sleep\baiosleep\aAF_UNIX",
    "\001\vSOCK_STREAM",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0011",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    23, 2, 48, 49, 3, 48, 51, 49, 3, 53, 53, 53, 3, 19, 19, 19, 2, 122,
    123, 3, 46, 50, 47, 1, 3, 5, 58, 59, 60, 61, 62, 3, 64, 64, 64, 1,
    128, 2, 28, 30, 1, 66, 1, 89, 2, 58, 91, 3, 108, 108, 108, 3, 109,
    109, 109, 3, 19, 19, 110, 3, 111, 111, 112, 4, 134, 135, 136, 137, 2,
    58, 59, 3, 97, 97, 97, 3, 114, 114, 114, 2, 140, 141
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_web3___tools___benchmark___node__internal = NULL;
CPyModule *CPyModule_faster_web3___tools___benchmark___node;
PyObject *CPyStatic_node___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_os;
CPyModule *CPyModule_socket;
CPyModule *CPyModule_subprocess;
CPyModule *CPyModule_tempfile;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_zipfile;
CPyModule *CPyModule_geth___install;
CPyModule *CPyModule_faster_web3___tools___benchmark___utils__internal = NULL;
CPyModule *CPyModule_faster_web3___tools___benchmark___utils;
CPyModule *CPyModule_faster_web3___tools___benchmark___reporting__internal = NULL;
CPyModule *CPyModule_faster_web3___tools___benchmark___reporting;
PyObject *CPyStatic_reporting___globals;
CPyModule *CPyModule_logging;
PyObject *CPyStatic_utils___globals;
CPyModule *CPyModule_asyncio;
CPyModule *CPyModule_signal;
CPyModule *CPyModule_time;
CPyModule *CPyModule_aiohttp;
CPyModule *CPyModule_requests;
PyTypeObject *CPyType_node___GethBenchmarkFixture;
PyObject *CPyDef_node___GethBenchmarkFixture(void);
PyTypeObject *CPyType_node___build_GethBenchmarkFixture_gen;
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen(void);
CPyThreadLocal faster_web3___tools___benchmark___node___build_GethBenchmarkFixture_genObject *node___build_GethBenchmarkFixture_gen_free_instance;
PyTypeObject *CPyType_node____geth_process_GethBenchmarkFixture_gen;
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen(void);
CPyThreadLocal faster_web3___tools___benchmark___node____geth_process_GethBenchmarkFixture_genObject *node____geth_process_GethBenchmarkFixture_gen_free_instance;
char CPyDef_node___GethBenchmarkFixture_____init__(PyObject *cpy_r_self);
PyObject *CPyPy_node___GethBenchmarkFixture_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_node___build_GethBenchmarkFixture_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_node___build_GethBenchmarkFixture_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_node___build_GethBenchmarkFixture_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_node___build_GethBenchmarkFixture_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___build_GethBenchmarkFixture_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_node___build_GethBenchmarkFixture_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___GethBenchmarkFixture___build(PyObject *cpy_r_self);
PyObject *CPyPy_node___GethBenchmarkFixture___build(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___GethBenchmarkFixture____rpc_port(PyObject *cpy_r_self);
PyObject *CPyPy_node___GethBenchmarkFixture____rpc_port(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___GethBenchmarkFixture____endpoint_uri(PyObject *cpy_r_self);
PyObject *CPyPy_node___GethBenchmarkFixture____endpoint_uri(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___GethBenchmarkFixture____geth_binary(PyObject *cpy_r_self);
PyObject *CPyPy_node___GethBenchmarkFixture____geth_binary(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___GethBenchmarkFixture____geth_command_arguments(PyObject *cpy_r_self, PyObject *cpy_r_datadir);
PyObject *CPyPy_node___GethBenchmarkFixture____geth_command_arguments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node____geth_process_GethBenchmarkFixture_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_node____geth_process_GethBenchmarkFixture_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_node___GethBenchmarkFixture____geth_process(PyObject *cpy_r_self, PyObject *cpy_r_datadir, PyObject *cpy_r_genesis_file, PyObject *cpy_r_rpc_port);
PyObject *CPyPy_node___GethBenchmarkFixture____geth_process(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_node_____top_level__(void);
char CPyDef_reporting___print_header(PyObject *cpy_r_logger, CPyTagged cpy_r_num_calls);
PyObject *CPyPy_reporting___print_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_reporting___print_entry(PyObject *cpy_r_logger, PyObject *cpy_r_method_benchmarks);
PyObject *CPyPy_reporting___print_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_reporting___print_footer(PyObject *cpy_r_logger);
PyObject *CPyPy_reporting___print_footer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_reporting_____top_level__(void);
PyObject *CPyStatic_utils___aiosleep = NULL;
PyObject *CPyStatic_utils___socket = NULL;
PyObject *CPyStatic_utils___AF_UNIX = NULL;
PyObject *CPyStatic_utils___SOCK_STREAM = NULL;
PyObject *CPyStatic_utils___time = NULL;
PyObject *CPyStatic_utils___sleep = NULL;
PyTypeObject *CPyType_utils___wait_for_aiohttp_gen;
PyObject *CPyDef_utils___wait_for_aiohttp_gen(void);
CPyThreadLocal faster_web3___tools___benchmark___utils___wait_for_aiohttp_genObject *utils___wait_for_aiohttp_gen_free_instance;
char CPyDef_utils___wait_for_socket(PyObject *cpy_r_ipc_path, CPyTagged cpy_r_timeout);
PyObject *CPyPy_utils___wait_for_socket(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_utils___wait_for_http(PyObject *cpy_r_endpoint_uri, CPyTagged cpy_r_timeout);
PyObject *CPyPy_utils___wait_for_http(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_utils___wait_for_aiohttp_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_utils___wait_for_aiohttp_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_utils___wait_for_aiohttp_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_utils___wait_for_aiohttp_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_utils___wait_for_aiohttp_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_utils___wait_for_aiohttp_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_utils___wait_for_aiohttp_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_utils___wait_for_aiohttp_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_utils___wait_for_aiohttp_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_utils___wait_for_aiohttp_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_utils___wait_for_aiohttp_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_utils___wait_for_aiohttp_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_utils___wait_for_aiohttp_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_utils___wait_for_aiohttp(PyObject *cpy_r_endpoint_uri, CPyTagged cpy_r_timeout);
PyObject *CPyPy_utils___wait_for_aiohttp(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_utils___wait_for_popen(PyObject *cpy_r_proc, CPyTagged cpy_r_timeout);
PyObject *CPyPy_utils___wait_for_popen(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_utils___kill_proc_gracefully(PyObject *cpy_r_proc);
PyObject *CPyPy_utils___kill_proc_gracefully(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_utils_____top_level__(void);

static int exec_909239aaf4f10b4a0b69__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    extern PyObject *CPyInit_faster_web3___tools___benchmark___node(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___tools___benchmark___node, "909239aaf4f10b4a0b69__mypyc.init_faster_web3___tools___benchmark___node", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___tools___benchmark___node", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___tools___benchmark___reporting(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___tools___benchmark___reporting, "909239aaf4f10b4a0b69__mypyc.init_faster_web3___tools___benchmark___reporting", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___tools___benchmark___reporting", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_web3___tools___benchmark___utils(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_web3___tools___benchmark___utils, "909239aaf4f10b4a0b69__mypyc.init_faster_web3___tools___benchmark___utils", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_web3___tools___benchmark___utils", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_909239aaf4f10b4a0b69__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "909239aaf4f10b4a0b69__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_909239aaf4f10b4a0b69__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_909239aaf4f10b4a0b69__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_909239aaf4f10b4a0b69__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
