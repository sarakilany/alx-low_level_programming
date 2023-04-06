/*
0;276;0c * A program that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - find length of string recursively
 * @s: pointer to a string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - check if characters at start and end 
 * are the same
 * @s: pointer to a string
 * @start: starting point to check from string s
 * @end: end point to check from string s
 * Return: 1 if characers are the same, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 *  and 0 if not.
 *
 * @s: a pointer to a string
 * Return: 1 if palindrom 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (is_palindrome_helper(s, 0, len - 1));
}
