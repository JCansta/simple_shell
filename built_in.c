#include "holberton.h"
/**
 * built_in - search if a command is a built in
 * @sr: the string with the command
 * @env: the external char enviroment
 *
 * Return: return a number, 1 if the command
 * is a built in, 0 if not
 */
int built_in(char *sr, char **env)
{
	char *token2[2];
	ssize_t err_val;

	if (sr[1] == '\0')
 	{
		return (1);
	}
	token2[0] = strtok(sr, " ,!¡¿?\'\"\n\t");
	token2[1] = strtok(NULL, " ,!¡¿?\'\"\n\t");
	if (_strcmp(token2[0], "exit") == 0)
	{
		free(s);
		free(sr);
		exit(status);
	}
	if (_strcmp(token2[0], "cd") == 0)
	{
		if (token2[1] != NULL)
		{
			err_val = chdir(token2[1]);
			if (err_val == -1)
			{
				_printerror(token2[0], 2, token2[1]);
				up_pwd();
				return (1);
			}
			return (1);
		}
		if (chdir("..") == -1)
			printf("Not directory Found or error trying to change\n");

		return (1);
	}
	if (_strcmp(token2[0], "env") == 0)
	{
		print_env(env);
		return (1);
	}
	return (0);
}
