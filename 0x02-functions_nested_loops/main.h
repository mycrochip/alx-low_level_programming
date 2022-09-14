#include <stdio.h>
#include <string.h>

void print(char *strng);

void print_alphabeet(void);

/**
 * print - used to output an array of char
 *
 * Return: void
 */
void _putchar(char *strng)
{
	int char_len, i;

	char_len = strlen(strng);
	for (i = 0; i < char_len; i++)
		putchar(strng[i]);
	putchar('\n');

	return;
}

/**
 * print_alphabet - used to output alphabets in lowercase
 *
 *Return: void
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return;
}
