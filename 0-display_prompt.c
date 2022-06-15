#include "shell.h"

/**
 * prompt - displays a prompt to indicate the shell is
 * waiting for input.
 */
void prompt(void)
{
	char *prompt = "$ ";
	ssize_t byte_count = 0;

	byte_count = write(STDOUT_FILENO, prompt, 2);
	if (byte_count < 0)
		exit(0);
}
