// [[Rcpp::depends(RcppParallel)]]
#include <Rcpp.h>
#include <iostream>
#include <ctime>
#include <math.h>
#include "LSE.h"
#include "RVector.h"

using namespace Rcpp;

template<typename scalar_t> 
inline void logTrans4(scalar_t d, scalar_t a, scalar_t f, scalar_t lf, scalar_t lumf, scalar_t & lt00, scalar_t & lt01, scalar_t & lt10, scalar_t & lt11) {
  if(d < 0) { // changement de chromosomoe
    lt00 = lumf;
    lt01 = lf;
    lt10 = lumf;
    lt11 = lf;
    return;
  }
  // attention à la façon de calculer log(1 - exp(-a*d))
  // quand a petit, log1p(-exp(-a*d)) marche moins bien que log(-expm1(-a*d))
  // [enfin ça change pas grand chose]
  scalar_t ex = expm1(-a*d);
  lt00 = log1p(f*ex);
  lt01 = lf + log(-ex);
  lt10 = lumf + log(-ex);
  lt11 = log1p((1-f)*ex);
}

/**** algorithme forward - backward pour le calcul des probas a posteriori ****/
// argument PHBD = un RVecteur pour le stockage des résultats
template<typename scalar_t>
void forwardBackward(const std::vector<scalar_t> & logEmiss, const std::vector<scalar_t> & deltaDist, 
                     scalar_t a, scalar_t f, RVector<scalar_t> & PHBD) {

  int N = deltaDist.size() + 1;
  if(f == 0) {
    for(int n = 0; n < N; n++) PHBD[n] = (scalar_t) 0;
    return;
  }
  if(f == 1) {
    for(int n = 0; n < N; n++) PHBD[n] = (scalar_t) 1;
    return;
  }

  scalar_t logf   = log(f);
  scalar_t logumf = log(1-f);
  scalar_t lt00, lt01, lt10, lt11; // log proba transition
  // stocker les alpha
  std::vector<scalar_t> Alpha(2*N);
  // état initial
  scalar_t alpha0 = logumf;
  scalar_t alpha1 = logf;
  scalar_t alpha0_;
  Alpha[0] = alpha0;
  Alpha[1] = alpha1;
  // forward
  for(int n = 1; n < N; n++) {
    // calcul des lt
    logTrans4<scalar_t>(deltaDist[n-1], a, f, logf, logumf, lt00, lt01, lt10, lt11);
    alpha0_ = LSE( lt00 + logEmiss[2*n-2] + alpha0, lt10 + logEmiss[2*n-1] + alpha1 );
    alpha1  = LSE( lt01 + logEmiss[2*n-2] + alpha0, lt11 + logEmiss[2*n-1] + alpha1 );
    alpha0  = alpha0_;
    Alpha[2*n]   = alpha0;
    Alpha[2*n+1] = alpha1;
  }
  // backward
  // 
  //   NOTE. La version originale de ce code calculait les deux probas beta0 et beta1 
  //   dans la boucle pour éviter des pbs d'arrondis en float (on a des probas < 0 et > 1).
  //   Après expérience, il suffit de calculer beta0 en remettant à 0 (à 1) les valeurs
  //   calculées < 0 (resp > 1). [lignes "caping"]
  scalar_t beta0 = 1/(1 + exp( alpha1 + logEmiss[2*N-1] - alpha0 - logEmiss[2*N-2]));
  if(beta0 < 0) beta0 = 0;  // caping
  if(beta0 > 1) beta0 = 1;  // caping
  // scalar_t beta1 = 1/(1 + exp( alpha0 + logEmiss[2*N-2] - alpha1 - logEmiss[2*N-1]));
  scalar_t beta1 = (scalar_t) 1 - beta0;
  scalar_t beta0_;
  PHBD[N-1] = (scalar_t) beta1;
  for(int n = N-2; n >=0; n--) {
    logTrans4(deltaDist[n], a, f, logf, logumf, lt00, lt01, lt10, lt11);
    beta0_ = exp(logEmiss[2*n])   * ( beta0 * exp(lt00 + Alpha[2*n]   - Alpha[2*n+2]) + beta1 * exp(lt01 + Alpha[2*n]   - Alpha[2*n+3]) );
    if(beta0_ < 0) beta0_ = 0;  // caping
    if(beta0_ > 1) beta0_ = 1;  // caping
    // beta1  = exp(logEmiss[2*n+1]) * ( beta0 * exp(lt10 + Alpha[2*n+1] - Alpha[2*n+2]) + beta1 * exp(lt11 + Alpha[2*n+1] - Alpha[2*n+3]) );
    beta1 = (scalar_t) 1 - beta0_;
    beta0 = beta0_;
    PHBD[n] = (scalar_t) beta1;
  }
}




