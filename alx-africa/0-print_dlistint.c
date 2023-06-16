#include "lists.h"

/**
 * print_dlistint - functs that prints all elements of a doubly linked lists
 * @h: poiner to  head  list
 *
 * Return: numbr of  nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}
	return (cont);
}
