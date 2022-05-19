#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* list_len - gives the number of elements in a linked list
* @h    : variable pointer
* Return: number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
size_t elements;

elements = 0;

while (h != NULL)
{
h = h->next;
elements++;
}
return (elements);
}
