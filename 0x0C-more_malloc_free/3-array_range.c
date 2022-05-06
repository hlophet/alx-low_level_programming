#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers that contains all the values
 *               including the  min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer - to the newly allocated space in memory,
 *         or NULL - if min > max or funcitons fails
 */
int *array_range(int min, int max)
{
int *a, i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
