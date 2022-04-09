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
	for (int s = 48; s <= 57; s++)
	{
		if (s != 57)
		{
			putchar(s);
			putchar(44);
			putchar(' ');
		}
		else
		{
			putchar(s);
		}
	}
	return(0);
}
