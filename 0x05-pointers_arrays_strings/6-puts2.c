/*
 * A program that  prints every other character of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 *
 * puts2 - prints every other character of a string
 * @str: input string pointer
 * Return: No return
 */
void puts2(char *str)
{
int _len = 0;
while (*(str + _len) != '\0')
{
_putchar(*(str + _len));
_len += 2;
}
printf("\n");
}
