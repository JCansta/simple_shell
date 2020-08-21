#include "holberton.h"
/**
 * _printerror - print the correct error
 * @com: the command stdin
 * @error: the number of the error
 * @token: for only cd the wrong path
 */
void _printerror(char *com, int error, char *token)
{
	char *errorout = NULL;
	size_t leng;

	if (error == 126)
	{
		errorout = mstrcat(6, errgv, ": ", convert(i, 10), ":", com,
				": Permission denied\n");
		leng = _strlen(errorout);
		write(2, errorout, leng);
		free(errorout);
		free(com);
		exit(error);
	}
	if (error == 2)
	{
		errorout = mstrcat(10, errgv, ": ", convert(i, 10), ": ",
				com, ": can't ", com, " to ", token, "\n");
		leng = _strlen(errorout);
		write(2, errorout, leng);
		free(errorout);
		free(com);
		status = error;
	}
	if (error == 127)
	{
		errorout = mstrcat(6, errgv, ": ", convert(i, 10), ":",
				com, ": not found\n");
		leng = _strlen(errorout);
		write(2, errorout, leng);
		free(errorout);
		free(com);
		exit(error);
	}
}
