/*
 * A program that compares two strings and returns 1
 * if the strings can be considered identical, 0 otherwise
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * 0 otherwise
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 1 if strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
if (*s1 != *s2)
{
return (0);
}
return (wildcmp(s1 + 1, s2 + 1));
}
