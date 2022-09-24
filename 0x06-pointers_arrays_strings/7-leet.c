#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: str value
 */
char *leet(char *str)
{
	char *special = "aAeEoOtTlL";
	char *code = "4433007711";

	while (*str != '\0')
	{
		while (*special != '\0' && *special)
		{
			if (*str == *special)
				*str = *code;
			spacial++, code++;
		}
		str++;
	}

	return (str);
}
