#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory usin malloc
 * @b: number of bytes to be allocated in memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *memo;

memo = malloc(b);

if (memo == NULL)
exit(98);

return (memo);
}
