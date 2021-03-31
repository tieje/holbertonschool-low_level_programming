#include "holberton.h"

/**
 * copythis - copy content from one file to another file
 * @f1: filename to copy from
 * @f2: filename to copy to
 * Return: status code
 */

ssize_t copythis(char *f1, char *f2)
{
	int fd1;
	char *buffer;

	fd1 = open(f1, O_RDONLY);
	if (!f1 || read_status == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", f1);
		exit(98);
	}
	buffer = read(read_status1)
	write_status = write(f2)
	if ()
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	if (res == 100)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}

}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s %s %s\n", av[0], av[1], av[2]);
		exit(97);
	}
	res = copythis(av[1], av[2]);
	return (0);
}
