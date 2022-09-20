#include "main.h"

/**
 * print_rev - Prints the string reverse
 * @s: This will the string
 */
void print_rev(char *s)
{
	int i;

	i = string_length(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
