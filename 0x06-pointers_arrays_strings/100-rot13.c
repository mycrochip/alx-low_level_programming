#include "main.h"

/**
 * leet - Encode a string to [leet] (1337)
 * @str: The input string
 * Return: str A pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j, index;
	char rot13a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13b[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
			{
				if ((index = j - 13) < 0)
					index += 26;
				if (str[i] == rot13a[j])
					str[i] = rot13a[index];
				else if (str[i] == rot13b[j])
					str[i] = rot13b[index];
				else
					continue;
			}
	}
	return (str);
}
