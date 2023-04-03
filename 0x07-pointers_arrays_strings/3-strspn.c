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
unsigned int len = 0;
int found = 0;
char *a = accept;
while (*s && !found)
{
found = 1;
while (*a)
{
if (*s == *a)
{
len++;
found = 0;
break;
}
a++;
}
s++;
}
return (len);
}
