#include "lists.h"
/**
 * add_dnodeint - Funtion addss a new node at the beginnig
 * @head: Head of reference the list
 * @n: new data in the list
 * Return: the address of the new element of NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	/*put in the data */
	new_node->n = n;

	/*Make next of new node as head an previuos as NULL*/
	new_node->next = (*head);
	new_node->prev = NULL;

	/* change prev of head node to new node */
	if (*head)
		(*head)->prev = new_node;

	/* move the head to point to the new node */
	(*head) = new_node;
	return (new_node);
}
