#include "lists.h"
#include <stdio.h>
/**
 * print_list - hi
 * @h: hi 
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    int i;

    if (h == NULL)
    return (0);
    for (i = 0; h != NULL; i++)
    {
        if (h->str == NULL)
        printf("[0] (nil)\n");
        else
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
    }
return (i);
}