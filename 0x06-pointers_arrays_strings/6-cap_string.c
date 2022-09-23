#include "main.h"

/**
 * cap_string - A function that capitalizes
 *  all words of a string.
 * @str: Pointer to an input string.
 * Return: str A pointer to the new string.
 */
char *cap_string(char *str)
{
	char *ptr;

	ptr = str;

	while (*str)
	{
		if (_is_valid_separator(*str))
		{
			str++;
			if (_is_lowercase(*str))
				*str -= 32;
			else
				continue;
		}
		else
			str++;
	}

	str = ptr;

	return (str);
}
