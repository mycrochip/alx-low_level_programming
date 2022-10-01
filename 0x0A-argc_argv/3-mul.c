#include "main.h"
#include <stdlib.h>

void _prints(char *ptr);

void _printn(int *ptr);

/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		_prints("Error");
		return (1);
	}
	/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	_printn(&result);
	return (0);
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
void _printn(int *ptr)
{
	int val, place;
	int num, absval;
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
