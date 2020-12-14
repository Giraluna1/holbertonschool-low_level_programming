#include "lists.h"

/**
 * free_dlistint - function that frees a struct list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	/* pointer temporal that save the head*/
	dlistint_t *temp;
	/*address of temp is going to be the address head*/
	temp = head;
	/*if the head is not empty, make next of head as head and free temp*/
	while (temp)
	{
		head = head->next;
		free(temp);
		/*make temp the head*/
		temp = head;
	}
}
