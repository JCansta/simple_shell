#include "holberton.h"

/**
 * printpath - print the path info of the envir variable.
 */

void printpath(void)
{
	char path[50];
	size_t buff = 50;
	int leng;

	getcwd(path, buff);
	leng = _strlen(path);
	if (isatty(STDIN_FILENO))
	{
		write(1, path, leng);
		write(1, "$ ", 2);
	}
}
