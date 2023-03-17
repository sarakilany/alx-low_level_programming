/*
 * A program to print alphabets
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Return: 0 on success
 */
int main(void)
{

char x ='a';

while ( x <= 'z')
{
putchar(x);
putchar('\n');
x++;
}
return (0);
}
