#include "lists.h"
/**
 * listint_len - function that returns the number elements
 * @h: pointer to head
 * Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
