#include "main.h"
/**
 * _strcat - concatinate 2 strings
 * @dest: resultant string
 * @src: source string to be appended to the @dest string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
{
*dest++;
}

while (*src != '\0')
{
*dest = *src;
*dest++;
*src++;
}

*dest = '\0';
return (dest);
}
