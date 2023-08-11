#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int copy_file(const char *filename, char *buffer, off_t size);
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments passed to the programm
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	char *buffer;
	int open_file, read_file, close_file;
	off_t content_size;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		open_file = open(av[1], O_RDONLY);
		if (open_file != -1)
		{
			content_size = lseek(open_file, 0, SEEK_END);
			lseek(open_file, 0, SEEK_SET);
			buffer = (char *)malloc(content_size + 1);
			read_file = read(open_file, buffer, content_size);
			if (read_file == -1)
			{
				dprintf(2, "Error: Can't read from file %s \n", av[1]);
				close_file = close(open_file);
				if (close_file == -1)
				{
					dprintf(2, "Error: Can't read from file %d \n", open_file);
					exit(100);
				}
				exit(98);
			}
			else
			{
				close_file = close(open_file);
				if (close_file == -1)
				{
					dprintf(2, "Error: Can't close fd %d \n", open_file);
					exit(100);
				}
				copy_file(av[2], buffer, content_size);
			}
		}
		else
		{
			dprintf(2, "Error: Can't read from file %s \n", av[1]);
			exit(98);
		}
	}
	return (0);
}

/**
 * copy_file - insert the content of file_from to file_to
 * @filename: name of the file
 * @buffer: text to insert
 * @size: size of text
 *
 * Return: always 0
 */
int copy_file(const char *filename, char *buffer, off_t size)
{
	int open_file, write_file, close_file;

	open_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (open_file != -1)
		{
			write_file = write(open_file, buffer, size);
			if (write_file == -1)
			{
				dprintf(2, "Error: Can't write to file %s \n", filename);
				close_file = close(open_file);
				if (close_file == -1)
				{
					dprintf(2, "Error: Can't close fd %d \n", open_file);
					exit(100);
				}
				exit(99);
			}
			close_file = close(open_file);
			if (close_file == -1)
			{
				dprintf(2, "Error: Can't close fd %d \n", open_file);
				exit(100);
			}
		}
		else
		{
			dprintf(2, "Error: Can't write to file %s \n", filename);
			close_file = close(open_file);
			if (close_file == -1)
			{
				dprintf(2, "Error: Can't close fd %d \n", open_file);
				exit(100);
			}
			exit(99);
		}
	return (0);
}
