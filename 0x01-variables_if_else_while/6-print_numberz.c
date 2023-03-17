/*
 * A program to print numbers from 0-9
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers from 0-9
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
putchar('\n');
return (0);
}
