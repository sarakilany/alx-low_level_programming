/*
 * A program to print number to 98
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to 98
 * @n: input integer
 * @m: input integer
 * Return: sum of n+m
 */
void print_to_98(int n)
{

if (n <= 98)
while (n <=98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
}
else
{
while (n >= 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
 n--;
}
}
}
