#include "main.h"

/**
*print_alphabet_x10 - prints the alphabet 10x
*Return: nothing
*/
void print_alphabet_x10(void)
{
	int c = 'a';
	int i = 0;

	for (; i < 10; i++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);

		}
		c = 'a';
		_putchar('\n');
	}
}
