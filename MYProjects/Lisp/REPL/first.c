#include<stdio.h>
#include<stdlib.h>
// #include<editline/history.h>

// static char* input;

// #define _WIN32

#ifdef _WIN32

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


int main(){
    printf("Lisp Version: 1.1.1\n");
    printf("use ctrl+C to exit.\n\n");

    while(1){
        puts("lispy: User>");
        printf("\b");
        char* input = readline("");
        add_history(input);
        // fgets(input, 2045, stdin);
        // if(input[0] == 'Q' || input[0] == 'q')break;
        printf("%s%s%s","Hello, ", input, "\n");
        free(input);
    }
}