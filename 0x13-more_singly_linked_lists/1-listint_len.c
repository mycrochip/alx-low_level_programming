#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: Pointer to the singly linked list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	while (h)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
