#include "main.h"

/**
 * _memcpy - copying memory areas
 * @dest: char arrays to copy into
 * @src: char arrays to copy from
 * @n: numbers of elements to copys
 * Return: pointers to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
