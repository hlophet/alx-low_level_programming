#include "main.h"
/**
 * clear_bit - sets the value of a bit
 *             to 0 at a given index
 * @n    : pointer to the bit
 * @index: index (from 0) for setting the value
 * Return: 1 upon success, -1 if funcitons fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (8 * sizeof(unsigned long int)))
return (-1);

*n &= ~(1 << index);
return (1);
}
