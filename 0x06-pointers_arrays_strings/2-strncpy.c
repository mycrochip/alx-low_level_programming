#include "main.h"

/**
 * _strncpy - Copies a string from a source string
 * up to a given number of bytes into a destination
 *  string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The given number of bytes.
 * Return: dest The filled string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		*dest++ = *src++;
		i++;
	}

	return (dest);
