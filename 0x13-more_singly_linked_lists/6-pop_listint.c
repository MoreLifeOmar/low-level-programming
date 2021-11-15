#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - Deletes the first node of the list.
 * @head: points to the first node.
 * Return: n of the first node.
 */
int pop_listint(listint_t **head)
{
    int d;
    listint_t *p;
    if (*head == NULL)
        return (0);
    d = (*head)->n;
    p = (*head)->next;
    free(*head);
    *head = p;
    return (d);
}
//
// Created by dreamdaddybanks on 11/15/21.
//

