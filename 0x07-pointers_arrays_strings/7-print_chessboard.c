#include "main.h"

/**
 * print_chessboard - This function prints a chessboard.
 * @a: A pointer to an array of chars.
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	char *ptr1, *ptr2;
	char *base, y, i, j, size;

	ptr2 = *a;
	base = ptr2;
	y = 8;
	i = j = 0;
	size = sizeof(char);
	ptr1 = base + (((i * y) + j) * size);

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < y; j++)
		{
			_putchar(*ptr1);
			ptr1++;
		}
		_putchar('\n');
	}
}
