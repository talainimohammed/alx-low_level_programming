#include "lists.h"

/**
 * delete_nodeint_at_index -function deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *prevlist;
	listint_t *nextlist;

	prevlist = *head;

	if (index != 0)
	{
		for (j = 0; j < index - 1 && prevlist != NULL; j++)
		{
			prevlist = prevlist->next;
		}
	}

	if (prevlist == NULL || (prevlist->next == NULL && index != 0))
	{
		return (-1);
	}

	nextlist = prevlist->next;

	if (index != 0)
	{
		prevlist->next = nextlist->next;
		free(nextlist);
	}
	else
	{
		free(prevlist);
		*head = nextlist;
	}
	return (1);
}
