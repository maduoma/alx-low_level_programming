#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Character
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	n = i / 2;
	while (n <= i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
