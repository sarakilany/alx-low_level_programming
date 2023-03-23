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
int i = 1;
int j;
if (size <= 0)
{
_putchar('\n');
return;
}

while (i <= size)
{
j = 1;
while (j <= i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
