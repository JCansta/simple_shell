#include "holberton.h"
/**
 * up_pwd - update the pwd in the path
 * Return: its a void
 */
void up_pwd(void)
{
	int i = 0, val;
	char path[50];
	size_t buff = 50;

	getcwd(path, buff);
	while (environ[i])
	{
		val = strncmp(environ[i], "PWD", 3);
		if (val == 0)
		{
			strcpy(&environ[i][4], path);
			break;
		}
		i++;
	}
	val = strlen(path) + 4;
	environ[i][val] = '\0';
}
