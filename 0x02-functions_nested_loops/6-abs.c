/*
 * A program to computed absolute of integer
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - computer absolute of integer
 * @n: input integer
 * Return: 0 if success
 */
int _abs(int n)
{

int j = n;
if (j < 0)
 _putchar((-1*j));
else
_putchar(j);
return (0);
}
