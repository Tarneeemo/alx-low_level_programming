#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 *
 * @c: occurrence of the char
 * @s: in the string
 *
 * Return: pointer to the first occurrence of the char
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
