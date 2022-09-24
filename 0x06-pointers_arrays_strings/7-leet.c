#include "main.h"

/**
 * leet - Encodes a string into [leet] (1337).
 * @str: A pointer to the input string.
 * Return: str A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i;
	char c;
	char special[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	i = 0;
	while (str[i])
	{
		for (c = 0; c <= 9; c++)
			if (str[i] == special[c])
				str[i] = code[c];
		i++;
	}

	return (str);
}
