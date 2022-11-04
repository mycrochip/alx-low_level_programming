#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop
 * in a linked listint_t list
 * @head: A pointer to the first node of the list
 * Return: A pointer to the node where the loop starts, otherwise NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
			return (one);
	}

	return (NULL);
}
