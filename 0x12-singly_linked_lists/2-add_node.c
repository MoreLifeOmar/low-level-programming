#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node to the first of a list.
 * @h: constant list.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int i = 0;
list_t *temp;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL || str == NULL)
return (0);
new->str = strdup(str);
while (str[i])
i++;
new->len = i;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (0);
new->next = *head;
*head = new;
return (new);
}
