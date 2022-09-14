#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[8] = "_putchar";

	int char_len, i;

	char_len = strlen(message);
	for (i = 0; i < char_len; i++)
		_putchar(message[i]);
	_putchar('\n');

	return (0);
}
