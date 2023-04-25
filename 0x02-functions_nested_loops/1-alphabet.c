#include "main.h"

/**
 * print_alphabet - untilizes on the _putchar function to print
 * in lowercase, followed by a new line.
 *  a-z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
