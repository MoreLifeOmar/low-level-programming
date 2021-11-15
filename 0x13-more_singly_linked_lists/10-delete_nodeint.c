#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a giving node
 * @head: pointer to the first node.
 * @index: index of the node to delete.
 * Return: 1 if succeed and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *p, *tmp;
    listint_t *current = *head;
    if (head == NULL)
        return (-1);
    if ((*head) && index == 0)
    {
        (*head) = current->next;
        free(current);
        return (1);
    }
    while (current && i < index)
    {
        if (i == index - 1)
        {
            p = current->next;
            free (current);
            tmp->next = p;
            return (1);
        }
        tmp = current;
        current = current->next;
        i++;
    }


    return (-1);
}
//
// Created by dreamdaddybanks on 11/15/21.
//

