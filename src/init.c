#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP addr_add_one(SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"addr_add_one", (DL_FUNC) &addr_add_one, 1},
  {NULL, NULL, 0}
};

void R_init_addr(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
