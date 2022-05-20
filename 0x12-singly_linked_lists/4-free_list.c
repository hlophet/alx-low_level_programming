#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a struct linked list
 * @head : first element of the list
 */
void free_list(list_t *head)
{
if (head == NULL)
return;

free_list(head->next);
free(head->str);
free(head);
}
