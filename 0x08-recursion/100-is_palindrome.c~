#include "main.h"
/**
 * _strlen - finds the length of a string
 * @str: given string
 * @len: integer which representd the str string's length
 *return: integer as the length of the string
 */
int _strlen(char *str, int len)
{
  if (*str == '\0')
    return (len - 1);

  return (_strlen(str + 1, len + 1));
}

/**
 * palindrome_check - compares the string vs the string (reserved)
 * @str: given string to be compared
 * @len: length of the string
 *return: 1 - if str is a palindrome, or
 *        0 - if str is not a palindrome
 */
int palindrome_check(char *str, int len)
{
  if (*str != *(str + 1))
      return (0);
  else if (*str == '\0')
	return (1);

  return (palindrome_check(str + 1, len - 2));
}

/**
 * is_palindrome - determines if a string is indeed a palindrome
 * @s: string to be checked
 * return: 1 - if s is a plaindrome, or
 *         0 - of s is not a palindrome
 */
int is_palindrome(char *s)
{
  int len;

  len = _strlen(s, 0);
  return (palindrome_check(s, len));
}
