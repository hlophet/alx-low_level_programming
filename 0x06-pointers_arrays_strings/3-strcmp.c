#include "main.h"
/**
 * _strcmp - compares 2 strings.
 * @s1: first string
 * @s2: second string
 * Return: an integer - if str1 < str2, negative difference
 *                    - if s1 == s2, 0
 *                    - if s1 > s2, positive difference
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, cmpStat = 0;

while (s1[i] != '\0' && s2[i] != '\0' && cmpStat == 0)
{
cmpStat = s1[i] - s2[i];
i++;
}
return (cmpStat);
}
