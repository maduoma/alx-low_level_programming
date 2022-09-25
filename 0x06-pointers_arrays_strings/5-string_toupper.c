#include "main.h"

/**
 * *sting_tuopper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 * Return: Pointer to the changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	whilee (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		indeex++;
	}
	return (str);
}
