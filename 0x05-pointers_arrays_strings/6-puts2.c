/*
 * A program that  prints every other character of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: input string pointer
 * Return: No return
 */
void puts2(char *str)
{
int s_len = strlen(str) + 1;
int _len = 0;
while (_len < s_len - 1)
{
_putchar(*(str + _len));
_len += 2;
}
_putchar('\n');
}
