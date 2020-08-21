#include "holberton.h"
/**
 * execprocess - process of execev a command
 * @shpath: a string with all posible PATH
 * Return:
 */
void execprocess(char *shpath)
{
	char *argv[512], *token, *delimiters = " ,!¡¿?\'\"\n\t";
	int x = 0, statuschild;

	if (fork() == 0)
	{
		token = strtok(s, delimiters);
		while (token != NULL)
		{
			argv[x] = token;
			token = strtok(NULL, delimiters);
			x++;
		}
		argv[0] = _which(argv[0], shpath, 1);
		if (argv[0] != NULL)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				_printerror(argv[0], 126, NULL);
			}
		}
	}
	else
	{
		wait(&statuschild);
		status = WEXITSTATUS(statuschild);
	}
}
