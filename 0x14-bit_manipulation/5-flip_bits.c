#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one num to another num
 *
 * @n: first num
 * @m: sec num
 *
 * Return: num of bits that was needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int counter;

	i = n ^ m;
	counter = 0;

	while (i)
	{
		counter++;
		i &= (i - 1);
	}

	return (counter);
}
