#include "main.h"

/**
 * swap_int - Swaps the value of two numbers
 * @a: First int
 * @b: Second int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
