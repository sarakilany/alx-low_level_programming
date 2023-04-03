/*
 * A program that locates a character in a string.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: a string pointer
 * @c: a character
 * Return: a pointer to first occured c
 */
char *_strchr(char *s, char c)
{
char *x = s;
while (*x != '\0')
{
if (*x == c)
break;
else
x++;
}
if (*x == '\0' && c !== '\0')
return (NULL);
return (x);
}
