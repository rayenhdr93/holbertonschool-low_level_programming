#include "lists.h"
/**
 * dlistint_len - hi
 * @h: hi
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	for (i = 1; h->next; i++)
	{
		h = h->next;
	}
	return (i);
}
