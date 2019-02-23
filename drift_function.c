//
// Created by yrohanizadegan on 13/09/17.
//

#include "Milstein.h"

/*This file contains the expression for the drift term
 * which is a function of time and position.*/

double drift(double t_i, double x_i) {
    return 1.0*x_i;
}
