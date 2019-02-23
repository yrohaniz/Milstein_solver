//
// Created by yrohanizadegan on 13/09/17.
//

#include <stdlib.h>
#include <stdio.h>
#include "Milstein.h"

/* This function uses the built-in rand() function and the Lagged-Fibonacci
 * generator (LFG) algorithm to produce an array of random numbers (U(0,1)) in the unit
 * interval [0,1] where the period of the prng is determined by values of
 * 's' and 'r' defined in the LFG algorithm. The reason to use LFG is for achieving
 * greater period of random number generation. The seed must be such that at least
 * one of the initialization values (indices 0 to r-1 in uni_rand array) is odd.*/
double PRNG_uniform(int s, int r) {
    int i;
    unsigned int *uni_rand;
    double rand_num;

    if (s > r) {
        fprintf(stderr, "s must be less than %d (0<s<r)\n", r);
        exit(1);
    } // Error raised if an 's' value greater than 'r' is passed to the function

    if ((uni_rand = (unsigned int *) malloc(r*sizeof(unsigned int))) == NULL) {
        fprintf(stderr,"malloc failed\n");
        exit(1);
    } // Initialize uni_rand to generate integer (>0) random numbers

    for (i=0; i<r; i++) {
        uni_rand[i] = (unsigned int)rand(); // Use built-in prng, rand(), to initialize the sequence
    }

    uni_rand[r-1] = (uni_rand[r-1] + uni_rand[s-1]) % (RAND_MAX);
    rand_num = uni_rand[r-1] / (double)(RAND_MAX);

    free(uni_rand);
    return rand_num;
}