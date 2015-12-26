#include "eval.h"

int main(){

	int result;
	char sample[] = "10-3-4";
	result = eval(sample);
	printf("result %d", result);

	return 0;
}