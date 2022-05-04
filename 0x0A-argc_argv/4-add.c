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
  int i = 1, sum = 0;

  while (i < argc)
  {
    if (argc <= 1)
      printf("0\n");

    if (!isdigit(atoi(*argv[i])))
    {
      break;
    }
    else
    {
      sum += atoi(*argv[i]);
    }
  }

    printf("%d\n", sum);
    return (0);
}
