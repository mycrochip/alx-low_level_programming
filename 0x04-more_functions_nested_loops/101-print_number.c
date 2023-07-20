#include "main.h"

/**
* print_number - prints # using _putchar function
* @n: the integer to print
* Return: void
*/
void print_number(int n)
{
	int num = n, whole = 1;
	char nth;
	bool isneg = false;

	if (num < 0)
	{
		isneg = true;
		num *= -1;
	}

	while ((num / whole) > 0)
		whole *= 10;

	(isneg) ? _putchar('-') : continue;

	while ((whole /= 10) > 0)
	{
		nth = num / whole;
		_putchar(nth + '0');
		num -= (nth * whole);
}
