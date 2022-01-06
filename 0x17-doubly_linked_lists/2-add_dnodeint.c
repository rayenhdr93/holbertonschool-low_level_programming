#include "lists.h"
/**
 * add_dnodeint - hi
 * @head:hi
 * @n:hi
 * Return: hi
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	if (head == NULL)
		return (0);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
