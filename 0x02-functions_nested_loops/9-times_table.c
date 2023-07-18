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
		for (col = 0; col <= 9; col++)
		{
			val = row * col;
			(val / 10 <= 0) ? : _putchar((val / 10) + 48);
			_putchar((val % 10) + 48);
			if (col < 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}
	_putchar('\n');
	}
}
