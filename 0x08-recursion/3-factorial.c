#include "main.h"
/**
 * factorial - calculates the factorial of a number n
 * @n: integer
 * Return: factorial of the number n,
 *         or  1: if n = 0,
 *         or -1: if n < 0
 */
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
