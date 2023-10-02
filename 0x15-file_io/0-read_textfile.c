#include "main.h"
/**
 * read_textfile - read number of letters in text file
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t count = 0, file, rd_file;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	rd_file = read(file, buffer, letters);
	if (file == -1 || rd_file == -1)
	{
		free(buffer);
		return (0);
	}
	count = write(STDOUT_FILENO, buffer, rd_file);
	if (count == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (count);
}
