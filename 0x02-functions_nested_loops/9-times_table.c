#include "main.h"

/**
* times_table - that prints the 9 times table
*
* Return: no return
*/
void times_table(void)
{
	int row, col, val;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (col = 1; col <= 9; col++)
		{
			val = row * col;
			_putchar(44);
			_putchar(32);
			if (val <= 9)
			{
				_putchar(32);
				_putchar(val + '0');
			}
			else
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
