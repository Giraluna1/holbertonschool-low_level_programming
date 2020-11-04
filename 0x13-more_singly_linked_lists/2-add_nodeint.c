#include "lists.h"
/**
 * add_nodeint - function that add in  front
 * @head: double pointer to head
 * @n: number to add
 * Return: other new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *other = malloc(sizeof(listint_t));

	if (!other)
		return (NULL);

	other->n = n;
	other->next = *head;
	*head = other;
	return (other);

}
