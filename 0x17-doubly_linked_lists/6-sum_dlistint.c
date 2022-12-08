#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: head node
 * Return: sum of data or 0 if lost is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
