//
// Created by yrohanizadegan on 13/09/17.
//

#ifndef MILSTEIN_SOLVER_MILSTEIN_H
#define MILSTEIN_SOLVER_MILSTEIN_H

double drift(double t_i, double x_i);
double diffusion(double t_i, double x_i);
double deriv_diffusion(double t_i, double x_i);
double PRNG_uniform(int s, int r);
void MP_PRNG(double *Z1, double *Z2);

#endif //MILSTEIN_SOLVER_MILSTEIN_H
