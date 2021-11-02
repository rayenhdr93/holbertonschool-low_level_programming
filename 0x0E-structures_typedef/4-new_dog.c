#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include "string.h"
/**
 * free_dog - hi
 * @d: hi
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
/**
 * new_dog - hi
 * @name: hi
 * @age: hi
 * @owner: hi
 * Return: hi
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *x;
	char *a;
	char *b;

	if ((name != NULL) && (age >= 0) && (owner != NULL))
	{
		x = malloc(sizeof(struct dog));
		if (name)
		a = strdup(name);
		else
			return (NULL);
		if (owner)
		b = strdup(owner);
		else
			return (NULL);
		if ((!x) || (!a) || (!b))
		{
			free(b);
			free(a);
			free_dog(x);
			return (NULL);
		}
		x->name = a;
		x->owner = b;
		x->age = age;
		return (x);
	}
	else
		return (NULL);
}
