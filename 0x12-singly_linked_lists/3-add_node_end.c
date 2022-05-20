#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* *add_node_end - adds a new node at the end of a list
* @head : variable pointer to the last element
* @str  : pointer to a string inside the list
* Return: address of the new element,
*         or NULL - if funciton fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *node;
list_t *temp;

temp = *head;
i = 0;

while (str[i] != '\0')
{
i++;
}

node = malloc(sizeof(list_t));

if (node == NULL)
return (NULL);

node->str = strdup(str);
node->len = i;
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (*head);
}

while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = node;
return (*head);
}
