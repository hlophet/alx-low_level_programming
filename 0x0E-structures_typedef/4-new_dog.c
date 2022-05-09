#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter
 * @str  : string to be copied
 * Return: pointer to the newly allocated space in memory
 */
char *_strdup(char *str)
{
int i, len = 0;
char *s;

if (str == NULL)
return (NULL);

while (*(str + len))
len++;

s = malloc(sizeof(char) * (len + 1));

if (s == NULL)
return (NULL);

for (i = 0; i <= len; i++)
*(s + i) = *(str + i);

return (s);
}

/**
 * new_dog - creates a new dog
 * @name : dog's name
 * @age  : dog's age
 * @owner: dog's owner
 * Return: pointer - to the newly allocated space in memory,
 *         or NULL - if name = 0, age = 0, owner = 0
 *                   or function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(struct dog));

if (new_dog == NULL || name == NULL || owner == NULL)
return (NULL);

new_dog->name = _strdup(name);

if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->age = age;
new_dog->owner = _strdup(owner);

if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}

return (new_dog);
}
