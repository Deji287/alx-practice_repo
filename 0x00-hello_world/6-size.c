#include <stdio.h>

/**
*main - Entry point
*Prints sizes of various types on computer
*Return: 0 on success
*/
int main(void)
{
	printf("Size of char: %i\n byte(s)", sizeof(char));
	printf("Size of int: %i\n btye(s)", sizeof(int));
	printf("Size of long int: %i\n btye(s)", sizeof(long int));
	printf("Size of long long int: %i\n byte(s)", sizeof(long long int));
	printf("Size of float: %i\n byte(s)", sizeof(float));

	return (0);
}
