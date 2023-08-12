#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *buffer_read(char *file);
void close_file(int file);
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
	int from_file, read_file, to_file, write_file;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		from_file = open(av[1], O_RDONLY);
		if (from_file != -1)
		{
			buffer = buffer_read(av[2]);
			read_file = read(from_file, buffer, 1024);
			to_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
			if (read_file == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", av[1]);
				free(buffer);
				exit(98);
			}
			else
			{
				do
				{
					write_file = write(to_file, buffer, read_file);
					if (write_file == -1 || to_file == -1)
					{
						dprintf(STDERR_FILENO, "Error: Can't write to %s \n", av[2]);
						free(buffer);
						exit(99);
					}
					read_file = read(from_file, buffer, 1024);
				} while (read_file > 0);
				free(buffer);
				close_file(from_file);
				close_file(to_file);
			}
		}
		else
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", av[1]);
			exit(98);
		}
	}
	return (0);
}

/**
 * buffer_read - allocate memory for buffer string
 * @file: pointer to file
 *
 * Return: buffer pointer
 */
char *buffer_read(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer != NULL)
	{
		return (buffer);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

/**
 * close_file - close opened file after operation finished
 * @file: file descriptor to terminate and close
 *
 * Return: nothing
 */
void close_file(int file)
{
	int c;

	c = close(file);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d \n", file);
		exit(100);
	}
}
