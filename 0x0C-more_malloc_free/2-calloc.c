#include "main.h"

/**
 * _calloc - Function for creating memory space
 * @nmemb: Number of members
 * @size: Size of each members
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
