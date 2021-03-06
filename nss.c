/* Generated by Pyrex 0.9.3 on Thu Dec 23 10:31:36 2004 */

#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#include "./nss.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/
static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/
static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/
static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/
static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
staticforward char **__pyx_f;

/* Declarations from nss */


/* Implementation of nss */


static PyObject *__pyx_n_NSSError;
static PyObject *__pyx_n_NSSBadPassword;
static PyObject *__pyx_n_decrypt_pass;
static PyObject *__pyx_n_encrypt_pass;
static PyObject *__pyx_n_Exception;

static PyObject *__pyx_n_len;

static PyObject *__pyx_k3p;
static PyObject *__pyx_k4p;
static PyObject *__pyx_k5p;
static PyObject *__pyx_k6p;

static char (__pyx_k3[]) = "NSS_Init failed.";
static char (__pyx_k4[]) = "Decryption failed - bad password?";
static char (__pyx_k5[]) = "Decryption failed, probably not because of bad password.";
static char (__pyx_k6[]) = "NSS_Shutdown failed.";

static PyObject *__pyx_f_3nss_decrypt_pass(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_3nss_decrypt_pass(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  char (*__pyx_v_path);
  char (*__pyx_v_password);
  PyObject *__pyx_v_encrypted_string = 0;
  int __pyx_v_ok;
  SECItem __pyx_v_input;
  SECItem __pyx_v_output;
  PyObject *__pyx_v_retstring;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  unsigned int __pyx_5;
  static char *__pyx_argnames[] = {"path","password","encrypted_string",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "ssO", __pyx_argnames, &__pyx_v_path, &__pyx_v_password, &__pyx_v_encrypted_string)) return 0;
  Py_INCREF(__pyx_v_encrypted_string);
  __pyx_v_retstring = Py_None; Py_INCREF(__pyx_v_retstring);

  /* "/home/pont/devel/mozpass/nss.pyx":32 */
  set_password(__pyx_v_password);

  /* "/home/pont/devel/mozpass/nss.pyx":33 */
  __pyx_v_ok = NSS_Init(__pyx_v_path);

  /* "/home/pont/devel/mozpass/nss.pyx":35 */
  __pyx_1 = (!(__pyx_v_ok == 0));
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":36 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSError); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 36; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 36; goto __pyx_L1;}
    Py_INCREF(__pyx_k3p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k3p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 36; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 36; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/pont/devel/mozpass/nss.pyx":38 */
  fixup_password();

  /* "/home/pont/devel/mozpass/nss.pyx":43 */
  __pyx_v_input.data = PyString_AsString(__pyx_v_encrypted_string);

  /* "/home/pont/devel/mozpass/nss.pyx":44 */
  __pyx_2 = __Pyx_GetName(__pyx_b, __pyx_n_len); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  Py_INCREF(__pyx_v_encrypted_string);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_encrypted_string);
  __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_5 = PyInt_AsLong(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 44; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_v_input.len = __pyx_5;

  /* "/home/pont/devel/mozpass/nss.pyx":45 */
  __pyx_v_input.type = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":47 */
  __pyx_v_output.type = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":48 */
  __pyx_v_output.len = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":49 */
  __pyx_v_output.data = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":51 */
  __pyx_v_ok = PK11SDR_Decrypt((&__pyx_v_input),(&__pyx_v_output),0);

  /* "/home/pont/devel/mozpass/nss.pyx":53 */
  __pyx_1 = (pwdcallcount > 1);
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":54 */
    NSS_Shutdown();

    /* "/home/pont/devel/mozpass/nss.pyx":55 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSBadPassword); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
    Py_INCREF(__pyx_k4p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k4p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 55; goto __pyx_L1;}
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/pont/devel/mozpass/nss.pyx":57 */
  __pyx_1 = (!(__pyx_v_ok == 0));
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":58 */
    NSS_Shutdown();

    /* "/home/pont/devel/mozpass/nss.pyx":59 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSError); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 59; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 59; goto __pyx_L1;}
    Py_INCREF(__pyx_k5p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k5p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 59; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 59; goto __pyx_L1;}
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/home/pont/devel/mozpass/nss.pyx":61 */
  __pyx_v_ok = NSS_Shutdown();

  /* "/home/pont/devel/mozpass/nss.pyx":63 */
  __pyx_1 = (!(__pyx_v_ok == 0));
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":64 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSError); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
    Py_INCREF(__pyx_k6p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k6p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L1;}
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/home/pont/devel/mozpass/nss.pyx":66 */
  __pyx_2 = PyString_FromStringAndSize(__pyx_v_output.data,__pyx_v_output.len); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
  Py_DECREF(__pyx_v_retstring);
  __pyx_v_retstring = __pyx_2;
  __pyx_2 = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":68 */
  free(__pyx_v_output.data);

  /* "/home/pont/devel/mozpass/nss.pyx":69 */
  Py_INCREF(__pyx_v_retstring);
  __pyx_r = __pyx_v_retstring;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("nss.decrypt_pass");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_retstring);
  Py_DECREF(__pyx_v_encrypted_string);
  return __pyx_r;
}

