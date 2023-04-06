/*
 * A program that returns the natural square root of a number
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: -1 if number has no natural root, root otherwise
 */
int _sqrt_recursion(int n)
{
int root;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
root = _sqrt_recursion(n - 1);
if ((root * root) == n)
{
return (root);
}
return (-1);
}
