#include "main.h"

/**
 * _is_separator - Checks if a word has ended
 * given a char separator.
 * @c: An input char.
 * Return: 0 if not a valid seperator,
 * otherwise 1.
 */
char _is_separator(char c)
{
	char flag;

	flag = 0;
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
	}

	return (flag);
}
