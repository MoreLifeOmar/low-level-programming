#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *list_len: ...
 *@h: ...
 *Return: ...
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
