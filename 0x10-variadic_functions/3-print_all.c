#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

void print_c(va_list list, char *sep);

void print_i(va_list list, char *sep);

void print_f(va_list list, char *sep);

void print_s(va_list list, char *sep);

/**
 * print_all - Prints anything
 * @format: A list of all types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list; /* Iterator for args */
	char *sep, typ;
	int i, j;
	typ_t fm[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{NULL, NULL}
	};
	va_start(list, format);
	i = 0;
	sep = ""; /* Leave this as an empty "string" */
	while ((format != NULL) && ((typ = format[i]) != '\0'))
	{
		while (j < 4)
		{
			if (typ == *((fm[j]).t))
			{
				fm[j].tp(list, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}


/**
 * print_c - prints char
 * @list: arguement char
 * @sep: seperator
 */
void print_c(va_list list, char *sep)
{
	printf("%s%c", sep, (char) va_arg(list, int));
}

/**
 * print_i - prints int
 * @list: arguement of list
 * @sep: seperator
 * Return: none
 */
void print_i(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}

/**
 * print_f - prints floats
 * @sep: float to print
 * @list: next arguement of list to print
 * Return: none
 */
void print_f(va_list list, char *sep)
{
	printf("%s%f", sep, (float) va_arg(list, double));
}

/**
 * print_s - prints string
 * @sep: seperator
 * @list: list to print
 * Return: none
 */
void print_s(va_list list, char *sep)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", sep, str);
}
