#include <stdlib.h>
#include "eval.h"

int eval(char *expression){

	int position;
	char *str, *part1, *part2;
	str = expression;
	//str = leftTrim(rightTrim(expression));

	position = instr(str, '+');


	if(position){

		*(str+position) = '\0';
		part1 = str;
		part2 = str + (position + 1);

		return eval(part1) + eval(part2);

	}else{

		return atoi(str); 
	}
	

}


char *leftTrim(char *str){

	while(*str == ' ')
		str++;
	return str;
}

char *rightTrim(char *str){

	char *buf = str;
	while(*buf != '\0')
		buf++;

	buf--;
	while(*(buf) == ' '){
		*(buf) = '\0';
		buf--;
	}
	return str;
}

int instr(char *str, char operator){

	char *buffer = str;
	int i=0;
	int fl = 0;

	while(*buffer != '\0' ){

		if(*buffer == operator){
			fl = 1;
			break;
		}

		i++;
		buffer++;
	}

	if(fl)
		return i;
	else
		return 0;
}

