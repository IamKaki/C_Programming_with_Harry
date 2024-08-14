#include <stdio.h>

int fib(int);

int main(){
	int n;
	printf("Enter the postion you would like to find in the fibanocci series.\n");

	scanf("%d", &n);

	printf("The %dth position in the series is %d\n", n, fib(n));

	return 0;
}

int fib(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	
	//F(n)=F(n−1)+F(n−2)	
	
	return fib(n-1) + fib(n-2);
}

