/*
 * A program that prints itsname followed by a newline.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints program's name, followed by a new line.
 * @argc: number of input arguments
 * @argv: pointer to array of commandline arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
return 0;
}
