#include "holberton.h"
/**
 * main - a simple shell, imitation of prompt
 * @argc: number of parameters
 * @argv: arguments
 * Return: finish the process.
 */
int main(int argc, char **argv)
{
	(void)argc;
	errgv = argv[0];
	prompt();
	exit(status);
}
