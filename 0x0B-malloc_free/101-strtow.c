#include "main.h"
#include <stdlib.h>

int word_counter(char *str);

int wordCounterRec(char *str, int i);

/**
 * strtow - Splits a string into words.
 * @str: String to be splitted
 * Return: Pointer to an array of strings (words) or null
 **/
char **strtow(char *str)
{
	char **array;
	int i, wlen, m, nwords;

	if (str == NULL || *str == '\0')
		return (NULL);

	nwords = word_counter(str);
	if (nwords < 1)
		return (NULL);

	array = malloc(sizeof(char *) * (nwords + 1));
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < nwords && *str != '\0')
	{
		if (*str != ' ')
		{
			wlen = 0;
			while ((str[wlen] != ' ')
			       wlen++;

			array[i] = malloc(sizeof(char) * (wlen + 1));
			if (array[i] == NULL)
			{
				while (--i >= 0)
					free(array[--i]);
				free(array);
				return (NULL);
			}
			m = 0;
			while (m < wlen)
			{
				array[i][m] = *str;
				m++, str++;
			}
			       array[i][m] = '\0'; /* Terminate each word */
			i++;
		}
		str++; /* Move to the next word */
	}
	array[i] = '\0';

	return (array);
}

/**
 * word_counter - counts number of words in 1d array of strings
 * @str: pointer to char
 * Return: number of words
 **/
int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordCounterRec(str, 0));
	return (wordCounterRec(str, 0));
}

/**
 * wordCounterRec - Count number of words recursively
 * @str: Pointer to string
 * @i: Current index
 * Return: Number of words
 **/
int wordCounterRec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordCounterRec(str, i + 1));
	return (wordCounterRec(str, i + 1));
}
