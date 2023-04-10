/*
 * A program to print the numbers, from 0 to 9,
 * except 2 and 4 followed by a new line.
 * Author: Sara Kilany
 */

#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4 followed by a new line.
 *
 * Return: no return
 */
void print_most_numbers(void)
{
int number = '0';
while (number <= '9')
{
if (number != '2' && number != '4')
{
_putchar(number);
}
number++;
}
_putchar('\n');
}
