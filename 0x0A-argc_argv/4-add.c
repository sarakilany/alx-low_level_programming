/*
 * A program that adds positive numbers
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of cli arguments
 * @argv: pointer to array of cli arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i = 1;
int j;
int num;
if (argc == 1)
{
printf("0\n");
return (0);
}

while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}

num = atoi(argv[i]);

if (num < 0)
{
printf("Error\n");
return (1);
}

sum += num;
i++;
}

printf("%d\n", sum);
return (0);
}
