#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - free the pointer to the list and the list too.
 * @head: pointer to the list.
 * Return: N/A.
 */
void free_listint2(listint_t **head)
{
    listint_t *p;
    if (head == NULL)
        free(head);
    else
        while ((*head) != NULL)
        {
            p = (*head)->next;
            free(*head);
            *head = p;
        }
    head = NULL;
}
//
// Created by dreamdaddybanks on 11/15/21.
//

