#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, starting with
* 1 and 2, separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
	int count;
	unsigned long x = 0, y = 1, next;
	unsigned long x_half1, x_half2, y_half1, y_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		next = x + y;
		printf("%lu, ", next);

		x = y;
		y = next;
	}
		x_half1 = x / 10000000000;
		y_half1 = y / 10000000000;
		x_half2 = x % 10000000000;
		y_half2 = y % 10000000000;

		for (count = 93; count < 99; count++)
		{
			half1 = x_half1 + y_half1;
			half2 = x_half2 + y_half2;
			if (x_half2 + y_half2 > 9999999999)
			{
				half1 += 1;
				half2 %= 10000000000;
			}

			printf("%lu%lu", half1, half2);
			if (count != 98)
			printf(", ");
			x_half1 = y_half1;
			x_half2 = y_half2;
			y_half1 = half1;
			y_half2 = half2;
	}
	printf("\n");
	return (0);
}
