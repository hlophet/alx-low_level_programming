#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars & then initializes it with
 *                a specific char
 * @size: size of array
 * @c: specific character to initialize the array with
 * Return: pointer to the array
 *         otherwise, NULL - if the size equal to 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size <= 0)
return (NULL);

arr = malloc(sizeof(char) * size);

if (arr == 0)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

/*(s + i) = '\0';*/

return (arr);
}
