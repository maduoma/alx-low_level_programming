#include "main.h"

/**
 * print_rev - Prints the string reverse
 * @str: This will hold the string
 */
void print_rev(char *str)
{

	if (str)
	{
		while (*str)
		{
			_putchar(*str++);
		}
	{
	_putchar('\n');
}
