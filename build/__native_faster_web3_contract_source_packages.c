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
#include "function_wrapper.c"
#include "__native_faster_web3_contract_source_packages.h"
#include "__native_internal_faster_web3_contract_source_packages.h"
static PyMethodDef contract_sourcesmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_web3____utils___contract_sources(PyObject *module)
{
    intern_strings();
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3____utils___contract_sources__internal, "__name__");
    CPyStatic_contract_sources___globals = PyModule_GetDict(CPyModule_faster_web3____utils___contract_sources__internal);
    if (unlikely(CPyStatic_contract_sources___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_contract_sources_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_web3____utils___contract_sources__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef contract_sourcesmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_web3._utils.contract_sources",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    contract_sourcesmodule_methods,
    NULL,
};

PyObject *CPyInitOnly_faster_web3____utils___contract_sources(void)
{
    if (CPyModule_faster_web3____utils___contract_sources__internal) {
        Py_INCREF(CPyModule_faster_web3____utils___contract_sources__internal);
        return CPyModule_faster_web3____utils___contract_sources__internal;
    }
    CPyModule_faster_web3____utils___contract_sources__internal = PyModule_Create(&contract_sourcesmodule);
    return CPyModule_faster_web3____utils___contract_sources__internal;
}

PyObject *CPyInit_faster_web3____utils___contract_sources(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_web3____utils___contract_sources__internal) {
        Py_INCREF(CPyModule_faster_web3____utils___contract_sources__internal);
        return CPyModule_faster_web3____utils___contract_sources__internal;
    }
    CPyModule_faster_web3____utils___contract_sources__internal = PyModule_Create(&contract_sourcesmodule);
    if (unlikely(CPyModule_faster_web3____utils___contract_sources__internal == NULL))
        goto fail;
    modname = PyUnicode_FromString("faster_web3._utils.contract_sources");
    if (modname == NULL) CPyError_OutOfMemory();
    int rv = 0;
    PyObject *mod_dict = PyImport_GetModuleDict();
    PyObject *shared_lib = NULL;
    rv = PyDict_GetItemStringRef(mod_dict, "faster_web3_contract_source_packages__mypyc", &shared_lib);
    if (rv < 0) goto fail;
    PyObject *shared_lib_file = PyObject_GetAttrString(shared_lib, "__file__");
    if (shared_lib_file == NULL) goto fail;
    PyObject *ext_suffix = PyUnicode_FromString(".cpython-314-x86_64-linux-gnu.so");
    if (ext_suffix == NULL) CPyError_OutOfMemory();
    Py_ssize_t is_pkg = 1;
    rv = CPyImport_SetDunderAttrs(CPyModule_faster_web3____utils___contract_sources__internal, modname, shared_lib_file, ext_suffix, is_pkg);
    Py_DECREF(ext_suffix);
    Py_DECREF(shared_lib_file);
    if (rv < 0) goto fail;
    if (PyObject_SetItem(PyImport_GetModuleDict(), modname, CPyModule_faster_web3____utils___contract_sources__internal) < 0)
        goto fail;
    Py_CLEAR(modname);
    if (CPyExec_faster_web3____utils___contract_sources(CPyModule_faster_web3____utils___contract_sources__internal) != 0)
        goto fail;
    return CPyModule_faster_web3____utils___contract_sources__internal;
    fail:
    {
            PyObject *exc_type, *exc_val, *exc_tb;
            PyErr_Fetch(&exc_type, &exc_val, &exc_tb);
            if (modname == NULL) {
                    modname = PyUnicode_FromString("faster_web3._utils.contract_sources");
                    if (modname == NULL) CPyError_OutOfMemory();
                }
                PyObject_DelItem(PyImport_GetModuleDict(), modname);
                PyErr_Clear();
                Py_DECREF(modname);
                Py_CLEAR(CPyModule_faster_web3____utils___contract_sources__internal);
                PyErr_Restore(exc_type, exc_val, exc_tb);
        }
        return NULL;
    }
    
