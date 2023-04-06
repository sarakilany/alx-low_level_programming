/*
 * A program that returns the length of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to a string
 * Return: length of a string s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
