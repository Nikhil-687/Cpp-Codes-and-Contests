// 1 + 2 + 6	is	+ 1 2 6
// 6 + (2 * 9)	is	+ 6 (* 2 9)
// (10 * 2) / (4 + 2)	is	/ (* 10 2) (+ 4 2)


#include <stdio.h>
#include <stdlib.h> 
#include "mpc.h"

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
    /* Create Some Parsers */
    mpc_parser_t* Number   = mpc_new("number");
    mpc_parser_t* Operator = mpc_new("operator");
    mpc_parser_t* Expr     = mpc_new("expr");
    mpc_parser_t* Lispy    = mpc_new("lispy");

     /* Define them with the following Language */
    mpca_lang(MPCA_LANG_DEFAULT,
      "                                                     \
        number   : /-?[0-9]+/ ;                             \
        operator : '+' | '-' | '*' | '/' ;                  \
        expr     : <number> | '(' <operator> <expr>+ ')' ;  \
        lispy    : /^/ <operator> <expr>+ /$/ ;             \
      ",
      Number, Operator, Expr, Lispy);

    printf("Lisp Version: 1.1.1\n");
    printf("use ctrl+C to exit.\n\n");

    while(1){
      printf("lispy: User>");
      // printf("\b");
      char* input = readline("");
      add_history(input);
      // // fgets(input, 2045, stdin);
      // // if(input[0] == 'Q' || input[0] == 'q')break;
      // printf("%s%s%s","Hello, ", input, "\n");
      // free(input);

      mpc_result_t r;
      if (mpc_parse("<stdin>", input, Lispy, &r)) {
        /* On Success Print the AST */
        mpc_ast_print(r.output);
        mpc_ast_delete(r.output);
      } else {
        /* Otherwise Print the Error */
        mpc_err_print(r.error);
        mpc_err_delete(r.error);
      }

      free(input);
    }

     /* Undefine and delete our parsers */
    mpc_cleanup(4, Number, Operator, Expr, Lispy);
  
  return 0;
}