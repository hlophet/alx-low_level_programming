#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' || c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return(0);
}
