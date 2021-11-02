#include "stdio.h"
#include "dog.h"
/**
 * print_dog - hi
 * @d:hi
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		if (d->age > 0)
			printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
	}
}
