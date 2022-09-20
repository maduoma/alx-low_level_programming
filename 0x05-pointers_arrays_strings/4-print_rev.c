#include "main.h"

/**
 * print_rev - Prints the string reverse
 * @s: This will the string
 */
void print_rev(char *s)
{

	if (s)
	{
		while (*s)
		{
			_putchar(*s++);
		}
	{
	_putchar('\n');
}
