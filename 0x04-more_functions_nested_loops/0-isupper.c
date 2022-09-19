#include <stdio.h>

/**
 * _isupper - Checks for upper letter
 * @c: Character
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
