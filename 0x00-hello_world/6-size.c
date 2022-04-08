#include <stdio.h>
/**
 * main: entry point
 * Size task program
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %d bytes(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
