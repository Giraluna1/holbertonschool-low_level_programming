#include "lists.h"

/**
 * list_len - get number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 1;
	list_t *box = NULL;

	box = h->next;
	while (box)
	{
		box = box->next;
		i++;
	}

	return (i);
}
