#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to new space in memory or null
 **/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';

	return (ptr);
}
