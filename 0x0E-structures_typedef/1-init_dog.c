#include "dog.h"
/**
 * init_dog - hi
 * @d:hi
 * @name:hi
 * @age:hi
 * @owner:hi
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
