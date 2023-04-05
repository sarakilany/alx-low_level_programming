/*
 * A program that prints a string, followed by a new line
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a pointer to a string
 *
 * Return: No return
 */
#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
