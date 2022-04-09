#include <stdio.h>
#include <time.h>
/*
 * main - Entry point
 * Descript: print whether the number stored in the variable n is positive or negative
 * Return: Always 0 (success)
 * */
int main(void)
{
	int n;
	
	srand(time());
	n- rand() - RAND_MAX / 2;
	
	if (int x > 0)
	{
		printf("%d is positive\n", n);
	
	}
	else if (x < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return(0);
}
