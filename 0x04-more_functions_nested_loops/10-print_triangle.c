#include "main.h"

/**
 * print_triangle - prints a triangle and a new line
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int c, j;

	if (size <= 0)
		_putchar('\n');

	for (c = 1; c <= size; c++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - c))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
