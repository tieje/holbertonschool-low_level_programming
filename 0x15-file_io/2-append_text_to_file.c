#include "holberton.h"
/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text content
 * Return: some integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, iter;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
