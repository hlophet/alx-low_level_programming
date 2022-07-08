#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 *                    of a doubly linked list
 * @head: pointer to the head of the doubly linked list
 * @n   : integer for the new node to be added
 *
 * Return: address of the new node or
 *         NULL - if function fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

tmp = *head;

while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = new;
new->prev = tmp;
return (new);
}
