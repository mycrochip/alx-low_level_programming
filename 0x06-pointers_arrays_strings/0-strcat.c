#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * Adding the source string to the
 *  destination string.
 * @dest: The destination string.
 * @src: The source string.
 * Return: dest, a pointer to the new string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
