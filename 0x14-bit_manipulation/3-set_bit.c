#include "main.h"
/**
 * set_bit - sets the value of a bit
 *           to a 1 at a given index
 * @n    : pointer to the bit
 * @index: given index (from 0)
 * Return: 1 upon success,
 *        -1 if function fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (8 * sizeof(unsigned long int)))
return (-1);

*n |= 1 << (index);
return (1);
}
