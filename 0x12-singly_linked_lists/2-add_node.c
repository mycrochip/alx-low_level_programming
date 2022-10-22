#include "lists.h"
#include <stdlib.h>

int _strlen(const char *s);

void *_strdup(const char *src);

/**
 * add_node - A function that adds a node to the beginning of a linked list
 * @head: A pointer to a list_t pointer that points to the head node
 * @str: Pointer to the string element of the new node struct
 * Return: On success, pointer to new head node, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = _strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node); /* '*head' */
}

/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strdup - recreation of string duplicate function
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with copied string
 */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
