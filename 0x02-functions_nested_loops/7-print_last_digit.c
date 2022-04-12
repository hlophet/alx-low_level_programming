#include <main.h>
/**
 * print_last_digit - Entry point
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: an integer
 */
int print_last_digit(int n)
{
int result;
result = n % 10;
if (n < 0)
{
result = result * -1;
}
_putchar(result + '0');
return (result);
}
