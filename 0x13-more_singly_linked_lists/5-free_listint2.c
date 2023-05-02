#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *templist;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((templist = current) != NULL)
		{
			current = current->next;
			free(templist);
		}
		*head = NULL;
	}
}
