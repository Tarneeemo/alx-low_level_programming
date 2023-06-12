#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 *
 * @filename: A pointer to the name of the file.
 * @letters: The num of letters
 *
 * Return: If the function fails or filename is NULL - 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *i;

	if (filename == NULL)
		return (0);

	i = malloc(sizeof(char) * letters);
	if (i == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, i, letters);
	c = write(STDOUT_FILENO, i, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(i);
		return (0);
	}

	free(i);
	close(a);

	return (c);
}
