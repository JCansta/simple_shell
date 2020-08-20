#include "holberton.h"

/**
 * printpath - print the path info of the envir variable.
 */

void printpath(void)
{
	char path[50];
	size_t buff = 50;

	getcwd(path, buff);
	if (isatty(STDIN_FILENO))
		printf("%s$ ", path);
	//exit(1);
}
