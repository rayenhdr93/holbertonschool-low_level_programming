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
	char *a;
	char *b;

	if ((name != NULL) && (age >= 0) && (owner != NULL))
	{
		x = malloc(sizeof(struct dog));
		a = strndup(x->name, sizeof(x->name));
		b = strndup(x->owner, sizeof(x->owner));
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
