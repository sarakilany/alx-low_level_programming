/*
 * Program to print
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * Author: Sara Kilany
 */

#include <unistd.h>

/**
 * main - prints and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 1 at sucess
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1);

return (1);
}
