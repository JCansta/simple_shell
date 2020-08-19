#include "holberton.h"

/**
 * print_env - print environment variable
 * @env: contains all environment variable info.
 */
void print_env(char **env)
{
	int i = 0;

	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
}
