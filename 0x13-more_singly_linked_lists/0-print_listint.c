#include "lists.h"
/**
 * print_listint - hi
 * @h: hi
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
if (h == NULL)
	return (0);
for (i = 0; h != NULL; i++)
{
	printf("%d\n", h->n);
	h = h->next;
}
return (i);
}
