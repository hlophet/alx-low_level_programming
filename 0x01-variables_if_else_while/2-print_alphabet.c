#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Always ) (Success)
 */
int main(void)
{
for(char i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return(0);
}
