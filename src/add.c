#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

SEXP addr_add_one(SEXP a) {

  SEXP out = PROTECT(Rf_allocVector(REALSXP, 1));

  REAL(out)[0] = Rf_asReal(a) + 1;

  UNPROTECT(1);

  return out;
}
