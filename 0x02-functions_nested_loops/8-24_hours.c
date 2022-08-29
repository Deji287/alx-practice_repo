#include "main.h"
#include <math.h>
#include <stdlib.h>

/**
*jack_bauer - print all the minutes in a day
*starting from 00:00 t0 23:59
*Return: NULL
*/
void jack_bauer(void)
{

	int h = 0;

	for (; h <= 23; h++)
	{
	int m = 0;

		for (; m <= 59; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
