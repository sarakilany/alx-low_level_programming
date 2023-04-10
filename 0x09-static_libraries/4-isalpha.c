/*
 * A program to check for alphabetic character.
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: input character as integer-Ascii code
 * Return: 1 if lowercase 0 otherwise
 */
int _isalpha(int c)
{

int j = c;
if (j >= 65 && j <= 122)
return (1);
else
return (0);
}
