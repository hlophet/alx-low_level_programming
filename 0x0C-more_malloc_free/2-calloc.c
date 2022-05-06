#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: byte sie of each array element
 * Return: pointer - t o newly allocated space in memory,
 *         or NULL - if nmemb = 0, size = 0 or function fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr1;
char *arr2;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

arr1 = malloc(nmemb * size);

if (arr1 == NULL)
return (NULL);

arr2 = arr1;

for (i = 0; i < (nmemb * size); i++)
arr2[i] = '\0';

return (arr1);
}
