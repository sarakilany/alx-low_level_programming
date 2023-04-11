/*
 * A progrm that prints all arguments it receives
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments passed via commandline
 * @argv: pointer to array of arguments passed via CLI
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}

return (0);
}
