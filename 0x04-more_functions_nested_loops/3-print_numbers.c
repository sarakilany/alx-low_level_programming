/*
 * A program to print the numbers, from 0 to 9, followed by a new line.
 * Author: Sara Kilany
 */
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: no return
 */
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
