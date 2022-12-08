#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to head node
 * @idx: index to insert node to
 * @n: integer value of node to insert
 * Return: address of node, or NULL if not successful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(&new, n));
	else if (current->next == NULL)
		return (add_dnodeint_end(&new, n));

	new->n = n;
	new->next = NULL;

	while (current->next != NULL)
	{
		current = current->next;
		i++;
		if (i == idx)
		{
			new->next = current->next;
			current->next = new;
			new->prev = current;
			return (new);
		}
	}
	return (NULL);
}
