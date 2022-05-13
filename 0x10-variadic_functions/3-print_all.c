#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @list: list of arguments pointing to
 *        the character to be printed
 */
void print_char(va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * print_string - prints a string
 * @list: list of arguments pointing to
 *        the string to be printed
 */
void print_string(va_list list)
{
char *str;

str = va_arg(list, char*);

if (str == NULL)
str = "(nil)";

printf("%s", str);
}

/**
 * print_integer - prints an integer
 * @list: list of arguments pointing to
 *        the integer to be printed
 */
void print_integer(va_list list)
{
printf("%i", va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: list of arguments pointing to
 *        the character to be printed
 */
void print_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * print_all - print everything
 * @format: string of characters representing argument types
 * @...   : variable number of arguments to be printed
 * Description: argument not of type char, int, float, or char *
 *              is ignored, otherwise
 *              (nil) is printed, if a string argument = NULL
 */
void print_all(const char * const format, ...)
{
unsigned int i, j;

t_print t[] = {
{"c", print_char},
{"s", print_string},
{"i", print_integer},
{"f", print_float},
{NULL, NULL}
};

va_list valist;
char *s = "";
va_start(valist, format);
i = 0;

while (format && format[i])
{
j = 0;

while (t[j].x != NULL)
{
if (*(t[j].x) == format[i])
{
printf("%s", s);
t[j].T_func(valist);
s = ", ";
break;
}

j++;
}

i++;
}

va_end(valist);
printf("\n");
}
