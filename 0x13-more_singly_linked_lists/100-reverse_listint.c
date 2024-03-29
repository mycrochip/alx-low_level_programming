#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: A pointer to a linked listint_t list
 * Return: A pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	/* Take head to last tail */
	*head = prev;
	return (*head);
}
