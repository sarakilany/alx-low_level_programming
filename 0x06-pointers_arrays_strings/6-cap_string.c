/*
 * Program that capitalizes all words of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @c: pointer to a string
 *
 * Return: pointer to a string
 */
char *cap_string(char *c)
{
char *p = c;
*p = toupper(*p);
p++;
while (*p != '\0')
{
if (isspace(*p) || *p == ','
|| *p == ';' || *p == '.' || *p == '!'
|| *p == '?' || *p == '"' || *p == '('
|| *p == ')' || *p == '{' || *p == '}'
|| *p == '\n' || *p == '\t')
{
p++;
*p = toupper(*p);
}
p++;
}
return (c);
}
