#ifndef _SHELL_H
#define _SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

void printpath(void);
char *getpath(void);
char *_which(char *s, char *shpath, int val);
void print_env(char **env);
int built_in(char *sr, char **env);
void sig(int signum);
void execprocess(char *shpath);
void prompt(void);
void up_pwd(void);
void _printerror(char *com, int error, char *token);

char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t n);

char *mstrcat(int x, ...);
char *convert(long int num, int base);
extern char **environ;
char *s, *errgv;
int status, i;
#endif
