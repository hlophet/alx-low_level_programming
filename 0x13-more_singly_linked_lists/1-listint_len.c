#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h    : pointer to the head of the listint_t list
 * Return: number of items in the linked list
 */
size_t listint_len(const listint_t *h)
{
size_t nodes;

nodes = 0;

while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
