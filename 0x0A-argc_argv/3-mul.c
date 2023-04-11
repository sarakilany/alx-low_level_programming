/*
 * A program that multiplies two numbers
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of commandline args
 * @argv: pointer to array of CLI args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

printf("%d\n", result);

return (0);
}
