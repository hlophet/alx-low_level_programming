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
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
