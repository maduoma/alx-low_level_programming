#include <stdio.h>

/**
 * main - Entry point
 * This program prints alphabets
 * Return: Always 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
