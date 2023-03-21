/*
 * A program to print the alphabet, in lowercase
 * followed by a new line
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 * followed by a newline
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
}
int main(void)
{
print_alpahbet();

return (0);
}
