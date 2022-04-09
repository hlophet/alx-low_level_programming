#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
