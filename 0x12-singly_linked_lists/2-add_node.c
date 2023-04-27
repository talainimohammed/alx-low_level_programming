#include "lists.h"
/**
 * add_node - adds a node at the beginning
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nbchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nbchar = 0; str[nchar]; nbchar++)
		;

	new->len = nbchar;
	new->next = *head;
	*head = new;

	return (*head);
}
