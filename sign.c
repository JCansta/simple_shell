#include "holberton.h"
/**
 * sig - avoid the ctrl-c exit
 * @signum: number entry
 * Return: its a void
 */
void sig(int signum)
{
	signal(SIGINT, sig);
	(void)signum;
	putchar('\0');
	fflush(stdout);
}
