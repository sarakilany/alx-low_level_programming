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
char *p = str;
while (*p != '\0')
{
_putchar(*p);
p += 2;
}
printf("\n");
}
