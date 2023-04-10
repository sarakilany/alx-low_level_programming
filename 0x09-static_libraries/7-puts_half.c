/*
 * Program that prints half of a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that prints half of a string
 * @str: string pointer
 *
 * Return: No return
 */
void puts_half(char *str)
{
int len = strlen(str) + 1;
int i;
int start = (len / 2);
if (len % 2 != 0)
{
start = (len - 1) / 2;
}
i = start;
while (i < len - 1)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
