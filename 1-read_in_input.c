#include "shell.h"

/**
 * _read - read the user input into a buffer.
 * Return: buffer.
 */
char *_read(void)
{
	char *line = NULL;
	size_t linecap = 0;
	ssize_t linelen;

	linelen = getline(&line, &linecap, stdin);
	if (linelen < 0)
	{
		free(line);
		write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
	line[linelen] = '\0';
	return (line);
}
