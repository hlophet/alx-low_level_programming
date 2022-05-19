#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list
* @h    : variable pointer of the list to print
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
size_t nodes;

nodes = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
}
else
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
nodes++;
}
return (nodes);
}
