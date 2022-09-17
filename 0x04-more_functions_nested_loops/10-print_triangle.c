#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, space, hash;

	if (size < 1)
		_putchar('\n');
	else
		for (i = 1; i <= size; i++)
		{
			space = size - i;
			hash = size - space
	       		for (j = 0; j < space; j++)
		       		_putchar(' ');
			for (j = 0; j < hash; j++)
				_putchar('#');
			_putchar('\n');
		}
}
