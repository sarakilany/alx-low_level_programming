/*
 * Program that prints n elements of array a
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of array a
 * @n: number of elements to print
 * @a: pointer to array
 * Return: no return
 */
void print_array(int *a, int n)
{
int i = 0;
if (n <= 0)
{
printf("\n");
return;
}
while (i < n - 1)
{
printf("%d, ", a[i]);
i++;
}
printf("%d", a[i]);
printf("\n");
}
