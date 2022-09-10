#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char last_digit;

	char[50] message;

	last_digit = n % 10;

	if (last_digit == 0)
		message = "and is 0";
	else
	{
		if (last_digit > 5)
			message = "and is greater than 5";
		else /* Definitely less than or equal to 5 */
			message = "and is less then 6 and not 0";
	}

	printf("Last digit of %d is %c %s\n", n, last_digit, message);
	return (0);
}
