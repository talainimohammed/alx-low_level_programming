#include "lists.h"

/**
 * add_nodeint - function add a new node at the beginning.
 * @head: list.
 * @n: n element.
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));

	if (newlist == NULL)
		return (NULL);

	newlist->n = n;
	newlist->next = *head;
	*head = newlist;

	return (*head);
}
