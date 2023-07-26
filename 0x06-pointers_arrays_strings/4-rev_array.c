#include "main.h"

/**
 * reverse_array - A function that reverses an array.
 * @a: Array to be reversed
 * @n: Number of elements of array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while ((n - i > 1) && (i < n / 2))
	{
		temp = a[i];
		a[i++] = a[--n];
		a[n] = temp;
	}
}
