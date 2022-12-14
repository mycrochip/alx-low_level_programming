#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* My declarations */
	int last_digit;

	char message[30] = "";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	if (last_digit == 0)
		strcat(message, "and is 0");
	else
	{
		if (last_digit > 5)
			strcat(message, "and is greater than 5");
		else /* Definitely less than or equal to 5 */
			strcat(message, "and is less than 6 and not 0");
	}

	printf("Last digit of %d is %d %s\n", n, last_digit, message);
	return (0);
}
