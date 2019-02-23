//
// Created by yrohanizadegan on 13/09/17.
//

#include <math.h>
#include "Milstein.h"

/* This function uses the Marsaglia's Polar transform for generating pairs of
 * normally distributed random numbers. The input and output of the function
 * are similar to that of "Box_Muller_generator.c". The only difference is the
 * method of generation which instead of using sine and cosine functions uses a
 * rejection algorithm and only chooses values that fall into a unit circle.*/
void MP_PRNG(double *Z1, double *Z2) {
    double V1, V2, W; //Declaration of random number variables

    do {
        V1 = 2.0*(PRNG_uniform(24, 55)) - 1.0; //Generate a uniform random number in [-1,1]
        V2 = 2.0*(PRNG_uniform(24, 55)) - 1.0; //Ditto as above
        W = V1*V1 + V2*V2;
    }while (W > 1.0 || W == 0.0); //Accept W values that are in (0,1]
    W = log(W)/W;
    W = sqrt(-2.0*W);
    *Z1 = V1*W; //Use Marsaglia Polar formulas to generate the pair
    *Z2 = V2*W;
}