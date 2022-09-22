#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * Adding n bytes of the source string to the
 *  destination string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: Number of bytes of source to be used.
 * Return: dest, a pointer to the new string.
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (src[j] == '\0')
		dest[i] = '\0';

	return (dest);
}
