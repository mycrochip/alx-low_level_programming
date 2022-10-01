#include "main.h"

/**
 * main - Entry point. Prints the name of the program.
 * @argc: The number of arguments passed to main.
 * @argv: A pointer to an array of pointers to the argument strings.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	if (argc)
		_prints(*argv); /* argv[0] */

	return (0);
}
