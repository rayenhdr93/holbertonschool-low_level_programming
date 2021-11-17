#include "lists.h"
/**
 * add_nodeint_end - hi
 * @head: hi
 * @n: hi
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h;
listint_t *head1;

h = malloc(sizeof(listint_t));
if (!h)
return (0);
h->n = n;
h->next = NULL;
if (*head ==  NULL)
{
*head = malloc(sizeof(listint_t));
*head = h;
}
else
{
head1 = *head;
while ((head1)->next != NULL)
{
head1 = (head1)->next;
}
(head1)->next = h;
}
return (*head);
}
