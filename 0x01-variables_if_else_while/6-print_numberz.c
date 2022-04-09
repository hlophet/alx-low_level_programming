#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0\n
 * Return: Always 0 (success)
 */
int main(void)
{
	for (int a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return(0);
}
