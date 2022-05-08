#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number of command line arguments
 * @argc: number of command line arguments
 * @argv: array of size @argc
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i = 0;

(void) argv;
while (i < (argc - 1))
i++;

printf("%d\n", i);
return (0);
}
