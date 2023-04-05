/*
 * A program that prints a string in reverse.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: a pointer to a string
 *
 * Return: No return
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
