#include "lists.h"
/**
 * get_dnodeint_at_index - hi
 * @head: hi
 * @index: hi
 * Return: hi
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	return (NULL);
	while (i < index)
	{
		head = head->next;
		if (!head)
		return (NULL);
		i++;
	}
	return (head);
}
