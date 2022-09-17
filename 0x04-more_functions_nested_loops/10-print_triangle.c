#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int row, col, space, hash;

	if (space < 1)
		_putchar('\n');
	else
		for (row = 1; row <= size; row++)
		{
			space = size - row;
			hash = size - space;
			for (col = 0; col < space; col++)
				_putchar(' ');
			for (col = 0; col < hash; col++)
				_putchar('#');
			_putchar('\n');
		}
}
