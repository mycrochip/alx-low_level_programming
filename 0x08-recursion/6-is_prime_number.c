#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The input number.
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	int div;
	float mid;

	if ((n <= 1) || (_sqrt_recursion(n) >= 1))
		return (0);

	div = 2;
	mid = n / 2.0;
	while (div <= mid)
	{
		if ((n % div) == 0)
			return (0);
		div++;
	}

	return (1); /* Can only be prime here */
}

/**
 * _sqrt_recursion - Returns the natural
 * square root of a number.
 * @n: The input number.
 * Return: Square root of n or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (sqrtRecursion(2, n, n));
}

/**
 * sqrtRecursion - Computes square root
 * using binary search.
 * @start: Initial number.
 * @end: Limit of number.
 * @num: Input number.
 * Return: 1 if not found, else square root.
 */
int sqrtRecursion(int start, int end, int num)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == num)
			return (mid);
		/* Binary search */
		if (mid * mid > num)
			return (sqrtRecursion(start, mid - 1, num));
		if (mid * mid < num)
			return (sqrtRecursion(mid + 1, end, num));
	}
	return (-1);
}
