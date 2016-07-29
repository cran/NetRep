#ifndef __SCALE__
#define __SCALE__

#define ARMA_USE_LAPACK
#define ARMA_USE_BLAS
#define ARMA_NO_DEBUG
#define ARMA_DONT_PRINT_ERRORS
#define ARMA_DONT_USE_CXX11

#include <RcppArmadillo.h>

arma::mat Scale (double *, unsigned int, unsigned int);
Rcpp::NumericMatrix Scale (Rcpp::NumericMatrix);


#endif // __SCALE__
