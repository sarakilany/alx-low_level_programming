/*
 * Program to reverse a string
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 *
 * @s: string pointer
 * Return: No return
 */
void rev_string(char *s)
{
int len = strlen(s);
int i = 0;
while (i < len / 2)
{
char tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
i++;
}
}
