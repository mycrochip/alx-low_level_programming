#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: An input string
 * @accept: An input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, flag;
	char *start;

	start = accept;
	count = 0;
	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
