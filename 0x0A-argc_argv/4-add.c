#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of positive a numbers
 * @argc: number of arguments
 * @argv[]: array of argc size
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
  int i, sum = 0;

  if (argc < 2)
    printf("0\n");

  for (i = 0; i < argc; i++)
  {
    if (atoi(argv[i]) >= 0 && atoi(argv[i]) <=9)
    {
      sum += atoi(argv[i]);
    }
    else
    {
      printf("Error\n");
    }
  }

  printf("%d\n", sum);
  return (0);
}
