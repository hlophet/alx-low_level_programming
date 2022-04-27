#include "main.h"
/**
 * string_toupper - converts lowercase letters to uppercase
 * @word: string to be converted
 * Return: the converted string
 */
char *string_toupper(char *word)
{
int i = 0;

while (word[i])
{
if (word[i] >= 'a' && word[i] <= 'z')
word[i] -= 32;

i++;
}

return (word);
}
