#include "main.h"
/**
 * content_len - return the length of text content
 * @text_content: pointer to string
 *
 * Return: length of content or -1 if content is NULL
 */
int content_len(char *text_content)
{
	int len = 0;

	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}
/**
 * create_file - create file and write content to it
 * @filename: name of the file to created
 * @text_content: content to write on the file
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int len;
	int file_open, file_write;

	len = content_len(text_content);
	if (filename != NULL)
	{
		file_open = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (file_open != -1)
		{
			if (len != -1)
			{
				file_write = write(file_open, text_content, len);
				if (file_write == -1)
				{
					close(file_open);
					return (-1);
				}
				else
				{
					close(file_open);
					return (1);
				}
			}
			else
			{
				close(file_open);
				return (1);
			}
		}
		else
		{
			close(file_open);
			return (-1);
		}
	}
	else
	{
		return (-1);
	}
}
