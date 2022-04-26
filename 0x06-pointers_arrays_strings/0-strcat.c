#include "main.h"
/**
 * _strcat - concatinate 2 strings
 * @dest: resultant string
 * @src: source string to be appended to the @dest string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
}
