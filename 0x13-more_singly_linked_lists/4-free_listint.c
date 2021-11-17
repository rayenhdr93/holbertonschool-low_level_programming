#include "lists.h"
/**
 * free_listint - hi
 * @head: hi
 * Return: the number of nodes
 */
void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
