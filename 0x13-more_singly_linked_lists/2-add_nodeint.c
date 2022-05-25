#include "lists.h"
/**
 * add_nodeint - adds a new node at the end of a linked list
 * @head : pointer to the address of the head of the linked list
 * @n    : integer for the new node
 * Return: pointer of the address of the new node
 *         or NULL - if the function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->next = *head;
new->n = n;
*head = new;
return (new);
}
