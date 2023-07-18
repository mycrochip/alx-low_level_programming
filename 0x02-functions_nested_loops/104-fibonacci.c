#include <stdio.h>
#include <inttypes.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	ino_t fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%ju, %ju, ", (uintmax_t)fibonacci[0], (uintmax_t)fibonacci[1]);

	for (i = 2; i < 98; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 97)
			printf("%ju\n", (uintmax_t)fibonacci[i]);
		else
			printf("%ju, ", (uintmax_t)fibonacci[i]);
	}

	return (0);
}
