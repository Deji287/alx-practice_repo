#include <stdio.h>

/**
*main - Entry point
*a code to print out the alphabet in lowercase except q and e
*Return: 0 on success
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;

	}
	putchar('\n');
	return (0);
}