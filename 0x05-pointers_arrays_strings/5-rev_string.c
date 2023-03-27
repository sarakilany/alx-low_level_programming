/*
 * Program to reverse a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 *
 * @s: string pointer
 * Return: No return
 */
void rev_string(char *s)
{
int _len = 0;
int counter = 0;
char temp;
while (*(s + _len) != '\0')
_len++;
while (counter <= _len/2)
{
temp = s[counter];
s[counter] = s[_len];
s[_len] = temp;
_len--;
counter++;
}
}
