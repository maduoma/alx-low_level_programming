#include <stdio.h>

/**
 * main - Entry point
 * This program prints z to a
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
