#include"lists.h"
#include<stdio.h>
/**
 * sum_listint - Calculates the sum of Data.
 * @head: Points to the first node.
 * Return: sum of data(n)
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current = head;
    if (head == NULL)
        return (0);
    sum += head->n;
    while (head != NULL && head->next != NULL && current->next != NULL)
    {
        current = current->next;
        sum += current->n;
    }
    return (sum);
}
//
// Created by dreamdaddybanks on 11/15/21.
//

