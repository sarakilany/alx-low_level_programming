/*
 * A program to print a triangle, followed by a new line.
 *
 * Author: Sara Kilany
 */

#include "main.h"

/**
 * print_triangle - that prints a triangle, followed by a new line.
 * @size: size of triangle
 * Return: no return
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

i = 0;
while (i < size)
{
j = 0;
while (j < size - i - 1)
{
_putchar(' ');
j++;
}
j = 0;
while (j <= i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
