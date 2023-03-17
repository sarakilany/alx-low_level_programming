/*
 * A program to print the last digit in a number
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the last digit of a number randomly generated
 *
 * Return: 0 on success
 */
int main(void)
{
int n, lst_dig;

srand(time(0));
n = rand() - RAND_MAX / 2;
lst_dig = n % 10;
if (lst_dig > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lst_dig);
else if (lst_dig == 0)
printf("Last digit of %d is %d and is 0\n", n, lst_dig);
else if (lst_dig != 0 && lst_dig < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dig);
return (0);
}
