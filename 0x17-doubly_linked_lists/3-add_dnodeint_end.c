#include "lists.h"
/**
 * add_dnodeint_end - hi
 * 
 * @head: hi
 * @n: hi
 * Return: dlistint_t* 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *old;
if (new == NULL)
return (NULL);
new->n = n;
if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
*head = new;
}
else
{
old = *head;
while (old->next != NULL)
old = old->next;
old->next = new;
new->prev = old;
new->next = NULL;
}
return (new);
}
}