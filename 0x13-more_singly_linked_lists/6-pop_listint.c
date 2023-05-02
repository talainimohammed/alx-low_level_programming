#include "lists.h"

/**
 * pop_listint - function deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: if empty return 0.
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	headnode = current->n;

	h = current->next;

	free(current);


	*head = h;

	return (headnode);
}
