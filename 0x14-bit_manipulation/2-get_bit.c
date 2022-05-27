#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n    : number
 * @index: given index
 * Return: value of a bit at a given index,
 *         or -1 if funciton falis
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (8 * sizeof(unsigned long int)))
return (-1);

return ((n >>= index) & 1);
}
