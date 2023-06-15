#include "lists.h"

/**
 * dlistint_len - funct that returns a number of an element in a,
 * linked dlistint_t list.
 * @h: poiner to the head of the lists.
 *
 * Return: numbers of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
