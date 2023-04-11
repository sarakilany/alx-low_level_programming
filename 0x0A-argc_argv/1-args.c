/*
 * A program that prints the number of arguments passed into it
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed to main via commandline
 * @argv: unused argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (!argv)
printf("%d\n", argc - 1);
return (0);
}
