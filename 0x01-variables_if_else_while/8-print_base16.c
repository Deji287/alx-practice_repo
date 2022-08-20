#include <stdio.h>

/**
*main - Entry point
*a code to print all the digits of hexadecimal
*Return: 0 on sucess
*/
int main(void)
{
	int n;

	for (n = 0; n <= 16; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);

		}
		else
		{
			putchar(87 + n);
		}
	}
	putchar('\n');
	return (0);

}

