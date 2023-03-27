/*
 * Program that returns the length of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 *
 * _strlen - returns the length of a string
 * @s: input pointer to a string
 * Return: length of string *s
 */
int _strlen(char *s)
{
int _len = 0;
while (*(s + _len) != '\0')
{
_len++;
}
return (_len);
}
