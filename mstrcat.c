#include "holberton.h"

/**
 * mstrcat - concatenate multiple arguments
 * @x: number of arguments
 * Return: the char with all concatenate strings
 */
char *mstrcat(int x, ...)
{
	va_list arg;
	char *s;

	s = malloc(sizeof(char) * 60);
	s[0] = 0;
	if (s == NULL)
		return (NULL);
	va_start(arg, x);
	while (x--)
		_strcat(s, va_arg(arg, char*));

	va_end(arg);
	return (s);
}
