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
	int start;

	ptr = str;

	start = 1;
	while (*str)
	{
		if (_is_separator(*str))
		{
			str++, start--;
			if (_is_lowercase(*str))
				*str -= 32;
			else
				continue;

		}
		else if (start)
			if (_is_lowercase(*str))
				*str -= 32;
	}

	str = ptr;

	return (str);
}