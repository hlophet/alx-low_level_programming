#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program into a string
 * @ac: number of arguments
 * @av: array of pointers to the arguments
 * Return: pointer - to the new string
 *         or NULL - if ac == 0, av == NULL, etc
 */
char *argstostr(int ac, char **av)
{
int i = 0, arg, byte, size = ac;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
size++;
}

str = malloc(sizeof(char) * (size + 1));

if (str == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
str[i++] = av[arg][byte];

str[i++] = '\n';
}

str[size] = '\0';
return (str);
}
