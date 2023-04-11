/*
 * Aprogram that concatenates two strings.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: pointer to string to add to
 * @s2: pointer to string to concate to s1
 * Return: new concarted string or NULL
 */
char *str_concat(char *s1, char *s2)
{
int len1 = strlen(s1);
int len2 = strlen(s2);
int i = 0;
int j = 0;
char *concat = malloc((len1 + len2 + 1) * sizeof(char));
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

if (concat == NULL)
{
return (NULL);
}

while (i < len1)
{
concat[i] = s1[i];
i++;
}

while (j < len2)
{
concat[i + j] = s2[j];
j++;
}
concat[i + j] = '\0';
return (concat);
}
