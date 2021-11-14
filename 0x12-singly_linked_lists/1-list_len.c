#include "lists.h"
#include <stdio.h>
/**
 * list_len - hi
 * @h: hi
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
int i;

if (h == NULL)
return (0);
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
