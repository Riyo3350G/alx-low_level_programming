#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The Argument counter
 * @argv: The Argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int op_from, op_dest, rd, wr;
	char buff[BUFSIZE];

	if (argc != 3)
		errors(97, "Usage: cp file_from file_to");
	op_from = open(argv[1], O_RDONLY);
	if (op_from == -1)
		errors(98, "Error: Can't read from file");

	op_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (op_dest == -1)
		errors(99, "Error: Can't write to file");

	while ((rd = read(op_from, buff, BUFSIZE)) > 0)
	{
		wr = write(op_dest, buff, rd);
		if (wr == -1)
			errors(99, "Error: Can't write to file");
	}

	if (rd == -1)
		errors(98, "Error: Can't read from file");

	if (close(op_from) == -1)
		errors(100, "Error: Can't close file descriptor");

	if (close(op_dest) == -1)
		errors(100, "Error: Can't close file descriptor");

	return (0);
}
