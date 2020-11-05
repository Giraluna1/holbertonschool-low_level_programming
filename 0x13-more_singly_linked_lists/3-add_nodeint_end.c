#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 * @head: double pointer to head
 * @n: integer to add
 * Return: other new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *other = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!other)
		return (NULL);

	other->n = n;
	other->next = NULL;

	if (!*head)
	{
		*head = other;
		return (other);
	}

	while (last->next)
	{
		last = last->next;
	}

	last->next = other;
	return (other);
}

