/*
 * Program that swaps the values of two integers
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: No return
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
