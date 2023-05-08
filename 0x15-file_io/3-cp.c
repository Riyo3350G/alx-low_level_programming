#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The Argument counter
 * @argv: The Argument vector
 *
 * Return: 0 (On Success)
 */
int main(int argc, char *argv[])
{
	int op_from, op_dest, from, dest;
	ssize_t rd, wr;
	char buff[BUFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	op_from = open(argv[1], O_RDONLY);
	if (op_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	op_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (op_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((rd = read(op_from, buff, BUFSIZE)) > 0)
	{
		wr = write(op_dest, buff, rd);
		if (wr != rd || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	from = close(op_from);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_from), exit(100);

	dest = close(op_dest);
	if (dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_dest), exit(100);

	return (0);
}
