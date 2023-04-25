#include "main.h"

/**
 * main- Entry point
 *
 * Description: finds and prints the sum of
 * the even-valued terms, followed by a new line.
 *
 * Return: 0 success
*/

int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float totalSum;

	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			totalSum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", totalSum);

	return (0);
}
