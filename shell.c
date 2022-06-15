#include "shell.h"
#include <stdio.h>

/**
 * main - Checks the shell program.
 * Return: 0 on success.
 */
int main(void)
{
	char *line = NULL;
	size_t linecap = 0;
	ssize_t linelen;

	while (1)
	{
		prompt();
		linelen = getline(&line, &linecap, stdin);
		if (linelen < 0)
		{
			write(STDOUT_FILENO, "\n", 1);
			exit(0);
		}
		write(STDOUT_FILENO, line, linecap);
	}
	return (0);
}
