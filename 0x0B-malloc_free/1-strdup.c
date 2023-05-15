#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the string given as parameter
 *
 * @str: string to duplicate
 *
 * Return: pointer to copy string or NULL if error
*/

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, l;

	i = 0;
	l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	dup = malloc(sizeof(char) * (l + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
