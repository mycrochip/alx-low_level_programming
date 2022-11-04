#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: singly linked list print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	while (h)
	{
		printf("%d\n", (int) h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
