/*
 * A program to print every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * times_table - print time table of 9
 * starting from 00:00 to 23:59
 * Return: void
 */
void times_table(void)
{
int num = 0, mult = 1, prod;

while(num <= 9)
{
_putchar('0');

while(mult <= 9)
{
_putchar(',');
_putchar(' ');

prod = num * mult;

if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');

_putchar((prod % 10) + '0');

mult++;
}

mult = 1;
num++;
_putchar('\n');
}
}
