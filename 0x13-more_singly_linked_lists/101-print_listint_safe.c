#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints
 * the data in a linked listint_t list
 * @head: A pointer to the first node of the list
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	const listint_t *one = head, *two = head;

	if (head == NULL)
		exit(98);

	while (one && two && two->next && head)
	{
		one = one->next; /* Jump once */
		two = two->next->next; /* Jump twice */
		if (one == two)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_nodes++;
	}
	head = NULL;
	return (n_nodes);
}
