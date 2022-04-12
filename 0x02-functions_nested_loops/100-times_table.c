#include "main.h"
#include <stdio.h>
/**
 * print_times_table - entry point
 * @n: n is the number to be treated
 * Description: prints a multiplication table up to n times
 * Return: a mumber matrix
 */
void print_times_table(int n)
{
int row, column, prod;

if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
_putchar('0');
for (column = 1; column <= n; column++)
{
_putchar(',');
_putchar(' ');
prod = row * column;

if (prod <= 99)
_putchar(' ');

if (prod <= 9)
_putchar(' ');

if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
