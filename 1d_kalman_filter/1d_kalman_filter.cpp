#include "1d_kalman_filter.h"

void update(double mean1, double var1, double mean2, double var2, double &new_mean, double &new_var)
{
    new_mean = (mean1 * var2 + mean2 * var1) / (var1 + var2);
    new_var  = (1 / (1 / var1 + 1 / var2));
}