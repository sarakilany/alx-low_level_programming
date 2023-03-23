/*
 * A program to draw a diagonal line on the terminal.
 *
 * Author: Sara Kilany
 */

#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed
 * Return: no return
 */
void print_diagonal(int n)
{
int i = 0;
int j;
if (n <= 0)
{
_putchar('\n');
return;
}
while (i < n)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
}
