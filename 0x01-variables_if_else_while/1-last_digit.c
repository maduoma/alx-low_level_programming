#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int lD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lD = n % 10;

	if (lD > 5)
	{
		printf("Last digit of %d is %d and is gretaer than 5\n", n, lD);
	}
	else if (lD == 0)
	{
		printf("Last digit of %d is %d is 0\n", n, lD);
	}
	else if (lD < 6 && lD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lD);
	}
	return (0);
}
