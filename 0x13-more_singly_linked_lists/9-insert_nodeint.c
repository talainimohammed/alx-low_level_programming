#include "lists.h"

/**
 * insert_nodeint_at_index -function that inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newlist;
	listint_t *hlist;

	hlist = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && hlist != NULL; j++)
		{
			hlist = hlist->next;
		}
	}

	if (hlist == NULL && idx != 0)
		return (NULL);

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);

	newlist->n = n;

	if (idx == 0)
	{
		newlist->next = *head;
		*head = newlist;
	}
	else
	{
		newlist->next = hlist->next;
		hlist->next = newlist;
	}

	return (newlist);
}
