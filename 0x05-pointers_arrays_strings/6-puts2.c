#include "main.h"

/**
 *puts2 - print pair values.
 *@str: value to be evaluate.
 *Return: not.
 */
void puts2(char *str)
{
	int z;

	for (z = 0 ; str[z]; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
