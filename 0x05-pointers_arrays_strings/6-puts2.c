#include "main.h"

/**
 * puts2 - prints characte
 * @str: character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < string_length(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


/**
 * string_length - finds the length of a string.
 * @pointer: pointer.
 * Return: length of c
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
