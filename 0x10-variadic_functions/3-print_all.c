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
 * print_int - prints an integer
 * @list: list of arguments pointing to
 *        the integer to be printed
 */
void print_int(va_list list)
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
unsigned int i = 0, j = 0;
char *separator = "";

va_list args;

printer_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;

while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}

i++;
}

printf("\n");
va_end(args);
}
