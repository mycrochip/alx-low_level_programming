#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space
 * with copy of a string.
 * @str: The string to copy
 * Return: Pointer to array or null
 **/
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(*str) * (i + 1));
	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';

	return (ptr);
}
