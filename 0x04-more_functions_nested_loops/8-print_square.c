/*
 * A program to print a square, followed by a new line.
 *
 * Author: Sara Kilany
 */
 
#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 *
 * @size: size of the square
 * Return: no return
 */
void print_square(int size)
{
int i = 0;
int j;
if (size <= 0)
{
_putchar('\n');
return;
}

while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
