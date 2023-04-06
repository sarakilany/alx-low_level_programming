/*
 * A program that returns the natural square root of a number
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - returns the natural square root of a number
 * @n: number to find the square root of
 * @i: number to guess as the root
 * Return: -1 if i is not the natural root, root otherwise
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 * Return: -1 if number has no natural root, root otherwise
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0));
}
