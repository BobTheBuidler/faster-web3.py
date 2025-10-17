#include <Python.h>

PyMODINIT_FUNC
PyInit_async_ipc(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("7d57dc692d5dc7cef493__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_faster_web3___providers___persistent___async_ipc");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "7d57dc692d5dc7cef493__mypyc.init_faster_web3___providers___persistent___async_ipc");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_async_ipc(); }
