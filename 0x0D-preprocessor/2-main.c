/*
 * A program that prints the name of the file it was compiled from,
 * followed by a new line.
 * Author: Sara Kilany
 */
#include <stdio.h>
/**
 * main - program that prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: No return
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
