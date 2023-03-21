/*
 * A program to print the alphabet, in lowercase 10 times
 * followed by a new line
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase 10 times
 * followed by a newline 10
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
char i = 'a';
int j = 0;
while (j < 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
j++;
i = 'a';
}
_putchar('\n');
}
