#include <stdio.h>
/**
 * main - entry point
 * Description: prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */
int main(void)
{
int max = 1024;
int num;
int sum = 0;
for (num = 0; num < max; num++)
{
if ((num % 3 == 0) || (num % 5 == 0))
{
sum = sum + num;
}
}
printf("%d\n", sum);
return (0);
}
