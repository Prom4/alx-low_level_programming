#include "main.h"

/**
 * get_bit - returns the values of a bit at an indexs in a decimal numbers
 * @n: numbers to search
 * @index: all index of the bit
 *
 * Return: all value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
