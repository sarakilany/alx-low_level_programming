/*
 * A program that sets the value of a pointer to a char.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer char
 * @to: pointer to a char
 * Return: No return
 */
void set_string(char **s, char *to)
{
*s = to;
}
