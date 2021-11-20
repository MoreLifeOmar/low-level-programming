#include <stdio.h>
#include "lists.h"
/**
 * list_len - calculates the number of lists it contains.
 * @h: constant list.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
size_t l;
l = 0;
l++;
if (h->next != NULL)
{
return (l + list_len(h->next));
}
return (l);
}
