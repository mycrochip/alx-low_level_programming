#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a linked listint_t list
 * @h: A pointer to the first node of the list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;

	current = *h;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
		size++;
	}
	*h = NULL;

	return (size);
}
