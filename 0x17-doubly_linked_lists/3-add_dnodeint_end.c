#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head node.
 * @n: value of integer.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
	{	new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}
	return (new);

}
