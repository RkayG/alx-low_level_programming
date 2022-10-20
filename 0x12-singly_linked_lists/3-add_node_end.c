#include "lists.h"
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * *add_node_end - adds a new node at the beginning of a list_t list.
 * @head: node pointer to a node pointer
 * @str: node string element
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, len = _strlen(str);
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		content[i] = str[i];

	/* create a new node */
	new = malloc(sizeof(list_t));
	/* check if malloc was successful */
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = NULL;
	/* if head is null it is an empty list */
	if (*head == NULL)
		*head = new;
	/* otherwise find the last node and add the new node */
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		/* add the new node at the end of the list */
		lastNode->next = new;
	}
	return (new);
}
