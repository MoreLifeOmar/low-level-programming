#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list.
 * @h: constant list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t l;
l = 0;
if (h->str == NULL)
{
printf("[0] (nil)\n");
l++;
}
else
{
printf("[%d] %s\n", h->len, h->str);
l++;
}
if (h->next != NULL)
return (l + print_list(h->next));
return (l);
}
