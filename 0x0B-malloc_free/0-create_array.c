/*
 * A program creates an array of chars,
 * and initializes it with a specific char.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *  and initializes it with a specific char.
 * @size: array size
 * @c : character to initialize array with
 * Return:
 */
char *create_array(unsigned int size, char c)
{
char *array = (char *) malloc(size *sizeof(char));
unsigned int i;

if (size == 0)
{
return (NULL);
}

if (array == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}
