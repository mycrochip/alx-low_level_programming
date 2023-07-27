#include "main.h"

/**
 * leet - Encode a string to [leet] (1337)
 * @str: The input string
 * Return: str A pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char rot13a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == rot13a[j])
			{
				*(str + i) = rot13b[j];
				break;
			}
		}
	}
	return (str);
}
