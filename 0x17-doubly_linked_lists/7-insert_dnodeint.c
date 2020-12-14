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
 * insert_dnodeint_at_index - Function  inserts a new node at given position
 * @h: head of the  list
 * @idx: index
 * @n: value
 * Return: new node or Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, /*head,*/ *temp = *h;
	unsigned int i = 0;

	if ((idx > (dlistint_len(*h))) || (!h && (idx != 0)))
	{
		printf("esta entrando aqui %lu\n", dlistint_len(*h));
		return (NULL);
	}
	if (idx == 0 || !h)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	if (idx == dlistint_len(*h))
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	/*allocate the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	/* the new node apunta al siguiente del temp y */
	new_node->next = temp->next;
	/*make prev*/
	new_node->next->prev = new_node;
	/*conectar el nuevo nodo con el temporal*/
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
