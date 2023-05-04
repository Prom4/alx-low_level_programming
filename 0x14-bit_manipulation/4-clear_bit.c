#include "main.h"

/**
 * clear_bit - always sets the value of a given bits to 0
 * @n: pointers to the number to changes
 * @index: all index of the bit to clear
 *
 * Return: 1 for pass, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
