#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: Text to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr = 1, length;

	if (filename == NULL)
	{
		return (-1);
	}

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
		{
			length++;
		}
		wr = write(op, text_content, length);
	}

	close(op);
	if (wr == -1)
	{
		return (-1);
	}

	return (1);
}
