/*
0;276;0c * A program that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - returns 1 if a string is a palindrome
 *  and 0 if not.
 *
 * @s: a pointer to a string
 * Return: 1 if palindrom 0 otherwise
 */
int is_palindrome(char *s)
{
int length = strlen(s);
if (length == 0)
return (1);
if (s[0] == s[length])
return (is_palindrome(s + 1));
return (0);
}
