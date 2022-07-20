#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char* buffer;

	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	r = read (fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	return (0);

	free(buffer);
	close(fd);
	return (w);
}

