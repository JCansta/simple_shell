#ifndef _SHELL_H
#define _SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void printpath(void);
char *getpath(void);
char *_which(char *s, char *shpath, int val);
void print_env(char **env);
int built_in(char *sr, char **env);
void sig(int signum);
void execprocess(char *shpath);
void prompt(void);
void up_pwd(void);

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
extern char **environ;
char *s;
#endif
