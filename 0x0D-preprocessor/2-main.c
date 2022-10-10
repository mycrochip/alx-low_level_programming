#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Prints file name.
 * @argc: Number of arguments
 * @argv: A pointer to an array of argument strings.
 * Return: Nothing.
 */
int main(int argc, char * argv[])
{
	argc = argc, argv = argv; /* All args must be used */
	printf("%s\n", __FILE__);

	return (0);
}
