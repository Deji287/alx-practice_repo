#include "main.h"
#include <stdio.h>

/**
*main - code to print fizz buzz
*Return: 0 on success
*/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
