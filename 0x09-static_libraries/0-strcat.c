/*
 * Program that concatenates two strings
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination pointer of two strings
 * @src: first string pointer
 * Return: the pointer to string concatenated
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
int _len = strlen(dest);
p = p + _len;
while (*src)
{
*p = *src;
src++;
p++;
}
*p = '\0';
return (dest);
}
