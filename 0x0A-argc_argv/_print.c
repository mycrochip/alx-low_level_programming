#include "main.h"

/**
 * _print - Prints a string to sdout.
 * @ptr: A pointer to the string.
 * Return: Nothing.
 */
void _print(char *ptr)
{
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