static PyObject *__pyx_k7p;
static PyObject *__pyx_k8p;
static PyObject *__pyx_k9p;
static PyObject *__pyx_k10p;

static char (__pyx_k7[]) = "NSS_Init failed.";
static char (__pyx_k8[]) = "Encryption failed - bad password?";
static char (__pyx_k9[]) = "Encryption failed, probably not because of bad password.";
static char (__pyx_k10[]) = "NSS_Shutdown failed.";

static PyObject *__pyx_f_3nss_encrypt_pass(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_3nss_encrypt_pass(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  char (*__pyx_v_path);
  char (*__pyx_v_password);
  PyObject *__pyx_v_string_to_crypt = 0;
  int __pyx_v_ok;
  SECItem __pyx_v_key;
  SECItem __pyx_v_input;
  SECItem __pyx_v_output;
  PyObject *__pyx_v_retstring;
  PyObject *__pyx_r;
  int __pyx_1;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  unsigned int __pyx_5;
  static char *__pyx_argnames[] = {"path","password","string_to_crypt",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "ssO", __pyx_argnames, &__pyx_v_path, &__pyx_v_password, &__pyx_v_string_to_crypt)) return 0;
  Py_INCREF(__pyx_v_string_to_crypt);
  __pyx_v_retstring = Py_None; Py_INCREF(__pyx_v_retstring);

  /* "/home/pont/devel/mozpass/nss.pyx":77 */
  set_password(__pyx_v_password);

  /* "/home/pont/devel/mozpass/nss.pyx":78 */
  __pyx_v_ok = NSS_Init(__pyx_v_path);

  /* "/home/pont/devel/mozpass/nss.pyx":80 */
  __pyx_1 = (!(__pyx_v_ok == 0));
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":81 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSError); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 81; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 81; goto __pyx_L1;}
    Py_INCREF(__pyx_k7p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k7p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 81; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 81; goto __pyx_L1;}
    goto __pyx_L2;
  }
  __pyx_L2:;

  /* "/home/pont/devel/mozpass/nss.pyx":83 */
  fixup_password();

  /* "/home/pont/devel/mozpass/nss.pyx":89 */
  __pyx_v_input.data = PyString_AsString(__pyx_v_string_to_crypt);

  /* "/home/pont/devel/mozpass/nss.pyx":90 */
  __pyx_2 = __Pyx_GetName(__pyx_b, __pyx_n_len); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_INCREF(__pyx_v_string_to_crypt);
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_v_string_to_crypt);
  __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_5 = PyInt_AsLong(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_v_input.len = __pyx_5;

  /* "/home/pont/devel/mozpass/nss.pyx":91 */
  __pyx_v_input.type = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":93 */
  __pyx_v_output.type = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":94 */
  __pyx_v_output.len = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":95 */
  __pyx_v_output.data = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":97 */
  __pyx_v_key.type = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":98 */
  __pyx_v_key.len = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":99 */
  __pyx_v_key.data = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":101 */
  __pyx_v_ok = PK11SDR_Encrypt((&__pyx_v_key),(&__pyx_v_input),(&__pyx_v_output),0);

  /* "/home/pont/devel/mozpass/nss.pyx":103 */
  __pyx_1 = (pwdcallcount > 1);
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":104 */
    NSS_Shutdown();

    /* "/home/pont/devel/mozpass/nss.pyx":105 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSBadPassword); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    Py_INCREF(__pyx_k8p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k8p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 105; goto __pyx_L1;}
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/home/pont/devel/mozpass/nss.pyx":107 */
  __pyx_1 = (!(__pyx_v_ok == 0));
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":108 */
    NSS_Shutdown();

    /* "/home/pont/devel/mozpass/nss.pyx":109 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSError); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 109; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 109; goto __pyx_L1;}
    Py_INCREF(__pyx_k9p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k9p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 109; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 109; goto __pyx_L1;}
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "/home/pont/devel/mozpass/nss.pyx":111 */
  __pyx_v_ok = NSS_Shutdown();

  /* "/home/pont/devel/mozpass/nss.pyx":113 */
  __pyx_1 = (!(__pyx_v_ok == 0));
  if (__pyx_1) {

    /* "/home/pont/devel/mozpass/nss.pyx":114 */
    __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_NSSError); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 114; goto __pyx_L1;}
    __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 114; goto __pyx_L1;}
    Py_INCREF(__pyx_k10p);
    PyTuple_SET_ITEM(__pyx_3, 0, __pyx_k10p);
    __pyx_4 = PyObject_CallObject(__pyx_2, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 114; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    __Pyx_Raise(__pyx_4, 0, 0);
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 114; goto __pyx_L1;}
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/home/pont/devel/mozpass/nss.pyx":116 */
  __pyx_2 = PyString_FromStringAndSize(__pyx_v_output.data,__pyx_v_output.len); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; goto __pyx_L1;}
  Py_DECREF(__pyx_v_retstring);
  __pyx_v_retstring = __pyx_2;
  __pyx_2 = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":118 */
  free(__pyx_v_output.data);

  /* "/home/pont/devel/mozpass/nss.pyx":119 */
  Py_INCREF(__pyx_v_retstring);
  __pyx_r = __pyx_v_retstring;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("nss.encrypt_pass");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_retstring);
  Py_DECREF(__pyx_v_string_to_crypt);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_Exception, "Exception"},
  {&__pyx_n_NSSBadPassword, "NSSBadPassword"},
  {&__pyx_n_NSSError, "NSSError"},
  {&__pyx_n_decrypt_pass, "decrypt_pass"},
  {&__pyx_n_encrypt_pass, "encrypt_pass"},
  {&__pyx_n_len, "len"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k3p, __pyx_k3, sizeof(__pyx_k3)},
  {&__pyx_k4p, __pyx_k4, sizeof(__pyx_k4)},
  {&__pyx_k5p, __pyx_k5, sizeof(__pyx_k5)},
  {&__pyx_k6p, __pyx_k6, sizeof(__pyx_k6)},
  {&__pyx_k7p, __pyx_k7, sizeof(__pyx_k7)},
  {&__pyx_k8p, __pyx_k8, sizeof(__pyx_k8)},
  {&__pyx_k9p, __pyx_k9, sizeof(__pyx_k9)},
  {&__pyx_k10p, __pyx_k10, sizeof(__pyx_k10)},
  {0, 0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"decrypt_pass", (PyCFunction)__pyx_f_3nss_decrypt_pass, METH_VARARGS|METH_KEYWORDS, 0},
  {"encrypt_pass", (PyCFunction)__pyx_f_3nss_encrypt_pass, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

DL_EXPORT(void) initnss(void); /*proto*/
DL_EXPORT(void) initnss(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  __pyx_m = Py_InitModule4("nss", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};

  /* "/home/pont/devel/mozpass/nss.pyx":2 */
  __pyx_1 = PyDict_New(); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  __pyx_2 = __Pyx_GetName(__pyx_b, __pyx_n_Exception); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  __pyx_3 = PyTuple_New(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_3, 0, __pyx_2);
  __pyx_2 = 0;
  __pyx_2 = __Pyx_CreateClass(__pyx_3, __pyx_1, __pyx_n_NSSError, "nss"); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":3 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_NSSError, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":5 */
  __pyx_3 = PyDict_New(); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_NSSError); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_1);
  __pyx_1 = 0;
  __pyx_1 = __Pyx_CreateClass(__pyx_2, __pyx_3, __pyx_n_NSSBadPassword, "nss"); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":6 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_NSSBadPassword, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/home/pont/devel/mozpass/nss.pyx":74 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("nss");
}

