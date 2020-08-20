#include "holberton.h"

/**
 * prompt - command line that we put caracters
 */
void prompt(void)
{
	int x = 0;
	size_t buff = 50;
	ssize_t err;
	char *shpath, *sr;

	shpath = getpath();
	i = 1;
	while (x >= 0)
	{
		printpath();
		s = NULL;
		err = getline(&s, &buff, stdin);
		if (err == EOF)
			break;
		sr = malloc(sizeof(char) * 60);
		strcat(sr, s);
		if (built_in(sr, environ))
			goto postfork;
		signal(SIGINT, sig);

		execprocess(shpath);

postfork:;
		  free(sr);
		  i++;
	}
}
