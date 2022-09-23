#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: <0 if First string is lesser,
 * >0 if First string is greater,
 * 0 if same.
 */
int _strcmp(char *s1, char *s2)
{
	char *first, *second;

	first = s1;
	second = s2;

	while (*first && *second)
	{
		if (*first != *second)
			return (*first - *second);
		first++;
		second++;
	}

	return (*first - *second);
}
