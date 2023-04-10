/*
 * A program to check for a character is a digit
 * Author: Sara Kilany
 */
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for character is a digit
 * @c: input character
 * Return: 1 if uppercase 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
