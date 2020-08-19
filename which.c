#include "holberton.h"
/*
 * _which: busca la dirección donde se encuentra el comando, comparandola
 * on cada una de las direcciones dadas por el path
 */
char *_which(char *s, char *shpath, int val)
{
	struct stat st;
	char *token = NULL, *temp;

	(void)st;
	token = strtok(shpath, ":=");
	while (token)
	{
		temp = malloc(sizeof(char) * 60);
		if (val == 1)
		{
		strcat(temp, token);
		strcat(temp, "/");
		}
		strcat(temp, s);
		if (stat(temp, &st) == 0)
		{
			strcpy(token, temp);
			free(temp);
			return (token);
		}
		token = strtok(NULL, ":=");
		free(temp);
	}
	if (val == 1)
		return (_which(s, shpath, 0));
	return (NULL);
}
