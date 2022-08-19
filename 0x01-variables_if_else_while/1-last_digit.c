#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * a code to print the last input of a given number
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	if (n % 10 < 5)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
