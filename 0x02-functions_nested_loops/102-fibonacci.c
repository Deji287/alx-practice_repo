#include <stdio.h>

/**
*main - prints the first 50 fibonacci starting from 0 and 1
*Return: 0 always
*/
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, next;

	for (count = 0; count < 50; count++)
	{
		next = fib1 + fib2;
		printf("%lu", next);

		fib1 = fib2;
		fib2 = next;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
