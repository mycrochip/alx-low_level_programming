#include "main.h"

/**
 * string_toupper - A function that transforms
 *  a string to upper case.
 * @s: The input string
 * Return: char Pointer to the transformed string
 */
char *string_toupper(char *s)
{
	char *ptr;

	ptr = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (ptr);
}
