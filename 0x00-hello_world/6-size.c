#include <stdio.h>

/**
 * main - Entry point
 * This program prints sizes of data types
 * Return: Always 0 (Succces)
 */
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
}
