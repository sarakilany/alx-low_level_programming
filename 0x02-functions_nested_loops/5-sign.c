/*
 * A program to check for sign of input integer
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks for sign of input integer
 * @n: input integer
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{

int j = n;
if (j < 0)
{
_putchar('-');
return (-1);
}
else if (j == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (+1);
}
}
