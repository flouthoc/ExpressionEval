#include <stdio.h>
#include <stdlib.h>

enum op{-,+,/,*};
typedef enum op operator;

int eval(char *expression);
char *leftTrim(char *str);
char *rightTrim(char *str);
//char *left(char *str, int position); //split string from left to pos -1
//char *right(char *str, int position); //split string from pos+1 to right
int instr(char *str, operator search, int start); // calculate the position of operator 
int instrrev(char *str, operator seach, int limit); // calculate the position of operator from reverse side
