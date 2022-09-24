#include "main.h"

/**
 * leet - Encode a string to [leet] (1337)
 * @str: The input string
 * Return: str A pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char special[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j <= 9; j++)
			if (str[i] == special[j])
				str[i] = code[j];

	return (str);
}
