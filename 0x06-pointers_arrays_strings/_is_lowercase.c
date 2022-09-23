#include "main.h"

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
