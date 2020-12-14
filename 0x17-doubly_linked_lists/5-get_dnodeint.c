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

/**
 * get_dnodeint_at_index - function that get the nth node
 * @head: head of the list
 * @index: index of the node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if ((index > (dlistint_len(head) - 1)) || !head)
		return (NULL);

	while (count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
