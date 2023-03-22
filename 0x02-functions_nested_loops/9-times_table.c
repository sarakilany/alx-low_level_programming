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
 * jack_bauer - prints every minute of the day of Jack Bauer, 
 * starting from 00:00 to 23:59
 * Return: void
 */
void times_table(void)
{
int i = 0;
int j = 1;
int prod;

while (i <= 9)
{
_putchar('0');
i++;

while (j <= 9)
{
_putchar(',');
_putchar(' ');

prod = i * j;

if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');

_putchar((prod % 10) + '0');
j++;
}
_putchar('\n');
}

}
