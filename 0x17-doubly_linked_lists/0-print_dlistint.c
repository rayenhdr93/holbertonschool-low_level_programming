#include "lists.h"
/**
 * print_dlistint - hi
 * @h: hi
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (!h)
	return (0);
	printf("%d\n", h->n);
	for (i = 1; h->next; i++)
	{
		h = h->next;
		printf("%d\n", h->n);
	}
	return (i);
}
