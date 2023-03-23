/*
 * A program to print the numbers, from 0 to 14,
 * 10 times followed by a new line.
 * Author: Sara Kilany
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - prints the numbers, from 0 to 14,
 * 10 times followed by a new line.
 * @n: number of times to print _
 * Return: no return
 */
void print_line(int n)
{
int i = 0;
int j = n;
if (j <= 0)
{
_putchar('\n');
return;
}

while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
