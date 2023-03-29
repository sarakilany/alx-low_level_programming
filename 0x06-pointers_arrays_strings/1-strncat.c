/*
 * Program concatenates two strings up to n
 * characters from source
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings up to n from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to concatenate from src
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
int _len = strlen(src);
int i = 0;
p = p + strlen(dest);
while (i < n)
{
*p = *src;
src++;
p++;
i++;
}
if (n <= _len)
*p = '\0';
return (dest);
}
