#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count, file, rw_file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
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
