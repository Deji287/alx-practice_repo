#include <stdio.h>

/**
 * main - Entry point
 * a code to print alphabets in lower case followed by uppercase
 * Return: 0 on success
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while  (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while  (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);

}
