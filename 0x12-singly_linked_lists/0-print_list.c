#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * _strlen - returns the length of string
 *
 * @s: string to check
 *
 * Return: int length of string
*/

int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
