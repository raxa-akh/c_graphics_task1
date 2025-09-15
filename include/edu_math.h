#pragma once

/**
 * @brief Adds two integers
 * @param a First addend
 * @param b Second addend
 * @return Sum of a and b
 */
int edu_add(int a, int b);

/**
 * @brief Subtracts two integers
 * @param a Minuend
 * @param b Subtrahend
 * @return Difference between a and b
 */
int edu_sub(int a, int b);

/**
 * @brief Multiplies two integers
 * @param a First factor
 * @param b Second factor
 * @return Product of a and b
 */
int edu_mult(int a, int b);

/**
 * @brief Divides two integers (integer division)
 * @param a Dividend
 * @param b Divisor (must not be zero)
 * @return Integer quotient of a divided by b
 */
int edu_div(int a, int b);

/**
 * @brief Calculates modulo (remainder) of division
 * @param a Dividend
 * @param b Divisor (must not be zero)
 * @return Remainder of a divided by b
 */
int edu_mod(int a, int b);

/**
 * @brief Calculates power of a number
 * @param a Base
 * @param b Exponent (non-negative integer)
 * @return a raised to the power of b
 */
int edu_pow(int a, int b);

/**
 * @brief Calculates absolute value
 * @param a Input number
 * @return Absolute value of a
 */
int edu_abs(int a);

/**
 * @brief Calculates greatest common divisor
 * @param a First number
 * @param b Second number
 * @return Greatest common divisor of a and b
 */
int edu_gcd(int a, int b);

/**
 * @brief Calculates least common multiple
 * @param a First number
 * @param b Second number
 * @return Least common multiple of a and b
 */
int edu_lcm(int a, int b);

/**
 * @brief Calculates integer square root
 * @param a Non-negative integer
 * @return Largest integer less than or equal to the square root of a
 */
int edu_int_sqrt(int a);

/**
 * @brief Returns sign of a number
 * @param a Input number
 * @return -1 if a < 0, 0 if a == 0, 1 if a > 0
 */
int edu_sgn(int a);

/**
 * @brief Calculates factorial
 * @param a Non-negative integer
 * @return Factorial of a (a!)
 */
int edu_fact(int a);