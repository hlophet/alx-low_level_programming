#include "main.h"
/**
 * _strncat - concatenates 2 strings using at most n number of bytes from src
 * @dest: resultant string to be appended
 * @src: soursce string to be appended
 * @n: number of bytes of the source string to be appended to resultant string
 * Return: the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0' && n > j)
{
dest[i] = src[j];
i++;
j++;
}

if (n > 0)
{
dest[i] = '\0';
}

return (dest);
}
