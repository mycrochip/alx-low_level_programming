#include "main.h"

void _printn(int *ptr);

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

	/* Use up argv once */
	argv = argv;

	count = argc - 1;
	ptr = &count;
	_printn(ptr);

	return (0);
}

/**
 * _printn - Prints an integer to sdout.
 * @ptr: A pointer to the integer.
 * Return: Nothing.
 */
void _printn(int *ptr)
{
	int val, place;
	int num;
	char c;

	/* Find the place value */
	val = *ptr;
	place = 1;
	while (val >= 10)
	{
		place *= 10;
		val /= 10;
	}
	/* Output each value from the highest */
	val = *ptr;
	while (place >= 1)
	{
		num = val / place;
		_putchar(num + '0');

		val -= (num * place);
		place /= 10;
	}
	_putchar('\n');
}
