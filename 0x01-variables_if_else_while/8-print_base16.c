/*
 * A program to print numbers for base 16
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers for base 16
 *
 * Return: 0 on success
 */
int main(void)
{

int x = 0;

while (x < 10)
{
putchar(x + '0');

x++;
}
while (x < 16)
{
putchar(x + 87);
x++;
}
putchar('\n');
return (0);
}
