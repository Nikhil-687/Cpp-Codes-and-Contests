#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
// #include<editline/history.h>

// static char* input;

// #define _WIN32

#ifdef _WIN32 || _WIN64

#error "windows machine"
#include <string.h>

static char buffer[2048];

/* Fake readline function */
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

void add_history(char* unused) {}

#else
#include<editline/readline.h>
#include<histedit.h>
#endif
