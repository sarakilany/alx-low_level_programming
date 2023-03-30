/*
 * Program that compares two strings
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _strcmp - that compares two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: 0 if strings match
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
{
return 0;
}
i++;
}
return s1[i] - s2[i];
}
