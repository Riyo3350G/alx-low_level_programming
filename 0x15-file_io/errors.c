#include "main.h"

/**
 * errors - Prints an error message and exits with a given status
 *
 * @statu: The status to exit with.
 * @message: The error message to be printed.
 */
void errors(int statu, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(statu);
}
