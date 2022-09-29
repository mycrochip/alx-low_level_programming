#include "main.h"

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
 * @num: Input number to compare.
 * Return: 1 if not found, else square root.
 */
int sqrtRecursion(int start, int end, int num)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == num)
			return (mid); /* (*)Terminate here... */
		/* Binary search */
		if (mid * mid > num)
			return (sqrtRecursion(start, mid - 1, num));
		if (mid * mid < num)
			return (sqrtRecursion(mid + 1, end, num));
	}
	return (-1); /* (*)...or here */
}
