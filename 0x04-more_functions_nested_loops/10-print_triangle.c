#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, dot, hash;

	for (i = 1; i <= size; i++)
	{
		dot = size - i;
		hash = size - dot
		for (j = 0; j < dot; j++)
			_putchar('.');
		for (j = 0; j < hash; j++)
			_putchar('#');
		_putchar('\n');
	}
}
