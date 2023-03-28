/*
 * Porgram that copies the string pointer from src to dest
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * strcpy - copies the string pointer from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer
 */
char *strcpy(char *dest, char *src)
{
while (*src)
*dest++ = *src++;
*dest = '\0';
return dest;
}
