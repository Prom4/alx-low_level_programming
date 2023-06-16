#include "lists.h"

/**
 * free_dlistint - freeing a dlistint_t list
 *
 * @head: heasd of the lists
 * Return: no returns
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
