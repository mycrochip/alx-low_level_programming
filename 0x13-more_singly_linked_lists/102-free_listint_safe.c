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
	listint_t *current;

	current = *h;
	while (current)
	{
		current = current->next;
		size++;
	}
	free_list(*h);
	*h = NULL;

	return (size);
}

/**
 * free_listint - A function that frees a linked listint_t list
 * @head: A pointer to the head node
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
