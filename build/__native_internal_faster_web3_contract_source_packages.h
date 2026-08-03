#ifndef MYPYC_LIBRT_INTERNAL_faster_web3_contract_source_packages_H
#define MYPYC_LIBRT_INTERNAL_faster_web3_contract_source_packages_H
#include <Python.h>
#include <CPy.h>
#include "__native_faster_web3_contract_source_packages.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[4];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_faster_web3____utils___contract_sources__internal;
extern CPyModule *CPyModule_faster_web3____utils___contract_sources;
extern PyObject *CPyStatic_contract_sources___globals;
extern CPyModule *CPyModule_builtins;
extern int CPyExec_faster_web3____utils___contract_sources(PyObject *module);
extern PyObject *CPyInit_faster_web3____utils___contract_sources(void);
extern PyObject *CPyInitOnly_faster_web3____utils___contract_sources(void);
extern CPyModule *CPyModule_faster_web3____utils___contract_sources___contract_data__internal;
extern CPyModule *CPyModule_faster_web3____utils___contract_sources___contract_data;
extern PyObject *CPyStatic_contract_data___globals;
extern int CPyExec_faster_web3____utils___contract_sources___contract_data(PyObject *module);
extern PyObject *CPyInit_faster_web3____utils___contract_sources___contract_data(void);
extern PyObject *CPyInitOnly_faster_web3____utils___contract_sources___contract_data(void);
extern char CPyDef_contract_sources_____top_level__(void);
extern char CPyDef_contract_data_____top_level__(void);
#endif
