/*
 * A program that creates a new dog.
 *
 * Author: Sara Kilany
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog_t struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog = (dog_t *) malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}


newdog->name = (char *) malloc(strlen(name) + 1);
if (newdog->name == NULL)
{
return (NULL);
}
strcpy(newdog->name, name);

newdog->owner = (char *) malloc(strlen(owner) + 1);
if (newdog->owner == NULL)
{


return (NULL);
}
strcpy(newdog->owner, owner);
newdog->age = age;
return (newdog);
}
