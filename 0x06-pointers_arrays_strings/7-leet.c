#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *str)
{
	char c;
	char special[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	while (*str != '\0')
	{
		for (c = 0; c <= 9; c++)
			if (*str == special[c])
				*str = code[c];
		str++;
	}

	return (str);
}
