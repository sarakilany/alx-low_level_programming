/*
 * A program to reutrn the value of the last digit
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - return the value of the last digit
 * @n: input integer
 * Return: the last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
last_digit *= -1;

_putchar(last_digit + '0');

return (last_digit);
}
