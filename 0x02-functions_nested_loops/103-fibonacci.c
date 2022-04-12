#include <stdio.h>
/**
 * main - entry point
 * Description: prints th sum of even Fibonacci numbers < 4,000,000
 * 5 below 1024 (excluded), \n
 * Return: Always 0 (success)
 */
int main(void)
{
long int i, x = 1, y = 2, sum = 0, totalSum = 0;

for (i = 0; i < 49; i++)

if ((y % 2 == 0) && (y <= 4000000))
{
totalSum = totalSum + y;
}
sum = x + y;
x = y;
y = sum;
}
printf("%d\n", totalSum);
return (0);
}
