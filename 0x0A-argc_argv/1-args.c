#include "main.h"
#include <stdio.h>

/**
 * main - Entry point. Prints the number of arguments
 * passed to the program.
 * @argc: The number of arguments passed to main.
 * @argv: A pointer to an array of pointers to the argument strings.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int count, *ptr;

	count = argc - 1;
	ptr = &count;
	_printn(ptr);

	return (0);
}
