#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

#ifndef _PRINT_LIST
#define _PRINT_LIST
#define _FMS(x) ( (x) ? (x) : ("(nil)") ) /* Format string */
#define _FMI(x) ( (x) ? (x) : (0) ) /* Format integer */
#endif /* _PRINT_LIST */

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the singly-linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;
	char *str;
	int len;

	for (i = 0; h; i++)
	{
		str = _FMS(h->str);
		len = (h->str) ? (h->len) : (0);
		printf("[%d] %s\n", len, str);
		h = h->next;
	}
	return (i);
}
