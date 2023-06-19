#include "main.h"

/**
 * _isupper - funct that check for uppercases characters
 * @c: int type numbers
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
