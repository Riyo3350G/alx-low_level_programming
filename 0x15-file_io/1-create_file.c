#include "main.h"

/**
 * create_file - Create a file
 * @filename: The file name to be created.
 * @text_content: A string to write.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length;

	if (filename == NULL)
	{
		return (-1);
	}

	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
			length++;
		wr = write(op, text_content, length);
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}

	close(op);
	return (1);
}
