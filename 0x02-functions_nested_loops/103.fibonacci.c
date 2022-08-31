#include <stdio.h>

/**
* main - Prints the sum of even-valued Fibonacci sequence
* terms not exceeding 4000000.
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, next;
	float total;

	while (1)
	{
		next = fib1 + fib2;
		if (next > 4000000)
			break;
		if ((next % 2) == 0)
			total += next;
			fib1 = fib2;
			fib2 = next;
	}
	printf("%.0f\n", total);
	return (0);
}
