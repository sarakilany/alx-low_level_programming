/*
 * A program to print two tow-digit numbers 0-99
 * Author: Sara Kilany
 */

#include <stdio.h>

/**
 * main - prints two two-digit numbers 0-99
 *
 * Return: 0 on success
 */
int main(void)
{
int i, j;
for (i = 0; i < 99; i++)
{
for (j = i + 1; j < 100; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
