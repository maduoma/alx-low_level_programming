#include "main.h"

/**
* _abs - Prints the absolute value
* @n: Number to be checked
* Return: Always 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
