#include <stdio.h>
#include "lists.h"

/**
* listint_len - Function that returns the number of elements
* @h: A constant variable of type list_t.
*
* Return: The number of nodes (i).
*
*/
size_t listint_len(const listint_t *h)
{
    unsigned int i = 0;
    const listint_t *new = h;

    while (new != NULL)
    {
        new = new->next;
        i++;
    }
    return (i);
}
//
// Created by dreamdaddybanks on 11/15/21.
//

