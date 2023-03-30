/*
 * Program that encodes a string into 1337
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * rplc - replace a letter with number
 * @inpstr: input pointer to a string
 * @rplchar: character to replace
 * @rplwth: number to replace the char with
 * Return: no return
 */
void rplc(char *inpstr, char rplchar, char rplwth)
{
char *p = inpstr;
while (*p != '\0')
{
if (*p == rplchar)
{
*p = rplwth;
}
p++;
}
}

/**
 * leet - encodes a stirng into 1337
 * @c: input pointer to a string
 * Return: a pointer to a string
 */
char *leet(char *c)
{
char *p = c;
while (*p != '\0')
{
rplc(p, 'o', '0');
rplc(p, 'O', '0');
rplc(p, 'a', '4');
rplc(p, 'A', '4');
rplc(p, 'e', '3');
rplc(p, 'E', '3');
rplc(p, 't', '7');
rplc(p, 'T', '7');
rplc(p, 'l', '1');
rplc(p, 'L', '1');
p++;
}
return (c);
}
