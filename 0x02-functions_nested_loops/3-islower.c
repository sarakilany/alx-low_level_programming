/*
 * A program to return 1 if lowercase 0 otherwise
 * followed by a new line
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _islower - 1 if lower case 0 if upper case
 *
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{

int j = c;
if (j >= 97 && j <= 122 )
return (1);
else
return (0);
}
