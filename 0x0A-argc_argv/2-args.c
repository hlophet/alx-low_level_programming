#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argc: number of arguments
 * @argv: array of @argc size
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
  int i = 0;

  while (i < argc)
  {
      printf("%s\n", argv[i]);
      i++;
  }

  return (0);
}
