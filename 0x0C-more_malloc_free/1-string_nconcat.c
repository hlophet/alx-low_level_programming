#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string to be concatenated to s1
 * @n: number of character of s2 to be concatenatd to s1
 * Return: pointer - to a newly allocated space in memory,
 *         or NULL - if functions fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len = n;
char *n_concat;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
len++;

n_concat = malloc(sizeof(char) * (len + 1));

if (n_concat == NULL)
return (NULL);

len = 0;

for (i = 0; s1[i]; i++)
n_concat[len++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
n_concat[len++] = s2[i];

n_concat[len] = '\0';

return (n_concat);
}
