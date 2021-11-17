#include "lists.h"
/**
 * pop_listint - hi
 * @head: hi
 * Return: the number of nodes
 */
int pop_listint(listint_t **head)
{
	int i;

	if (*head == NULL)
	return (NULL);
	i = (*head)->n;
	(*head) = (*head)->next;
	return (i);
}
