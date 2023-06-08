#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of num
 *
 * @n: decimal num to print as binary
*/

void print_binary(unsigned long int n)
{
	unsigned long int b;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (b = n, i = 0; (b >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printd("1");
		else
			printf("0");
	}
}
