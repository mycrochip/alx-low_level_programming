#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcode of own main function
 * @argc: Number of argumants
 * @argv: Pointer to an array of argument strings
 * Return: 0 on success, otherwise 1 or 2
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", func_ptr[i++]);
		printf("%hhx\n", func_ptr[i]);
	}
	return (0);
}
