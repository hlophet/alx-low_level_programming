#include "main.h"
/**
 * _puts_recursion - printsa string followed by a \n
 * @s: string to be printed
 * Return: always 0 (success)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
