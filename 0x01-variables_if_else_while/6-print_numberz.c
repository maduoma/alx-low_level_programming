#include <stdio.h>

/**
 * main - Entry point
 * This program prints char '0' to '9'
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
