// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/Fantasio2.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// checkOpenMP
bool checkOpenMP();
RcppExport SEXP _Fantasio2_checkOpenMP() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(checkOpenMP());
    return rcpp_result_gen;
END_RCPP
}
// festim
List festim(XPtr<matrix4> p_A, NumericVector p, IntegerVector submap, NumericVector deltaDist, double epsilon);
RcppExport SEXP _Fantasio2_festim(SEXP p_ASEXP, SEXP pSEXP, SEXP submapSEXP, SEXP deltaDistSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type submap(submapSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type deltaDist(deltaDistSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(festim(p_A, p, submap, deltaDist, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// forward_backward
NumericMatrix forward_backward(NumericMatrix logEmiss, NumericVector Dist, double a, double f);
RcppExport SEXP _Fantasio2_forward_backward(SEXP logEmissSEXP, SEXP DistSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type logEmiss(logEmissSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(forward_backward(logEmiss, Dist, a, f));
    return rcpp_result_gen;
END_RCPP
}
// logLikelihood_gradient
NumericVector logLikelihood_gradient(NumericMatrix logEmiss, NumericVector Dist, double a, double f);
RcppExport SEXP _Fantasio2_logLikelihood_gradient(SEXP logEmissSEXP, SEXP DistSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type logEmiss(logEmissSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(logLikelihood_gradient(logEmiss, Dist, a, f));
    return rcpp_result_gen;
END_RCPP
}
// logEmiss
NumericMatrix logEmiss(NumericVector Y1, NumericVector Y2, NumericMatrix logFreq, double epsilon);
RcppExport SEXP _Fantasio2_logEmiss(SEXP Y1SEXP, SEXP Y2SEXP, SEXP logFreqSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Y1(Y1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y2(Y2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type logFreq(logFreqSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(logEmiss(Y1, Y2, logFreq, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// logitModel
List logitModel(NumericVector Y, NumericMatrix X, NumericMatrix H, unsigned int beg, unsigned int end);
RcppExport SEXP _Fantasio2_logitModel(SEXP YSEXP, SEXP XSEXP, SEXP HSEXP, SEXP begSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type H(HSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type beg(begSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(logitModel(Y, X, H, beg, end));
    return rcpp_result_gen;
END_RCPP
}
// m4_logEmiss
NumericMatrix m4_logEmiss(XPtr<matrix4> p_A, NumericVector p, IntegerVector map, double epsilon);
RcppExport SEXP _Fantasio2_m4_logEmiss(SEXP p_ASEXP, SEXP pSEXP, SEXP mapSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type map(mapSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(m4_logEmiss(p_A, p, map, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// probaHBD
NumericMatrix probaHBD(XPtr<matrix4> p_A, NumericVector p, IntegerVector submap, NumericVector deltaDist, LogicalVector whichInds, NumericVector a, NumericVector f, double epsilon);
RcppExport SEXP _Fantasio2_probaHBD(SEXP p_ASEXP, SEXP pSEXP, SEXP submapSEXP, SEXP deltaDistSEXP, SEXP whichIndsSEXP, SEXP aSEXP, SEXP fSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type submap(submapSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type deltaDist(deltaDistSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type whichInds(whichIndsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(probaHBD(p_A, p, submap, deltaDist, whichInds, a, f, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// setUserParam
void setUserParam(int m, double epsilon, int past, double delta, int max_iterations, int max_submin, int max_linesearch, double min_step, double max_step, double ftol, double wolfe, int max_retries, Rcpp::NumericVector lower, Rcpp::NumericVector upper, int n_threads, bool use_float, int debug);
RcppExport SEXP _Fantasio2_setUserParam(SEXP mSEXP, SEXP epsilonSEXP, SEXP pastSEXP, SEXP deltaSEXP, SEXP max_iterationsSEXP, SEXP max_subminSEXP, SEXP max_linesearchSEXP, SEXP min_stepSEXP, SEXP max_stepSEXP, SEXP ftolSEXP, SEXP wolfeSEXP, SEXP max_retriesSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP n_threadsSEXP, SEXP use_floatSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type past(pastSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type max_iterations(max_iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type max_submin(max_subminSEXP);
    Rcpp::traits::input_parameter< int >::type max_linesearch(max_linesearchSEXP);
    Rcpp::traits::input_parameter< double >::type min_step(min_stepSEXP);
    Rcpp::traits::input_parameter< double >::type max_step(max_stepSEXP);
    Rcpp::traits::input_parameter< double >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< double >::type wolfe(wolfeSEXP);
    Rcpp::traits::input_parameter< int >::type max_retries(max_retriesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type use_float(use_floatSEXP);
    Rcpp::traits::input_parameter< int >::type debug(debugSEXP);
    setUserParam(m, epsilon, past, delta, max_iterations, max_submin, max_linesearch, min_step, max_step, ftol, wolfe, max_retries, lower, upper, n_threads, use_float, debug);
    return R_NilValue;
END_RCPP
}
// getUserParam
Rcpp::List getUserParam();
RcppExport SEXP _Fantasio2_getUserParam() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getUserParam());
    return rcpp_result_gen;
END_RCPP
}
// testForwardBackward
NumericVector testForwardBackward(XPtr<matrix4> p_A, NumericVector p_, IntegerVector submap_, NumericVector deltaDist, double epsilon, int i, double a, double f);
RcppExport SEXP _Fantasio2_testForwardBackward(SEXP p_ASEXP, SEXP p_SEXP, SEXP submap_SEXP, SEXP deltaDistSEXP, SEXP epsilonSEXP, SEXP iSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type submap_(submap_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type deltaDist(deltaDistSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(testForwardBackward(p_A, p_, submap_, deltaDist, epsilon, i, a, f));
    return rcpp_result_gen;
END_RCPP
}
// testLikelihood
NumericVector testLikelihood(XPtr<matrix4> p_A, NumericVector p_, IntegerVector map_, NumericVector deltaDist, double epsilon, int i, double a, double f);
RcppExport SEXP _Fantasio2_testLikelihood(SEXP p_ASEXP, SEXP p_SEXP, SEXP map_SEXP, SEXP deltaDistSEXP, SEXP epsilonSEXP, SEXP iSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type map_(map_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type deltaDist(deltaDistSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(testLikelihood(p_A, p_, map_, deltaDist, epsilon, i, a, f));
    return rcpp_result_gen;
END_RCPP
}
// testLogEmiss
NumericVector testLogEmiss(XPtr<matrix4> p_A, NumericVector p_, IntegerVector map_, double epsilon, int i);
RcppExport SEXP _Fantasio2_testLogEmiss(SEXP p_ASEXP, SEXP p_SEXP, SEXP map_SEXP, SEXP epsilonSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type map_(map_SEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(testLogEmiss(p_A, p_, map_, epsilon, i));
    return rcpp_result_gen;
END_RCPP
}
// testOptimLikelihood
NumericVector testOptimLikelihood(XPtr<matrix4> p_A, NumericVector p_, IntegerVector map_, NumericVector deltaDist, double epsilon, int i);
RcppExport SEXP _Fantasio2_testOptimLikelihood(SEXP p_ASEXP, SEXP p_SEXP, SEXP map_SEXP, SEXP deltaDistSEXP, SEXP epsilonSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<matrix4> >::type p_A(p_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type map_(map_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type deltaDist(deltaDistSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(testOptimLikelihood(p_A, p_, map_, deltaDist, epsilon, i));
    return rcpp_result_gen;
END_RCPP
}
// testPHBDmatrix
NumericMatrix testPHBDmatrix(LogicalVector z, int nbSNPs, int i);
RcppExport SEXP _Fantasio2_testPHBDmatrix(SEXP zSEXP, SEXP nbSNPsSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type nbSNPs(nbSNPsSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(testPHBDmatrix(z, nbSNPs, i));
    return rcpp_result_gen;
END_RCPP
}
// testRVector
void testRVector(NumericVector x, IntegerVector y, LogicalVector z);
RcppExport SEXP _Fantasio2_testRVector(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type z(zSEXP);
    testRVector(x, y, z);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Fantasio2_checkOpenMP", (DL_FUNC) &_Fantasio2_checkOpenMP, 0},
    {"_Fantasio2_festim", (DL_FUNC) &_Fantasio2_festim, 5},
    {"_Fantasio2_forward_backward", (DL_FUNC) &_Fantasio2_forward_backward, 4},
    {"_Fantasio2_logLikelihood_gradient", (DL_FUNC) &_Fantasio2_logLikelihood_gradient, 4},
    {"_Fantasio2_logEmiss", (DL_FUNC) &_Fantasio2_logEmiss, 4},
    {"_Fantasio2_logitModel", (DL_FUNC) &_Fantasio2_logitModel, 5},
    {"_Fantasio2_m4_logEmiss", (DL_FUNC) &_Fantasio2_m4_logEmiss, 4},
    {"_Fantasio2_probaHBD", (DL_FUNC) &_Fantasio2_probaHBD, 8},
    {"_Fantasio2_setUserParam", (DL_FUNC) &_Fantasio2_setUserParam, 17},
    {"_Fantasio2_getUserParam", (DL_FUNC) &_Fantasio2_getUserParam, 0},
    {"_Fantasio2_testForwardBackward", (DL_FUNC) &_Fantasio2_testForwardBackward, 8},
    {"_Fantasio2_testLikelihood", (DL_FUNC) &_Fantasio2_testLikelihood, 8},
    {"_Fantasio2_testLogEmiss", (DL_FUNC) &_Fantasio2_testLogEmiss, 5},
    {"_Fantasio2_testOptimLikelihood", (DL_FUNC) &_Fantasio2_testOptimLikelihood, 6},
    {"_Fantasio2_testPHBDmatrix", (DL_FUNC) &_Fantasio2_testPHBDmatrix, 3},
    {"_Fantasio2_testRVector", (DL_FUNC) &_Fantasio2_testRVector, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_Fantasio2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
