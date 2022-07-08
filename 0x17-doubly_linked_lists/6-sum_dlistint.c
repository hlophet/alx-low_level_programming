#include "lists.h"
/**
 * sum_dlistint - calculates the sums all the
 *                data of a doubly-linked list
 * @head: head of the list
 *
 * Return: sum of all the data or
 *         0 - if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum;

sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
