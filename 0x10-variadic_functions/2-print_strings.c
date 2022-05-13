#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n        : number of strings passed to the function
 * @...      : variable number of strings to be printed
 *Description: not printed, if separator = NULL
 *             (nil) is printed, if one of the strings = NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list strings;

va_start(strings, n);

for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

}

printf("\n");
va_end(strings);
}
