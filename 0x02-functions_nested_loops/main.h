#include <stdio.h>
#include <string.h>

void print(char *strng);

/**
 * print - used to output an array of char
 *
 * Return: void
 */
void print(char *strng)
{
	int char_len, i;

	char_len = strlen(strng);
	for (i = 0; i < char_len; i++)
	{
		putchar(strng[i]);
	}
	putchar('\n');

	return;
}
