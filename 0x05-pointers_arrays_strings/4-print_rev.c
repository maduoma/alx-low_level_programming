#include "main.h"

/**
 * print_rev - Prints the string reverse
 * @s: This will hold the string
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

/**
 * string_length - finds the length of a string
 * @pointer: Pointer
 * Return: Returns the length
 */
int string_length(char *pointer)
{
	int c = 0;

	while(*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
