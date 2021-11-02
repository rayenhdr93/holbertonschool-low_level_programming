#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
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

	if ((name != NULL) && (age >= 0) && (owner != NULL))
	{
		x = malloc(sizeof(struct dog));
		if (!x)
		{
			free(x);
			return (NULL);
		}
		x->name = name;
		x->owner = owner;
		x->age = age;
		return (x);
	}
	else
		return (NULL);
}
