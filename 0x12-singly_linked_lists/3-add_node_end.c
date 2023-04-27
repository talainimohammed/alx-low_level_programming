#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tp;
	size_t nbchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nbchar = 0; str[nbchar]; nbchar++)
		;

	new->len = nbchar;
	new->next = NULL;
	tp = *head;

	if (tp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = new;
	}

	return (*head);
}
