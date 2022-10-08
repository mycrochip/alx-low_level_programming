#include "main.h"
#include <stdlib.h>

void _prints(char *ptr);

void _printn(long int *ptr);

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	long int num1, num2, result;

	if (argc != 3)
	{
		_prints("Error");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;

		_printn(&result);

		return (0);
	}
}

/**
 * _prints - Prints a string to sdout.
 * @ptr: A pointer to the string.
 * Return: Nothing.
 */
void _prints(char *ptr)
{
	/* Output a string */
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}

/**
 * _printn - Prints an integer to sdout.
 * @ptr: A pointer to the integer.
 * Return: Nothing.
 */
void _printn(long int *ptr)
{
	long int val, place;
	long int num, absval;
	int neg;

	neg = 0;
	val = absval = *ptr;
	if (*ptr < 0)
	{
		neg = 1;
		absval = -val;
	}

	/* Find the place value */
	place = 1;
	val = absval;
	while (val >= 10)
	{
		place *= 10;
		val /= 10;
	}

	/* Output each value from the highest */
	if (neg)
		_putchar('-');

	val = absval;
	while (place >= 1)
	{
		num = val / place;
		_putchar(num + '0');

		val -= (num * place);
		place /= 10;
	}
	_putchar('\n');
}