static char *__pyx_filenames[] = {
  "nss.pyx",
};
statichere char **__pyx_f = __pyx_filenames;

/* Runtime support code */

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
}

static PyObject *__Pyx_CreateClass(
    PyObject *bases, PyObject *dict, PyObject *name, char *modname)
{
    PyObject *py_modname;
    PyObject *result = 0;
    
    py_modname = PyString_FromString(modname);
    if (!py_modname)
        goto bad;
    if (PyDict_SetItemString(dict, "__module__", py_modname) < 0)
        goto bad;
    result = PyClass_New(bases, dict, name);
bad:
    Py_XDECREF(py_modname);
    return result;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
    Py_XINCREF(type);
    Py_XINCREF(value);
    Py_XINCREF(tb);
    /* First, check the traceback argument, replacing None with NULL. */
    if (tb == Py_None) {
        Py_DECREF(tb);
        tb = 0;
    }
    else if (tb != NULL && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto raise_error;
    }
    /* Next, replace a missing value with None */
    if (value == NULL) {
        value = Py_None;
        Py_INCREF(value);
    }
    /* Next, repeatedly, replace a tuple exception with its first item */
    while (PyTuple_Check(type) && PyTuple_Size(type) > 0) {
        PyObject *tmp = type;
        type = PyTuple_GET_ITEM(type, 0);
        Py_INCREF(type);
        Py_DECREF(tmp);
    }
    if (PyString_Check(type))
        ;
    else if (PyClass_Check(type))
        ; /*PyErr_NormalizeException(&type, &value, &tb);*/
    else if (PyInstance_Check(type)) {
        /* Raising an instance.  The value should be a dummy. */
        if (value != Py_None) {
            PyErr_SetString(PyExc_TypeError,
              "instance exception may not have a separate value");
            goto raise_error;
        }
        else {
            /* Normalize to raise <class>, <instance> */
            Py_DECREF(value);
            value = type;
            type = (PyObject*) ((PyInstanceObject*)type)->in_class;
            Py_INCREF(type);
        }
    }
    else {
        /* Not something you can raise.  You get an exception
           anyway, just not what you specified :-) */
        PyErr_Format(PyExc_TypeError,
                 "exceptions must be strings, classes, or "
                 "instances, not %s", type->ob_type->tp_name);
        goto raise_error;
    }
    PyErr_Restore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
