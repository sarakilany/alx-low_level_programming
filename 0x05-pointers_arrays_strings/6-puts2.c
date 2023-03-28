/*
 * A program that  prints every other character of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#inlcude <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: input string pointer
 * Return: No return
 */
void puts2(char *str)
{
int s_len = strlen(s);
int _len = 0;
while ( _len <= s_len)
{
_putchar(*(str + _len));
_len += 2;
}
printf("\n");
}
