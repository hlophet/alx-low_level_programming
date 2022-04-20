#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
