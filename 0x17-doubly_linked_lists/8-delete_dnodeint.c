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
 * delete_dnodeint_at_index - Funtcion that delet index
 * @head: head the list
 * @index: Index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if ((index > dlistint_len(*head) || !*head))
		return (-1);

	if (index == 0)
	{
		if (!temp->next)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			/*make prev the next as NULL and next of head as head*/
			temp->next->prev = NULL;
			*head = (*head)->next;
			free(temp);
		}
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next)
	{
		/*make the prev the temp as prev the next */
		temp->next->prev = temp->prev;
	}
	/*make the next of temp as next of prev of temp*/
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
