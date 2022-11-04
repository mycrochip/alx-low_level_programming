#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a linked listint_t list
 * @head: A pointer to the first node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
