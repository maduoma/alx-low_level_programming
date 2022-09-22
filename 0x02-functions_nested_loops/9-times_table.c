#include "main.h"

/**
 * times_table - print j9 times table, starting with zero
 * @n: Int n
 * @i: Int i
 */
void times_table(void)
{
	int n;
	int i;
	int p;

	for (n = 0; n <= 9; i++)
	{
		_putchar('0');

		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * i;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
	}
}
