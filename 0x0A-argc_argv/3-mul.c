#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of argc size
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i = 1, diff = 1;

(void) argv;

if (argc < 2)
{
printf("Error\n");
}
else
{
while (i < argc)
{
diff = diff * atoi(argv[i]);
i++;
}
}

printf("%d\n", diff);
return (0);
}
