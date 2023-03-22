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
 * _abs - compute absolute of integer
 * @n: input integer
 * Return: 0 if success
 */
int _abs(int n)
{

int j = n;
if (j < 0)
j = j * (-1);
_putchar(j + '0');
return (0);
}
