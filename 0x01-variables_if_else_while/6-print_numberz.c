#include <stdio.h>

/**
*main - Entry point
*a code to print single digits
*Return: 0 on success
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar (n + '0');
	}
	putchar('\n');
	return (0);
}

