/*
 * Program that copies memory area.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _memset - copies memory area.
 * @s: pointer to memory area
 * @b: the byte to fill with
 * @n: number of memory bytes to fill
 * Return: pointer to a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
char *q = src;
unsigned int i = 0;
while (*p != '\0')
{
p++;
}
while (i < n)
{
*p = *q;
q++;
p++;
i++;
}
*p = '\0';
return (dest);
}
