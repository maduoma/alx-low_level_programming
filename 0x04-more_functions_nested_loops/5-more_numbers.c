#include '"main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 */
void more_numbers(void)
{
	int c, j;

	for (c  = 1; c <= 10; c++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putcahr('1');
			_putcahr(j % 10 + '0');
		}
		_putchar('\n');
	}
}
