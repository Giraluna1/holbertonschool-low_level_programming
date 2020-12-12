#include "lists.h"
/**
 * print_dlistint - Function to print the elements of the DLL
 * @h: pointer temporal to head
 * Return: the elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
