/*
 * A program to print every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 *
 * Author: Sara Kilany
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, 
 * starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
// Print the hour
if (hour < 10)
_putchar('0');
printf("%d:", hour);

// Print the minute
if (minute < 10)
_putchar('0');
printf("%d\n", minute);
}
}

