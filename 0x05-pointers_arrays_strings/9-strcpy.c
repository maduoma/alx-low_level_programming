#include "main.h"

/**
 * *_strcpy - Copies the string pointed to the src
 * @dest: Pointer to the buffer
 * @src: Pointer to the buffer
 * Return: Char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
