#include <stdio.h>

/**
 * main - Entry point. Prints file name.
 * @argc: Number of arguments
 * @argv: A pointer to an array of argument strings.
 * Return: Nothing.
 */
int main(int argc, char * argv[])
{
	argc = argc; /* All args must be used */
	printf("%s\n", argv[0]);

	return (0);
}
