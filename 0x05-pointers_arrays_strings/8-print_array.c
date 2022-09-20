#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of array
 * @a: Pointer to an integer
 * @n: Number of elements in an array
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == (n - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
