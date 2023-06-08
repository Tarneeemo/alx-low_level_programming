#include "main.h"

/**
 * set_bit - value of bit to 1 at given index
 *
 * @index: starting from 0 of bit you want to set
 * @n: pointer num of i
 *
 * Return: 1 working or -1 error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = 1 << index;
	*n = *n | i;

	return (1);
}
