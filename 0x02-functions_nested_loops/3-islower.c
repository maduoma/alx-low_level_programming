#include "main.h"

/**
 * _is:wer - Returns 1 if is is lower
 * or 0 otherwise
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
