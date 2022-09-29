#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The input number.
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if ((n <= 1) || (_sqrt_recursion(n) >= 1))
		return (0);
	else
		return (check_prime(n, 2)); /* Another check for prime */

}

/**
 * check_prime - Checks if a non-perfect square number
 * is a prime number.
 * @n: The input number.
 * @div: A divisor.
 * Return: 0 if num is divisible by div,
 * otherwise 1.
 */
int check_prime(int n, int div)
{
	/* Check only halfway */
	if (div > (n / 2.0))
		return (1);
	else if ((n % div) == 0)
		return (0);
	else
		return (check_prime(n, div + 1));
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
