#include <stdio.h>

/**
 * main - Entry point
 * This program
 * Return: Always 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
