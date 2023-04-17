/*
 * A program that creates a new dog.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog_t struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;

if (*name && age && *owner)
{
newdog->name = *name;
new->age = age;
newdog->owner = *owner;
return (newdog);
}
return (NULL);
}
