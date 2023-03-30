/*
 * Program that copies up to n characters of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies up to n characters of a string
 * @dest: destination pointer to a string
 * @src: source pointer string
 * @n: number of character to append to dest
 * Return: Pointer string
 */
char* _strncpy(char* dest, char* src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
