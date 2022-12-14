#include "main.h"

/**
 * _pow_recursion - Returns the power of
 * a number raised to another.
 * @x: The first input number.
 * @y: The second input number.
 * Return: The power of x to y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
