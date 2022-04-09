#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int s;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
		
		if (s != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	return (0);
}
