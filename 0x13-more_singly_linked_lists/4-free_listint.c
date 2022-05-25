#include "lists.h"

/**
 * free_listint - free the linked list
 * @head : pointer to node
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
