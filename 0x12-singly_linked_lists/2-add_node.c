#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* *add_node - adds a new node at the beginning of list_t list
* @head : variable pointer to the last element
* @str  : string
* Return: address of the new element,
*         or NULL - if funciton fails
*/
list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *new_node;

i = 0;

while (str[i] != '\0')
{
i++;
}

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
return (NULL);
}

if (*head == NULL)
new_node->next = NULL;
else
new_node->next = *head;

new_node->len = i;
new_node->str = strdup(str);
*head = new_node;
return (*head);
}
