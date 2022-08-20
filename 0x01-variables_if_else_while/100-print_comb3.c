#include <stdio.h>

/**
*main - Entry point
*a code that print all the combination of two digit numbers
*Return: 0 on success
*/
int main(void)
{
	int  n, i;

	for (n = 0; n < 9; n++)
	{
		i = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		} while (i < 10);
	}
	putchar('\n');
	return (0);

}

