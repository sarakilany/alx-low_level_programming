/*
 * Program to convert string to integers
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _atoi - covnerts string to integers
 *
 * @s: input string pointer
 * Return: Number conversion of string
 */
int _atoi(char *s)
{
int sign = 1, num = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
if (*s == '+')
;
else if ((*s < '0' || *s > '9') && num > 0)
break;
s++;
}

return (num *sign);
}
