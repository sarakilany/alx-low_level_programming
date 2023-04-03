/*
 * A program that gets the length of a prefix substring
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string pointer
 * @accept: sustring pointer
 * Return: number of bytes from accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (s[i] != '\0')
{
unsigned int j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
break;
}
j++;
}
if (accept[j] == '\0')
{
return i;
}
i++;
}
return i;
}
