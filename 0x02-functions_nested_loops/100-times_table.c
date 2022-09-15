#include <stdio.h>

/**
 * print_times_table - prints n times table
 * starting with 0.
 * @n: Input variable for number of times table
 * where 0 <= n <= 15
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);

			if (j == n)
				break;

			_putchar(',');
			_putchar('\t');
		}
	}
}