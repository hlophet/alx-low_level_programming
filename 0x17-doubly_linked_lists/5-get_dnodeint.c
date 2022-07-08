#include "lists.h"
/**
 * get_dnodeint_at_index - finds a node in a doubly-linked list
 * @head : head of the list
 * @index: node to be found
 *
 * Return: pointer to the nth node or
 *         NULL (if the node does not exist)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
