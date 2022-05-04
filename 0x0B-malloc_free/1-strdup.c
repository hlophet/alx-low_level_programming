#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space in memory
 *           containing a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to the duplicated string if successful,
 *         otherwise, NULL - if str is equal to 0 or insufficient memory
 */
char *_strdup(char *str)
{
int i, len = 0;
char *copy;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
len++;

copy = malloc(sizeof(char) * (len + 1));

if (copy == NULL)
return (NULL);

for (i = 0; str[i]; i++)
copy[i] = str[i];

copy[len] = '\0';
return (copy);
}
