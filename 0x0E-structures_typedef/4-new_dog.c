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
		a = strdup(name);
		b = strdup(owner);
		if ((!b) || (!x) || (!a))
		{
			free(x);
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
