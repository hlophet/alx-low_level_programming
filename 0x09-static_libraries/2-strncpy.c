#include "main.h"
/**
 * _strncpy - copies n number of bytes from source string into resultant string
 * @dest: The buffer storing the string copy.
 * @src: source string.
 * @n: number of bytes to be copied
 * Return: the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, srcLen = 0;

while (src[i++])
srcLen++;

for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];

for (i = srcLen; i < n; i++)
dest[i] = '\0';

return (dest);
}
