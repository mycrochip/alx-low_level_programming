#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked listint_t list
 * @head: Double pointer to the first node
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free_listint(*head);
	*head = NULL;
}

/**
 * free_listint - Frees a linked listint_t list
 * @head: Pointer to the first node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
