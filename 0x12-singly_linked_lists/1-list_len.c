#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len - returns chained list length
 *@h: head of the list
 *Return: list len
 */
size_t list_len(const list_t *h)
{
size_t i;
const list_t *p = h;
	i = 0;
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
