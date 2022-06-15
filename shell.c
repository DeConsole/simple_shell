#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *prompt = "$ ";
	ssize_t byte_count = 0;
	char *line = NULL;
	size_t linecap = 0;
	ssize_t linelen;

	while (1)
	{
		byte_count = write(STDOUT_FILENO, prompt, 2);
		if (byte_count < 0)
			exit(0);
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
