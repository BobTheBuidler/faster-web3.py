#include <Python.h>

PyMODINIT_FUNC
PyInit_request_caching_validation(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("82a2e4b9b5b389b600b2__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_faster_web3____utils___caching___request_caching_validation");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "82a2e4b9b5b389b600b2__mypyc.init_faster_web3____utils___caching___request_caching_validation");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_request_caching_validation(); }
