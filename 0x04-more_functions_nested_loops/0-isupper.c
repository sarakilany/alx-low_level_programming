/*
 * A program to check for uppercase character.
 * Author: Sara Kilany
 */
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
