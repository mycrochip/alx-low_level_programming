#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - Frees a linked list
 * @head: The beginning of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp->len);
		free(temp);
	}
	free(head);
}
