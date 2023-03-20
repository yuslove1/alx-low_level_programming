#include "dog.h"
#include <stdio.h>

/**
 * init_dog - this function initialize a variable type struct dog
 * @d: initializing name
 * @name: the name
 * @age: the age
 * @owner : the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
