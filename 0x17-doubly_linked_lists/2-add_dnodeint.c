#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 *                of a doubly linked list
 * @head: pointer to the head of the doubly linked list
 * @n   : integer for the new node to be added
 *
 * Return: address of the new node or
 *         NULL - if the function fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

(*head)->prev = new;
new->next = *head;
*head = new;
return (new);
}
