#include "lists.h"

/**
 * sum_dlistint - sum all of the data of dlistint_t linked lists
 * @head: pointer to the beginning of linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
