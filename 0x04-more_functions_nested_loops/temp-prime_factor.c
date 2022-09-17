#include "100-main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int factor;
	long number;

	number = 612852475143;
	factor = largest_prime_factor(number);

	printf("%d\n", factor);

	return (0);
}


/**
 * largest_prime_factor - Finds the largest
 * prime factor of a given positive number.
 * @num: The number whose factor is to be determined.
 * Return: num
 */
int largest_prime_factor(long num)
{
	int i, prime_factors[100], largest_factor;

	char last_index;

	prime_factors[0] = 2;

	if (num < 2)
		largest_factor = num;
	else
	{
		last_index = sizeof(prime_factors) - 1;
		largest_factor = prime_factors[last_index];
		while (num > largest_factor)
		{
			/* Typically called multiple times */
			prime_factors = get_new_factors(num, prime_factors);

			last_index = sizeof(prime_factors) - 1;
			largest_factor = prime_factors[last_index];

			/*
			 * Reduction happens here
			 * num = num / largest_factor
			 */
			num = find_quotient(num, largest_factor);
		}
	}

	return (largest_factor);
}

/**
 * get_new_factors - Adds to the existing factors
 * of a given number
 * @num: The given number
 * @factors: Existing factors
 * Return: factors (An array of new and existing factors)
 */
int *get_new_factors(long num, int *factors)
{
	int last_factor, divisor;
	char len_factors;

	len_factors = sizeof(factors);
	last_factor = factors[len_factors - 1];

	for (divisor = last_factor; divisor < num; divisor++)
		/* If this divisor is a factor... */
		if (num % divisor == 0)
		{
			/* ...and does not exist, add to existing factors */
			if (factors[len_factors - 1] != divisor)
				factors[len_factors] = divisor;
			break;
		}

	return (factors);
}

/**
 * find_quotient - Returns the quotient of
 * a number after applying a divisor
 * @num: The number to be reduced.
 * @divisor: The divisor to be applied.
 * Return: quotient (The reduced number)
 */
long find_quotient(long num, int divisor)
{
	long quotient;

	quotient = num / divisor;

	return (quotient);
}
