#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse \n
 * Return: Always 0 (success)
 */
int main(void)
{
	char o;
	for (o = 'z'; o >= 'a'; o--)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
