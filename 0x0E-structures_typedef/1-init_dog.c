#include "dog.h"
#include NULL (void *)0

/**
 * init_dog - initialize a variable of type struct dog
 * @d: thedog to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner : the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
