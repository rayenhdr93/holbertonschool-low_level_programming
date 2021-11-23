#include "lists.h"
#include <stdio.h>
#include "string.h"
#include <stdlib.h>
/**
 * add_node_end - hi
 * @head: hi
 * @str: hi
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
int l;
list_t *h;

h = malloc(sizeof(list_t));
if (!h)
return (0);
h->str = strdup(str);
l = strlen(str);
h->len = l;
h->next = NULL;
if(*head == NULL)
*head = h;

return (h);
}
