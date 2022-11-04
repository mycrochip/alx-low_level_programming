#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the first node of the list
 * @index: The given position
 * @n: Int value for the new node
 * Return: Pointer to the inserted node on success, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *new_node;

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (index == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (*head);
	}

	while (index > 1)
	{
		current = current->next;
		index--;
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	/* When index is 1 */
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
