#include <stdio.h>

/**
*main - Entry pount
*a code to print all the combination of single digits
*Return: 0 on success
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);

}
