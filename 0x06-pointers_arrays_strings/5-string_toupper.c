/*
 * Program changes all lowercase letters to uppercase
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @c: input string pointer
 * Return: a char pointer
 */
char *string_toupper(char *c)
{
char *p = c;
while (*c != '\0')
{
if (*c >= 'a' && *c <= 'z')
{
*c = toupper(*c);
}
c++;
}
return (p);  
}
