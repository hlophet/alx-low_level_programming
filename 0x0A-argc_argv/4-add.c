#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the sum of positive a numbers
 * @argc: number of arguments
 * @argv[]: array of argc size
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i, j, len, sum = 0;
char *ptr;

if (argc < 2)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
ptr = argv[i];
len = strlen(ptr);

for (j = 0; j < len; j++)
{
if (isdigit(*(ptr + j)) == 0)
{
printf("Error\n");
return (1);
}
}

sum = sum + atoi(argv[i]);
}

printf("%d\n", sum);
}

return (0);
}
}
