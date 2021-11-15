#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - A Function which frees a listint_t list.
* @head: Constant variable of type list_t.
* Return: Void function.
*
*/
void free_listint(listint_t *head)
{
    listint_t *tmp = head;
    listint_t *new;

    while (tmp != NULL)
    {
        new = tmp->next;
        free(tmp);
        tmp = new;
    }
}
//
// Created by dreamdaddybanks on 11/15/21.
//

