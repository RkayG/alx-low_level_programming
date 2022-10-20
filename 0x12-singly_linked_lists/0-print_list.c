#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: node pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h->str ? printf("[%d] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}
