cmake_minimum_required(VERSION 3.8)
project(Milstein_solver)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES
        main.c
        diffusion_function.c
        drift_function.c
        deriv_diffusion_function.c
        Marsaglia_polar_generator.c
        PRNG_uniform.c
        Milstein.h
        )
add_executable(Milstein_solver ${SOURCE_FILES})

target_link_libraries(Milstein_solver m)