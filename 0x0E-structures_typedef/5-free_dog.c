/*
 * A program that frees dogs structs
 *
 * Author: Sara Kilany
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dog structs
 * @d: a dog struct
 *
 * Return: No return
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
