#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include "string.h"
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
		if (!x)
		{
		free(x);
		return (NULL);
		}
		a = strdup(name);
		if (!a)
		{
		free(a);
		return (NULL);
		}
		b = strdup(owner);
		if (!b)
		{
			free(b);
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
