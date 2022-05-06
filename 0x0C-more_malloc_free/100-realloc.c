#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr     : pointer to the newly allocated space in memory
 * @old_size: size (in bytes) of the allocated space for ptr
 * @new_size: size (in bytes) for the new memory block
 *
 * Return: pointer - to the reallocated memery block,
 *            ptr  - if new_size = old_size
 *            NULL - if new_size = 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *memo;
char *memo2, *ptr2;
unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memo = malloc(new_size);

		if (memo == NULL)
			return (NULL);

		return (memo);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = ptr;
	memo = malloc(sizeof(*ptr2) * new_size);

	if (memo == NULL)
	{
		free(ptr);
		return (NULL);
	}

	memo2 = memo;

	for (i = 0; i < old_size && i < new_size; i++)
		memo2[i] = *ptr2++;

	free(ptr);
	return (memo);
}
