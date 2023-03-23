/*
 * A program to print the numbers from 1 to 100, followed by a new line
 *
 * Author: Sara Kilany
 */
 
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
