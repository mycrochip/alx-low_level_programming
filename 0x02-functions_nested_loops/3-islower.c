#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: An input character
 * Return: 1 if c is lowercase or ) if uppercase
 */
int _islower(int c)
{
	char x;

	int lower;

	lower = 0;

	for (x = 'a'; x <= 'z'; x++)
		if (c == x)
		{
			lower = 1;
			break;
		}

	return (lower);
}
