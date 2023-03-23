/*
 * A program to print numbers from 0 to9
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 */
void print_Numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar('0' + i);
i++;
}
_putchar('\n');
}
