#include "main.h"

/**
 * *_strcpy - Copies the string pointed to the src
 * @dest: Pointer to the buffer
 * @src: Pointer to the buffer
 * Return: Char
 */
char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	n = string_length(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}


/**
 * string_length - Finds the length of a string
 * @pointer: Pointer
 * Return: Length
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
