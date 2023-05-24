#include "function_pointers.h"

/**
 * int_index - earches for an int
 *
 * @array: arr to search in
 * @size: size of the arr
 * @cmp: pointer to the comparing function
 *
 * Return: 0 or -1 if no match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
