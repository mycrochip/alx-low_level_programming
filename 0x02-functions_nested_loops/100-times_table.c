#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Function
 * Description: 'Prints n times table'
 * starting with 0.
 * @n: Input variable for number of times table
 * where 0 <= n <= 15
 * Return: void
 */
void print_times_table(int n)
{
	int row, col;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (col == 0)
				_putchar('0');
			else
				pad_to_place(row * col, 4);

			/**
			 * Used to clear the buffer and
			 * accept the next string
			 */
			/*fflush(stdin); */

			if (col == n)
				break;

			_putchar(',');
		}
		_putchar('\n');
	}
}

/**
 * pad_to_place - Function
 * Description: 'Add spaces before digit output'
 * @num: Input number to be padded
 * @place: Input number of digit plus spaces
 * Return: void
 */
void pad_to_place(int num, int place)
{
	char i;

	if (num <= 9)
	{
		for (i = 1; i < place; i++)
			_putchar(' ');
		_putchar(num + '0');
	}
	else if (num <= 99)
	{
		for (i = 1; i < place - 1; i++)
			_putchar(' ');
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		for (i = 1; i < place - 2; i++)
			_putchar(' ');
		_putchar(num / 100 + '0');
		_putchar(num / 10 % 10 + '0');
		_putchar(num % 10 + '0');
	}
}
