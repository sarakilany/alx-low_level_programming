/*
 * A program that locates a substring
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to string to search
 * @needle: pointer to string to search for
 * Return: pointer to substring or null.
 */
char *_strstr(char *haystack, char *needle)
{
char *h = haystack;
char *n = needle;
while (*h != '\0')
{
if (*h == *n)
{
char *h2 = h + 1;
char *n2 = n + 1;
while (*h2 != '\0' && *n2 != '\0' && *h2 == *n2)
{
h2++;
n2++;
}
if (*n2 == '\0')
{
return (h);
}
}
h++;
}
if (*n == '\0')
{
return (haystack);
}
return (NULL);
}
