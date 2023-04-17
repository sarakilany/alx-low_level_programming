/*
 * A program that prints a struct dog
 *
 * Author: Sara Kilany
 */

#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a dog struct
 * 
 * Return: No return
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.1f\n", d->age != NULL ? d->age : "(nil)");
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
