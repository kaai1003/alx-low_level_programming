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
 * append_text_to_file - append text to the end of the file
 * @filename: name of the file
 * @text_content: pointer to content to append
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, file_open, file_append;

	len = content_len(text_content);
	if (filename != NULL)
	{
		file_open = open(filename, O_WRONLY | O_APPEND);
		if (file_open != -1)
		{
			if (len == -1)
			{
				close(file_open);
				return (1);
			}
			else
			{
				file_append = write(file_open, text_content, len);
				if (file_append == -1)
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
