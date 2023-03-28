/*
 * Program that prints n elements of array a 
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of array a
 * @n: number of elements to print
 * @a: pointer to array
 * Return: no return
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
int num = a[i];
int digits = 1;
while (num / 10 != 0)
{
digits++;
num /= 10;
}
num = a[i];
while (digits > 0)
{
int digit = num % 10;
_putchar(digit + '0');
digits--;
num /= 10;
}
if (i < n - 1)
{
_putchar(',');
_putchar(' ');
}
i++;
}
_putchar('\n');
}
