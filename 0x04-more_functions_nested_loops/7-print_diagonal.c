/*
 * A program to draw a diagonal line on the terminal.
 *
 * Author: Sara Kilany
 */

#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed
 * Return: no return
 */
void print_diagonal(int n) {
int i = n;
int j = 0;
int m;
if (i <= 0) {
_putchar('\n');
return;
}

while (j < i) {
m = 0;
while (j < i) {
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
m++;
}
}
