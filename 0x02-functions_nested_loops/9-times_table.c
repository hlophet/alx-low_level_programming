#include "main.h"
/**
 * times_table - entry point
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
int row;
int column;
int product;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
if ((product / 10) == 0)
{
if (column == 0)
{
_putchar ('0');
}
if (column != 0)
{
_putchar (' ');
_putchar ((product % 10) + '0');
}
if (column < 9)
{
_putchar(',');
_putchar (' ');
}
}
else
{
_putchar ((product / 10) + '0');
_putchar ((product % 10) + '0');
if (column < 9)
{
_putchar(',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
