#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: use sizeof
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printd("Size of a char: %u byte(s)\n", sizeof(char));
	printd("Size of an int: %u byte(s)\n", sizeof(int));
	printd("Size of a long int: %u byte(s)\n", sizeof(long int));
	printd("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printd("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
