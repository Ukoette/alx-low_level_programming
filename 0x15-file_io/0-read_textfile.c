#include "main.h"

#include <stdlib.h>


/**
 * read_textfile - Read a text file and print it to POSIX stdout.
 * @filename: Apointer to the name of the file.
 * @letter: The number of letters the
 * function should return.
 *
 * Return: If the function fails or filename id NULL -0.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	close(o);


	return (w);

}
