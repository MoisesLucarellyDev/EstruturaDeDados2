#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if(n<=1){
		return 1; 
	}else{
		return fib(n-1) + fib(n-2);
	}

}

int main(int argsv, char *argsc[1]){

	int r = fib(atoi(argsc[1]));
	printf("%d\n", r);			
	return 0;

}
