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
	int h, r;

	if ((name != NULL) && (age >= 0) && (owner != NULL))
	{
		x = malloc(sizeof(struct dog));
		r = strlen(name);
		h = strlen(owner);
		a = malloc(r);
		b = malloc(h);
		a = name;
		b = owner;
		if ((!x) || (!a) || (!b))
		{
			free(a);
			free(b);
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
