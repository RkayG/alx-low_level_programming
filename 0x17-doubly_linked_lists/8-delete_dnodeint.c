#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: index of node to delete
 * Return: 1 on success; otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	/* do nothing if nothing to delete */
	if (head == NULL || *head == NULL)
		return (-1);

	/* delete first node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	/* delete nth node as long as within range of list */
	while ((index != 0) && (current->next != NULL))
	{
		current = current->next;
		i++;
		if (i == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
	}
	return (-1);
}
