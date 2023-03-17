/*
 * A program to print numbers from 0-9 seperated by , 
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers from 0-9 separated by , 
 *
 * Return: 0 on success
 */
int main(void)
{

int x = 0;

while (x < 10)
{
putchar(x + '0');
if ( x != 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
