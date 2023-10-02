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
	ssize_t count = 0, n_letters = letters;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	while ((c = fgetc(file)) != EOF)
	{
		write(STDOUT_FILENO, &c, 1);
		count++;
		if (count == n_letters)
		{
			break;
		}
	}
	return (count);
}
