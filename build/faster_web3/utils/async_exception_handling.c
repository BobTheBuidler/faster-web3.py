#include <Python.h>

PyMODINIT_FUNC
PyInit_async_exception_handling(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("2c3297a056130187a890__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_faster_web3___utils___async_exception_handling");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "2c3297a056130187a890__mypyc.init_faster_web3___utils___async_exception_handling");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_async_exception_handling(); }
