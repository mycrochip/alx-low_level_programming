#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * of a linked listint_t list
 * @head: Pointer to the first node of the list
 * @index: The given index
 * Return: 1 on success, otherwise (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *del_node;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next; /* (**head.next) */
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	del_node = current->next;
	current->next = del_node->next; /* Jump del_node */
	free(del_node);

	return (1);
}