char CPyDef_contract_sources_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/contract_sources/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_contract_sources___globals);
        goto CPyL4;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}
    static PyMethodDef contract_datamodule_methods[] = {
        {NULL, NULL, 0, NULL}
    };
    
    int CPyExec_faster_web3____utils___contract_sources___contract_data(PyObject *module)
    {
        intern_strings();
        PyObject* modname = NULL;
        modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_web3____utils___contract_sources___contract_data__internal, "__name__");
        CPyStatic_contract_data___globals = PyModule_GetDict(CPyModule_faster_web3____utils___contract_sources___contract_data__internal);
        if (unlikely(CPyStatic_contract_data___globals == NULL))
            goto fail;
        if (CPyGlobalsInit() < 0)
            goto fail;
        char result = CPyDef_contract_data_____top_level__();
        if (result == 2)
            goto fail;
        Py_DECREF(modname);
        return 0;
        fail:
        Py_CLEAR(CPyModule_faster_web3____utils___contract_sources___contract_data__internal);
        Py_CLEAR(modname);
        return -1;
    }
    static struct PyModuleDef contract_datamodule = {
        PyModuleDef_HEAD_INIT,
        "faster_web3._utils.contract_sources.contract_data",
        NULL, /* docstring */
        0,       /* size of per-interpreter state of the module */
        contract_datamodule_methods,
        NULL,
    };
    
    PyObject *CPyInitOnly_faster_web3____utils___contract_sources___contract_data(void)
    {
        if (CPyModule_faster_web3____utils___contract_sources___contract_data__internal) {
            Py_INCREF(CPyModule_faster_web3____utils___contract_sources___contract_data__internal);
            return CPyModule_faster_web3____utils___contract_sources___contract_data__internal;
        }
        CPyModule_faster_web3____utils___contract_sources___contract_data__internal = PyModule_Create(&contract_datamodule);
        return CPyModule_faster_web3____utils___contract_sources___contract_data__internal;
    }
    
    PyObject *CPyInit_faster_web3____utils___contract_sources___contract_data(void)
    {
        PyObject* modname = NULL;
        if (CPyModule_faster_web3____utils___contract_sources___contract_data__internal) {
            Py_INCREF(CPyModule_faster_web3____utils___contract_sources___contract_data__internal);
            return CPyModule_faster_web3____utils___contract_sources___contract_data__internal;
        }
        CPyModule_faster_web3____utils___contract_sources___contract_data__internal = PyModule_Create(&contract_datamodule);
        if (unlikely(CPyModule_faster_web3____utils___contract_sources___contract_data__internal == NULL))
            goto fail;
        modname = PyUnicode_FromString("faster_web3._utils.contract_sources.contract_data");
        if (modname == NULL) CPyError_OutOfMemory();
        int rv = 0;
        PyObject *mod_dict = PyImport_GetModuleDict();
        PyObject *shared_lib = NULL;
        rv = PyDict_GetItemStringRef(mod_dict, "faster_web3_contract_source_packages__mypyc", &shared_lib);
        if (rv < 0) goto fail;
        PyObject *shared_lib_file = PyObject_GetAttrString(shared_lib, "__file__");
        if (shared_lib_file == NULL) goto fail;
        PyObject *ext_suffix = PyUnicode_FromString(".cpython-314-x86_64-linux-gnu.so");
        if (ext_suffix == NULL) CPyError_OutOfMemory();
        Py_ssize_t is_pkg = 1;
        rv = CPyImport_SetDunderAttrs(CPyModule_faster_web3____utils___contract_sources___contract_data__internal, modname, shared_lib_file, ext_suffix, is_pkg);
        Py_DECREF(ext_suffix);
        Py_DECREF(shared_lib_file);
        if (rv < 0) goto fail;
        if (PyObject_SetItem(PyImport_GetModuleDict(), modname, CPyModule_faster_web3____utils___contract_sources___contract_data__internal) < 0)
            goto fail;
        Py_CLEAR(modname);
        if (CPyExec_faster_web3____utils___contract_sources___contract_data(CPyModule_faster_web3____utils___contract_sources___contract_data__internal) != 0)
            goto fail;
        return CPyModule_faster_web3____utils___contract_sources___contract_data__internal;
        fail:
        {
                PyObject *exc_type, *exc_val, *exc_tb;
                PyErr_Fetch(&exc_type, &exc_val, &exc_tb);
                if (modname == NULL) {
                        modname = PyUnicode_FromString("faster_web3._utils.contract_sources.contract_data");
                        if (modname == NULL) CPyError_OutOfMemory();
                    }
                    PyObject_DelItem(PyImport_GetModuleDict(), modname);
                    PyErr_Clear();
                    Py_DECREF(modname);
                    Py_CLEAR(CPyModule_faster_web3____utils___contract_sources___contract_data__internal);
                    PyErr_Restore(exc_type, exc_val, exc_tb);
            }
            return NULL;
        }
        
