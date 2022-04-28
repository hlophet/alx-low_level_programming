#include "main.h"
/**
 * factotial - calculates the factorial of a number n
 * @n: integer
 * return: the factorial of a given number, 1 if n = 0, -1 if n < 0
 */
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
