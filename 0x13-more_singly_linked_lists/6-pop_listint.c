#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - A function that deletes the first node
 * of a linked listint_t list
 * @head: A pointer to the head pointer of the list
 * Return: Data from the deleted head
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current, *tmp;

	if (*head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		data = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		data = 0;
	return (data);
}
