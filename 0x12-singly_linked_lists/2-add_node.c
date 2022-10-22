#include "lists.h"
#include <string.h>

/**
 * add_node - A function that adds a node to the beginning of a linked list
 * @head: A pointer to a list_t pointer that points to the head node
 * @str: Pointer to the string element of the new node struct
 * Return: On success, pointer to new head node, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int _strlen = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[_strlen])
		_strlen++;

	new_node->len = _strlen;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node); /* '*head' */
}
