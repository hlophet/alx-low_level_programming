#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints elements of a listint_t list
 * @h    : pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node;

nodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
