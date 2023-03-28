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
char *p1 = s;
char *p2 = s + len - 1;
while (p1 < p2)
{
char temp = *p1;
*p1 = *p2;
*p2 = temp;
p1++;
p2--;
}
