/*
 * A program that prints itsname followed by a newline.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints program's name, followed by a new line.
 * @argv: pointer tocommand line array arguments
 * Return: 0 on success
 */
int main(char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
