#include "main.h"
#include <stdlib.h>

void _prints(char *ptr);

void _printn(int *ptr);

/**
 * main - Prints minimum number of coins to
 * make change for an amount of money.
 * @argc: The number of passed arguments.
 * @argv: A pointer to an array of pointers to argument strings.
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int cents[5] = {25, 10, 5, 2, 1};
	int *ptr;
	int money, curr, rem, quote, coins;

	if (argc != 2)
	{
		_prints("Error");
		return (1);
	}

	money = atoi(argv[1]);
	if (money < 0)
	{
		money += (-money); /* (0) */
		_printn(&money);
		return (0);
	}

	ptr = cents;
	coins = 0;
	while (money)
	{
		curr = *ptr;

		rem = (money % curr);
		quote = (money - rem);
		coins += (quote / curr);
		money = rem;

		ptr++;
	}
	_printn(&coins);

	return (0);
}


/* ########### MY PRINTERS ############ */

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
