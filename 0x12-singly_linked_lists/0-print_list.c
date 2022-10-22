#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

#ifndef _PRINT_LIST
#define _PRINT_LIST
#define _FMT(x) ((x) ? (x) : "(nil)")
#endif /* _PRINT_LIST */

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the singly-linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->_FMT(str));
		h = h->next;
	}
	return (i);
}
