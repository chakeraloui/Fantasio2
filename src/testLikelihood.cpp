#include <Rcpp.h>
#include <iostream>
#include "gaston/matrix4.h"
#include "emiss.h"
#include "likelihoodGradient.h"
#include "LBFGSB.h"

using namespace Rcpp;

//[[Rcpp::export]]
NumericVector testLikelihood(XPtr<matrix4> p_A, NumericVector p, IntegerVector map, NumericVector deltaDist, 
                             double epsilon, int i, double a, double f) {
  std::vector<double> dDist;
  for(double a : deltaDist) 
    dDist.push_back(a);

  emiss<double> EM(p_A, p, map, epsilon);
  likelihoodGradient<double> LG( EM.getLogEmiss(i) , dDist);
  Eigen::VectorXd grad(2);
  Eigen::VectorXd x(2);
  x << a, f;
  double lik = LG( x, grad );
  NumericVector R(3);
  R[0] = lik; R[1] = grad[0]; R[2] = grad[1];
  return R;
}

//[[Rcpp::export]]
NumericVector testOptimLikelihood(XPtr<matrix4> p_A, NumericVector p, IntegerVector map, NumericVector deltaDist, double epsilon, int i) {
  std::vector<double> dDist;
  for(double a : deltaDist) 
    dDist.push_back(a);

  emiss<double> EM(p_A, p, map, epsilon);
  likelihoodGradient<double> LG( EM.getLogEmiss(i) , dDist, -1);

  LBFGSpp::LBFGSBParam<double> param;
  LBFGSpp::LBFGSBSolver<double> solver(param);

  Eigen::VectorXd lb(2); 
  lb << 1e-2, 0;

  Eigen::VectorXd ub(2); 
  ub << std::numeric_limits<double>::infinity(), 1;

  Eigen::VectorXd x(2);
  x << 0.1, 0.1;
  double fx;
  int niter = solver.minimize(LG, x, fx, lb, ub);

  NumericVector R = NumericVector::create( _["n.iter"] = niter, _["a"] = x[0], _["f"] = x[1], _["fx"] = fx);
  return R;
}
