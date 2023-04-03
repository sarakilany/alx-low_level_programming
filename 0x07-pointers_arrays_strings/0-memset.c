/*
 * Program that fills memory with a constant byte.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: the byte to fill with
 * @n: number of memory bytes to fill
 * Return: pointer to a string
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
unsigned int i = 0;
while (i < n && *p != '\0')
{
*p = b;
p++;
i++;
}
return (s);
}
