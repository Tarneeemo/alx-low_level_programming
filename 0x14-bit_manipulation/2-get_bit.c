#include "main.h"
#include <stdio.h>

/**
 * get_bit - get value of bit at given index
 *
 * @n: num to evaluate
 * @index: index starting from 0
 *
 * Return: value of bit at index or -1 if it error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	i = n >> index;

	return (i & 1);
}
