#include <stdlib.h>
#include "main.h"

/**
*print_last_digit - print the last digit of an integer
*@n: int
*Return: @n value
*/
int print_last_digit(int n)
{
	int v = abs(n % 10) + '0';

	_putchar (v);
	return (v - '0');
}
