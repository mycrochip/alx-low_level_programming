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
	int flag;

	first = s1;
	second = s2;

	while (*first)
	{
		if (!(*second) || (*first < *second))
		{
			flag = -1;
			break;
		}
		else if (*first > *second)
		{
			flag = 1;
			break;
		}
		else
			continue;

		first++;
		second++;
	}

	if (!(*first))
	{
		if (!(*second))
			flag = 0;
		else
			flag = 1;
	}

	return (flag);
}
