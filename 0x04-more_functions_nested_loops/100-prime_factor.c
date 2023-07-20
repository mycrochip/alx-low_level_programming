#include <stdio.h>
#include <matn.h>
/**
* main - Entry point
* @void: No argument
* Return: 0
*/
int main(void)
{
	long i, number = 612852475143;
	int limit = (int) sqrt(number);

	for (i = 2; i <= limit; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
