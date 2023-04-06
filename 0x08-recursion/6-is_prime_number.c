/*
 * A program that returns 1 if the
 * input integer is a prime number, otherwise return 0
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - checks ifnumber is divisble by divisor
 * @n: number to check for primality
 * @division: number to divide by
 * Return: 1 if number is divisble by divisor, 0 otherwise
 */

int is_prime_helper(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (divisor == 1)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to check if prime
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_helper(n, n / 2));
}
