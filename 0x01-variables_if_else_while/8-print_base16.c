#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase, \n
 * Return: Always 0 (success)
 */
int main(void)
{
	int s = 48;
	int p = 97;
	
	while (s <= 57)
	{
		putchar(s);
		s++;
	}
	while (p <= 102)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return(0);
}
