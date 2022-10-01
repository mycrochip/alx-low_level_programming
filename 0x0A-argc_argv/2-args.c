#include "main.h"

void _prints(char *ptr);

/**
 * main - Entry point. Prints all the arguments of the program.
 * @argc: The number of arguments passed to main.
 * @argv: A pointer to an array of pointers to the argument strings.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	/* Use up argc once */
	argc = argc;

	while (*argv)
	{
		_prints(*argv); /* argv[0] */
		argv++;
	}

	return (0);
}


/**
 * _prints - Prints a string to sdout.
 * @ptr: A pointer to the string.
 * Return: Nothing.
 */
void _prints(char *ptr)
{
	/* Output a string */
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
}
