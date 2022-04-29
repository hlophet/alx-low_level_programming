#include "main.h"
/**
 * _pow_recursion - calculates the exponent of base x to the power of y
 * @x: base number to raise to y
 * @y: exponent that x is raised to
 * Return: an integer - exponent of base x raised to y,
 *                    - if y is 0 then exponent is 1,
 *                    - if y is negative then exponent is 1
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y > 0)
return (x * _pow_recursion(x, y - 1));
else
return (-1);
}
