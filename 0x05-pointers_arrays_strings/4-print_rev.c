/*
 * Program to print a string, in reverse
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: pointer to string
 * Return: No return
 */
void print_rev(char *s)
{
int _len = 0;
if (*s == '\0')
{
_putchar('\n');
return;
}
while (*(s + _len) != '\0')
_len++;
_len--;
while (_len > 0)
{
_putchar(*(s + _len));
_len--;
}
_putchar(*(s + _len));
_putchar('\n');
}
