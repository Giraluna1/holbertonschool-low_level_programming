#include "lists.h"
/**
 * dlistint_len - function that returns the humber of elements in a DLL
 * @h: temporal head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
