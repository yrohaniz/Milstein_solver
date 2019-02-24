# Milstein_solver
This is a on ordinary stochastic differential equation solver. The numerical scheme used here is Milstein.
After Euler-Maruyama solver Milstein solver is the simplest numerical scheme for estimating the solution 
of an ordinary stochastic differential equation. The strong order of convergence for this method is 1. 
The code uses the polar Marsaglia method to simulate the Wiener process, which is needed for calculating 
the Wiener increments in the numerical recipe.
