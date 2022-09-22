#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of jack bauer.
 * @hr: Hour
 * @ms: Minute
 * Return: Alwways 0
 */
void jack_bauer(void)
{
	int hr;
	int ms;

	for (hr = 0; hr <= 23; hr++)
	{
		for (ms = 0; ms <= 59; ms++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (ms / 10));
			_putchar('0' + (ms % 10));
			_putchar('\n');
		}
	}
}
