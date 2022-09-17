#include "main.h"

/**
 * _is:wer - Returns 1 if is is lower or 0 otherwise
 * This program returns 1 or 0
 * @c: Character to be checked
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
