#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: Character value to return
 * @y: Character power to return
 *
 * Return: The value of x raised to the power of y.
 * -1 If y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
