#include "main.h"
/**
 * read_textfile - read text file and print its content
 * @filename: file to read
 * @letters: number of letters on file
 *
 * Return: number of letters or 0 if programm fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file, r, w;

	buffer = malloc(sizeof(char) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free (buffer);
		return (0);
	}
	else
	{
		file = open(filename, O_RDONLY);
		r = read(file, buffer, letters);
		if (file != -1 && r != -1)
		{
			buffer[r] = '\0';
			w = write(STDOUT_FILENO, buffer, r);
			if (w != r)
			{
				return (0);
			}
			else
			{
				free (buffer);
				close(file);
			}
		}
		else
		{
			return (0);
		}
	}
	return (r);
}
