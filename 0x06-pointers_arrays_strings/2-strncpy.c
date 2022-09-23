#include "main.h"

/**
 * _strncpy - Copies a string from a source string
 * up to a given number of bytes into a destination
 *  string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The given number of bytes.
 * Return: temp Pointer to the filled string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptr;

	ptr = dest;

	i = 0;
	while ((i < n) && (*src != '\0'))
	{
		*dest++ = *src++;
		i++;
	}

	if (src[i] == '\0')
		*dest++ = '\0';

	dest = ptr; /* Reposition to start */

	return (dest);
}
