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

int x, y = 0;

while (y < 10)
   {
while (x < 10)
{
if (x > y)
{
putchar(y + '0');  
putchar(x + '0');
putchar(',');
putchar(' ');
}
x++;
}
y++;
}
putchar('\n');
return (0);
}
