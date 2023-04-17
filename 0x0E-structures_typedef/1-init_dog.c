/*
 * A program that initialize a variable of type struct dog
 *
 * Author: Sara Kilany
 */

#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: No return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = (char*) malloc(strlen(name) + 1);
strcpy(d->name, name);
d->age = age;
d->owner = (char*) malloc(strlen(owner) + 1);
strcpy(d->owner, owner);
}
