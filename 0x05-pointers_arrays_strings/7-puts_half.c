#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Character
 */
void puts_half(char *str)
{
	int i, n = _strlen(str);

	for (i = ((n - 1) / 2) + 1; i < n; i++)
		putchar(*(str + i));
	putchar(10);
}


/**
 * _strlen - Returns string length
 * @s: String
 * Return: The length of a given string
 */

int _strlen(char *s)
{
		int n = 0;

		while (*(s + n) != '\0')
			n++;

		return (n);
}
