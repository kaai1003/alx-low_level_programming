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
	FILE *file;
	char c;
	ssize_t count = 0, w, n_letters = letters;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	while ((c = fgetc(file)) != EOF)
	{
		w = write(STDOUT_FILENO, &c, 1);
		if (w == -1)
		{
			fclose(file);
			return (0);
		}
		count++;
		if (count == n_letters)
		{
			break;
		}
	}
	fclose(file);
	return (count);
}
