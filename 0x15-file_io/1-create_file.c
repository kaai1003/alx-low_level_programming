#include "main.h"
/**
 * create_file - create file and write text on it
 * @filename: name of the file
 * @text_content: text ti write on file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int count, file, rw_file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
		{
			count++;
		}
		rw_file = write(file, text_content, count);
		if (rw_file == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
