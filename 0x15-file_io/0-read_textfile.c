#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output.
 * @filename: Name of file
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(op);
		return (0);
	}

	rd = read(op, buff, letters);

	if (rd == -1)
	{
		free(buff);
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1 || wr != rd)
	{
		close(op);
		free(buff);
		return (0);
	}

	free(buff);
	return (rd);

}
