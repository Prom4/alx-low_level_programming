#include "main.h"

/**
 * _memset - Filling memory with a constant bytes
 * @s: buffer arrays
 * @b: constant bytes
 * @n: number of byte of memories area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
