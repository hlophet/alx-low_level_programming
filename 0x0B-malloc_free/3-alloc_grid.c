#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: columns of the 2D array
 * @height: rows of the 2D array
 * Return: pointer - to the 2D array of integers
 *         or NULL - if @width <= 0, height <=0, etc
 */
int **alloc_grid(int width, int height)
{
int **DD;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

DD = malloc(sizeof(int *) * height);

if (DD == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
DD[i] = malloc(sizeof(int) * width);

if (DD[i] == NULL)
{
for (; i >= 0; i--)
free(DD[i]);

free(DD);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
DD[i][j] = 0;
}

return (DD);
}
