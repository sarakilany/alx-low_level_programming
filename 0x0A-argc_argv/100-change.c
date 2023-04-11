/*
 * A program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins 
 * to make change for an amount of money.
 * @argc: number of cli arguments
 * @argv: pointer to array of cli arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int cents = atoi(argv[1]);
int num_coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}



if (cents < 0)
{
printf("0\n");
return (0);
}



num_coins += cents / 25;
cents = cents % 25;

num_coins += cents / 10;
cents = cents % 10;

num_coins += cents / 5;
cents = cents % 5;

num_coins += cents / 2;
cents = cents % 2;

num_coins += cents;

printf("%d\n", num_coins);

return (0);
}
