#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void _close(int file);
/**
 * _close - close file descriptor
 * @file: file descriptor
 *
 * Return: nothing
 */
void _close(int file)
{
	int cf;

	cf = close(file);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * main - copy content from file to file
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int file_from, file_to, rd_file, wr_file;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s \n", av[2]);
		exit(99);
	}
	file_from = open(av[1], O_RDONLY);
	rd_file = read(file_from, buffer, 1024);
	if (file_from == -1 || rd_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", av[1]);
		free(buffer);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		wr_file = write(file_to, buffer, rd_file);
		if (file_to == -1 || wr_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s \n", av[2]);
			free(buffer);
			exit(99);
		}
		_close(file_to);
		rd_file = read(file_from, buffer, 1024);
		file_to = open(av[2], O_WRONLY | O_APPEND);
	} while (rd_file > 0);
	free(buffer);
	_close(file_from);
	_close(file_to);
	return (0);
}
