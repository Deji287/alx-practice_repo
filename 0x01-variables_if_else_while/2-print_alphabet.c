#include <stdio.h>

/**
 * main - Entry point
 * a code to print the alphabets in lower case
 * Return: 0 on success
 */

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
