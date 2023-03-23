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
if (size <= 0)
{
_putchar('\n');
return;
}
int i = 1;
while (i <= size)
{
int j = 1;
while (j <= i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
