#include "1d_kalman_filter.h"

void update(double &mu, double &sig, double measurement, double measurement_sig)
{
    mu = (mu * measurement_sig + measurement * sig) / (sig + measurement_sig);
    sig  = (1 / (1 / sig + 1 / measurement_sig));
}

void predict(double &mu, double &sig, double measurement, double measurement_sig)
{
    mu = mu + measurement;
    sig  = sig + measurement_sig;
}