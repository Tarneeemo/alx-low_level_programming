#include <stido.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	printf("%i", n);
	}
	putchar('\n');
	return (0);
}
