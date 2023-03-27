/*
 * Program that prints a string, followed by a
 *  new line, to stdout
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * to stdout
 *
 * @str: input string to print
 * Return: No return
 */
void _puts(char *str)
{
int _len = 0;
while (*(str + _len) != '\0')
{
_putchar(*(str + _len));
_len++;
}
}
