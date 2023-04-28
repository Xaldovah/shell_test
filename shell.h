#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <signal.h>

#define MAX_INPUT 1024
#define PROMPT "shell$ "
#define MAX_ARGS 64
#define MAX_PATHS 64
#define MAX_PATH_LENGTH 256
#define BUFFER_SIZE 1024

/* Function prototypes */
extern char *path[MAX_PATHS + 1];
extern char **environ;
extern char *find(char *nomb);

char *string_toupper(char *s);
struct stat buffer;
struct stat st;
void _print_environ(void);
char *find_cmd(char *nomb);
void handle_exit(char **tokens, char *line);
char **tokenize_cmdline(char *cmdline);
char *check_path(char *cmd);
char *my_getline(void);
void parse_input(char *input, char **args);
char *find_command(char *command);
void free_array(char **args);
int count_input(char *str);
int count_del(char *str, char *del);
char *concatenate_path(char *pathname, char *name);
int exec_cmd(char *cmd, char **args);
int builtin(char **tokens, char *ln);
<<<<<<< HEAD
void handle_exit(char **u_tokns, char *line);
char **tokenize(char *str, char *del, int len);
=======
>>>>>>> 400c6a4b969145a3576825eda6997607a319f469
void handle_signal(int sig_id);
int exec(char *nomb, char **opts);
char **tokenize(char *str, char *del, int len);

#endif