char CPyDef_contract_data_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[DIFFCHECK_PLACEHOLDER]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_web3/_utils/contract_sources/contract_data/__init__.py", "<module>", DIFFCHECK_PLACEHOLDER, CPyStatic_contract_data___globals);
        goto CPyL4;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}
        
        int CPyGlobalsInit(void)
        {
            static int is_initialized = 0;
            if (is_initialized) return 0;
            
            CPy_Init();
            CPyModule_faster_web3____utils___contract_sources = Py_None;
            CPyModule_builtins = Py_None;
            CPyModule_faster_web3____utils___contract_sources___contract_data = Py_None;
            CPyModule_builtins = Py_None;
            if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
                return -1;
            }
            is_initialized = 1;
            return 0;
        }
        
        PyObject *CPyStatics[DIFFCHECK_PLACEHOLDER];
        const char * const CPyLit_Str[] = {
    "\001\bbuiltins",
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
        const int CPyLit_Tuple[] = {0};
        const int CPyLit_FrozenSet[] = {0};
        CPyModule *CPyModule_faster_web3____utils___contract_sources__internal = NULL;
        CPyModule *CPyModule_faster_web3____utils___contract_sources;
        PyObject *CPyStatic_contract_sources___globals;
        CPyModule *CPyModule_builtins;
        int CPyExec_faster_web3____utils___contract_sources(PyObject *module);
        PyObject *CPyInit_faster_web3____utils___contract_sources(void);
        PyObject *CPyInitOnly_faster_web3____utils___contract_sources(void);
        CPyModule *CPyModule_faster_web3____utils___contract_sources___contract_data__internal = NULL;
        CPyModule *CPyModule_faster_web3____utils___contract_sources___contract_data;
        PyObject *CPyStatic_contract_data___globals;
        int CPyExec_faster_web3____utils___contract_sources___contract_data(PyObject *module);
        PyObject *CPyInit_faster_web3____utils___contract_sources___contract_data(void);
        PyObject *CPyInitOnly_faster_web3____utils___contract_sources___contract_data(void);
        char CPyDef_contract_sources_____top_level__(void);
        char CPyDef_contract_data_____top_level__(void);
        
        static int exec_faster_web3_contract_source_packages__mypyc(PyObject *module)
        {
            int res;
            PyObject *capsule;
            PyObject *tmp;
            
            extern PyObject *CPyInit_faster_web3____utils___contract_sources(void);
            capsule = PyCapsule_New((void *)CPyInit_faster_web3____utils___contract_sources, "faster_web3_contract_source_packages__mypyc.init_faster_web3____utils___contract_sources", NULL);
            if (!capsule) {
                goto fail;
            }
            res = PyObject_SetAttrString(module, "init_faster_web3____utils___contract_sources", capsule);
            Py_DECREF(capsule);
            if (res < 0) {
                goto fail;
            }
            
            extern PyObject *CPyInit_faster_web3____utils___contract_sources___contract_data(void);
            capsule = PyCapsule_New((void *)CPyInit_faster_web3____utils___contract_sources___contract_data, "faster_web3_contract_source_packages__mypyc.init_faster_web3____utils___contract_sources___contract_data", NULL);
            if (!capsule) {
                goto fail;
            }
            res = PyObject_SetAttrString(module, "init_faster_web3____utils___contract_sources___contract_data", capsule);
            Py_DECREF(capsule);
            if (res < 0) {
                goto fail;
            }
            
            return 0;
            fail:
            return -1;
        }
        static PyModuleDef module_def_faster_web3_contract_source_packages__mypyc = {
            PyModuleDef_HEAD_INIT,
            .m_name = "faster_web3_contract_source_packages__mypyc",
            .m_doc = NULL,
            .m_size = -1,
            .m_methods = NULL,
        };
        PyMODINIT_FUNC PyInit_faster_web3_contract_source_packages__mypyc(void) {
            static PyObject *module = NULL;
            if (module) {
                Py_INCREF(module);
                return module;
            }
            module = PyModule_Create(&module_def_faster_web3_contract_source_packages__mypyc);
            if (!module) {
                return NULL;
            }
            if (exec_faster_web3_contract_source_packages__mypyc(module) < 0) {
                Py_DECREF(module);
                return NULL;
            }
            return module;
        }
