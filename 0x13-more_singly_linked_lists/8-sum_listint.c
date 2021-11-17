#include "lists.h"
/**
 * sum_listint - hi
 * @head: hi
 * Return: hi
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if  (head == NULL)
	{
		return (0);
	}
	while (head->next != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	i = i + head->n;
	return (i);
}
