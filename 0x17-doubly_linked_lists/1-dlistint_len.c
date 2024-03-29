#include "lists.h"

/**
 * dlistint_len - returning the number of elements in
 * a double linked lists
 *
 * @h: head of the list
 * Return: the numbers of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
