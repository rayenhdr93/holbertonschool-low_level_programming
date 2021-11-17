#include "lists.h"
/**
 * get_nodeint_at_index - hi
 * @head: hi
 * @index: hi
 * Return: hi
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index && head->next != NULL); i++)
	head = head->next;
	if (index > i + 1)
	return (NULL);
	else
	return (head);
}
