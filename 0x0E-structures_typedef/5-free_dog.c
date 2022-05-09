#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory of structure dogs
 * @d: dog to be freed
 * Return: 1 on success
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}

return;
}
