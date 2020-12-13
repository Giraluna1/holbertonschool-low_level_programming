#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end
 * @head: Head of reference the list
 * @n: new data in the list
 * Return: the address of the new element of NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last = *head;
	/*alocate node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	/*put in the data*/
	new_node->n = n;
	/* new node is going to be the last node, make netx of it as NUL*/
	new_node->next = NULL;
	/*if the linked list is empty, make the new node as head*/
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/*Else traverse till the last node*/
	while (last->next)
	{
		last = last->next;
	}
	/* change the next of last node*/
	last->next = new_node;
	/* make last node as previous of new node*/
	new_node->prev = last;

	return (new_node);
}
