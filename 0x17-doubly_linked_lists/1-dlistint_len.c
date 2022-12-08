#include "lists.h"

/**
 * dlistint_len - returns the length  of a dlistint_t list.
 * @h: head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
