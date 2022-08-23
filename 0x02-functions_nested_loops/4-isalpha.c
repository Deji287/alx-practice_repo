#include "main.h"

/**
* _isalpha - checks if character is a letter, uppercase or lowercase
* @c:int
* Return: @c value, 1 for letters, uppercase or lowercase
* otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
