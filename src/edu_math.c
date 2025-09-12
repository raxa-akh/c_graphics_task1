#include "edu_math.h"

#include <stdio.h>
#include <stdlib.h>

#define UNIMPLEMENTED \
    do { \
        fprintf(stderr, "[ERROR] function %s is unimplemented\n", __func__); \
        abort(); \
    } while (0)

#define UNUSED(x) (void)(x)

int edu_add(int a, int b) {
    return a + b;
}

int edu_sub(int a, int b) {
    UNUSED(a);
    UNUSED(b);
    UNIMPLEMENTED;
    return 0;
}

int edu_mult(int a, int b) {
    UNUSED(a);
    UNUSED(b);
    UNIMPLEMENTED;
    return 0;
}

int edu_div(int a, int b) {
    UNUSED(a);
    UNUSED(b);
    UNIMPLEMENTED;
    return 0;
}

int edu_mod(int a, int b) {
    UNUSED(a);
    UNUSED(b);
    UNIMPLEMENTED;
    return 0;
}

int edu_pow(int a, int b) {
    UNUSED(a);
    UNUSED(b);
    UNIMPLEMENTED;
    return 0;
}

int edu_abs(int a) {
    UNUSED(a);
    UNIMPLEMENTED;
}

int edu_gcd(int a, int b) {
    UNUSED(a);
    UNUSED(b);
    UNIMPLEMENTED;
}

int edu_lcm(int a, int b) {
    UNUSED(a);
    UNUSED(b);
    UNIMPLEMENTED;
    return 0;
}

int edu_int_sqrt(int a) {
    UNUSED(a);
    UNIMPLEMENTED;
    return 0;
}

int edu_sgn(int a) {
    UNUSED(a);
    UNIMPLEMENTED;
}

int edu_fact(int a) {
    UNUSED(a);
    UNIMPLEMENTED;
    return 0;
}
