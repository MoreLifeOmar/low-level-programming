#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: Constant variable of type list_t.
* @n: Variable type n.
*
* Return: The address of the new node.
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *last;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        return (new);
    }
    last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new;
    return (new);
}
//
// Created by dreamdaddybanks on 11/15/21.
//

