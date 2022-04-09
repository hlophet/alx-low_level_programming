#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, c;
srand(time());
n = rand() - RAND_MAX /2;
c = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, c);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, c);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, c);
}	
return(0);
}
