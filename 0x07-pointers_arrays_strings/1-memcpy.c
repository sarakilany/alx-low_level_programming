/*
 * Program that copies n from memory area to dest.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n from memory area to dest.
 * @dest: pointer to memory area destination
 * @src: the source memory area to fill with
 * @n: number of memory bytes to fill from src
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
