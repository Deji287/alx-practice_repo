#include "main.h"

/**
* _islower - checks for lowercase characters then returns 0 or 1
* @c:init
*Return: @c value
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}

