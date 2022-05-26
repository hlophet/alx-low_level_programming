#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head : pointer to the head of the linked list
 * @n    : value for the new node
 * Return: pointer if of the new node,
 *         or NULL - if function fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
last = *head;

while (last->next != NULL)
last = last->next;

last->next = new;
}

return (*head);
}
