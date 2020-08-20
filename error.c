#include "holberton.h"
/**
 * _printerror - print the correct error
 * @com: the command stdin
 * @error: the number of the error
 * @token: for only cd the wrong path
 */
void _printerror(char *com, int error, char *token)
{
	if (error == 126)
	{
		printf("%s: %d: %s: Permission denied\n", errgv, i, com);
		exit(error);
	}
	if (error == 2)
	{
		printf("%s: %d: %s: can't %s to %s\n", errgv, i, com, com, token);
		status = error;
	}
	if (error == 127)
	{
		printf("%s: %d: %s: not found\n", errgv, i, com);
		exit(error);
	}
}
