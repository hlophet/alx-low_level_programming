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
	for (char i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (char j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
