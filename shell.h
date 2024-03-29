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
#include <ctype.h>
#include <limits.h>

#define MAXIMUM_INPUT 1024
#define PROMPT "shell$ "
#define MAX_ARGS 64
#define MAX_PATHS 64
#define MAX_PATH_LENGTH 256
#define BUFFER_SIZE 1024

extern char **environ;
extern volatile sig_atomic_t sigint_received;
struct stat buffer;

/* Function prototypes */
void custom_signal_handler(int signal_iden);
char **custom_tokenize(char *str, char *delimiter, int count);
int _atoi(char *str);
int _strcmp(char *s1, char *s2);
int _strlen(const char *str);
char *_strcat(char *destination, char *source);
char *custom_getenv(const char *var_name);
void res_handle_exit(char **res_tokens, char *res_line);
char *rem_newline_char(char *str);
int builtin(char **tokens, char *ln);
int count_chars(char *input, char *delimiters);
int count_words(char *input);
char *string_toupper(char *s);
void *_realloc(void *pointer, unsigned int prev_size, unsigned int new_size);
void _puts(char *s);
int _putchar(char i);
int _strncmp(const char *str1, const char *str2, size_t limit);
char *check_path(char *cmd);
char *my_getline(void);
void prt_environ(void);
char *concatenate_path(char *dir_path, char *file_name);
char *lookup_path(char *command_name);
int execute_cmd(char *command_name, char **arguments);
void execute_exit(char **tokens, char *ln);
void execute_cd(char **tokens);
void execute_env(void);
void execute_echo(char **tokens);
void execute_setenv(char **tokens);
void execute_unsetenv(char **tokens);
void free_tokens(char **tokens);
char *_strdup(char *s);
char *my_strtok(char *str, const char *delimiter);
unsigned int check_char(char character, const char *str);

#endif
