#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Checked
 * Return: Returns zero
 */
void print_to_98(int n)
{
	for (n = 0; n < 100; n++)
	{
		putchar((n / 10) + '0');
		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	puchar('\n');
	return ;
}
