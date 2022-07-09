#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node from a doubly-liked
 *                            at a given index
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 - upon success
 *        -1 - if function fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;

if (*head == NULL)
return (-1);

for (; index != 0; index--)
{
if (tmp == NULL)
return (-1);

tmp = tmp->next;
}

if (tmp == *head)
{
*head = tmp->next;

if (*head != NULL)
(*head)->prev = NULL;
}
else
{
tmp->prev->next = tmp->next;

if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
}

free(tmp);
return (1);
}
