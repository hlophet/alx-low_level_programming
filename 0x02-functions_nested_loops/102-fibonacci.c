#include <stdio.h>
/**
 * main - Entry point
 * Description: printd the first 50 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, x = 1, y = 2, newterm = 0;
for (i = 0; i < 49; i++)
{
printf("%ld, ", x);
newterm = x + y;
x = y;
y = newterm;
if (i == 48)
printf("%ld\n", x);
}
return (0);
}
