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

	if (_is_lowercse(*str))
		*str -= 32;

	str++;
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


/**
 * _is_valid_separator - Checks if a word has ended
 * given a valid char separator.
 * @c: An input char.
 * Return: 1 if valid, otherwise 0.
 */
char _is_valid_separator(char c)
{
	char flag;

	switch (c)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		flag = 1;
		break;
	default:
		flag = 0;
	}

	return (flag);
}


/**
 * _is_lowercase - Checks if a character
 *  is in lower case.
 * @c: The input character.
 * Return: 1 if True, else 0.
 */
char _is_lowercase(char c)
{
	char flag;

	flag = 0;
	if ((c >= 'a') && (c <= 'z'))
		flag = 1;

	return (flag);
}
