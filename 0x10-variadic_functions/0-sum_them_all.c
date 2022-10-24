#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all arguments
 * @n: Number of arguments
 * Return: 0 is n is 0 or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum, num;
	unsigned int i;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
		if ((num = va_arg(numbers, int)))
			sum += num;
	va_end(numbers);

	return (sum);
}
