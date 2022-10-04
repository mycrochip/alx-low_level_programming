#include "main.h"

/**
 * _memset - Fills a given byte of memory area
 * with a constant byte.
 * @s: Pointer to address of memory area.
 * @b: The constant byte.
 * @n: The given number of byte.
 * Return: s Pointer to the start of a filled area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start;

	start = s;
	while (n--)
	{
		*s = b;
		s++;
	}
	s = start;

	return (s);
}
