#include "criterion/criterion.h"
#include "edu_math.h"

Test(add, basic) {
    cr_assert_eq(edu_add(2, 3), 5);
    cr_assert_eq(edu_add(-1, 1), 0);
}

Test(sub, basic) {
    cr_assert_eq(edu_sub(5, 3), 2);
    cr_assert_eq(edu_sub(0, -1), 1);
}

Test(mult, basic) {
    cr_assert_eq(edu_mult(5, 3), 15);
    cr_assert_eq(edu_mult(0, -1), 0);
}

Test(div, basic) {
    cr_assert_eq(edu_div(5, 3), 1);
    cr_assert_eq(edu_div(0, -1), 0);
}

Test(mod, basic) {
    cr_assert_eq(edu_mod(5, 3), 2);
    cr_assert_eq(edu_mod(0, 5), 0);
    cr_assert_eq(edu_mod(10, 1), 0);
}

Test(pow, basic) {
    cr_assert_eq(edu_pow(2, 0), 1);
    cr_assert_eq(edu_pow(2, 10), 1024);
    cr_assert_eq(edu_pow(-2, 3), -8);
    cr_assert_eq(edu_pow(-2, 4), 16);
}

Test(abs, basic) {
    cr_assert_eq(edu_abs(-5), 5);
    cr_assert_eq(edu_abs(0), 0);
    cr_assert_eq(edu_abs(7), 7);
}

Test(gcd, basic) {
    cr_assert_eq(edu_gcd(54, 24), 6);
    cr_assert_eq(edu_gcd(0, 5), 5);
    cr_assert_eq(edu_gcd(5, 0), 5);
    cr_assert_eq(edu_gcd(-6, 9), 3);
}

Test(lcm, basic) {
    cr_assert_eq(edu_lcm(6, 8), 24);
    cr_assert_eq(edu_lcm(0, 5), 0);
    cr_assert_eq(edu_lcm(21, 6), 42);
}

Test(int_sqrt, basic) {
    cr_assert_eq(edu_int_sqrt(0), 0);
    cr_assert_eq(edu_int_sqrt(1), 1);
    cr_assert_eq(edu_int_sqrt(15), 3);
    cr_assert_eq(edu_int_sqrt(16), 4);
    cr_assert_eq(edu_int_sqrt(17), 4);
}

Test(sgn, basic) {
    cr_assert_eq(edu_sgn(-42), -1);
    cr_assert_eq(edu_sgn(0), 0);
    cr_assert_eq(edu_sgn(99), 1);
}

Test(fact, basic) {
    cr_assert_eq(edu_fact(0), 1);
    cr_assert_eq(edu_fact(1), 1);
    cr_assert_eq(edu_fact(5), 120);
    cr_assert_eq(edu_fact(10), 3628800);
}
