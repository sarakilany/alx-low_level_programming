/*
 * Program that prints half of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: string pointer
 *
 * Return: No return
 */
void puts_half(char *str)
{
int len = strlen(str);
int start = len / 2;
if (len % 2 != 0)
{
start = (len - 1) / 2;
}
for (int i = start; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
