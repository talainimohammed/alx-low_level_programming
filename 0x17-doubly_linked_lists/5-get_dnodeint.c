#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: double pointer to the head of the list
 * @index: index of the node
 *
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i;

	cur = head;
	i = 0;
	while (cur != NULL)
	{
		if (i == index)
			return (cur);
		cur = cur->next;
		i++;
	}
	return (NULL);
}
