#include "lists.h"
/**
 *listint_len - determines list len
 *@h: head of the list
 *Return: length of linked list or (NULL) if it doesn't exist
 */
size_t listint_len(const listint_t *h)
{
size_t nodes;

nodes=0;
while (h)
{
	nodes++;
	h=h->next;
}
	return (nodes);
}
