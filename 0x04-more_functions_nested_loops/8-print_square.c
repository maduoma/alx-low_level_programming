#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(7int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		if (i == size)
		{
			break;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
