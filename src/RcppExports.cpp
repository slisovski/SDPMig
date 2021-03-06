// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Flying
double Flying(const int& time, const int& site, const int& x, int dep_site);
RcppExport SEXP _sdpMig_Flying(SEXP timeSEXP, SEXP siteSEXP, SEXP xSEXP, SEXP dep_siteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type time(timeSEXP);
    Rcpp::traits::input_parameter< const int& >::type site(siteSEXP);
    Rcpp::traits::input_parameter< const int& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type dep_site(dep_siteSEXP);
    rcpp_result_gen = Rcpp::wrap(Flying(time, site, x, dep_site));
    return rcpp_result_gen;
END_RCPP
}
// Init
void Init(int MaxT, int NSites, int MaxX, double w, double xc, int B0, Rcpp::NumericVector b0, Rcpp::NumericVector b1, Rcpp::NumericVector b2, double pred_a1, double pred_a2, double c, double speed, double max_u, double f, Rcpp::NumericVector WindAssist, Rcpp::NumericVector WindProb, Rcpp::NumericVector ZStdNorm, Rcpp::NumericVector PStdNorm, Rcpp::NumericVector nTR_x, Rcpp::NumericVector nTR_y, double decError, arma::mat dist, arma::mat x_gain, arma::mat y_gain, arma::mat p_gain, arma::mat expend);
RcppExport SEXP _sdpMig_Init(SEXP MaxTSEXP, SEXP NSitesSEXP, SEXP MaxXSEXP, SEXP wSEXP, SEXP xcSEXP, SEXP B0SEXP, SEXP b0SEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP pred_a1SEXP, SEXP pred_a2SEXP, SEXP cSEXP, SEXP speedSEXP, SEXP max_uSEXP, SEXP fSEXP, SEXP WindAssistSEXP, SEXP WindProbSEXP, SEXP ZStdNormSEXP, SEXP PStdNormSEXP, SEXP nTR_xSEXP, SEXP nTR_ySEXP, SEXP decErrorSEXP, SEXP distSEXP, SEXP x_gainSEXP, SEXP y_gainSEXP, SEXP p_gainSEXP, SEXP expendSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type MaxT(MaxTSEXP);
    Rcpp::traits::input_parameter< int >::type NSites(NSitesSEXP);
    Rcpp::traits::input_parameter< int >::type MaxX(MaxXSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< int >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< double >::type pred_a1(pred_a1SEXP);
    Rcpp::traits::input_parameter< double >::type pred_a2(pred_a2SEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< double >::type speed(speedSEXP);
    Rcpp::traits::input_parameter< double >::type max_u(max_uSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type WindAssist(WindAssistSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type WindProb(WindProbSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ZStdNorm(ZStdNormSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type PStdNorm(PStdNormSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nTR_x(nTR_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nTR_y(nTR_ySEXP);
    Rcpp::traits::input_parameter< double >::type decError(decErrorSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dist(distSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x_gain(x_gainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y_gain(y_gainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type p_gain(p_gainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type expend(expendSEXP);
    Init(MaxT, NSites, MaxX, w, xc, B0, b0, b1, b2, pred_a1, pred_a2, c, speed, max_u, f, WindAssist, WindProb, ZStdNorm, PStdNorm, nTR_x, nTR_y, decError, dist, x_gain, y_gain, p_gain, expend);
    return R_NilValue;
END_RCPP
}
// BackwardIteration
Rcpp::List BackwardIteration(bool pbar);
RcppExport SEXP _sdpMig_BackwardIteration(SEXP pbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type pbar(pbarSEXP);
    rcpp_result_gen = Rcpp::wrap(BackwardIteration(pbar));
    return rcpp_result_gen;
END_RCPP
}
// InitSim
void InitSim(int MaxT, int NSites, int MaxX, double w, double xc, int B0, Rcpp::NumericVector b0, Rcpp::NumericVector b1, Rcpp::NumericVector b2, double pred_a1, double pred_a2, double c, double speed, Rcpp::NumericVector WindAssist, Rcpp::NumericVector WindProb, Rcpp::NumericVector ZStdNorm, Rcpp::NumericVector PStdNorm, Rcpp::NumericVector nTR_x, Rcpp::NumericVector nTR_y, double decError, arma::mat dist, arma::mat x_gain, arma::mat y_gain, arma::mat p_gain, arma::mat expend, arma::cube FMatrix, arma::cube DMatrix1, arma::cube DMatrix2, arma::cube PMatrix1, arma::cube PMatrix2);
RcppExport SEXP _sdpMig_InitSim(SEXP MaxTSEXP, SEXP NSitesSEXP, SEXP MaxXSEXP, SEXP wSEXP, SEXP xcSEXP, SEXP B0SEXP, SEXP b0SEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP pred_a1SEXP, SEXP pred_a2SEXP, SEXP cSEXP, SEXP speedSEXP, SEXP WindAssistSEXP, SEXP WindProbSEXP, SEXP ZStdNormSEXP, SEXP PStdNormSEXP, SEXP nTR_xSEXP, SEXP nTR_ySEXP, SEXP decErrorSEXP, SEXP distSEXP, SEXP x_gainSEXP, SEXP y_gainSEXP, SEXP p_gainSEXP, SEXP expendSEXP, SEXP FMatrixSEXP, SEXP DMatrix1SEXP, SEXP DMatrix2SEXP, SEXP PMatrix1SEXP, SEXP PMatrix2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type MaxT(MaxTSEXP);
    Rcpp::traits::input_parameter< int >::type NSites(NSitesSEXP);
    Rcpp::traits::input_parameter< int >::type MaxX(MaxXSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< int >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< double >::type pred_a1(pred_a1SEXP);
    Rcpp::traits::input_parameter< double >::type pred_a2(pred_a2SEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< double >::type speed(speedSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type WindAssist(WindAssistSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type WindProb(WindProbSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ZStdNorm(ZStdNormSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type PStdNorm(PStdNormSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nTR_x(nTR_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nTR_y(nTR_ySEXP);
    Rcpp::traits::input_parameter< double >::type decError(decErrorSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dist(distSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x_gain(x_gainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y_gain(y_gainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type p_gain(p_gainSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type expend(expendSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type FMatrix(FMatrixSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type DMatrix1(DMatrix1SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type DMatrix2(DMatrix2SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type PMatrix1(PMatrix1SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type PMatrix2(PMatrix2SEXP);
    InitSim(MaxT, NSites, MaxX, w, xc, B0, b0, b1, b2, pred_a1, pred_a2, c, speed, WindAssist, WindProb, ZStdNorm, PStdNorm, nTR_x, nTR_y, decError, dist, x_gain, y_gain, p_gain, expend, FMatrix, DMatrix1, DMatrix2, PMatrix1, PMatrix2);
    return R_NilValue;
END_RCPP
}
// simForaging
arma::vec simForaging(double f_intensity, int time, int site, int x);
RcppExport SEXP _sdpMig_simForaging(SEXP f_intensitySEXP, SEXP timeSEXP, SEXP siteSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type f_intensity(f_intensitySEXP);
    Rcpp::traits::input_parameter< int >::type time(timeSEXP);
    Rcpp::traits::input_parameter< int >::type site(siteSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(simForaging(f_intensity, time, site, x));
    return rcpp_result_gen;
END_RCPP
}
// simFlying
arma::vec simFlying(int decision, int time, int site, int x);
RcppExport SEXP _sdpMig_simFlying(SEXP decisionSEXP, SEXP timeSEXP, SEXP siteSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type decision(decisionSEXP);
    Rcpp::traits::input_parameter< int >::type time(timeSEXP);
    Rcpp::traits::input_parameter< int >::type site(siteSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(simFlying(decision, time, site, x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sdpMig_Flying", (DL_FUNC) &_sdpMig_Flying, 4},
    {"_sdpMig_Init", (DL_FUNC) &_sdpMig_Init, 27},
    {"_sdpMig_BackwardIteration", (DL_FUNC) &_sdpMig_BackwardIteration, 1},
    {"_sdpMig_InitSim", (DL_FUNC) &_sdpMig_InitSim, 30},
    {"_sdpMig_simForaging", (DL_FUNC) &_sdpMig_simForaging, 4},
    {"_sdpMig_simFlying", (DL_FUNC) &_sdpMig_simFlying, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_sdpMig(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
