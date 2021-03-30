#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 * Return: some integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status, iter;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fd = open(filename, O_WRONLY|O_CREAT|O_TRUNC);
	if (fd == -1)
		return (-1);
	for (iter = 0; text_content[iter]; iter++)
	{
		continue;
	}
	write_status = write(fd, text_content, iter);
	if (write_status == -1)
		return (-1);
	close(fd);
	return (1);
}
