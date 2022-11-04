#include "lists.h"

/**
 * sum_listint - Sums all int data of a linked listint_t list
 * @head: Pointer to the first node of the list
 * Return: Sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;

	return (sum);
}
