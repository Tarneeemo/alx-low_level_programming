#include "variadic_functions.h"

/**
 * print_numbers - prints num followed by a new line
 *
 * @n: num of parameter
 * @separator: separator between two num
 *
 * Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
