#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *  print_numbers - Prints out given numbers
 * @separator: String delimeter (in-between successive output)
 * @n: Number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
