/*
 * A program to reutrn the value of the last digit
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - return the value of the last digit
 * @n: input integer
 * Return: the last digit
 */
int print_last_digit(int n)
{

int j = (n >= 0) ? n : -n;

return (10 * (j % 10) + (j % 10));

}
