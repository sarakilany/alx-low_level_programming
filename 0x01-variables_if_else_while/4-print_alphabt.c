/*
 * A program to print alphabets except q and e
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabets except q and e
 *
 * Return: 0 on success
 */
int main(void)
{

char x = 'a';

while (x <= 'z')
{
if (x != 'e' && x != 'q')
putchar(x);
x++;
}
putchar('\n');
return (0);
}
