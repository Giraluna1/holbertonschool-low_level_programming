#include "lists.h"
/**
 * sum_dllistint - Function returns the sum of all the data
 * @head: head of the list
 * Return: result of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	int sum = 0;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
