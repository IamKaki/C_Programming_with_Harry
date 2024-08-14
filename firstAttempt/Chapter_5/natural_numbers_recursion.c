#include <stdio.h>

int sum(int n);

int main(){
	printf("The sum of the first 10 natural numbers is %d\n", sum(10));

	return 0;
}


int sum(int n){
	if (n == 1){
		return 1;
	}
	
	return sum (n-1) + n;
}
