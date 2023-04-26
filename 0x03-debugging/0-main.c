#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 *
 * Return: 0 success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	int i;

	i = 98 % 2;
	positive_or_negative(i);

	return (0);
}
