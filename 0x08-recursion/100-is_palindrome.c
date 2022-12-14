#include "main.h"

int _strlen(char *s);
char *move_to_end(char *s);
int compare_up_to(char *ptr1, char *ptr2, int len);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * Description: A word, phrase, or sequence that reads
 * the same backwards as forwards.
 * @s: A pointer to the string.
 * Return: 1 if s points to a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length;
	char *start, *end;

	length = _strlen(s);
	start = s;
	end = move_to_end(s);
	return (compare_up_to(start, end, (length / 2)));
}

/**
 * _strlen - Finds the length of a string pointed to.
 * @s: A pointer to the string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * move_to_end - Moves a pointer to the end of a string.
 * @s: A pointer to the string.
 * Return: The pointer at the end before NULL terminator.
 */
char *move_to_end(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return (move_to_end(s + 1));
}

/**
 * compare_up_to - Checks the similarity of two characters
 * up to a given length.
 * @ptr1: A ponter to the first char.
 * @ptr2: A pointer to the second char.
 * @len: The search limit.
 * Return: 1 if characters are the same, otherwise 0;
 */
int compare_up_to(char *ptr1, char *ptr2, int len)
{
	if (len == 0)
		return (1);
	if (*ptr1 == *ptr2)
		return (compare_up_to(ptr1 + 1, ptr2 - 1, len - 1));
	return (0);
}
