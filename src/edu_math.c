#include "edu_math.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
    return a - b;
}

int edu_mult(int a, int b) {
    return a * b;
}

int edu_div(int a, int b) {
    if (b == 0) {
        UNIMPLEMENTED;
    }
    return a / b;
}

int edu_mod(int a, int b) {
    if (b == 0) {
        UNIMPLEMENTED;
    }
    return a % b;
}

int edu_pow(int a, int b) {
    if (b < 0) {
        UNIMPLEMENTED;
    }
    
    if (b == 0) return 1;
    if (a == 0) return 0;
    
    int result = 1;
    for (int i = 0; i < b; i++) {
        if (result > INT_MAX / abs(a)) {
            UNIMPLEMENTED;
        }
        result *= a;
    }
    return result;
}

int edu_abs(int a) {
    return (a < 0) ? -a : a;
}

int edu_gcd(int a, int b) {
    a = edu_abs(a);
    b = edu_abs(b);
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int edu_lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    
    a = edu_abs(a);
    b = edu_abs(b);
    
    if (a > INT_MAX / b) {
        UNIMPLEMENTED;
    }
    
    return (a * b) / edu_gcd(a, b);
}

int edu_int_sqrt(int a) {
    if (a < 0) {
        UNIMPLEMENTED;
    }
    if (a == 0 || a == 1) return a;
    
    int left = 1, right = a, result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (mid > INT_MAX / mid) {
            right = mid - 1;
            continue;
        }
        
        int square = mid * mid;
        
        if (square == a) {
            return mid;
        } else if (square < a) {
            left = mid + 1;
            result = mid;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int edu_sgn(int a) {
    if (a > 0) return 1;
    if (a < 0) return -1;
    return 0;
}

int edu_fact(int a) {
    if (a < 0) {
       UNIMPLEMENTED;
    }
    if (a == 0 || a == 1) return 1;
    
    int result = 1;
    for (int i = 2; i <= a; i++) {
        if (result > INT_MAX / i) {
            UNIMPLEMENTED;
        }
        result *= i;
    }
    return result;
}