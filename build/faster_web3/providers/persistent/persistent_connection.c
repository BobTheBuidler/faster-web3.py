#include <Python.h>

PyMODINIT_FUNC
PyInit_persistent_connection(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("6e2934ce7263fc33a605__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_faster_web3___providers___persistent___persistent_connection");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "6e2934ce7263fc33a605__mypyc.init_faster_web3___providers___persistent___persistent_connection");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_persistent_connection(); }
