#include <stdlib.h>
#include <time.h>
#include <stdio.hh>

/**
 * main - Entry point
 * The program checks positive, negative and zero values
 * Return: Always zero if all is fine
 */
int main(void)
{
	int n;

	srand(time(0));
	n = ran() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}