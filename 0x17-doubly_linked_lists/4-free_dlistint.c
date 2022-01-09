#include "lists.h"
/**
 * free_dlistint - hi
 * @head: hi
 * Return: hi
 */
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;
free(head);
while (head->next)
{
head = head->next;
free(head);
}
}
