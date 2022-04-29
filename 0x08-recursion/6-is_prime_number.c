#include "main.h"
/**
 * is_divisible - check to see whether a number is divisible
 * @num: same number as n to be checked
 * @div: divisor
 * Return: 0 - if @num is divisible,
 *        -1 - if @num is not divisible
 */
int is_divisible(int num, int div)
{
if (num == div)
return (1);
else if (num % div == 0)
return (0);
else
return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check to see if a number is a prime number
 * @n: number to be checked
 * Return: 1 - if @n is a prime number, or
 *         0 - if @n is not a prime number
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (is_divisible(n, 2));
}
