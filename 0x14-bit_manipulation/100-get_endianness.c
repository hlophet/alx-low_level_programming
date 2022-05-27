#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: 0 - if big-endian,
 *         1 - if little-endian
 */
int get_endianness(void)
{
int s;
char *endian;

s = 1;
endian = (char *)&s;

if (endian)
return (1);
else
return (0);
}
