lines (20 sloc)  308 Bytes
#include "holberton.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase alphabets
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (c == alpha)
{
return (1);
}
}
return (0);
}
