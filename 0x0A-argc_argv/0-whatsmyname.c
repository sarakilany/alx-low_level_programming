/*
 * A program that prints itsname followed by a newline.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints program's name, followed by a new line.
 * @argc: length of command line arguments 
 * @argv: pointer tocommand line array arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc > 1)
{
printf("%s!\n", argv[1]);
}
else
{
printf("%s\n", argv[0]);
}

return (0);
}
