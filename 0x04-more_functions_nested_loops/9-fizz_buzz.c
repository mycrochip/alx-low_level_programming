#include <stdio.h>

/**
* main - entry block
* @void: no argument
* Return: 0 Success
*/
int main(void)
{
	int i, limit;

	limit = 100;
	for (i = 1; i <= limit; i++)
	{
		if (!(i % 3 == 0) && !(i % 5 == 0))
			printf("%d", i);
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}

		/* Space delimiter? */
		if (i == limit)
			break;
		printf(" ");
	}
	printf("\n");

	return (0);
}
