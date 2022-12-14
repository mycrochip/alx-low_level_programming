#include "main.h"

/**
 * _is_valid_separator - Checks if a word has ended
 * given a valid char separator.
 * @c: An input char.
 * Return: 0 if not a valid seperator,
 * otherwise 1.
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
