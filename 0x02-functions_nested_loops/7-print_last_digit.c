#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
*
* @n: input number as an integer.
*
* Return: 1 if positive, 0 otherwise.
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
	       __putchar(-l + 48);
	       return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
