#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: A pointer to the input string.
 * Return: str A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr, c;

	char special[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	ptr = str;

	while (*str)
	{
		for (c = 0; c <= 9; c++)
			if (*str == special[c])
				*str = code[c];
		str++;
	}
	str = ptr;

	return (str);
}
