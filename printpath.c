#include "holberton.h"

/**
 * printpath - print the path info of the envir variable.
 */

void printpath(void)
{
	char path[50];
	size_t buff = 50;

	getcwd(path, buff);
	if (isatty(STDOUT_FILENO) == 1)
		printf("%s$ ", path);
}
