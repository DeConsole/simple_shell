#include "shell.h"

/**
 * main - Checks the shell program.
 * Return: 0 on success.
 */
int main(void)
{
	char *line = NULL;

	while (1)
	{
		prompt();
		line = _read();
		printf("%s", line);
		free(line);
	}
	return (0);
}
