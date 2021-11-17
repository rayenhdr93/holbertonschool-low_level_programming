#include "lists.h"
/**
 * free_listint2 - hi
 * @head: hi
 * Return: the number of nodes
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	else
	{
	while ((*head)->next != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	*head = NULL;
	}
}
