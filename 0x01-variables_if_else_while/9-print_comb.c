#include <stdio.h>

/**
 * main - Entry point
 * This program prints possible combination 0-9
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putcahr('\n');
	return (0);
}
