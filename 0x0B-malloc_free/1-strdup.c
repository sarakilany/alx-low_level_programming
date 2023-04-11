/*
 * A progrm that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: a pointer to a string to copy
 *
 * Return: a pointer to a copy of the string
 */
char *_strdup(char *str)
{
int length = strlen(str);
char *new_str = (char *) malloc((length + 1) * sizeof(char));
int i = 0;
if (str == NULL)
{
return (NULL);
}


if (new_str == NULL)
{
return (NULL);
}

while (i < length)
{
new_str[i] = str[i];
i++;
}
new_str[length] = '\0';
return (new_str);
}
