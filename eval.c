#include "eval.h"

int eval(char *expression){

	int position;
	char *str, *part1, *part2;
	str = expression;
	//str = leftTrim(rightTrim(expression));

	position = instrrev(str, '-', 4);

	if(position){

		*(str+position) = '\0';
		part1 = str;
		part2 = str + (position + 1);

		return eval(part1) - eval(part2);

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

int instr(char *str, operator search, int start){

	char *buffer = str;
	int i=start;
	int fl = 0;
	buffer = buffer + i;
	while(*buffer != '\0' ){

		if(*buffer == operator){
			fl = 1;
			break;
		}

		i++;
		buffer++;
	}

	return (((fl)?i:0));
}

int instrrev(char *str, char operator, int limit){

	int p, n;
	p = n = 0;

	do{

		p = instr(str, operator, p+1);
		p *= (p <= limit);
		if(p>0)
			n=p;

	}while(p);

	return n;

}

