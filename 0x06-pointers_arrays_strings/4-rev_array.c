/*
 * Program that reverses the content of an array of integers
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses content of an integer array
 * @a: pointer to array of ints
 * @n: number of array elements
 * Return: No return
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp;
while (i <= n)
{
temp = a[i];
a[i] = a[n-1];
a[n-1] = temp;
i++;
n--;
}
}
