#include "main.h"

void _print(char *ptr);

/**
 * main - Entry point. Prints the name of the program.
 * @argc: The number of arguments passed to main.
 * @argv: A pointer to an array of pointers to the argument strings.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		_print(*argv); /* argv[0] */

	return (0);
}

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
