#include "main.h"


void errors(int statu, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(statu);
}
