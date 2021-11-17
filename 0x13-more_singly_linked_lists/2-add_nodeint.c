#include "lists.h"
/**
 * add_nodeint - hi
 * @head: hi
 * @n: hi
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *h;

h = malloc(sizeof(listint_t));
if (!h)
return (0);
h->n = n;
h->next = *head;
*head = h;
return (*head);
}
