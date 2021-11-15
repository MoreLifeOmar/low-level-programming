#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: Constant variable of type list_t.
* @n: Variable type n.
*
* Return: The number of nodes (i).
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == 0)
    {
        return (NULL);
    }
    new->n = n;
    new->next = *head;
    *head = new;
    return (new);
}
//
// Created by dreamdaddybanks on 11/15/21.
//

