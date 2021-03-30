#include "holberton.h"
/**
 * read_textfile - read a text file and print to POSIX
 * @filename: filename
 * @letters: letters
 * Return: to standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	int readreturn;
	int writereturn;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(size_t) * letters);
	if (buffer == NULL)
		return(0);
	readreturn = read(fd, buffer, letters);
	if (readreturn == -1)
		return (0);
	writereturn = write(2, buffer, readreturn);
	if (writereturn == -1)
		return (0);
	close(fd);
	free(buffer);
	return (writereturn);
}
