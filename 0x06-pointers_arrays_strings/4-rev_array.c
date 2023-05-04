#include "main.h"

/**
 * reverse_array - reverses an arr of int
 *
 * @a: arr to be reversed
 * @n: num of elements in the arr
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
