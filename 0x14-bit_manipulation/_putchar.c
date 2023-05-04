#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the characters c to stdouts
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is sets appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
