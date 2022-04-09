#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, and then in uppercase\n
 * Returns: Always 0 (Success)
 */
int main(void)
{
	char i, j;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
