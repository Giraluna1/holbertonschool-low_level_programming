#include "lists.h"

/**
 * list_len - get number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
