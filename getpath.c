#include "holberton.h"
/**
 * getpath - find the PATH in the environ char
 * Return: the string with the PATH
 */
char *getpath(void)
{
	int i = 0, val;

	while (environ[i])
	{
		val  = _strncmp(environ[i], "PATH", 4);
		if (val == 0)
		{
			return (environ[i]);
		}
		i++;
	}
	return (NULL);
}
